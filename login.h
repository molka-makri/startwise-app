#ifndef LOGIN_H
#define LOGIN_H
#include <opencv2/objdetect.hpp>
#include <opencv2/imgproc.hpp>
#include <QDialog>
#include <QCamera>
#include <QMediaCaptureSession>
#include <QImageCapture>
#include <QImage>
#include <QTimer>
#include <QPixmap>
#include <opencv2/opencv.hpp>
#include <QThread>
#include <opencv2/dnn.hpp>
#include <opencv2/features2d.hpp>
#include <opencv2/highgui.hpp>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    static QString userRole;
    QString getUserRole() const;

    QString getUserName() const;
    QString getUserEmail() const;
    QPixmap getUserPhoto() const { return userPhoto; }
    void handleRecognitionResult(bool success, const QString &name, const QString &role, const QString &email);
    bool validateFacialRecognition(const cv::Mat &detectedFace);
    double calculateEyebrowScore(const cv::Mat &faceImage);
    double calculateSmileScore(const cv::Mat &faceImage);
    QString detectEmotion(const cv::Mat &faceImage);
    void initializeCamera();
    void processVideoFrameAsync(const QImage &image);

signals:
    void startRecognition();

private slots:
    void on_btnFacialRecognition_clicked();
    void handleLogin(); // Slot pour gérer le clic sur le bouton "Sign In"
    void processCapturedImage(int id, const QImage &image); // Nouveau slot pour traiter l'image capturée
    void processVideoFrame(const QImage &image);
    void handleVideoFrame(const QVideoFrame &frame);
    void handleCameraFrame(const QVideoFrame &frame);
    void processFacialRecognition();
    void handleRecognitionResult(bool success, const QString &userName = "", const QString &userRole = "");
private:
    Ui::Login *ui;
    QThread *workerThread;
    void processFrameForDetection(const QImage &image);

    QVideoSink *videoSink;
    enum RecognitionState {
        Idle,
        DetectingSmile,
        RecognizingFace,
        Completed
    };

    bool isRecognized = false;
    void setRecognitionState(RecognitionState state);
    bool detectSmile(const QImage &image);
    void resetRecognition();
    bool isReadyToEnter;
    bool validateCredentials(const QString &email, const QString &password);
    bool performFacialRecognition(const cv::Mat &frame); // Vérifie les identifiants dans la base de données
    bool performFacialRecognition(const QImage &image);
    void displayMessage(const QString &message, bool isError = false);
    bool isCameraActive;
    RecognitionState m_recognitionState;
    QImage m_lastCapturedImage;
    QCamera *camera;
    QMediaCaptureSession *captureSession;
    //QImageCapture *imageCapture; // Nouveau membre pour capturer des images
    QTimer *recognitionTimer;
    QString userName;  // Nom complet de l'utilisateur
    QString userEmail; // Email de l'utilisateur
    QPixmap userPhoto;
    void drawDetectionResults(cv::Mat &frame);
    void detectAndDrawSmile(cv::Mat &frame, const cv::Mat &face, const cv::Rect &faceRect);



};

#endif // LOGIN_H
