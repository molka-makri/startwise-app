#include "ressources.h"
#include "modifierressourcedialog.h"
#include <QMessageBox>
#include "ui_ressources.h"
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QTimer>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QFileDialog>
#include <fstream>  // <-- this is the key!
#include <QPixmap>
#include <QBuffer>
#include "QXlsx/header/xlsxdocument.h"
#include <QPdfWriter>
#include <QPainter>
#include <QLabel>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSlice>
#include <opencv2/opencv.hpp>
#include <opencv2/dnn.hpp>
#include <opencv2/core/ocl.hpp>  // Pour OpenCL
#include <opencv2/imgproc.hpp>
#include <opencv2/features2d.hpp>
#include <opencv2/highgui.hpp>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMimeData>
#include <QWidget>
#include <QMainWindow>
#include <QMenu>
#include <cataloguedialog.h>
#include <QtConcurrent/QtConcurrent>  // Add this at the top of your header file

//Ce constructeur initialise l'interface graphique et configure les éléments de l'interface utilisateur (UI).
Res::Res(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::Res),
    chartView(nullptr),
    set0(nullptr),
    set1(nullptr),
    series(nullptr),
    chart(nullptr)
{
    //Initialisation de l'interface
    ui->setupUi(this);

    try {
        m_orb = cv::ORB::create(500);  // 500 points caractéristiques
        if (m_orb.empty()) {
            qCritical() << "Échec de la création du détecteur ORB";
            QMessageBox::critical(this, "Erreur", "Impossible d'initialiser le détecteur ORB");
        } else {
            qDebug() << "Détecteur ORB initialisé avec succès";
                // Charger les templates seulement si ORB est prêt
        }
    } catch (const cv::Exception& e) {
        qCritical() << "Erreur OpenCV:" << e.what();
        QMessageBox::critical(this, "Erreur", QString("Erreur OpenCV: %1").arg(e.what()));
    }
    // Ajoutez au début de votre programme (dans le constructeur) :

    //Configuration du tableau
    QStringList headers = {"ID", "Nom", "Type", "Quantité", "Date", "Statut", "Coût", "Image", "Modifier", "Supprimer"};
    // Réduire la largeur des colonnes Modifier et Supprimer
    m_speech = new QTextToSpeech(this);
    setupSpeechSystem();
    checkAvailableEngines();
    // Activer le drag & drop
    setAcceptDrops(true);
    ui->labelImageDisplay->setAcceptDrops(true);
    ui->labelImageDisplay->setScaledContents(true);

    ui->tableViewRessources->setColumnCount(10);
    ui->tableViewRessources->setHorizontalHeaderLabels(headers);
    ui->dateEditAcquisition->setDate(QDate::currentDate());
     ui->tableViewRessources->setFixedSize(1000, 461);


    connect(ui->btnImage, &QPushButton::clicked, this, &Res::on_btnImage_clicked);
    connect(ui->btnAjouter, &QPushButton::clicked, this, &Res::onBtnAjouterClicked);
    updateTable();
    createChart();
    connect(ui->lineEditRecherche, &QLineEdit::textChanged, this, &Res::filtrerParNom);
    connect(ui->exportExel, &QPushButton::clicked, this, &Res::exporterVersExcel);
    connect(ui->btnExportPDF, &QPushButton::clicked, this, &Res::exporterPDF);
    connect(ui->btnRecherche, &QPushButton::clicked, this, &Res::onBtnRechercherClicked);
    connect(ui->btnResetRecherche, &QPushButton::clicked, this, &Res::onBtnResetRechercheClicked);
    connect(ui->lineEditID, &QLineEdit::textChanged, this, &Res::validateID);
    connect(ui->lineEditNom, &QLineEdit::textChanged, this, &Res::validateName);
    connect(ui->lineEditCout, &QLineEdit::textChanged, this, &Res::validateCout);
    connect(ui->lineEditQuantite, &QLineEdit::textChanged, this, &Res::validateQuantite);
    connect(ui->comboBoxType, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &Res::validateType);
    //connect(m_timer, &QTimer::timeout, this, &Res::processFrame);
    m_timer = new QTimer(this);
    connect(m_timer, &QTimer::timeout, this, &Res::processFrame);
    ui->pdf_generer->setAttribute(Qt::WA_OpaquePaintEvent);
    ui->pdf_generer->setAttribute(Qt::WA_NoSystemBackground);

    // Initialisez le document
    m_statsDocument.setDocumentMargin(20);
    ui->pdf_generer->setAutoFillBackground(true);
    QPalette pal = ui->pdf_generer->palette();
    pal.setColor(QPalette::Window, Qt::white);
    ui->pdf_generer->setPalette(pal);
    ui->pdf_generer->installEventFilter(this);
    genererStatistiquesTextuelles();
    connect(ui->lire, &QPushButton::clicked, this, &Res::lireStatistiques);
     connect(ui->recordphone, &QPushButton::clicked, this, &Res::on_record_phone_clicked);
     connect(ui->catalogue, &QPushButton::clicked, this, &Res::onCatalogueClicked);






    //cv::dnn::Net net = cv::dnn::readNetFromDarknet("yolo_model/yolov3.cfg", "yolo_model/yolov3.weights");


    // Lire les noms des classes
    //std::vector<std::string> class_names;
    connect(ui->btnWebcamOpen, &QPushButton::clicked,
            this, &Res::on_btnWebcamOpen_clicked);


    // Connecter le bouton upload
    connect(ui->btnUpload, &QPushButton::clicked, this, &Res::on_btnUpload_clicked);


    // Dans le constructeur de votre classe :
    ui->labelImageDisplay->setStyleSheet("QLabel { background-color : #f0f0f0; }");
    ui->labelImageDisplay->setMinimumSize(200, 200); // Taille minimale




    //connect(ui->lineEditRecherche, &QLineEdit::textChanged, this, &Res::filtrerParNom);
    QMenu *trieMenu = new QMenu(this);
    trieMenu->setStyleSheet(R"(
    QMenu {
        background-color: white;
        border: 1px solid #e0e0e0;
        border-radius: 4px;
        padding: 4px 0;
        box-shadow: 0 2px 3px rgba(0,0,0,0.05);
        min-width: 160px;
    }

    QMenu::item {
        padding: 4px 16px;
        margin: 0;
        font-size: 13px;
        color: #333;
        min-height: 24px;
    }

    QMenu::item:selected {
        background-color: #f5f5f5;
        color: #000;
    }

    QMenu::separator {
        height: 1px;
        background: #eee;
        margin: 3px 8px;
    }

    QMenu::icon {
        padding-left: 0;
        left: 4px;
    }
)");

    // Ajouter les actions de tri
    trieMenu->addAction("Trier par Nom (A-Z)");
    trieMenu->addSeparator();
    trieMenu->addAction("Trier par Nom (Z-A)");
    trieMenu->addSeparator();
    trieMenu->addAction("Trier par Date (Récent)");
    trieMenu->addSeparator();
    trieMenu->addAction("Trier par Date (Ancien)");
    trieMenu->addSeparator();
    trieMenu->addAction("Trier par Quantité (Croissant)");
    trieMenu->addSeparator();
    trieMenu->addAction("Trier par Quantité (Décroissant)");
    trieMenu->addSeparator();
    ui->btntrie->setMenu(trieMenu);
    connect(trieMenu, &QMenu::triggered, this, &Res::onTrieActionTriggered);

    // Associer le menu au bouton
    ui->btntrie->setMenu(trieMenu);
}
Res::~Res() {
    // Libération des ressources (si nécessaire)
}
//Constructeur surchargé: utilisé pour créer un objet Res avec des valeurs du base de données
Res::Res(int id, QString nom, QByteArray image, QString type, int quantite, QDate acquisitionDate, QString status, double cout)
{
    this->id = id;
    this->nom = nom;
    this->image = image;
    this->type = type;
    this->quantite = quantite;
    this->acquisitionDate = acquisitionDate;
    this->status = status;
    this->cout = cout;
}

bool Res::ajouter()
{
    //Crée un objet QSqlQuery qui sera utilisé pour exécuter une requête SQL.
    QSqlQuery query;
    // Prépare une requête SQL pour l'insertion d'une nouvelle ressource dans la table ressources
    query.prepare("INSERT INTO ressources (ID, NOM, IMAGE, TYPE, QUANTITE, ACQUISITIONDATE, STATUS, COUT) "
                  "VALUES (:id, :nom, :image, :type, :quantite, :acquisitionDate, :status, :cout)");
    // Lie les valeurs des paramètres de la requête aux variables locales de l'objet res
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":image", image);
    query.bindValue(":type", type);
    query.bindValue(":quantite", quantite);
    query.bindValue(":acquisitionDate", acquisitionDate);
    query.bindValue(":status", status);
    query.bindValue(":cout", cout);
    createChart();
    // Exécute la requête préparée. Si l'insertion dans la base de données réussit, cela retournera true, sinon false
    return query.exec();
}
QSqlQueryModel* Res::afficher()
{
    //Crée un modèle de requête SQL a pour role d'afficher les résultats de la requête dans tableview ou widget
    QSqlQueryModel* model = new QSqlQueryModel();
    //Exécute une requête SQL pour récupérer les données de la table ressources
    model->setQuery("SELECT ID, NOM, TYPE, QUANTITE, ACQUISITIONDATE, STATUS, COUT FROM ressources");
    // Retourne le modèle qui contient les résultats de la requête
    return model;
}

// Fonction pour supprimer une ressource
bool Res::supprimer(int id)
{
    QSqlQuery query;
    //Prépare une requête SQL de suppression
    query.prepare("DELETE FROM ressources WHERE ID = :id");
    query.bindValue(":id", id);
    createChart();
    return query.exec();
}

// Fonction pour modifier une ressource
bool Res::modifier(int id)
{
    QSqlQuery query;
    query.prepare("UPDATE ressources SET NOM = :nom, IMAGE = :image, TYPE = :type, QUANTITE = :quantite, "
                  "ACQUISITIONDATE = :acquisitionDate, STATUS = :status, COUT = :cout WHERE ID = :id");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":image", image);
    query.bindValue(":type", type);
    query.bindValue(":quantite", quantite);
    query.bindValue(":acquisitionDate", acquisitionDate);
    query.bindValue(":status", status);
    query.bindValue(":cout", cout);
    createChart();
    return query.exec();
}
void Res::onTrieActionTriggered(QAction *action)
{
    QString text = action->text();
    QString orderByClause;

    if (text == "Trier par Nom (A-Z)") {
        orderByClause = "NOM ASC";
    }
    else if (text == "Trier par Nom (Z-A)") {
        orderByClause = "NOM DESC";
    }
    else if (text == "Trier par Date (Récent)") {
        orderByClause = "ACQUISITIONDATE DESC";
    }
    else if (text == "Trier par Date (Ancien)") {
        orderByClause = "ACQUISITIONDATE ASC";
    }
    else if (text == "Trier par Quantité (Croissant)") {
        orderByClause = "QUANTITE ASC";
    }
    else if (text == "Trier par Quantité (Décroissant)") {
        orderByClause = "QUANTITE DESC";
    }
    else {
        return; // Action non reconnue
    }

    // Exécuter la requête avec le tri approprié
    QSqlQuery query;
    QString queryStr = QString("SELECT ID, NOM, TYPE, QUANTITE, ACQUISITIONDATE, STATUS, COUT, IMAGE "
                               "FROM ressources ORDER BY %1").arg(orderByClause);

    if (!query.exec(queryStr)) {
        QMessageBox::warning(this, "Erreur", "Échec du tri : " + query.lastError().text());
        return;
    }

    // Mettre à jour le tableau avec les résultats triés
    ui->tableViewRessources->setRowCount(0);
    ui->tableViewRessources->verticalHeader()->setDefaultSectionSize(60);
    int row = 0;
    while (query.next()) {
        ui->tableViewRessources->insertRow(row);

        // Remplir les colonnes
        for (int col = 0; col < 7; ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui->tableViewRessources->setItem(row, col, item);
        }

        // Gestion de l'image
        QByteArray imageData = query.value(7).toByteArray();
        if (!imageData.isEmpty()) {
            QPixmap pixmap;
            pixmap.loadFromData(imageData);
            pixmap = pixmap.scaled(50, 50, Qt::KeepAspectRatio);

            QLabel *imageLabel = new QLabel();
            imageLabel->setPixmap(pixmap);
            imageLabel->setAlignment(Qt::AlignCenter);
            ui->tableViewRessources->setCellWidget(row, 7, imageLabel);
        }
        // Configuration du tableau
        ui->tableViewRessources->setFixedSize(1090, 461); // Dimensions fixes
        ui->tableViewRessources->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);



        /*ui->tableViewRessources->setColumnWidth(0, 30);
        ui->tableViewRessources->setColumnWidth(2, 150);
        ui->tableViewRessources->setColumnWidth(3, 100);
        ui->tableViewRessources->setColumnWidth(6, 60);
        ui->tableViewRessources->setColumnWidth(8, 85);  // Modifier column
        ui->tableViewRessources->setColumnWidth(9, 95);  // Supprimer column*/

        // 🔹 Create "Modifier" button inside a centered layout
        QPushButton *btnModifier = new QPushButton();
        btnModifier->setIcon(QIcon(":/img/images/modify.png"));
        btnModifier->setIconSize(QSize(24, 24));  // Adjust icon size
        btnModifier->setFixedSize(50, 50);  // Set fixed button size
        btnModifier->setStyleSheet("border: none; background-color:#f0f4f8; border-radius: 5px;"); // Fond bleu + coins arrondis

        // Create a QWidget to hold the button and layout
        QWidget *widgetModifier = new QWidget();
        QHBoxLayout *layoutModifier = new QHBoxLayout(widgetModifier);
        layoutModifier->addWidget(btnModifier);
        layoutModifier->setAlignment(Qt::AlignCenter);  // Center the button inside the column
        layoutModifier->setContentsMargins(0, 0, 0, 0);  // Remove margins
        widgetModifier->setLayout(layoutModifier);

        btnModifier->setProperty("id", id);
        btnModifier->setProperty("row", row);
        connect(btnModifier, &QPushButton::clicked, this, &Res::onBtnModifierClicked);
        ui->tableViewRessources->setCellWidget(row, 8, widgetModifier);

        // 🔹 Create "Supprimer" button inside a centered layout
        QPushButton *btnSupprimer = new QPushButton();
        btnSupprimer->setIcon(QIcon(":/img/images/delete.png"));
        btnSupprimer->setIconSize(QSize(24, 24));
        btnSupprimer->setFixedSize(50, 50);
        btnSupprimer->setStyleSheet("background-color: red; border-radius: 5px; border: none;");

        // Create a QWidget to hold the button and layout
        QWidget *widgetSupprimer = new QWidget();
        QHBoxLayout *layoutSupprimer = new QHBoxLayout(widgetSupprimer);
        layoutSupprimer->addWidget(btnSupprimer);
        layoutSupprimer->setAlignment(Qt::AlignCenter);  // Center the button inside the column
        layoutSupprimer->setContentsMargins(0, 0, 0, 0);
        widgetSupprimer->setLayout(layoutSupprimer);

        btnSupprimer->setProperty("id", id);
        btnSupprimer->setProperty("row", row);
        connect(btnSupprimer, &QPushButton::clicked, this, &Res::onBtnSupprimerClicked);
        ui->tableViewRessources->setCellWidget(row, 9, widgetSupprimer);


        row++;
    }
}

void Res::createChart()
{
    clearChart();

    QSqlQuery query;
    int enPanne = 0;
    int enMarche = 0;

    if (query.exec("SELECT STATUS FROM ressources")) {
        while (query.next()) {
            QString status = query.value(0).toString();
            if (status == "En Panne") {
                enPanne++;
            } else if (status == "En marche") {
                enMarche++;
            }
        }
    } else {
        QMessageBox::warning(this, "Erreur", "Impossible de récupérer les données des ressources !");
        return;
    }

    QPieSeries *pieSeries = new QPieSeries();
    pieSeries->append("En panne", enPanne);
    pieSeries->append("En marche", enMarche);

    // Version avec itérateur classique (solution recommandée)
    QList<QPieSlice*> slices = pieSeries->slices();
    for (int i = 0; i < slices.size(); ++i) {
        QPieSlice *slice = slices.at(i);
        slice->setLabelVisible(true);
        slice->setLabelColor(Qt::black);
        slice->setLabelPosition(QPieSlice::LabelOutside);
    }

    chart = new QChart();
    chart->addSeries(pieSeries);
    chart->setTitle("Statistiques des matériels");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    if (!ui->widgetChart->layout()) {
        ui->widgetChart->setLayout(new QVBoxLayout());
    }

    QLayoutItem* item;
    while ((item = ui->widgetChart->layout()->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }

    ui->widgetChart->layout()->addWidget(chartView);
}

void Res::clearChart()
{
    // Supprimer le chartView s'il existe
    if (chartView) {
        if (ui->widgetChart->layout()) {
            ui->widgetChart->layout()->removeWidget(chartView);
        }
        delete chartView;
        chartView = nullptr;
    }

    // Le QChart est supprimé automatiquement quand le QChartView est supprimé
    // donc pas besoin de le supprimer explicitement ici
    chart = nullptr;
}

void Res::updateChart()
{
    createChart();
}


void Res::onBtnRechercherClicked()
{
    QString text = ui->lineEditRecherche->text().trimmed(); // trim() pour supprimer les espaces
    filtrerParNom(text);
}
void Res::onBtnResetRechercheClicked()
{
    ui->lineEditRecherche->clear();

    // Appliquer l'icône redimensionnée

    updateTable();  // Rafraîchir la table pour afficher toutes les ressources
}
void Res::filtrerParNom(const QString &text)
{
    // Désactiver les mises à jour pour améliorer les performances
    ui->tableViewRessources->setUpdatesEnabled(false);

    // Vider le tableau
    ui->tableViewRessources->setRowCount(0);
    ui->tableViewRessources->verticalHeader()->setDefaultSectionSize(60);

    // Si le texte est vide, afficher toutes les ressources
    if (text.isEmpty()) {
        updateTable();
        ui->tableViewRessources->setUpdatesEnabled(true);
        return;
    }

    // Requête SQL optimisée pour la recherche
    QSqlQuery query;
    query.prepare("SELECT ID, NOM, TYPE, QUANTITE, ACQUISITIONDATE, STATUS, COUT, IMAGE "
                  "FROM ressources WHERE NOM LIKE :text OR TYPE LIKE :text");
    query.bindValue(":text", "%" + text + "%");

    if (!query.exec()) {
        QMessageBox::warning(this, "Erreur", "Échec de la recherche : " + query.lastError().text());
        ui->tableViewRessources->setUpdatesEnabled(true);
        return;
    }

    // Remplir le tableau avec les résultats
    int row = 0;
    while (query.next()) {
        ui->tableViewRessources->insertRow(row);

        // Afficher les données standard
        for (int col = 0; col < 7; ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui->tableViewRessources->setItem(row, col, item);
        }

        // Afficher l'image si elle existe
        QByteArray imageData = query.value(7).toByteArray();
        if (!imageData.isEmpty()) {
            QPixmap pixmap;
            pixmap.loadFromData(imageData);
            pixmap = pixmap.scaled(50, 50, Qt::KeepAspectRatio);

            QLabel *imageLabel = new QLabel();
            imageLabel->setPixmap(pixmap);
            imageLabel->setAlignment(Qt::AlignCenter);
            ui->tableViewRessources->setCellWidget(row, 7, imageLabel);
        }

        // Ajouter les boutons Modifier/Supprimer
        int id = query.value(0).toInt();
        addActionButtons(row, id);

        row++;
    }

    // Réactiver les mises à jour
    ui->tableViewRessources->setUpdatesEnabled(true);
}
void Res::addActionButtons(int row, int id)
{
    // Bouton Modifier
    QPushButton *btnModifier = new QPushButton();
    btnModifier->setIcon(QIcon(":/img/images/modify.png"));
    btnModifier->setIconSize(QSize(24, 24));
    btnModifier->setFixedSize(50, 50);
    btnModifier->setStyleSheet("border: none; background-color:#f0f4f8; border-radius: 5px;");
    btnModifier->setProperty("id", id);
    btnModifier->setProperty("row", row);
    connect(btnModifier, &QPushButton::clicked, this, &Res::onBtnModifierClicked);

    // Bouton Supprimer
    QPushButton *btnSupprimer = new QPushButton();
    btnSupprimer->setIcon(QIcon(":/img/images/delete.png"));
    btnSupprimer->setIconSize(QSize(24, 24));
    btnSupprimer->setFixedSize(50, 50);
    btnSupprimer->setStyleSheet("background-color: red; border-radius: 5px; border: none;");
    btnSupprimer->setProperty("id", id);
    btnSupprimer->setProperty("row", row);
    connect(btnSupprimer, &QPushButton::clicked, this, &Res::onBtnSupprimerClicked);

    // Centrer les boutons
    QWidget *widgetModifier = new QWidget();
    QHBoxLayout *layoutModifier = new QHBoxLayout(widgetModifier);
    layoutModifier->addWidget(btnModifier);
    layoutModifier->setAlignment(Qt::AlignCenter);
    layoutModifier->setContentsMargins(0, 0, 0, 0);
    widgetModifier->setLayout(layoutModifier);

    QWidget *widgetSupprimer = new QWidget();
    QHBoxLayout *layoutSupprimer = new QHBoxLayout(widgetSupprimer);
    layoutSupprimer->addWidget(btnSupprimer);
    layoutSupprimer->setAlignment(Qt::AlignCenter);
    layoutSupprimer->setContentsMargins(0, 0, 0, 0);
    widgetSupprimer->setLayout(layoutSupprimer);

    // Ajouter au tableau
    ui->tableViewRessources->setCellWidget(row, 8, widgetModifier);
    ui->tableViewRessources->setCellWidget(row, 9, widgetSupprimer);
}
void Res::animateChart()
{
    static int i = 0;
    if (i % 2 == 0) {
        *set0 << 15 << 25 << 35;  // Matériel en panne
        *set1 << 45 << 35 << 25;  // Matériel non en panne
    } else {
        *set0 << 10 << 20 << 30;
        *set1 << 50 << 40 << 30;
    }
    i++;
}
void Res::onBtnModifierClicked()
{
    //Récupère le bouton sur lequel l'utilisateur a cliqué. Cela permet de savoir quelle ligne et quelle ressource sont concernées.
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (!button) return;
    //Récupère l'indice de la ligne de la ressource dans la table pour l'utiliser apres dans la modif et supp.
    int row = button->property("row").toInt();
    // Récupère l'ID de la ressource à partir du bouton
    int id = button->property("id").toInt();

    // Récupérer les données actuelles de la ligne
    QString nom = ui->tableViewRessources->item(row, 1)->text();
    QString type = ui->tableViewRessources->item(row, 2)->text();
    int quantite = ui->tableViewRessources->item(row, 3)->text().toInt();
    QDate date = QDate::fromString(ui->tableViewRessources->item(row, 4)->text(), "yyyy-MM-dd");
    QString status = ui->tableViewRessources->item(row, 5)->text();
    double cout = ui->tableViewRessources->item(row, 6)->text().toDouble();

    // Ouvrir la fenêtre de modification
    ModifierRessourceDialog dialog(this);
    //Passe les données actuelles à la boîte de dialogue pour qu'elles soient affichées dans les champs.
    dialog.setData(nom, type, quantite, date, status, cout);
    //Si j'accepte (clic sur "OK"), les nouvelles valeurs seront récupérées.
    if (dialog.exec() == QDialog::Accepted) {
        // Récupérer les nouvelles valeurs
        QString newNom = dialog.getNom();
        QString newType = dialog.getType();
        int newQuantite = dialog.getQuantite();
        QDate newDate = dialog.getDate();
        QString newStatus = dialog.getStatus();
        double newCout = dialog.getCout();

        // Mettre à jour la base de données
        QSqlQuery query;
        query.prepare("UPDATE ressources SET NOM = :nom, TYPE = :type, QUANTITE = :quantite, "
                      "ACQUISITIONDATE = :date, STATUS = :status, COUT = :cout WHERE ID = :id");
        query.bindValue(":nom", newNom);
        query.bindValue(":type", newType);
        query.bindValue(":quantite", newQuantite);
        query.bindValue(":date", newDate);
        query.bindValue(":status", newStatus);
        query.bindValue(":cout", newCout);
        query.bindValue(":id", id);

        if (query.exec()) {
            QMessageBox::information(this, "Succès", "Ressource modifiée avec succès !");
            updateTable();  // Rafraîchir la table
            updateChart();
            genererStatistiquesTextuelles();
        } else {
            QMessageBox::warning(this, "Erreur", "Échec de la modification !");
        }
    }
}



void Res::on_btnImage_clicked()
{
    // Ouvrir l’explorateur de fichiers pour choisir une image
    QString filePath = QFileDialog::getOpenFileName(this, "Choisir une image", "", "Images (*.png *.jpg *.jpeg *.bmp *.gif)");

    // Vérifier si l’utilisateur a sélectionné une image
    if (!filePath.isEmpty()) {
        // Afficher le chemin du fichier sélectionné dans labelImage
        ui->labelImage->setText(filePath);

        // Charger l’image en QPixmap
        QPixmap pixmap(filePath);

        // Afficher l’image dans labelImage (optionnel)
        //ui->labelImage->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio));

        // Convertir l’image en QByteArray pour la sauvegarde dans la base de données
        QByteArray imageData;
        QBuffer buffer(&imageData);
        buffer.open(QIODevice::WriteOnly);
        pixmap.save(&buffer, "PNG");  // Sauvegarde en format PNG

        // Stocker l’image dans l’attribut `image` de l’objet
        this->image = imageData;
    }
}

void Res::onBtnSupprimerClicked()
{
    // récupère le bouton cliqué.
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (!button) return;

    int id = button->property("id").toInt(); // Récupérer l'ID de la ressource

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Suppression", "Voulez-vous vraiment supprimer la ressource ID: " + QString::number(id) + " ?",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        if (supprimer(id)) {
            QMessageBox::information(this, "Succès", "Ressource supprimée !");
            updateTable(); // Rafraîchir l'affichage
            createChart();
            genererStatistiquesTextuelles();
        } else {
            QMessageBox::warning(this, "Erreur", "Échec de la suppression !");
        }
    }
}



void Res::updateTable()
{

    ui->tableViewRessources->setRowCount(0);  // Vider la table
    //Exécution de la requête pour récupérer toutes les ressources.
    QSqlQuery query("SELECT ID, NOM, TYPE, QUANTITE, ACQUISITIONDATE, STATUS, COUT, IMAGE FROM ressources");
    // Pour chaque ressource retournée par la requête, une nouvelle ligne est insérée dans la table.
    int row = 0;
    while (query.next()) {
        ui->tableViewRessources->insertRow(row);
        ui->tableViewRessources->setRowHeight(row, 60);

        // ID de la ressource
        int id = query.value(0).toInt();

        // Ajout des données dans les cellules (7 colonnes sans l'image et les boutons)
        for (int col = 0; col < 7; col++) {
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui->tableViewRessources->setItem(row, col, item);
        }

        // 🔹 Gérer l'affichage de l'image (colonne 7)
        QByteArray imageData = query.value(7).toByteArray();
        if (!imageData.isEmpty()) {
            QPixmap pixmap;
            pixmap.loadFromData(imageData);
            pixmap = pixmap.scaled(50, 50, Qt::KeepAspectRatio);

            QLabel *imageLabel = new QLabel();  // Correction : ajout de l'espace après QLabel
            imageLabel->setPixmap(pixmap);
            imageLabel->setAlignment(Qt::AlignCenter);
            ui->tableViewRessources->setCellWidget(row, 7, imageLabel);
        }

        // 🔹 Ajouter le bouton "Modifier" avec icône et taille réduite
        // Set column width to be small
        ui->tableViewRessources->setColumnWidth(0, 30);
        ui->tableViewRessources->setColumnWidth(2, 150);
        ui->tableViewRessources->setColumnWidth(3, 100);
        ui->tableViewRessources->setColumnWidth(6, 60);
        ui->tableViewRessources->setColumnWidth(8, 85);  // Modifier column
        ui->tableViewRessources->setColumnWidth(9, 95);  // Supprimer column

        // 🔹 Create "Modifier" button inside a centered layout
        QPushButton *btnModifier = new QPushButton();
        btnModifier->setIcon(QIcon(":/img/images/modify.png"));
        btnModifier->setIconSize(QSize(24, 24));  // Adjust icon size
        btnModifier->setFixedSize(50, 50);  // Set fixed button size
        btnModifier->setStyleSheet("border: none; background-color:#f0f4f8; border-radius: 5px;"); // Fond bleu + coins arrondis

        // Create a QWidget to hold the button and layout
        QWidget *widgetModifier = new QWidget();
        QHBoxLayout *layoutModifier = new QHBoxLayout(widgetModifier);
        layoutModifier->addWidget(btnModifier);
        layoutModifier->setAlignment(Qt::AlignCenter);  // Center the button inside the column
        layoutModifier->setContentsMargins(0, 0, 0, 0);  // Remove margins
        widgetModifier->setLayout(layoutModifier);

        btnModifier->setProperty("id", id);
        btnModifier->setProperty("row", row);
        connect(btnModifier, &QPushButton::clicked, this, &Res::onBtnModifierClicked);
        ui->tableViewRessources->setCellWidget(row, 8, widgetModifier);

        // 🔹 Create "Supprimer" button inside a centered layout
        QPushButton *btnSupprimer = new QPushButton();
        btnSupprimer->setIcon(QIcon(":/img/images/delete.png"));
        btnSupprimer->setIconSize(QSize(24, 24));
        btnSupprimer->setFixedSize(50, 50);
        btnSupprimer->setStyleSheet("background-color: red; border-radius: 5px; border: none;");

        // Create a QWidget to hold the button and layout
        QWidget *widgetSupprimer = new QWidget();
        QHBoxLayout *layoutSupprimer = new QHBoxLayout(widgetSupprimer);
        layoutSupprimer->addWidget(btnSupprimer);
        layoutSupprimer->setAlignment(Qt::AlignCenter);  // Center the button inside the column
        layoutSupprimer->setContentsMargins(0, 0, 0, 0);
        widgetSupprimer->setLayout(layoutSupprimer);

        btnSupprimer->setProperty("id", id);
        btnSupprimer->setProperty("row", row);
        connect(btnSupprimer, &QPushButton::clicked, this, &Res::onBtnSupprimerClicked);
        ui->tableViewRessources->setCellWidget(row, 9, widgetSupprimer);


        row++;
    }
}
bool Res::isIdUnique(int id)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM ressources WHERE ID = :id");
    query.bindValue(":id", id);
    if (query.exec() && query.next()) {
        return query.value(0).toInt() == 0;
    }
    return false;
}
void Res::clearErrorIndicators()
{
    // Réinitialiser tous les indicateurs d'erreur
    ui->lineEditID->setStyleSheet("");
    ui->lineEditNom->setStyleSheet("");
    ui->lineEditCout->setStyleSheet("");
    ui->lineEditQuantite->setStyleSheet("");
    ui->comboBoxType->setStyleSheet("");
    ui->labelImage->setStyleSheet("");

    // Cacher tous les labels d'erreur
    if (ui->labelErrorID) ui->labelErrorID->setVisible(false);
    if (ui->labelErrorNom) ui->labelErrorNom->setVisible(false);
    if (ui->labelErrorCout) ui->labelErrorCout->setVisible(false);
    if (ui->labelErrorQuantite) ui->labelErrorQuantite->setVisible(false);
    if (ui->labelErrorType) ui->labelErrorType->setVisible(false);
    if (ui->labelErrorImage) ui->labelErrorImage->setVisible(false);
}
void Res::showError(QWidget* widget, const QString& message, QLabel* errorLabel)
{
    // Mettre en rouge le contour du widget
    widget->setStyleSheet("border: 1px solid red;");

    // Afficher le message d'erreur
    if (errorLabel) {
        errorLabel->setText(message);
        errorLabel->setStyleSheet("color: red; font-size: 10px;");
        errorLabel->setVisible(true);
    }
}
void Res::validateCout()
{
    QString coutText = ui->lineEditCout->text();

    // Effacer l'erreur précédente
    ui->lineEditCout->setStyleSheet("");
    if (ui->labelErrorCout) ui->labelErrorCout->setVisible(false);

    if (coutText.isEmpty()) return; // Ne rien faire si vide

    bool ok;
    double cout = coutText.toDouble(&ok);

    if (!ok || cout <= 0) {
        showError(ui->lineEditCout, "Le coût doit être un nombre positif", ui->labelErrorCout);
    }
}

void Res::validateQuantite()
{
    QString quantiteText = ui->lineEditQuantite->text();

    // Effacer l'erreur précédente
    ui->lineEditQuantite->setStyleSheet("");
    if (ui->labelErrorQuantite) ui->labelErrorQuantite->setVisible(false);

    if (quantiteText.isEmpty()) return; // Ne rien faire si vide

    bool ok;
    int quantite = quantiteText.toInt(&ok);

    if (!ok || quantite <= 0) {
        showError(ui->lineEditQuantite, "La quantité doit être un entier positif", ui->labelErrorQuantite);
    }
}

void Res::validateType()
{
    // Effacer l'erreur précédente
    ui->comboBoxType->setStyleSheet("");
    if (ui->labelErrorType) ui->labelErrorType->setVisible(false);

    if (ui->comboBoxType->currentText().isEmpty()) {
        showError(ui->comboBoxType, "Le type est obligatoire", ui->labelErrorType);
    }
}
void Res::onBtnAjouterClicked()
{
    // Réinitialiser les indicateurs d'erreur
    clearErrorIndicators();

    bool isValid = true;
    QStringList errorMessages;

    // Validation ID
    int id = ui->lineEditID->text().toInt();
    if (ui->lineEditID->text().isEmpty()) {
        showError(ui->lineEditID, "L'ID est obligatoire", ui->labelErrorID);
        isValid = false;
        errorMessages << "L'ID est obligatoire";
    }
    else if (id <= 0) {
        showError(ui->lineEditID, "ID doit être un nombre positif", ui->labelErrorID);
        isValid = false;
        errorMessages << "ID invalide";
    }
    else if (!isIdUnique(id)) {
        showError(ui->lineEditID, "Cet ID existe déjà", ui->labelErrorID);
        isValid = false;
        errorMessages << "ID déjà utilisé";
    }

    // Validation Nom
    QString nom = ui->lineEditNom->text().trimmed();
    if (nom.isEmpty()) {
        showError(ui->lineEditNom, "Le nom est obligatoire", ui->labelErrorNom);
        isValid = false;
        errorMessages << "Nom obligatoire";
    }
    else if (nom.length() < 5) {
        showError(ui->lineEditNom, "Le nom doit contenir au moins 5 caractères", ui->labelErrorNom);
        isValid = false;
        errorMessages << "Nom trop court";
    }

    // Validation Type
    QString type = ui->comboBoxType->currentText();
    if (type.isEmpty()) {
        showError(ui->comboBoxType, "Le type est obligatoire", ui->labelErrorType);
        isValid = false;
        errorMessages << "Type obligatoire";
    }

    // Validation Quantité
    int quantite = ui->lineEditQuantite->text().toInt();
    if (ui->lineEditQuantite->text().isEmpty()) {
        showError(ui->lineEditQuantite, "La quantité est obligatoire", ui->labelErrorQuantite);
        isValid = false;
        errorMessages << "Quantité obligatoire";
    }
    else if (quantite <= 0) {
        showError(ui->lineEditQuantite, "La quantité doit être positive", ui->labelErrorQuantite);
        isValid = false;
        errorMessages << "Quantité invalide";
    }

    // Validation Coût
    double cout = ui->lineEditCout->text().toDouble();
    if (ui->lineEditCout->text().isEmpty()) {
        showError(ui->lineEditCout, "Le coût est obligatoire", ui->labelErrorCout);
        isValid = false;
        errorMessages << "Coût obligatoire";
    }
    else if (cout <= 0) {
        showError(ui->lineEditCout, "Le coût doit être positif", ui->labelErrorCout);
        isValid = false;
        errorMessages << "Coût invalide";
    }

    // Validation Image
    if (ui->labelImage->text().isEmpty() || ui->labelImage->text() == "Aucune image sélectionnée") {
        showError(ui->labelImage, "Une image est requise", ui->labelErrorImage);
        isValid = false;
        errorMessages << "Image requise";
    }

    if (!isValid) {
        // Donner le focus au premier champ en erreur
        if (!ui->lineEditID->text().isEmpty() && id > 0 && isIdUnique(id)) {
            if (ui->lineEditNom->text().isEmpty() || ui->lineEditNom->text().length() < 5) {
                ui->lineEditNom->setFocus();
            }
            else if (ui->comboBoxType->currentText().isEmpty()) {
                ui->comboBoxType->setFocus();
            }
            else if (ui->lineEditQuantite->text().isEmpty() || quantite <= 0) {
                ui->lineEditQuantite->setFocus();
            }
            else if (ui->lineEditCout->text().isEmpty() || cout <= 0) {
                ui->lineEditCout->setFocus();
            }
            else if (ui->labelImage->text().isEmpty()) {
                ui->btnImage->setFocus();
            }
        } else {
            ui->lineEditID->setFocus();
        }
        return;
    }

    // Récupération des valeurs validées
    QDate date = ui->dateEditAcquisition->date();
    QString status = ui->radioButtonEnPanne->isChecked() ? "En Panne" : "En marche";

    // Conversion de l'image
    QPixmap pixmap(ui->labelImage->text());
    QByteArray imageData;
    QBuffer buffer(&imageData);
    if (!pixmap.save(&buffer, "PNG")) {
        showError(ui->labelImage, "Échec de conversion de l'image", ui->labelErrorImage);
        return;
    }

    // Préparation de la requête SQL
    QSqlQuery query;
    query.prepare("INSERT INTO ressources (ID, NOM, IMAGE, TYPE, QUANTITE, ACQUISITIONDATE, STATUS, COUT) "
                  "VALUES (:id, :nom, :image, :type, :quantite, :date, :status, :cout)");

    // Liaison des valeurs
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":image", imageData);
    query.bindValue(":type", type);
    query.bindValue(":quantite", quantite);
    query.bindValue(":date", date);
    query.bindValue(":status", status);
    query.bindValue(":cout", cout);

    // Exécution de la requête
    if (query.exec()) {
        // Succès - réinitialiser le formulaire
        Vider_champs();
        updateTable();
        createChart();
        genererStatistiquesTextuelles();

        // Message de succès (optionnel)
        QMessageBox::information(this, "Succès", "Ressource ajoutée avec succès !");
    } else {
        // Échec de la requête SQL
        showError(ui->lineEditID, "Erreur BD: " + query.lastError().text(), ui->labelErrorID);
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout : " + query.lastError().text());
    }
}
void Res::validateID()
{
    QString idText = ui->lineEditID->text();

    // Effacer l'erreur précédente
    ui->lineEditID->setStyleSheet("");
    if (ui->labelErrorID) ui->labelErrorID->setVisible(false);

    if (idText.isEmpty()) return; // Ne rien faire si vide

    bool ok;
    int id = idText.toInt(&ok);

    if (!ok || id <= 0) {
        showError(ui->lineEditID, "ID doit être un nombre positif", ui->labelErrorID);
    } else if (!isIdUnique(id)) {
        showError(ui->lineEditID, "Cet ID existe déjà", ui->labelErrorID);
    }
}

void Res::validateName()
{
    QString nom = ui->lineEditNom->text().trimmed();

    // Effacer l'erreur précédente
    ui->lineEditNom->setStyleSheet("");
    if (ui->labelErrorNom) ui->labelErrorNom->setVisible(false);

    if (nom.isEmpty()) return; // Ne rien faire si vide

    if (nom.length() < 5) {
        showError(ui->lineEditNom, "Le nom doit contenir au moins 5 caractères", ui->labelErrorNom);
    }
}
void Res::Vider_champs()
{
    clearErrorIndicators();
    ui->lineEditID->clear();
    ui->lineEditNom->clear();
    ui->comboBoxType->setCurrentIndex(0);
    ui->lineEditQuantite->clear();
    ui->dateEditAcquisition->setDate(QDate::currentDate()); // Toujours aujourd'hui
    ui->radioButtonEnmarche->setChecked(true);
    ui->lineEditCout->clear();
    ui->labelImage->clear();
    ui->labelImage->setText("Aucune image sélectionnée");
    this->image = QByteArray();
    ui->lineEditID->setFocus();
}
void Res::exporterVersExcel()
{
    // Demander à l'utilisateur de choisir un emplacement pour enregistrer le fichier
    QString filePath = QFileDialog::getSaveFileName(this, "Enregistrer le fichier Excel", "", "Fichiers Excel (*.xlsx)");

    if (filePath.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Aucun emplacement sélectionné !");
        return;
    }

    // Créer un document Excel
    QXlsx::Document xlsx;

    // Ajouter les en-têtes de colonnes (de 0 à 7)
    for (int col = 0; col < 8; ++col) {  // On s'arrête à la colonne 7 (index 6)
        QString header = ui->tableViewRessources->model()->headerData(col, Qt::Horizontal).toString();
        xlsx.write(1, col + 1, header);  // La première ligne contient les en-têtes
    }

    // Ajouter les données de la table (de 0 à 7)
    for (int row = 0; row < ui->tableViewRessources->model()->rowCount(); ++row) {
        for (int col = 0; col < 8; ++col) {  // On s'arrête à la colonne 7 (index 6)
            QModelIndex index = ui->tableViewRessources->model()->index(row, col);
            QString data = ui->tableViewRessources->model()->data(index).toString();

            // Si c'est la colonne "Image" (colonne 7), exporter le chemin de l'image
            if (col == 7) {
                QByteArray imageData = ui->tableViewRessources->model()->data(index, Qt::UserRole).toByteArray();
                if (!imageData.isEmpty()) {
                    // Sauvegarder l'image dans un fichier temporaire
                    QString imagePath = QDir::tempPath() + QString("/image_%1.png").arg(row);
                    QFile file(imagePath);
                    if (file.open(QIODevice::WriteOnly)) {
                        file.write(imageData);
                        file.close();
                    }
                    data = imagePath;  // Utiliser le chemin de l'image comme donnée
                }
            }

            xlsx.write(row + 2, col + 1, data);
        }
    }

    // Sauvegarder le fichier Excel
    if (xlsx.saveAs(filePath)) {
        QMessageBox::information(this, "Succès", "Exportation réussie vers : " + filePath);
    } else {
        QMessageBox::warning(this, "Erreur", "Échec de l'exportation !");
    }
}


void Res::exporterPDF()
{
    genererStatistiquesTextuelles();  // S'assurer que le contenu est prêt

    QString path = QFileDialog::getSaveFileName(this, "Exporter PDF", "", "PDF (*.pdf)");
    if (path.isEmpty()) return;

    QPdfWriter writer(path);
    writer.setPageSize(QPageSize(QPageSize::A4));
    writer.setResolution(300);

    QPainter painter(&writer);

    // 1. Dessiner le contenu de pdf_generer (widget contenant les stats)
    QPixmap statsPixmap = ui->pdf_generer->grab();  // Capture du widget
    QRect statsRect(50, 50, writer.width() - 100, writer.height() / 2);
    painter.drawPixmap(statsRect, statsPixmap);

    // 2. Dessiner le graphique
    QPixmap chart = ui->widgetChart->grab();
    QRect chartRect(50, writer.height() / 2 + 70, writer.width() - 100, writer.height() / 3);
    painter.drawPixmap(chartRect, chart);

    painter.end();

    QMessageBox::information(this, "Succès", "PDF exporté avec succès !");
}


// Fonctions utilitaires (à implémenter selon votre logique métier)
int Res::calculerNombreTotalRessources()
{
    QSqlQuery query("SELECT COUNT(*) FROM ressources");
    return query.next() ? query.value(0).toInt() : 0;
}

QMap<QString, int> Res::calculerRessourcesParType()
{
    QMap<QString, int> results;
    QSqlQuery query("SELECT TYPE, COUNT(*) FROM ressources GROUP BY TYPE");
    while (query.next()) {
        results[query.value(0).toString()] = query.value(1).toInt();
    }
    return results;
}

QPair<int, int> Res::calculerEtatRessources()
{
    int enMarche = 0, enPanne = 0;
    QSqlQuery query("SELECT STATUS FROM ressources");
    while (query.next()) {
        QString etat = query.value(0).toString();
        if (etat.contains("marche", Qt::CaseInsensitive)) enMarche++;
        else if (etat.contains("panne", Qt::CaseInsensitive)) enPanne++;
    }
    return qMakePair(enMarche, enPanne);
}




void Res::paintStatsWidget()
{


    QPainter painter(ui->pdf_generer);
    m_statsDocument.setPageSize(ui->pdf_generer->size());
    m_statsDocument.drawContents(&painter);
}
void Res::genererStatistiquesTextuelles()
{

    // Calculs
    int total = calculerNombreTotalRessources();
    auto parType = calculerRessourcesParType();
    auto etats = calculerEtatRessources();

    // Générer HTML
    QString html;
    html += "<div style='font-family:Arial; margin:10px; color:#333;'>";
    html += "<h1 style='color:#2c3e50; text-align:center;'>Statistiques des Ressources</h1>";
    html += "<hr style='border-top:1px solid #ddd;'>";

    html += "<h2 style='color:#2980b9;'>Résumé</h2>";
    html += QString("<p>Total: <b>%1</b> ressources</p>").arg(total);
    html += QString("<p>En marche: <b style='color:green;'>%1</b> | En panne: <b style='color:red;'>%2</b></p>")
                .arg(etats.first).arg(etats.second);

    html += "<h2 style='color:#2980b9;'>Rpartition par type</h2>";
    html += "<table style='width:100%; border-collapse:collapse;'>";
    html += "<tr style='background:#3498db; color:white;'>"
            "<th style='padding:5px;'>Type</th>"
            "<th style='padding:5px;'>Quantité</th>"
            "<th style='padding:5px;'>%</th></tr>";

    for(auto it = parType.begin(); it != parType.end(); ++it) {
        double pct = (it.value() * 100.0) / total;
        html += QString("<tr style='border-bottom:1px solid #ddd;'>"
                        "<td style='padding:5px;'>%1</td>"
                        "<td style='padding:5px; text-align:right;'>%2</td>"
                        "<td style='padding:5px; text-align:right;'>%3%</td></tr>")
                    .arg(it.key()).arg(it.value()).arg(QString::number(pct, 'f', 1));
    }

    html += "</table></div>";

    // Mettre à jour le document
    m_statsDocument.setHtml(html);
    ui->pdf_generer->update();

    // 🔊 Convertir en texte brut pour la voix
    QTextDocument tempDoc;
    tempDoc.setHtml(html);
    m_statsTextToSpeak = tempDoc.toPlainText();

}

bool Res::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == ui->pdf_generer && event->type() == QEvent::Paint)
    {
        QPainter painter(ui->pdf_generer);

        // Fond blanc
        painter.fillRect(ui->pdf_generer->rect(), Qt::white);

        // Options de rendu
        painter.setRenderHint(QPainter::Antialiasing);
        painter.setRenderHint(QPainter::TextAntialiasing);
        painter.setRenderHint(QPainter::SmoothPixmapTransform);

        // Dessiner le document
        m_statsDocument.setPageSize(ui->pdf_generer->size());
        m_statsDocument.drawContents(&painter, ui->pdf_generer->rect());

        return true;
    }
    return QWidget::eventFilter(watched, event);
}
void Res::setupSpeechSystem2()
{

    m_speech = new QTextToSpeech(this);
    m_speech->setLocale(QLocale::French);
    connect(m_speech, &QTextToSpeech::stateChanged, this, &Res::onSpeechStateChanged);
}
void Res::onSpeechStateChanged(QTextToSpeech::State state)
{
    if (state == QTextToSpeech::Ready) {
        ui->lire->setText("Lire");
    }
}

void Res::lireStatistiques()
{

    if (!m_speech || m_statsTextToSpeak.isEmpty())
        return;

    switch (m_speech->state()) {
    case QTextToSpeech::Speaking:
        m_speech->pause();
        ui->lire->setText("Reprendre");
        break;

    case QTextToSpeech::Paused:
        m_speech->resume();
        ui->lire->setText("Pause");
        break;

    case QTextToSpeech::Ready:
        m_speech->say(m_statsTextToSpeak);
        ui->lire->setText("Pause");
        break;

    default:
        break;
    }
}


void Res::setupSpeechSystem()
{
    // Initialisation du synthétiseur vocal
    m_speech = new QTextToSpeech(this);

    // Afficher le moteur utilisé
    ui->comboMoteur->clear();
    ui->comboMoteur->addItem(m_speech->engine());
    ui->comboMoteur->setEnabled(false);

    // Initialiser la liste des voix disponibles
    QVector<QVoice> voices = m_speech->availableVoices();
    qDebug() << "Voix disponibles:";
    for (const QVoice &voice : voices) {
        qDebug() << "-" << voice.name() << "| Genre:" << (voice.gender() == QVoice::Female ? "Femme" : "Homme");
    }

    // Configurer la liste des voix dans l'interface
    ui->comboVoix->clear();
    ui->comboVoix->addItem("Femme (Julie)");
    ui->comboVoix->addItem("Homme (Paul)");

    // Connecter les signaux
    connect(ui->btnParler, &QPushButton::clicked, [this]() {
        if (!ui->textEdit_3->toPlainText().isEmpty()) {
            m_speech->say(ui->textEdit_3->toPlainText());
        }
    });

    connect(ui->btnPause, &QPushButton::clicked, [this]() {
        m_speech->pause();
    });

    connect(ui->btnReprendre, &QPushButton::clicked, [this]() {
        m_speech->resume();
    });

    connect(ui->btnArreter, &QPushButton::clicked, [this]() {
        m_speech->stop();
    });

    connect(ui->comboVoix, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &Res::onVoiceGenderSelected);

    // Configurer les sliders
    ui->sliderVolume->setRange(0, 100);
    ui->sliderVolume->setValue(50);
    connect(ui->sliderVolume, &QSlider::valueChanged, [this](int value) {
        m_speech->setVolume(value / 100.0);
    });

    ui->sliderVitesse->setRange(-10, 10);
    ui->sliderVitesse->setValue(0);
    connect(ui->sliderVitesse, &QSlider::valueChanged, [this](int value) {
        m_speech->setRate(value / 10.0);
    });

    // Appliquer la voix féminine par défaut
    onVoiceGenderSelected();
}

void Res::onVoiceGenderSelected()
{
    if (!m_speech || ui->comboVoix->currentIndex() < 0) return;

    bool wantJulie = (ui->comboVoix->currentText() == "Femme (Julie)");
    QString desiredVoiceName = wantJulie ? "Microsoft Julie" : "Microsoft Paul";

    QVector<QVoice> voices = m_speech->availableVoices();
    for (const QVoice &voice : voices) {
        if (voice.name() == desiredVoiceName) {
            m_speech->setVoice(voice);
            qDebug() << "Voix sélectionnée:" << voice.name()
                     << "| Genre:" << (wantJulie ? "Femme" : "Homme")
                     << "| Langue:" << voice.locale().name();
            return;
        }
    }

    // Si la voix spécifique n'est pas trouvée, essayer de trouver une voix du bon genre
    QVoice::Gender desiredGender = wantJulie ? QVoice::Female : QVoice::Male;
    for (const QVoice &voice : voices) {
        if (voice.gender() == desiredGender) {
            m_speech->setVoice(voice);
            qDebug() << "Voix alternative sélectionnée:" << voice.name()
                     << "| Genre:" << (wantJulie ? "Femme" : "Homme");
            return;
        }
    }

    // Si aucune voix n'est trouvée
    QMessageBox::warning(this, "Attention",
                         QString("La voix %1 n'a pas été trouvée!\n"
                                 "Veuillez vérifier l'installation des voix TTS.")
                             .arg(desiredVoiceName));
}

void Res::checkAvailableEngines()
{
    qDebug() << "Moteurs TTS disponibles:";
    foreach (const QString &engine, QTextToSpeech::availableEngines()) {
        qDebug() << "-" << engine;

        QTextToSpeech testSpeech(engine);
        qDebug() << "  Locales:" << testSpeech.availableLocales();

        QVector<QVoice> voices = testSpeech.availableVoices();
        qDebug() << "  Voix disponibles (" << voices.count() << "):";
        for (const QVoice &voice : voices) {
            qDebug() << "    -" << voice.name()
            << "| Genre:" << (voice.gender() == QVoice::Female ? "Femme" : "Homme")
            << "| Langue:" << voice.locale().name();
        }
    }
}
// Dans le fichier d'implémentation (ressources.cpp)



void Res::processDroppedImage(const QString &filePath) {
    // Charger l'image
    cv::Mat image = cv::imread(filePath.toStdString());
    if (image.empty()) {
        QMessageBox::warning(this, "Erreur", "Impossible de charger l'image");
        return;
    }

    // Détection YOLO
    detectObjectsYOLO(image);

    // Afficher les résultats
    QFileInfo fileInfo(filePath);


    // Convertir pour affichage Qt
    cv::cvtColor(image, image, cv::COLOR_BGR2RGB);
    QImage qImage(image.data, image.cols, image.rows, image.step, QImage::Format_RGB888);

    currentPixmap = QPixmap::fromImage(qImage);
    ui->labelImageDisplay->setPixmap(
        currentPixmap.scaled(ui->labelImageDisplay->size(),
                             Qt::KeepAspectRatio,
                             Qt::SmoothTransformation)
        );
}
// Fonction existante conservée
void Res::dragEnterEvent(QDragEnterEvent *event) {
    if (event->mimeData()->hasUrls()) {
        event->acceptProposedAction();
    }
}

void Res::dropEvent(QDropEvent *event) {
    const QMimeData* mimeData = event->mimeData();

    if (mimeData->hasUrls()) {
        QUrl url = mimeData->urls().first();
        QString filePath = url.toLocalFile();

        if (filePath.endsWith(".jpg", Qt::CaseInsensitive) ||
            filePath.endsWith(".jpeg", Qt::CaseInsensitive) ||
            filePath.endsWith(".png", Qt::CaseInsensitive)) {

            // Lire l'image
            currentCVImage = cv::imread(filePath.toStdString());
            if (currentCVImage.empty()) {
                QMessageBox::warning(this, "Erreur", "Impossible de charger l'image");
                return;
            }

            // Charger le modèle si ce n'est pas déjà fait
            if (!m_yoloLoaded) {
                loadYOLOModel();
            }

            // Appliquer la détection YOLO
            detectObjectsYOLO(currentCVImage);

            // Afficher le résultat dans labelImageDisplay
            cv::Mat displayImage;
            cv::cvtColor(currentCVImage, displayImage, cv::COLOR_BGR2RGB);
            QImage qImage(displayImage.data, displayImage.cols, displayImage.rows,
                          displayImage.step, QImage::Format_RGB888);
            currentPixmap = QPixmap::fromImage(qImage);
            ui->labelImageDisplay->setPixmap(
                currentPixmap.scaled(ui->labelImageDisplay->size(),
                                     Qt::KeepAspectRatio,
                                     Qt::SmoothTransformation)
                );

            // (Optionnel) Afficher le nom du fichier si tu veux, ou pas du tout

        }
    }
}


void Res::on_btnUpload_clicked() {
    QString filePath = QFileDialog::getOpenFileName(this,
                                                    "Sélectionner une image",
                                                    QDir::homePath(),
                                                    "Images (*.jpg *.png *.jpeg)");

    if (filePath.isEmpty()) return;

    // Charger l'image avec OpenCV
    currentCVImage = cv::imread(filePath.toStdString());
    if (currentCVImage.empty()) {
        QMessageBox::warning(this, "Erreur", "Impossible de charger l'image avec OpenCV");
        return;
    }

    // Détection YOLO
    detectObjectsYOLO(currentCVImage);

    // Afficher les résultats
    QFileInfo fileInfo(filePath);


    // Convertir pour affichage Qt
    cv::Mat displayImage;
    cv::cvtColor(currentCVImage, displayImage, cv::COLOR_BGR2RGB);
    QImage qImage(displayImage.data,
                  displayImage.cols,
                  displayImage.rows,
                  displayImage.step,
                  QImage::Format_RGB888);

    currentPixmap = QPixmap::fromImage(qImage);
    ui->labelImageDisplay->setPixmap(
        currentPixmap.scaled(ui->labelImageDisplay->size(),
                             Qt::KeepAspectRatio,
                             Qt::SmoothTransformation)
        );
}


// Dans ressources.cpp
void Res::loadYOLOModel() {
    QMutexLocker locker(&m_detectionMutex);

    try {
        // Charger le modèle avec des chemins absolus
        QString cfgPath = "C:/yolo_model/yolov4-tiny.cfg";
        QString weightsPath = "C:/yolo_model/yolov4-tiny.weights";//modèle pré-entraîné.

        if (!QFile::exists(cfgPath) || !QFile::exists(weightsPath)) {
            qWarning() << "YOLO model files not found!";
            return;
        }
        //Charge le modèle avec OpenCV
        m_yoloNet = cv::dnn::readNetFromDarknet(cfgPath.toStdString(), weightsPath.toStdString());

        // Configuration du backend
        if (cv::cuda::getCudaEnabledDeviceCount() > 0) {
            m_yoloNet.setPreferableBackend(cv::dnn::DNN_BACKEND_CUDA);
            m_yoloNet.setPreferableTarget(cv::dnn::DNN_TARGET_CUDA);
            qDebug() << "Using CUDA acceleration";
        } else {
            m_yoloNet.setPreferableBackend(cv::dnn::DNN_BACKEND_OPENCV);
            m_yoloNet.setPreferableTarget(cv::dnn::DNN_TARGET_CPU);
            qDebug() << "Using CPU";
        }

        // Charger les noms de classes
        QString namesPath = "C:/yolo_model/coco.names";
        QFile namesFile(namesPath);
        if (namesFile.open(QIODevice::ReadOnly)) {
            m_classNames.clear();
            QTextStream in(&namesFile);
            while (!in.atEnd()) {
                m_classNames.push_back(in.readLine().toStdString());
            }
            qDebug() << "Loaded" << m_classNames.size() << "class names";
        } else {
            qWarning() << "Failed to open class names file";
        }

        m_yoloLoaded = true;
        qDebug() << "YOLO model loaded successfully";

    } catch (const cv::Exception& e) {
        qCritical() << "YOLO loading error:" << e.what();
        cleanupYOLO();
    }
}
void Res::detectObjectsYOLO(cv::Mat &frame) {
    if (!m_yoloLoaded || !m_detectionMutex.tryLock()) {
        return;
    }

    try {
        // Réduire la taille du blob pour accélérer le traitement
        cv::Mat blob = cv::dnn::blobFromImage(frame, 1/255.0, cv::Size(320, 320), cv::Scalar(), true, false);
        m_yoloNet.setInput(blob);

        // Seules les couches de sortie nécessaires
        static const std::vector<cv::String> outNames = m_yoloNet.getUnconnectedOutLayersNames();
        std::vector<cv::Mat> outputs;
        m_yoloNet.forward(outputs, outNames);

        // Augmenter les seuils pour réduire le nombre de détections
        const float confThreshold = 0.6f;  // Augmenté de 0.5 à 0.6
        const float nmsThreshold = 0.5f;
        std::vector<int> classIds;
        std::vector<float> confidences;
        std::vector<cv::Rect> boxes;

        // Analyse des résultats
        for (const auto& output : outputs) {
            for (int i = 0; i < output.rows; i++) {
                const float* data = output.ptr<float>(i);
                float confidence = data[4];

                if (confidence > confThreshold) {
                    cv::Mat scores = output.row(i).colRange(5, output.cols);
                    cv::Point classIdPoint;
                    double maxClassScore;
                    cv::minMaxLoc(scores, nullptr, &maxClassScore, nullptr, &classIdPoint);

                    if (maxClassScore > confThreshold) {
                        // Calcul de la boîte englobante
                        int centerX = static_cast<int>(data[0] * frame.cols);
                        int centerY = static_cast<int>(data[1] * frame.rows);
                        int width = static_cast<int>(data[2] * frame.cols);
                        int height = static_cast<int>(data[3] * frame.rows);
                        int left = centerX - width / 2;
                        int top = centerY - height / 2;

                        // Stockage des détections
                        classIds.push_back(classIdPoint.x);
                        confidences.push_back(static_cast<float>(maxClassScore));
                        boxes.emplace_back(left, top, width, height);
                    }
                }
            }
        }

        // Suppression des doublons (Non-Maximum Suppression)
        std::vector<int> indices;
        cv::dnn::NMSBoxes(boxes, confidences, confThreshold, nmsThreshold, indices);

        // Dessin des résultats
        for (int idx : indices) {
            const cv::Rect& box = boxes[idx];
            cv::rectangle(frame, box, cv::Scalar(0, 255, 0), 2);
            std::string label = cv::format("%s: %.2f", m_classNames[classIds[idx]].c_str(), confidences[idx]);
            cv::putText(frame, label, cv::Point(box.x, box.y - 5),
                        cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(0, 255, 0), 1);
        }
    } catch (const cv::Exception& e) {
        qCritical() << "Detection error:" << e.what();
    }

    m_detectionMutex.unlock();
}
void Res::cleanupYOLO() {
    //THREAD
    QMutexLocker locker(&m_detectionMutex);
    m_yoloNet = cv::dnn::Net();
    m_classNames.clear();
    m_yoloLoaded = false;
}

void Res::on_btnWebcamOpen_clicked() {
    if (!m_capture.isOpened()) {
        loadYOLOModel();

       m_capture.open(0, cv::CAP_DSHOW);
        if (m_capture.isOpened()) {
            // Paramètres optimisés
            m_capture.set(cv::CAP_PROP_FRAME_WIDTH, 640);
            m_capture.set(cv::CAP_PROP_FRAME_HEIGHT, 480);
            m_capture.set(cv::CAP_PROP_FPS, 30);
            m_capture.set(cv::CAP_PROP_BUFFERSIZE, 2);
            m_capture.set(cv::CAP_PROP_AUTOFOCUS, 0);
            //Lancement du thread de traitement
            m_processingFrame = true;
            m_processingThread = std::thread(&Res::processingLoop, this);
            ui->btnWebcamOpen->setText("Arrêter");
        }
    } else {
        m_processingFrame = false;
        if (m_processingThread.joinable()) {
            m_processingThread.join();
        }
        m_capture.release();
        cleanupYOLO();
        ui->btnWebcamOpen->setText("Démarrer");
    }
}
void Res::setupUSBConnection()
{
    // Démarrer ADB forward pour rediriger le port 8080 de Android
    m_adbProcess.start("adb", QStringList() << "forward" << "tcp:8080" << "tcp:8080");
    //3s
    if (!m_adbProcess.waitForStarted(3000)) {
        qDebug() << "ADB failed to start";
        return;
    }

    // Attendre la fin avec timeout
    if (!m_adbProcess.waitForFinished(3000)) {
        qDebug() << "ADB forward timed out";
        m_adbProcess.kill();
    }

    // Vérifier le résultat
    if (m_adbProcess.exitCode() != 0) {
        qDebug() << "ADB forward failed:" << m_adbProcess.readAllStandardError();
    }
}
void Res::switchToPCCamera() {
    m_currentCameraSource = CameraSource::PC;
    ui->recordphone->setText("Switch to Phone");
    //resolution
    if (!m_capture.isOpened()) {
        m_capture.open(0, cv::CAP_DSHOW);
        if (m_capture.isOpened()) {
            m_capture.set(cv::CAP_PROP_FRAME_WIDTH, 640);
            m_capture.set(cv::CAP_PROP_FRAME_HEIGHT, 480);
        }
    }
}
void Res::on_record_phone_clicked() {
    if (m_currentCameraSource == CameraSource::PHONE) {
        switchToPCCamera();
    } else {
        try {
            setupPhoneConnection();
            m_currentCameraSource = CameraSource::PHONE;
            ui->recordphone->setText("Switch to PC Cam");
        } catch (...) {
            QMessageBox::warning(this, "Connection Failed",
                                 "Could not connect to phone. Using PC camera.");
            switchToPCCamera();
        }
    }
}
void Res::setupPhoneConnection() {
    QString url = "http://192.168.1.189:8080/video";

    // Release existing connection
    if (m_phoneCapture.isOpened()) {
        m_phoneCapture.release();
    }

    // Try multiple approaches
    m_phoneCapture.open(url.toStdString(), cv::CAP_FFMPEG);

    if (!m_phoneCapture.isOpened()) {
        // Try with MJPEG specific parameters
        m_phoneCapture.open(url.toStdString() + "?type=.mjpeg", cv::CAP_FFMPEG);
    }

    if (m_phoneCapture.isOpened()) {
        // Configure stream settings
        m_phoneCapture.set(cv::CAP_PROP_BUFFERSIZE, 3);
        m_phoneCapture.set(cv::CAP_PROP_FPS, 15);
        m_phoneCapture.set(cv::CAP_PROP_FRAME_WIDTH, 640);
        m_phoneCapture.set(cv::CAP_PROP_FRAME_HEIGHT, 480);

        // Verify connection
        cv::Mat testFrame;
        if (!m_phoneCapture.read(testFrame) || testFrame.empty()) {
            m_phoneCapture.release();
            throw std::runtime_error("Failed to read initial frame");
        }
    }
}

void Res::processFrame() {
    //variable statique pour suivre le nombre de tentatives de reconnexion à la caméra du téléphone.
    static int connectionRetries = 0;
    bool frameRead = false; //indicateur de succès de la lecture du frame.

    cv::Mat frame;//L'image capturée

    if (m_currentCameraSource == CameraSource::PHONE) {
        if (!m_phoneCapture.isOpened() && connectionRetries < 5) {
            qDebug() << "Reconnecting to phone camera... Attempt" << connectionRetries + 1;
            setupPhoneConnection();
            connectionRetries++;
            return;
        }

        if (!m_phoneCapture.read(frame)) {
            qDebug() << "Failed to read frame from phone";
            if (++connectionRetries > 5) {
                QMessageBox::warning(this, "Connection Lost",
                                     "Lost connection to phone camera. Switching to PC camera.");
                switchToPCCamera();
                return;
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(200));
            return;
        }
        connectionRetries = 0; // Reset on successful read
    }

    // Ajoutez un délai si nécessaire
    static auto lastCaptureTime = std::chrono::steady_clock::now();
    auto now = std::chrono::steady_clock::now();
    //auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(now - lastCaptureTime).count();

    /* if (elapsed < 30) { // ~30 FPS
        return;
    }*/
    lastCaptureTime = now;

    // Essayez plusieurs fois de lire le frame
    for (int i = 0; i < 3; ++i) {
        if (m_currentCameraSource == CameraSource::PHONE && m_phoneCapture.isOpened()) {
            frameRead = m_phoneCapture.read(frame);
        } else if (m_currentCameraSource == CameraSource::PC && m_capture.isOpened()) {
            frameRead = m_capture.read(frame);
        }

        if (frameRead && !frame.empty()) break;
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    if (!frameRead || frame.empty()) {
        qDebug() << "Frame read failed after 3 attempts";
        return;
    }


    if (m_currentCameraSource == CameraSource::PHONE && m_phoneCapture.isOpened()) {
        frameRead = m_phoneCapture.read(frame);
    } else if (m_currentCameraSource == CameraSource::PC && m_capture.isOpened()) {
        frameRead = m_capture.read(frame);
    }

    if (!frameRead || frame.empty()) {
        qDebug() << "Frame read failed";
        return;
    }

    m_frameQueueSemaphore.acquire();
    if (m_frameQueue.size() < 2) { // Limit queue size
        m_frameQueue.enqueue(frame);
    }
    m_frameQueueSemaphore.release();

    if (m_yoloLoaded && m_detectionMutex.tryLock()) {
        // On lock ici et on déverrouillera dans le thread YOLO
        processFrameWithYOLO();
    } else {
        displayFrame(frame);
    }

}

void Res::processFrameWithYOLO() {
    m_frameQueueSemaphore.acquire();

    cv::Mat frame;
    {
        QMutexLocker locker(&m_frameMutex);
        if (m_frameQueue.isEmpty()) {
            return;
        }
        //récupère un frame
        frame = m_frameQueue.dequeue();
    }

    // Exécuter la détection dans un thread séparé
    QFuture<void> future = QtConcurrent::run([this, frame]() {

        if (!m_detectionMutex.tryLock()) {
            return;
        }
        try {
            // Créer le blob avec des paramètres optimisés
            cv::Mat resizedFrame;
            cv::resize(frame, resizedFrame, cv::Size(320, 320)); // ou 416
            cv::Mat blob = cv::dnn::blobFromImage(resizedFrame, 1/255.0, cv::Size(320, 320),
                                                  cv::Scalar(), true, false, CV_32F);


            m_yoloNet.setInput(blob);

            // Forward pass asynchrone
            std::vector<cv::Mat> outputs;
            m_yoloNet.forward(outputs, m_yoloNet.getUnconnectedOutLayersNames());

            // Paramètres de détection
            const float confThreshold = 0.5f;
            const float nmsThreshold = 0.4f;
            std::vector<cv::Rect> boxes;
            std::vector<float> confidences;
            std::vector<int> classIds;

            // Traitement optimisé des outputs
            for (const auto& output : outputs) {
                const float* data = reinterpret_cast<float*>(output.data);
                for (int i = 0; i < output.rows; ++i, data += output.cols) {
                    float confidence = data[4];
                    if (confidence > confThreshold) {
                        cv::Mat scores = output.row(i).colRange(5, output.cols);
                        cv::Point classId;
                        double maxScore;
                        cv::minMaxLoc(scores, nullptr, &maxScore, nullptr, &classId);

                        if (maxScore > confThreshold) {
                            int cx = static_cast<int>(data[0] * frame.cols);
                            int cy = static_cast<int>(data[1] * frame.rows);
                            int w = static_cast<int>(data[2] * frame.cols);
                            int h = static_cast<int>(data[3] * frame.rows);

                            boxes.emplace_back(cx - w/2, cy - h/2, w, h);
                            confidences.push_back(static_cast<float>(maxScore));
                            classIds.push_back(classId.x);
                        }
                    }
                }
            }

            // NMS optimisé
            std::vector<int> indices;
            //Non-Maximum Suppression:élimine les détections redondantes.
            cv::dnn::NMSBoxes(boxes, confidences, confThreshold, nmsThreshold, indices);

            // Dessiner les résultats
            cv::Mat resultFrame = frame.clone();
            for (int idx : indices) {
                cv::Rect box = boxes[idx];
                cv::rectangle(resultFrame, box, cv::Scalar(0, 255, 0), 2);

                std::string label = m_classNames[classIds[idx]] + ": " +
                                    cv::format("%.2f", confidences[idx]);

                int baseline = 0;
                cv::Size textSize = cv::getTextSize(label, cv::FONT_HERSHEY_SIMPLEX,
                                                    0.5, 1, &baseline);

                cv::rectangle(resultFrame,
                              cv::Point(box.x, box.y - textSize.height - 5),
                              cv::Point(box.x + textSize.width, box.y),
                              cv::Scalar(0, 255, 0), cv::FILLED);

                cv::putText(resultFrame, label, cv::Point(box.x, box.y - 5),
                            cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 0, 0), 1);
            }

            // Afficher le résultat
            QMetaObject::invokeMethod(this, [this, resultFrame]() {
                displayFrame(resultFrame);
            }, Qt::QueuedConnection);

        } catch (const cv::Exception& e) {
            qCritical() << "Detection error:" << e.what();
        }

        m_detectionMutex.unlock();
    });

    m_detectionFutures.append(future);
    cleanupFinishedFutures();
}
void Res::cleanupFinishedFutures() {
    m_detectionFutures.erase(
        std::remove_if(m_detectionFutures.begin(), m_detectionFutures.end(),
                       [](const QFuture<void>& f) { return f.isFinished(); }),
        m_detectionFutures.end());
}
//convertit une image OpenCV en QImage et l'affiche dans un QLabel.
void Res::displayFrame(const cv::Mat &frame) {
    cv::Mat displayFrame;
    cv::cvtColor(frame, displayFrame, cv::COLOR_BGR2RGB);

    QImage img(displayFrame.data, displayFrame.cols, displayFrame.rows,
               displayFrame.step, QImage::Format_RGB888);

    QPixmap pixmap = QPixmap::fromImage(img);
    if (!pixmap.isNull()) {
        ui->label_11->setPixmap(pixmap.scaled(
            ui->label_11->size(),
            Qt::IgnoreAspectRatio,
            Qt::SmoothTransformation));
    }
}
void Res::processingLoop() {
    cv::Mat frame;
    auto lastProcessTime = std::chrono::steady_clock::now();

    while (m_processingFrame) {
        // Limiter le taux de traitement
        auto now = std::chrono::steady_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(now - lastProcessTime).count();
        if (elapsed < 40) {  // ~25 FPS
            std::this_thread::sleep_for(std::chrono::milliseconds(5));
            continue;
        }
        lastProcessTime = now;

        // Lire depuis la source appropriée
        bool frameRead = false;
        if (m_currentCameraSource == CameraSource::PHONE) {
            frameRead = m_phoneCapture.read(frame);
        } else {
            frameRead = m_capture.read(frame);
        }

        if (!frameRead || frame.empty()) {
            qDebug() << "Failed to read frame from current source";
            continue;
        }

        // Traitement du frame
        cv::Mat processedFrame;
        cv::resize(frame, processedFrame, cv::Size(320, 320));

        // Ajouter à la file d'attente
        {
            QMutexLocker locker(&m_frameMutex);
            if (m_frameQueue.size() < 3) {
                m_frameQueue.enqueue(processedFrame.clone());
                m_frameQueueSemaphore.release();
            }
        }

        // Détection ou affichage
        if (m_yoloLoaded) {
            processFrameWithYOLO();
        } else {
            displayFrame(frame);
        }
    }
}
void Res::onCatalogueClicked()
{
    CatalogueDialog dialog(this);
    dialog.loadResources();
    dialog.exec(); // Open the catalog dialog
}

