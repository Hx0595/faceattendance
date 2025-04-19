#ifndef QFACEOBJECT_H
#define QFACEOBJECT_H

#include <QObject>
//#include <seeta/FaceEngine.h> 人脸数据引擎的库
#include <opencv2/imgproc/imgproc_c.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv/cv.h>

//人脸数据存储，人脸检测，人脸识别
class QFaceObject : public QObject
{
    Q_OBJECT
public:
    explicit QFaceObject(QObject *parent = nullptr);
    ~QFaceObject();

public slots:
    int64_t face_register(cv::Mat& faceImage);//注册人脸
    int face_query(cv::Mat& faceImage);//查询人脸

signals:
    void send_faceid(int64_t faceid);//发送faceid

private:
    seeta::FaceEngine  *fengineptr

};

#endif // QFACEOBJECT_H
