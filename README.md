faceattendance/
├── AttendanceServer/                          # 考勤服务端
│   ├── AttendanceServer.pro                   # 服务端 Qt 项目配置文件
│   ├── main.cpp                               # 服务端程序入口
│   ├── attendancewin.h                        
│   ├── attendancewin.cpp                      # 服务端主窗口实现（TCP服务+人脸识别调度）
│   ├── attendancewin.ui                       
│   ├── qfaceobject.h                          
│   ├── qfaceobject.cpp                        # 人脸识别核心类实现（SeetaFace/OpenCV封装）
│   ├── registerwin.h                          
│   ├── registerwin.cpp                        # 人脸注册窗口实现（员工信息录入+人脸注册）
│   ├── registerwin.ui                         
│   ├── selectwin.h                           
│   ├── selectwin.cpp                          # 数据查询窗口实现（员工/考勤记录查询）
│   └── selectwin.ui                           
│
├── FaceAttendance/                            # 考勤终端（客户端）
│   ├── FaceAttendance.pro                      # 终端 Qt 项目配置文件
│   ├── main.cpp                               # 终端程序入口
│   ├── faceattendence.h                       
│   ├── faceattendence.cpp                     # 终端主窗口实现（摄像头采集+人脸检测+TCP通信）
│   ├── faceattendence.ui                      
│   ├── image.qrc                              # 图标资源文件
│   ├── crc.png                                # 界面图标：人脸框背景
│   └── yes.png                                # 界面图标：认证成功标识
│
├── README.md                                  # 项目说明文档
└── read.txt                                   # 项目补充说明
