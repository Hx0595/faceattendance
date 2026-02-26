# 人脸识别考勤系统 - 开发环境与部署说明

## 硬件环境
- 核心开发板：i.MX6ULL Linux 开发板（采用 eMMC 启动方式）
- 视觉采集：USB 摄像头（支持 UVC 协议，780p 分辨率）
- 调试接口：USB 转串口线（用于连接 PC 与开发板）
- 调试存储：SD 卡（用于挂载传输程序与依赖库）
- 网络环境：开发板、Ubuntu 虚拟机、PC 处于同一局域网

## 软件环境
- 开发主机系统：Ubuntu 16.04 LTS
- 嵌入式系统内核：Linux 4.1.15
- 根文件系统：BusyBox 构建的轻量级根文件系统
- 开发工具链：Qt Creator 5.12.9（集成 ARM 交叉编译工具链）
- 核心依赖库：
  1. OpenCV 3.4.1（图像采集、预处理、人脸检测）
  2. SeetaFace 2（人脸特征提取、人脸比对）

## 系统烧录与调试工具
### 1. 系统烧录工具
- 工具名称：MfgTool
- 功能描述：将 U-Boot、Linux 内核（zImage）、设备树（.dtb）及根文件系统批量烧录至开发板 eMMC。

### 2. 串口调试工具
- 工具名称：SecureCRT
- 连接方式：通过 USB 转串口线建立连接
- 串口参数：波特率 115200，数据位 8，停止位 1，无校验位
- 功能描述：实时查看系统启动日志、内核打印信息及程序运行输出。

## 核心开发与调试流程
1. **系统部署**：使用 MfgTool 将嵌入式系统烧录至 eMMC，设置开发板为 eMMC 启动模式。
2. **程序编译**：在 Ubuntu 主机通过 Qt Creator 完成交叉编译，生成可在 ARM 架构运行的程序。
3. **文件传输**：将编译好的可执行文件、依赖库及资源文件拷贝至 SD 卡。
4. **挂载运行**：将 SD 卡插入开发板，挂载至系统目录，通过 SecureCRT 执行程序进行调试。
5. **网络通信**：确保开发板与服务端在同一网段，通过 TCP 协议完成人脸数据传输与考勤验证。

# 人脸识别考勤系统 - 项目结构说明

```text
faceattendance/ 
├── AttendanceServer/          # 考勤服务端
│   ├── AttendanceServer.pro   # 服务端Qt项目配置文件
│   ├── main.cpp               # 服务端程序入口
│   ├── attendancewin.h        
│   ├── attendancewin.cpp      # 服务端主窗口实现（TCP服务+人脸识别调度）
│   ├── attendancewin.ui       
│   ├── qfaceobject.h          
│   ├── qfaceobject.cpp        # 人脸识别核心类实现（SeetaFace/OpenCV封装）
│   ├── registerwin.h          
│   ├── registerwin.cpp        # 人脸注册窗口实现（员工信息录入+人脸注册）
│   ├── registerwin.ui         
│   ├── selectwin.h            
│   ├── selectwin.cpp          # 数据查询窗口实现（员工/考勤记录查询）
│   └── selectwin.ui           
├── FaceAttendance/            # 考勤终端（客户端）
│   ├── FaceAttendance.pro     # 终端Qt项目配置文件
│   ├── main.cpp               # 终端程序入口
│   ├── faceattendence.h       
│   ├── faceattendence.cpp     # 终端主窗口实现（摄像头采集+人脸检测+TCP通信）
│   ├── faceattendence.ui      
│   ├── image.qrc              # 图标资源文件
│   ├── crc.png                # 人脸框背景
│   └── yes.png                # 认证成功标识
├── .qmake.stash               
├── README.md                  
└── ENVIRONMENT.md                   
