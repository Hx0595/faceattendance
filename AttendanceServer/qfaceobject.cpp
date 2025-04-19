#include "qfaceobject.h"

//实现人脸的注册，以及人脸的查询
QFaceObject::QFaceObject(QObject *parent) : QObject(parent)
{
    //初始化人脸识别引擎 //调用人脸识别的函数，以及模块的路径 //五点检测人脸数据库模块
    seeta::ModeSetting FDmode("/home/hx/SeetaFace/bin/model/fd_2_00.dat",seeta::ModelSetting::CPU,0);
    seeta::ModeSetting PDmode("/home/hx/SeetaFace/bin/model/pd_2_00_pts5.dat",seeta::ModelSetting::CPU,0);
    seeta::ModeSetting FRmode("/home/hx/SeetaFace/bin/model/fr_2_10.dat",seeta::ModelSetting::CPU,0);
    this->fengineptr = new seeta::FaceEngine(FDmode,PDmode,FRmode);

    //导入已有的人脸数据库
    this->fengineptr->Load("./face.db");
}

QFaceObject::~QFaceObject()
{
    delete fengineptr;
}

//注册人脸
int64_t QFaceObject::face_register(cv::Mat &faceImage)
{
    //把opencv的Mat数据转化为seetaface的数据
    Seetaface simage;
    simage.data = faceImage.data;//数据
    simage.width = faceImage.cols;//长
    simage.height = faceImage.rows;//宽
    simage.channels = faceImage.channels();//通道

    int64_t faceid = this->fenginptr->Register(simage);//注册返回一个人脸id
    if(faceid >= 0){fengineptr->Save("./face.db");}//人脸注册成功，人脸数据存放进face.db文件
    return faceid;
}

//查询人脸
int QFaceObject::face_query(cv::Mat &faceImage)
{
    //把opencv的Mat数据转化为seetaface的数据
    Seetaface simage;
    simage.data = faceImage.data;//数据
    simage.width = faceImage.cols;//长
    simage.height = faceImage.rows;//宽
    simage.channels = faceImage.channels();//通道

    float similarity = 0;
    int64_t faceid = fengineptr->Query(simage,&similarity);//查询人脸id并返回，运行时间较长
    qDebug()<<"查询"<<faceid<<similarity
    if(similarity > 0.65)//人脸相似度大于0.85
    {
      emit send_faceid(faceid);//优化后的发送faceid;
    }else
    {
      emit send_faceid(-1);
    }
    return faceid;
}
