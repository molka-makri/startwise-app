#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QVideoSink>
#include <QMediaDevices>
#include <QtConcurrent>
#include <QPainter>
#include <QPixmap>
#include <opencv2/opencv.hpp>
#include <opencv2/dnn.hpp>
#include "mainwindow.h"

#include <QPixmap>
QString Login::userRole = "";
Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
    , camera(nullptr)
    , captureSession(new QMediaCaptureSession(this))
    , videoSink(new QVideoSink(this))
    , m_recognitionState(Idle)
{
    ui->setupUi(this);
    isReadyToEnter = false;
    isCameraActive = false;
    isRecognized = false;

    ui->mdp->setEchoMode(QLineEdit::Password);

    // First initialize camera
    //initializeCamera();

    // Then setup other components
    if (camera) {
        captureSession->setCamera(camera);
        captureSession->setVideoSink(videoSink);

        connect(videoSink, &QVideoSink::videoFrameChanged,
                this, &Login::handleCameraFrame);
    }

    connect(ui->sign_in, &QPushButton::clicked, this, &Login::handleLogin);
    connect(ui->btnFacialRecognition, &QPushButton::clicked,
            this, &Login::on_btnFacialRecognition_clicked);


    // Connect camera state changes
    if (camera) {
        connect(camera, &QCamera::activeChanged, this, [this](bool active) {
            qDebug() << "Camera active state changed to:" << active;
            if (!active && isCameraActive) {
                qDebug() << "Camera stopped unexpectedly!";
            }
        });

        connect(camera, &QCamera::errorOccurred, this, [this](QCamera::Error error, const QString &errorString) {
            qDebug() << "Camera error:" << error << "-" << errorString;
            ui->labelMessage->setText("Camera error: " + errorString);
        });
    }
}

Login::~Login()
{
    if (camera && camera->isActive()) {
        camera->stop();
    }

    delete camera;  // Libère la caméra
    delete captureSession;
    delete videoSink;
    delete ui;

    // Nettoyer les ressources OpenCV si nécessaire
    cv::destroyAllWindows();
}
void Login::initializeCamera() {
    const auto cameras = QMediaDevices::videoInputs();
    if (cameras.isEmpty()) {
        qDebug() << "No camera detected!";
        return;
    }

    camera = new QCamera(cameras.first(), this);
    camera->setFocusMode(QCamera::FocusModeAuto);

    // Définir une résolution plus basse
    QList<QCameraFormat> formats = cameras.first().videoFormats();
    QCameraFormat selectedFormat;

    // Trouver un format avec une résolution basse (ex: 640x480)
    for (const auto &format : formats) {
        if (format.resolution().width() == 320 &&
            format.resolution().height() == 240) {
            selectedFormat = format;
            break;
        }
    }

    if (!selectedFormat.isNull()) {  // Changé de isValid() à isNull()
        camera->setCameraFormat(selectedFormat);
        qDebug() << "Using lower resolution:" << selectedFormat.resolution();
    }

    // Reste du code inchangé...
    captureSession->setCamera(camera);
    captureSession->setVideoSink(videoSink);

    connect(videoSink, &QVideoSink::videoFrameChanged, this, &Login::handleCameraFrame);
    connect(camera, &QCamera::errorOccurred, this, [this](auto error, auto msg) {
        qDebug() << "Camera error:" << error << msg;
    });

    QTimer::singleShot(100, this, [this]() {
        if (camera) {
            camera->start();
            isCameraActive = true;
        }
    });
}
void Login::handleVideoFrame(const QVideoFrame &frame)
{
    if (!frame.isValid() || !isCameraActive)
        return;

    QVideoFrame cloneFrame = frame;  // Copie pour éviter des erreurs de synchronisation
    if (!cloneFrame.map(QVideoFrame::ReadOnly)) {
        qDebug() << "Impossible de mapper le frame.";
        return;
    }

    QImage image = cloneFrame.toImage();
    cloneFrame.unmap();

    if (image.isNull()) {
        qDebug() << "Frame convertie en image invalide.";
        return;
    }

    // Affichage dans labelCameraPreview
    ui->labelCameraPreview->setPixmap(QPixmap::fromImage(image).scaled(
        ui->labelCameraPreview->size(),
        Qt::KeepAspectRatio,
        Qt::SmoothTransformation
        ));

    // Si tu veux lancer la détection seulement toutes les X frames :
    static int frameCounter = 0;
    if (++frameCounter % 10 == 0 && !isRecognized) {
        processVideoFrame(image);  // Détection émotion + reconnaissance
    }
}



void Login::processVideoFrame(const QImage &image)
{
    cv::Mat capturedMat(image.height(), image.width(), CV_8UC4,
                        const_cast<uchar*>(image.bits()),
                        image.bytesPerLine());
    cv::Mat grayMat;
    cv::cvtColor(capturedMat, grayMat, cv::COLOR_BGR2GRAY);

    // Load face cascade
    static cv::CascadeClassifier faceCascade;
    static bool cascadeLoaded = false;
    if (!cascadeLoaded) {
        if (faceCascade.load("C:\\resources\\haarcascade_frontalface_default.xml")) {
            cascadeLoaded = true;
        } else {
            qDebug() << "Failed to load face cascade";
            return;
        }
    }

    // Detect faces
    std::vector<cv::Rect> faces;
    faceCascade.detectMultiScale(grayMat, faces, 1.1, 4);

    if (faces.empty()) {
        ui->labelMessage->setText("Aucun visage détecté.");
        return;
    }

    // Detect emotion
    QString emotion = detectEmotion(grayMat(faces[0]));
    if (emotion != "happy") {
        ui->labelMessage->setText(emotion == "angry"
                                      ? "Vous semblez en colère. Contactez notre psychiatre."
                                      : "Veuillez sourire pour accéder au système.");
        return;
    }

    // Perform facial recognition
    if (performFacialRecognition(image)) {
        ui->labelMessage->setText("Reconnaissance réussie : Bienvenue " + userName);
        isRecognized = true;
        QTimer::singleShot(1000, this, &Login::accept);
    }
    if (emotion == "happy") {
        ui->emojie->setText("Souriez détecté !");
    } else if (emotion == "angry") {
        ui->emojie->setText("Vous semblez fâché !");
    } else {
        ui->emojie->setText("Expression neutre détectée.");
    }
}

void Login::handleLogin() {
    QString email = ui->email->text();
    QString password = ui->mdp->text();

    if (validateCredentials(email, password)) {
        QMessageBox::information(this, "Connexion réussie", "Vous êtes connecté avec succès !");
        accept();  // Ferme la boîte de dialogue et retourne QDialog::Accepted
    } else {
        QMessageBox::warning(this, "Échec de connexion", "Utilisateur ou mot de passe incorrect.");
    }
}

bool Login::validateCredentials(const QString &username, const QString &password) {
    QSqlQuery query;
    query.prepare("SELECT ROLE, NOM, EMAIL, IMAGE FROM EMPLOYES WHERE EMAIL = :username AND MOTDEPASS = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (!query.exec()) {
        qDebug() << "Database query error:" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        userRole = query.value("ROLE").toString(); // Stocke le rôle de l'utilisateur
        userName = query.value("NOM").toString();        // Stocke le nom complet
        userEmail = query.value("EMAIL").toString();     // Stocke l'email
        QByteArray photoData = query.value("IMAGE").toByteArray();
        if (!photoData.isEmpty()) {
            userPhoto = QPixmap();
            if (!userPhoto.loadFromData(photoData)) {
                qDebug() << "Failed to load photo from database.";
            }
        } else {
            qDebug() << "Photo is empty in the database.";
        }
        return true;
    }

    return false;
}

QString Login::getUserRole() const {
    return userRole;
}
QString Login::getUserName() const {
    return userName;
}

QString Login::getUserEmail() const {
    return userEmail;
}
void Login::on_btnFacialRecognition_clicked()
{
    initializeCamera();
    if (!camera) {
        QMessageBox::warning(this, "Erreur", "Aucune caméra disponible !");
        return;
    }

    if (isCameraActive) {
        // Arrêter la caméra
        camera->stop();
        isCameraActive = false;
        resetRecognition();
        ui->btnFacialRecognition->setText("Démarrer la reconnaissance");
    } else {
        // Démarrer la caméra
        camera->start();
        isCameraActive = true;
        setRecognitionState(Idle);
        ui->btnFacialRecognition->setText("Arrêter la reconnaissance");
    }
}



void Login::processCapturedImage(int id, const QImage &image)
{
    Q_UNUSED(id);

    if (image.isNull()) {
        ui->labelMessage->setText("Erreur : Image capturée vide.");
        return;
    }

    // Arrêter la caméra après la capture
    if (camera->isActive()) {
        camera->stop();
        isCameraActive = false;
    }

    // Convertir l'image pour la détection d'émotion
    cv::Mat capturedMat = cv::Mat(image.height(), image.width(), CV_8UC4, const_cast<uchar*>(image.bits()), image.bytesPerLine()).clone();
    cv::cvtColor(capturedMat, capturedMat, cv::COLOR_BGR2GRAY);

    // Détecter les visages
    cv::CascadeClassifier faceCascade;
    faceCascade.load("C:\\resources\\haarcascade_frontalface_default.xml");
    std::vector<cv::Rect> faces;
    faceCascade.detectMultiScale(capturedMat, faces, 1.1, 4);

    if (faces.empty()) {
        ui->labelMessage->setText("Aucun visage détecté.");
        ui->btnFacialRecognition->setText("Essayer à nouveau");
        return;
    }

    // Détecter l'émotion
    QString emotion = detectEmotion(capturedMat(faces[0]));

    if (emotion != "happy") {
        QString message = (emotion == "angry")
        ? "Vous semblez en colère. Contactez notre psychiatre."
        : "Veuillez sourire pour accéder au système.";

        ui->labelMessage->setText(message);
        ui->btnFacialRecognition->setText("Essayer à nouveau");
        isReadyToEnter = false;
        return;
    }

    // Si l'utilisateur sourit, procéder à la reconnaissance
    if (performFacialRecognition(image)) {
        ui->labelMessage->setText("Reconnaissance réussie : Bienvenue " + userName);
        ui->btnFacialRecognition->setText("Entrer");
        isReadyToEnter = true;
    } else {
        ui->labelMessage->setText("Reconnaissance échouée : Aucun employé reconnu.");
        ui->btnFacialRecognition->setText("Essayer à nouveau");
        isReadyToEnter = false;
    }
}
bool Login::validateFacialRecognition(const cv::Mat &detectedFace)
{
    QSqlQuery query("SELECT NOM, PRENOM, IMAGE, ROLE, EMAIL FROM EMPLOYES");
    double bestMatch = std::numeric_limits<double>::max();
    QString bestName, bestSurname, bestRole, bestEmail;

    QByteArray bestPhotoData;
    int employeCount = 0;

    while (query.next()) {
        employeCount++;
        QByteArray photoData = query.value("IMAGE").toByteArray();
        QString nom = query.value("NOM").toString();
        QString prenom = query.value("PRENOM").toString();

        qDebug() << "Comparaison avec employé:" << nom << prenom;

        QImage dbImage;
        dbImage.loadFromData(photoData, "JPG");

        if (dbImage.isNull()) {
            qDebug() << "Image NULL pour:" << nom << prenom;
            continue;
        }

        cv::Mat dbMat = cv::Mat(dbImage.height(), dbImage.width(), CV_8UC3, const_cast<uchar*>(dbImage.bits()), dbImage.bytesPerLine()).clone();
        cv::cvtColor(dbMat, dbMat, cv::COLOR_BGR2GRAY);

        std::vector<cv::Rect> facesDB;
        cv::CascadeClassifier faceCascade;
        faceCascade.load("C:\\resources\\haarcascade_frontalface_default.xml");
        faceCascade.detectMultiScale(dbMat, facesDB, 1.1, 4);

        if (facesDB.empty()) {
            qDebug() << "Aucun visage détecté pour:" << nom << prenom;
            continue;
        }

        cv::Mat dbFace = dbMat(facesDB[0]);
        cv::resize(dbFace, dbFace, cv::Size(200, 200));

        double diff = cv::norm(detectedFace, dbFace);
        qDebug() << "Distance avec" << nom << prenom << ":" << diff;

        if (diff < bestMatch) {
            bestMatch = diff;
            bestName = query.value("NOM").toString();
            bestSurname = query.value("PRENOM").toString();
            bestRole = query.value("ROLE").toString();
            bestEmail = query.value("EMAIL").toString();
            bestPhotoData = photoData;
        }
    }

    qDebug() << "Nombre total d'employés:" << employeCount;
    qDebug() << "Meilleur match:" << bestName << bestSurname << "avec distance:" << bestMatch;

    double recognitionThreshold = 4000.0; // Ajustez ce seuil selon vos besoins
    if (bestMatch < recognitionThreshold) {
        userName = bestName + " " + bestSurname;
        userRole = bestRole;
        userEmail = bestEmail;

        if (!bestPhotoData.isEmpty()) {
            userPhoto = QPixmap();
            if (!userPhoto.loadFromData(bestPhotoData)) {
                qDebug() << "Failed to load photo from database.";
            }
        } else {
            qDebug() << "Photo is empty in the database.";
        }

        return true;
    }

    return false;
}
bool Login::performFacialRecognition(const QImage &image)
{
    cv::Mat capturedMat(image.height(), image.width(), CV_8UC4,
                        const_cast<uchar*>(image.bits()),
                        image.bytesPerLine());
    cv::Mat grayMat;
    cv::cvtColor(capturedMat, grayMat, cv::COLOR_BGR2GRAY);

    // Détection de visage
    cv::CascadeClassifier faceCascade;
    if (!faceCascade.load("C:/resources/haarcascade_frontalface_default.xml")) {
        return false;
    }

    std::vector<cv::Rect> faces;
    faceCascade.detectMultiScale(grayMat, faces, 1.1, 4);

    if (faces.empty()) {
        return false;
    }

    cv::Mat face = grayMat(faces[0]);
    cv::resize(face, face, cv::Size(200, 200));

    // Comparaison avec la base de données
    QSqlQuery query("SELECT NOM, PRENOM, IMAGE, ROLE FROM EMPLOYES");
    double bestMatch = DBL_MAX;
    QString bestName, bestRole;

    while (query.next()) {
        QByteArray photoData = query.value("IMAGE").toByteArray();
        QImage dbImage = QImage::fromData(photoData);
        if (dbImage.isNull()) continue;

        cv::Mat dbMat(dbImage.height(), dbImage.width(), CV_8UC3,
                      const_cast<uchar*>(dbImage.bits()),
                      dbImage.bytesPerLine());
        cv::Mat dbGray;
        cv::cvtColor(dbMat, dbGray, cv::COLOR_BGR2GRAY);

        std::vector<cv::Rect> dbFaces;
        faceCascade.detectMultiScale(dbGray, dbFaces, 1.1, 4);
        if (dbFaces.empty()) continue;

        cv::Mat dbFace = dbGray(dbFaces[0]);
        cv::resize(dbFace, dbFace, cv::Size(200, 200));

        double diff = cv::norm(face, dbFace, cv::NORM_L2);
        if (diff < bestMatch) {
            bestMatch = diff;
            bestName = query.value("PRENOM").toString() + " " + query.value("NOM").toString();
            bestRole = query.value("ROLE").toString();
        }
    }

    if (bestMatch < 4000) { // Seuil à ajuster
        userName = bestName;
        userRole = bestRole;
        return true;
    }

    return false;
}
QString Login::detectEmotion(const cv::Mat &face)
{
    // Détection simplifiée de sourire
    cv::CascadeClassifier smileCascade;
    if (!smileCascade.load("C:\\resources\\haarcascade_smile.xml")) {
        return "neutral";
    }

    // Région de la bouche (approximative)
    cv::Mat mouthRegion = face(cv::Rect(face.cols/4, face.rows*2/3, face.cols/2, face.rows/3));

    std::vector<cv::Rect> smiles;
    smileCascade.detectMultiScale(mouthRegion, smiles, 1.8, 20);

    if (!smiles.empty()) {
        return "happy";
    }
    return "neutral";
}

double Login::calculateSmileScore(const cv::Mat &faceImage)
{
    // Implémentation simplifiée - détection de la courbure des lèvres
    // Dans une vraie application, utilisez un détecteur de points clés faciaux

    cv::Mat mouthRegion = faceImage(cv::Rect(
        faceImage.cols * 0.2,
        faceImage.rows * 0.6,
        faceImage.cols * 0.6,
        faceImage.rows * 0.2
        ));

    cv::threshold(mouthRegion, mouthRegion, 128, 255, cv::THRESH_BINARY);
    double whitePixels = cv::countNonZero(mouthRegion);
    double totalPixels = mouthRegion.rows * mouthRegion.cols;

    return whitePixels / totalPixels;  // Plus de pixels blancs = sourire plus prononcé
}

double Login::calculateEyebrowScore(const cv::Mat &faceImage)
{
    // Implémentation simplifiée - position relative des sourcils
    // Dans une vraie application, utilisez un détecteur de points clés

    cv::Mat leftEyebrow = faceImage(cv::Rect(
        faceImage.cols * 0.1,
        faceImage.rows * 0.2,
        faceImage.cols * 0.3,
        faceImage.rows * 0.1
        ));

    cv::Mat rightEyebrow = faceImage(cv::Rect(
        faceImage.cols * 0.6,
        faceImage.rows * 0.2,
        faceImage.cols * 0.3,
        faceImage.rows * 0.1
        ));

    double leftIntensity = cv::mean(leftEyebrow)[0];
    double rightIntensity = cv::mean(rightEyebrow)[0];

    return (leftIntensity + rightIntensity) / 255.0 - 0.5;  // Valeur normalisée
}
void Login::handleCameraFrame(const QVideoFrame &frame)
{
    if (!frame.isValid() || m_recognitionState == Completed)
        return;

    QVideoFrame cloneFrame = frame;
    if (!cloneFrame.map(QVideoFrame::ReadOnly)) {
        qDebug() << "Failed to map video frame";
        return;
    }

    QImage image = cloneFrame.toImage();
    cloneFrame.unmap();

    if (image.isNull()) {
        qDebug() << "Invalid image from video frame";
        return;
    }

    // Ne plus afficher l'image brute ici
    // Le traitement se chargera de l'affichage avec les annotations

    // Traitement toutes les 10 frames
    static int frameCounter = 0;
    if (++frameCounter % 10 == 0) {
        switch (m_recognitionState) {
        case Idle:
        case DetectingSmile:
            if (detectSmile(image)) {
                m_lastCapturedImage = image;
                setRecognitionState(RecognizingFace);
                QTimer::singleShot(0, this, &Login::processFacialRecognition);
            }
            break;
        case RecognizingFace:
        case Completed:
            // Ne rien faire, en attente
            break;
        }
    }
}
void Login::setRecognitionState(RecognitionState state)
{
    m_recognitionState = state;

    switch (state) {
    case Idle:
        ui->labelMessage->setText("Veuillez sourire pour démarrer la reconnaissance");
        break;
    case DetectingSmile:
        ui->labelMessage->setText("Détection du sourire en cours...");
        break;
    case RecognizingFace:
        ui->labelMessage->setText("Reconnaissance faciale en cours...");
        break;
    case Completed:
        ui->labelMessage->setText("Reconnaissance terminée");
        break;
    }
}
bool Login::detectSmile(const QImage &image) {
    try {
        // Conversion directe vers OpenCV (comme dans object detection)
        cv::Mat frame(image.height(), image.width(), CV_8UC3);
        QImage converted = image.convertToFormat(QImage::Format_RGB888);
        memcpy(frame.data, converted.bits(), converted.sizeInBytes());

        // Conversion en niveaux de gris
        cv::Mat gray;
        cv::cvtColor(frame, gray, cv::COLOR_RGB2GRAY);

        // Chargement du classificateur de visage
        static cv::CascadeClassifier faceCascade;
        static bool faceCascadeLoaded = false;
        if (!faceCascadeLoaded) {
            if (faceCascade.load("C:\\resources\\haarcascade_frontalface_default.xml")) {
                faceCascadeLoaded = true;
            } else {
                qWarning() << "Échec du chargement du classificateur de visage";
                return false;
            }
        }

        // Détection des visages
        std::vector<cv::Rect> faces;
        faceCascade.detectMultiScale(gray, faces, 1.1, 4);

        if (faces.empty()) {
            ui->emojie->setText("Aucun visage détecté");
            return false;
        }

        // Chargement du classificateur de sourire
        static cv::CascadeClassifier smileCascade;
        static bool smileCascadeLoaded = false;
        if (!smileCascadeLoaded) {
            if (smileCascade.load("C:\\resources\\haarcascade_smile.xml")) {
                smileCascadeLoaded = true;
            } else {
                qWarning() << "Échec du chargement du classificateur de sourire";
                return false;
            }
        }

        // Région d'intérêt pour la bouche
        cv::Rect face = faces[0];
        cv::Rect mouthROI(
            face.x + face.width * 0.25,
            face.y + face.height * 0.55,
            face.width * 0.5,
            face.height * 0.35
            );

        // Vérification des limites
        if (mouthROI.x >= 0 && mouthROI.y >= 0 &&
            mouthROI.x + mouthROI.width <= gray.cols &&
            mouthROI.y + mouthROI.height <= gray.rows) {

            // Détection des sourires
            std::vector<cv::Rect> smiles;
            smileCascade.detectMultiScale(gray(mouthROI), smiles, 1.5, 10);

            // DESSIN DES RECTANGLES (méthode OpenCV comme dans object detection)
            cv::rectangle(frame, face, cv::Scalar(0, 255, 0), 2);  // Visage en vert
            cv::rectangle(frame, mouthROI, cv::Scalar(0, 0, 255), 2);  // Bouche en rouge

            // Conversion vers QImage pour l'affichage
            QImage annotatedImage(frame.data, frame.cols, frame.rows,
                                  frame.step, QImage::Format_RGB888);
            annotatedImage = annotatedImage.copy(); // Copie nécessaire

            // Mise à jour de l'UI dans le thread principal
            QMetaObject::invokeMethod(ui->labelCameraPreview, [this, annotatedImage]() {
                ui->labelCameraPreview->setPixmap(QPixmap::fromImage(annotatedImage).scaled(
                    ui->labelCameraPreview->size(),
                    Qt::KeepAspectRatio,
                    Qt::SmoothTransformation));
            });

            if (!smiles.empty()) {
                ui->emojie->setText("Sourire détecté !");
                return true;
            } else {
                ui->emojie->setText("Veuillez sourire");
                return false;
            }
        } else {
            ui->emojie->setText("Position incorrecte");
            return false;
        }
    } catch (const cv::Exception &e) {
        qWarning() << "Erreur OpenCV:" << e.what();
        return false;
    } catch (...) {
        qWarning() << "Erreur inconnue dans detectSmile";
        return false;
    }
}
void Login::processFacialRecognition()
{
    if (m_lastCapturedImage.isNull()) {
        handleRecognitionResult(false);
        return;
    }

    QtConcurrent::run([this]() {
        bool success = false;
        QString userName, userRole;
        QByteArray bestPhotoData;

        QString connectionName = "facial_recognition_" + QString::number(QDateTime::currentMSecsSinceEpoch());
        {
            QSqlDatabase db = QSqlDatabase::addDatabase("QODBC", connectionName);
            db.setDatabaseName("Source_Projet2A");
            db.setUserName("Molka");
            db.setPassword("esprit17");

            if (!db.open()) {
                qDebug() << "DB open error:" << db.lastError();
                qDebug() << "Available tables:" << db.tables(); // Debug
                QMetaObject::invokeMethod(this, [this]() {
                    handleRecognitionResult(false);
                });
                return;
            }

            try {
                cv::Mat frame(m_lastCapturedImage.height(), m_lastCapturedImage.width(), CV_8UC3);
                QImage converted = m_lastCapturedImage.convertToFormat(QImage::Format_RGB888);
                memcpy(frame.data, converted.bits(), converted.sizeInBytes());

                // Détection du visage
                cv::CascadeClassifier faceCascade;
                if (!faceCascade.load("C:\\resources\\haarcascade_frontalface_default.xml")) {
                    throw std::runtime_error("Failed to load face cascade");
                }

                cv::Mat gray;
                cv::cvtColor(frame, gray, cv::COLOR_RGB2GRAY);

                std::vector<cv::Rect> faces;
                faceCascade.detectMultiScale(gray, faces, 1.1, 4);

                if (faces.empty()) {
                    throw std::runtime_error("No face detected");
                }

                // Extraire et redimensionner le visage
                cv::Mat face = gray(faces[0]);
                cv::resize(face, face, cv::Size(200, 200));

                // Modifiez la requête pour utiliser le bon nom de table
                QSqlQuery query(db);
                if (!query.exec("SELECT NOM, PRENOM, IMAGE, ROLE FROM EMPLOYES")) { // Notez le nom en minuscules
                    throw std::runtime_error("Query failed: " + query.lastError().text().toStdString());
                }

                double bestMatch = DBL_MAX;

                while (query.next()) {
                    QByteArray photoData = query.value("IMAGE").toByteArray();
                    if (photoData.isEmpty()) continue;

                    QImage dbImage = QImage::fromData(photoData);
                    if (dbImage.isNull()) continue;

                    cv::Mat dbMat(dbImage.height(), dbImage.width(), CV_8UC3);
                    QImage dbConverted = dbImage.convertToFormat(QImage::Format_RGB888);
                    memcpy(dbMat.data, dbConverted.bits(), dbConverted.sizeInBytes());

                    cv::Mat dbGray;
                    cv::cvtColor(dbMat, dbGray, cv::COLOR_RGB2GRAY);

                    std::vector<cv::Rect> dbFaces;
                    faceCascade.detectMultiScale(dbGray, dbFaces, 1.1, 4);
                    if (dbFaces.empty()) continue;

                    cv::Mat dbFace = dbGray(dbFaces[0]);
                    cv::resize(dbFace, dbFace, cv::Size(200, 200));

                    double diff = cv::norm(face, dbFace, cv::NORM_L2);
                    if (diff < bestMatch) {
                        bestMatch = diff;
                        userName = query.value("PRENOM").toString() + " " + query.value("NOM").toString();
                        userRole = query.value("ROLE").toString();
                        bestPhotoData = photoData;
                    }
                }

                const double RECOGNITION_THRESHOLD = 50000; // Ajustez ce seuil
                if (bestMatch < RECOGNITION_THRESHOLD) {
                    success = true;
                }

            } catch (const std::exception &e) {
                qWarning() << "Error:" << e.what();
            }

            db.close();
        }
        QSqlDatabase::removeDatabase(connectionName);

        QMetaObject::invokeMethod(this, [this, success, userName, userRole, bestPhotoData]() {
            if (success) {
                this->userName = userName;
                this->userRole = userRole;
                if (!bestPhotoData.isEmpty()) {
                    this->userPhoto.loadFromData(bestPhotoData);
                }
            }
            handleRecognitionResult(success, userName, userRole);
        });
    });
}

void Login::handleRecognitionResult(bool success, const QString &userName, const QString &userRole)
{
    if (success) {
        setRecognitionState(Completed);
        ui->labelMessage->setText(QString("Reconnaissance réussie : Bienvenue %1").arg(userName));
        QTimer::singleShot(2000, this, &Login::accept);
    } else {
        setRecognitionState(Idle);
        ui->labelMessage->setText("Reconnaissance échouée : Employé non reconnu");
        QTimer::singleShot(3000, this, [this]() {
            resetRecognition();
        });
    }
}

void Login::resetRecognition()
{
    m_recognitionState = Idle;
    m_lastCapturedImage = QImage();
    ui->labelMessage->setText("Veuillez sourire pour démarrer la reconnaissance");
    ui->emojie->clear();
}
