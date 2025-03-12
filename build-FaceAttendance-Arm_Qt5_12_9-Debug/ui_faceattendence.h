/********************************************************************************
** Form generated from reading UI file 'faceattendence.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEATTENDENCE_H
#define UI_FACEATTENDENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaceAttendence
{
public:
    QWidget *centralwidget;
    QWidget *videoWidget;
    QWidget *widgetLb;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *headpicLb;
    QLabel *videoLb;
    QWidget *widget_3;
    QLabel *titleLb;
    QLabel *headLb;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *numberEdit;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *nameEdit;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *departmentEdit;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *timeEdit;

    void setupUi(QMainWindow *FaceAttendence)
    {
        if (FaceAttendence->objectName().isEmpty())
            FaceAttendence->setObjectName(QString::fromUtf8("FaceAttendence"));
        FaceAttendence->resize(1024, 600);
        centralwidget = new QWidget(FaceAttendence);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        videoWidget = new QWidget(centralwidget);
        videoWidget->setObjectName(QString::fromUtf8("videoWidget"));
        videoWidget->setGeometry(QRect(0, 0, 480, 480));
        videoWidget->setStyleSheet(QString::fromUtf8(""));
        widgetLb = new QWidget(videoWidget);
        widgetLb->setObjectName(QString::fromUtf8("widgetLb"));
        widgetLb->setGeometry(QRect(100, 370, 271, 61));
        widgetLb->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgba(49, 50, 54,69);"));
        horizontalLayout_2 = new QHBoxLayout(widgetLb);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widgetLb);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(31, 21));
        label->setMaximumSize(QSize(31, 21));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/yes.png);"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widgetLb);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 25 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";\n"
"border:none;\n"
"background-color: rgba(49, 50, 54,0);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        headpicLb = new QLabel(videoWidget);
        headpicLb->setObjectName(QString::fromUtf8("headpicLb"));
        headpicLb->setGeometry(QRect(110, 60, 266, 266));
        headpicLb->setStyleSheet(QString::fromUtf8("border-image: url(:/crc.png);"));
        videoLb = new QLabel(videoWidget);
        videoLb->setObjectName(QString::fromUtf8("videoLb"));
        videoLb->setGeometry(QRect(0, 0, 600, 600));
        videoLb->raise();
        widgetLb->raise();
        headpicLb->raise();
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(563, 0, 461, 600));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color: rgb(37, 40, 49,0.9);\n"
"}\n"
"\n"
"QWidget#titleLb{\n"
"	\n"
"	font: 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QWidget#headLb{\n"
"	border-radius:75px;\n"
"}"));
        titleLb = new QLabel(widget_3);
        titleLb->setObjectName(QString::fromUtf8("titleLb"));
        titleLb->setGeometry(QRect(0, 0, 421, 61));
        titleLb->setAlignment(Qt::AlignCenter);
        headLb = new QLabel(widget_3);
        headLb->setObjectName(QString::fromUtf8("headLb"));
        headLb->setGeometry(QRect(130, 120, 150, 150));
        layoutWidget = new QWidget(widget_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 330, 411, 251));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(layoutWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color: rgb(37, 40, 49,0.9);\n"
"}\n"
"\n"
"QLabel{\n"
"	border:none;\n"
"	color: rgb(125, 100, 127);\n"
"	\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        numberEdit = new QLineEdit(widget_4);
        numberEdit->setObjectName(QString::fromUtf8("numberEdit"));
        numberEdit->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(numberEdit->sizePolicy().hasHeightForWidth());
        numberEdit->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(numberEdit);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(layoutWidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color: rgb(37, 40, 49,0.9);\n"
"}\n"
"\n"
"QLabel{\n"
"	border:none;\n"
"	color: rgb(125, 100, 127);\n"
"	\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        nameEdit = new QLineEdit(widget_5);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setEnabled(false);
        sizePolicy.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(nameEdit);


        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(layoutWidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color: rgb(37, 40, 49,0.9);\n"
"}\n"
"\n"
"QLabel{\n"
"	border:none;\n"
"	color: rgb(125, 100, 127);\n"
"	\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        departmentEdit = new QLineEdit(widget_6);
        departmentEdit->setObjectName(QString::fromUtf8("departmentEdit"));
        departmentEdit->setEnabled(false);
        sizePolicy.setHeightForWidth(departmentEdit->sizePolicy().hasHeightForWidth());
        departmentEdit->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(departmentEdit);


        verticalLayout->addWidget(widget_6);

        widget_7 = new QWidget(layoutWidget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color: rgb(37, 40, 49,0.9);\n"
"}\n"
"\n"
"QLabel{\n"
"	border:none;\n"
"	color: rgb(125, 100, 127);\n"
"	\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        horizontalLayout_6 = new QHBoxLayout(widget_7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget_7);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_6->addWidget(label_9);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        timeEdit = new QLineEdit(widget_7);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setEnabled(false);
        sizePolicy.setHeightForWidth(timeEdit->sizePolicy().hasHeightForWidth());
        timeEdit->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(timeEdit);


        verticalLayout->addWidget(widget_7);

        FaceAttendence->setCentralWidget(centralwidget);

        retranslateUi(FaceAttendence);

        QMetaObject::connectSlotsByName(FaceAttendence);
    } // setupUi

    void retranslateUi(QMainWindow *FaceAttendence)
    {
        FaceAttendence->setWindowTitle(QApplication::translate("FaceAttendence", "FaceAttendence", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("FaceAttendence", "\350\256\244\350\257\201\346\210\220\345\212\237", nullptr));
        headpicLb->setText(QString());
        videoLb->setText(QString());
        titleLb->setText(QApplication::translate("FaceAttendence", "\344\272\272\350\204\270\350\257\206\345\210\253\350\200\203\345\213\244\347\263\273\347\273\237", nullptr));
        headLb->setText(QString());
        label_6->setText(QApplication::translate("FaceAttendence", "\345\267\245\345\217\267", nullptr));
        numberEdit->setText(QApplication::translate("FaceAttendence", "0001", nullptr));
        label_7->setText(QApplication::translate("FaceAttendence", "\345\247\223\345\220\215", nullptr));
        nameEdit->setText(QApplication::translate("FaceAttendence", "0001", nullptr));
        label_8->setText(QApplication::translate("FaceAttendence", "\351\203\250\351\227\250", nullptr));
        departmentEdit->setText(QApplication::translate("FaceAttendence", "0001", nullptr));
        label_9->setText(QApplication::translate("FaceAttendence", "\346\227\266\351\227\264", nullptr));
        timeEdit->setText(QApplication::translate("FaceAttendence", "0001", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FaceAttendence: public Ui_FaceAttendence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEATTENDENCE_H
