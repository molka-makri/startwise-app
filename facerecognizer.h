#ifndef FACERECOGNIZER_H
#define FACERECOGNIZER_H
#include <QObject>
#include <opencv2/opencv.hpp>
#include <opencv2/face.hpp>
#include <QObject>

class FaceRecognizer : public QObject {
    Q_OBJECT
public:
    explicit FaceRecognizer(QObject *parent = nullptr);

public slots:
    void processFrame(const QImage &frame);
    void loadDatabase();

signals:
    void recognitionResult(bool success, const QString &name, const QString &role);
    void smileDetected();
    void faceDetected();

private:
    cv::Ptr<cv::face::LBPHFaceRecognizer> m_recognizer;
    cv::CascadeClassifier m_faceCascade;
    cv::CascadeClassifier m_smileCascade;
    bool m_isDatabaseLoaded = false;

    cv::Mat detectAndExtractFace(const cv::Mat &frame);
    bool detectSmile(const cv::Mat &face);
};

#endif // FACERECOGNIZER_H
