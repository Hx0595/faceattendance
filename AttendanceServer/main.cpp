#include "attendancewin.h"

#include <QApplication>
#include <ui_selectwin.h>
#include <ui_selectwin.h>
#include <ui_selectwin.h>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <opencv/cv.hpp>

#include "registerwin.h"
#include "selectwin.h"

//员工信息表
//+------------+--------------+------+-----+---------+----------------+
//| Field      | Type         | Null | Key | Default | Extra          |
//+------------+--------------+------+-----+---------+----------------+
//| employeeID | int(11)      | NO   | PRI | NULL    | auto_increment |
//| name       | varchar(256) | YES  |     | NULL    |                |
//| sex        | varchar(32)  | YES  |     | NULL    |                |
//| birthday   | text         | YES  |     | NULL    |                |
//| address    | text         | YES  |     | NULL    |                |
//| phone      | text         | YES  |     | NULL    |                |
//| faceid     | int(11)      | YES  | UNI | NULL    |                |
//| headfile   | text         | YES  |     | NULL    |                |
//+------------+--------------+------+-----+---------+----------------+

//考勤表
//+----------------+-----------+------+-----+-------------------+-----------------------------+
//| Field          | Type      | Null | Key | Default           | Extra                       |
//+----------------+-----------+------+-----+-------------------+-----------------------------+
//| attendanceID   | int(11)   | NO   | PRI | NULL              | auto_increment              |
//| employeeID     | int(11)   | YES  |     | NULL              |                             |
//| attendanceTime | timestamp | NO   |     | CURRENT_TIMESTAMP | on update CURRENT_TIMESTAMP |
//+----------------+-----------+------+-----+-------------------+-----------------------------+

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //注册opencv的Mat类型数据
    qRegisterMetaType<cv::Mat>("cv::Mat&");
    qRegisterMetaType<cv::Mat>("cv::Mat");
    qRegisterMetaType<int64_t>("int64_t");

    //RegisterWin ww;
    //ww.show();

    //连接数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    //设置数据名称
    db.setDatabaseName("server.db");
    //打开数据库
    if(!db.open())
    {
        qDebug()<<db.lastError().text();
        return -1;
    }
    //创建员工信息表格
    QString createsql = "create table if not exists employee(employeeID integer primary key autoincrement,name varchar(256), sex varchar(32),"
                        "birthday text, address text, phone text, faceID integer unique, headfile text)";
    QSqlQuery query;
    if(!query.exec(createsql))
    {
       qDebug()<<query.lastError().text();
       return -1;
    }

    //考勤表格
    createsql = "create table if not exists attendance(attendaceID integer primary key autoincrement, employeeID integer,"
                "attendaceTime TimeStamp NOT NULL DEFAULT(datetime('now','localtime')))";
    if(!query.exec(createsql))
    {
       qDebug()<<query.lastError().text();
       return -1;
    }



    AttendanceWin w;
    w.show();

    //SelectWin sw;
    //sw.show();
    return a.exec();
}
