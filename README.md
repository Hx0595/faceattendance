faceattendance/
├── AttendanceServer/                     # 考勤服务端
│   ├── AttendanceServer.pro              # 服务端Qt项目配置文件
│   ├── main.cpp                         # 服务端程序入口
│   ├── attendancewin.h                  # 服务端主窗口头文件
│   ├── attendancewin.cpp                # 服务端主窗口实现（TCP服务+人脸识别调度）
│   ├── attendancewin.ui                 # 服务端主窗口界面布局
│   ├── qfaceobject.h                    # 人脸识别核心类头文件
│   ├── qfaceobject.cpp                  # 人脸识别核心类实现（SeetaFace/OpenCV封装）
│   ├── registerwin.h                    # 人脸注册窗口头文件
│   ├── registerwin.cpp                  # 人脸注册窗口实现（员工信息录入+人脸注册）
│   ├── registerwin.ui                   # 人脸注册窗口界面布局
│   ├── selectwin.h                      # 数据查询窗口头文件
│   ├── selectwin.cpp                    # 数据查询窗口实现（员工/考勤记录查询）
│   └── selectwin.ui                    # 数据查询窗口界面布局
│
├── FaceAttendance/                      # 考勤终端（客户端）
│   ├── FaceAttendance.pro               # 终端Qt项目配置文件
│   ├── main.cpp                         # 终端程序入口
│   ├── faceattendence.h                 # 终端主窗口头文件
│   ├── faceattendence.cpp               # 终端主窗口实现（摄像头采集+人脸检测+TCP通信）
│   ├── faceattendence.ui                # 终端主窗口界面布局
│   ├── image.qrc                       # 图标资源文件
│   ├── crc.png                         # 界面图标：人脸框背景
│   └── yes.png                         # 界面图标：认证成功标识
│
├── .qmake.stash                        # qmake临时缓存文件
├── README.md                           # 项目说明文档
└── read.txt                            # 项目补充说明

