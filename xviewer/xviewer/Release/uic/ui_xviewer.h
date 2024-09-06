/********************************************************************************
** Form generated from reading UI file 'xviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XVIEWER_H
#define UI_XVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "xcalendar.h"

QT_BEGIN_NAMESPACE

class Ui_XViewerClass
{
public:
    QWidget *head;
    QWidget *logo;
    QWidget *head_button;
    QPushButton *close;
    QPushButton *min;
    QPushButton *max;
    QPushButton *normal;
    QLabel *status;
    QPushButton *preview;
    QPushButton *playback;
    QWidget *body;
    QWidget *left;
    QListWidget *cam_list;
    QPushButton *add_cam;
    QPushButton *set_cam;
    QPushButton *del_cam;
    QWidget *cams;
    QWidget *playback_wid;
    QListWidget *time_list;
    XCalendar *cal;

    void setupUi(QWidget *XViewerClass)
    {
        if (XViewerClass->objectName().isEmpty())
            XViewerClass->setObjectName(QString::fromUtf8("XViewerClass"));
        XViewerClass->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/XViewer/img/xv.ico"), QSize(), QIcon::Normal, QIcon::Off);
        XViewerClass->setWindowIcon(icon);
        XViewerClass->setStyleSheet(QString::fromUtf8("/*\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #473C8B; /*\350\203\214\346\231\257\350\211\262*/ \n"
"	border-style: outset;\n"
"	border-radius:5px; /*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
"	border-color: #8B7355;\n"
"	font: bold 14px;\n"
"	color:white; /*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
"	font-family:\351\273\221\344\275\223;\n"
"	padding: 4px;\n"
"}\n"
"\n"
"QPushButton:!hover\n"
"{\n"
"	background-color: #473C8B; /*\350\203\214\346\231\257\350\211\262*/ \n"
"	border-style: outset;\n"
"	border-radius:5px; /*\350\276\271\347\225\214\345\234\206\346\273\221*/\n"
"	border-color: #8B7355;\n"
"	font: bold 12px;\n"
"	color:white; /*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
"	font-family:\351\273\221\344\275\223;\n"
"	padding: 4px;\n"
"}\n"
"\n"
"/* \351\241\266\351\203\250\346\240\267\345\274\217 */\n"
"#XViewerClass {\n"
"    background-color: #333333;\n"
"    border-radius: 0px;\n"
"}\n"
"#head\n"
"{\n"
"bac"
                        "kground-color:#3c3c3c;\n"
"}\n"
"#logo\n"
"{\n"
"	background-image: url(:/XViewer/img/logo_150_40.png);\n"
"}\n"
"#close\n"
"{\n"
"background-image: url(:/XViewer/img/close.png);\n"
"}\n"
"#min\n"
"{\n"
"background-image: url(:/XViewer/img/min.png);\n"
"}\n"
"#max\n"
"{\n"
"background-image: url(:/XViewer/img/max.png);\n"
"}\n"
"#normal\n"
"{\n"
"background-image: url(:/XViewer/img/normal.png);\n"
"}\n"
"/* body \346\274\224\347\244\272*/\n"
"#body\n"
"{\n"
"background-color: #212121;\n"
"}\n"
"#left\n"
"{\n"
"	background-color: #252525;\n"
"}\n"
"#cams\n"
"{\n"
"background-color: #1e1e1e;\n"
"}\n"
"#status\n"
"{\n"
"	 color: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #000000, stop:1 #808080); /* \344\273\216\351\273\221\350\211\262\345\210\260\347\201\260\350\211\262\346\270\220\345\217\230 */\n"
"}\n"
"/*\350\217\234\345\215\225\346\214\211\351\222\256\345\210\207\346\215\242\346\240\267\345\274\217*/\n"
"#preview\n"
"{\n"
"	background-color: rgb(50,50,50)\n"
"}\n"
"#playback\n"
"{\n"
"	background-color:"
                        " rgb(50,50,50)\n"
"}\n"
"#preview:checked\n"
"{\n"
"	background-color: rgb(0,102,184)\n"
"}\n"
"#playback:checked\n"
"{\n"
"	background-color: rgb(0,102,184)\n"
"}\n"
""));
        head = new QWidget(XViewerClass);
        head->setObjectName(QString::fromUtf8("head"));
        head->setGeometry(QRect(0, 0, 800, 60));
        head->setMaximumSize(QSize(16777215, 60));
        head->setStyleSheet(QString::fromUtf8(""));
        logo = new QWidget(head);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(0, 5, 151, 41));
        head_button = new QWidget(head);
        head_button->setObjectName(QString::fromUtf8("head_button"));
        head_button->setGeometry(QRect(670, 0, 91, 41));
        close = new QPushButton(head_button);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(60, 10, 24, 20));
        close->setStyleSheet(QString::fromUtf8(""));
        close->setFlat(true);
        min = new QPushButton(head_button);
        min->setObjectName(QString::fromUtf8("min"));
        min->setGeometry(QRect(0, 10, 24, 20));
        min->setStyleSheet(QString::fromUtf8(""));
        min->setFlat(true);
        max = new QPushButton(head_button);
        max->setObjectName(QString::fromUtf8("max"));
        max->setGeometry(QRect(30, 10, 24, 20));
        max->setStyleSheet(QString::fromUtf8(""));
        max->setFlat(true);
        normal = new QPushButton(head_button);
        normal->setObjectName(QString::fromUtf8("normal"));
        normal->setGeometry(QRect(30, 10, 24, 20));
        normal->setStyleSheet(QString::fromUtf8(""));
        normal->setFlat(true);
        normal->raise();
        close->raise();
        min->raise();
        max->raise();
        status = new QLabel(head);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(520, 20, 101, 21));
        preview = new QPushButton(head);
        preview->setObjectName(QString::fromUtf8("preview"));
        preview->setGeometry(QRect(170, 30, 90, 30));
        preview->setCheckable(true);
        preview->setChecked(true);
        preview->setAutoExclusive(true);
        playback = new QPushButton(head);
        playback->setObjectName(QString::fromUtf8("playback"));
        playback->setGeometry(QRect(270, 30, 90, 30));
        playback->setCheckable(true);
        playback->setChecked(false);
        playback->setAutoExclusive(true);
        body = new QWidget(XViewerClass);
        body->setObjectName(QString::fromUtf8("body"));
        body->setGeometry(QRect(0, 60, 721, 401));
        left = new QWidget(body);
        left->setObjectName(QString::fromUtf8("left"));
        left->setGeometry(QRect(10, 10, 200, 600));
        left->setMaximumSize(QSize(200, 16777215));
        cam_list = new QListWidget(left);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/XViewer/img/cam.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(cam_list);
        __qlistwidgetitem->setIcon(icon1);
        cam_list->setObjectName(QString::fromUtf8("cam_list"));
        cam_list->setGeometry(QRect(0, 29, 201, 771));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cam_list->sizePolicy().hasHeightForWidth());
        cam_list->setSizePolicy(sizePolicy);
        cam_list->setDragEnabled(true);
        cam_list->setIconSize(QSize(50, 50));
        add_cam = new QPushButton(left);
        add_cam->setObjectName(QString::fromUtf8("add_cam"));
        add_cam->setGeometry(QRect(5, 5, 50, 21));
        set_cam = new QPushButton(left);
        set_cam->setObjectName(QString::fromUtf8("set_cam"));
        set_cam->setGeometry(QRect(65, 5, 50, 21));
        del_cam = new QPushButton(left);
        del_cam->setObjectName(QString::fromUtf8("del_cam"));
        del_cam->setGeometry(QRect(125, 5, 50, 21));
        cams = new QWidget(body);
        cams->setObjectName(QString::fromUtf8("cams"));
        cams->setGeometry(QRect(220, 10, 491, 371));
        playback_wid = new QWidget(body);
        playback_wid->setObjectName(QString::fromUtf8("playback_wid"));
        playback_wid->setGeometry(QRect(220, 19, 471, 341));
        time_list = new QListWidget(playback_wid);
        new QListWidgetItem(time_list);
        time_list->setObjectName(QString::fromUtf8("time_list"));
        time_list->setGeometry(QRect(0, 0, 131, 600));
        sizePolicy.setHeightForWidth(time_list->sizePolicy().hasHeightForWidth());
        time_list->setSizePolicy(sizePolicy);
        cal = new XCalendar(playback_wid);
        cal->setObjectName(QString::fromUtf8("cal"));
        cal->setGeometry(QRect(140, 0, 321, 341));
        sizePolicy.setHeightForWidth(cal->sizePolicy().hasHeightForWidth());
        cal->setSizePolicy(sizePolicy);

        retranslateUi(XViewerClass);
        QObject::connect(close, SIGNAL(clicked()), XViewerClass, SLOT(close()));
        QObject::connect(min, SIGNAL(clicked()), XViewerClass, SLOT(showMinimized()));
        QObject::connect(max, SIGNAL(clicked()), XViewerClass, SLOT(MaxWindow()));
        QObject::connect(normal, SIGNAL(clicked()), XViewerClass, SLOT(NormalWindow()));
        QObject::connect(add_cam, SIGNAL(clicked()), XViewerClass, SLOT(AddCam()));
        QObject::connect(set_cam, SIGNAL(clicked()), XViewerClass, SLOT(SetCam()));
        QObject::connect(del_cam, SIGNAL(clicked()), XViewerClass, SLOT(DelCam()));
        QObject::connect(preview, SIGNAL(clicked()), XViewerClass, SLOT(Preview()));
        QObject::connect(playback, SIGNAL(clicked()), XViewerClass, SLOT(Playback()));
        QObject::connect(cam_list, SIGNAL(clicked(QModelIndex)), XViewerClass, SLOT(SelectCamera(QModelIndex)));
        QObject::connect(cal, SIGNAL(clicked(QDate)), XViewerClass, SLOT(SelectDate(QDate)));
        QObject::connect(time_list, SIGNAL(activated(QModelIndex)), XViewerClass, SLOT(PlayVideo(QModelIndex)));

        QMetaObject::connectSlotsByName(XViewerClass);
    } // setupUi

    void retranslateUi(QWidget *XViewerClass)
    {
        XViewerClass->setWindowTitle(QCoreApplication::translate("XViewerClass", "XViewer", nullptr));
        close->setText(QString());
        min->setText(QString());
        max->setText(QString());
        normal->setText(QString());
        status->setText(QCoreApplication::translate("XViewerClass", "\347\233\221\346\216\247\344\270\255...", nullptr));
        preview->setText(QCoreApplication::translate("XViewerClass", "\351\242\204\350\247\210", nullptr));
        playback->setText(QCoreApplication::translate("XViewerClass", "\345\233\236\346\224\276", nullptr));

        const bool __sortingEnabled = cam_list->isSortingEnabled();
        cam_list->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = cam_list->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("XViewerClass", "cmera", nullptr));
        cam_list->setSortingEnabled(__sortingEnabled);

        add_cam->setText(QCoreApplication::translate("XViewerClass", "\346\226\260\345\242\236", nullptr));
        set_cam->setText(QCoreApplication::translate("XViewerClass", "\344\277\256\346\224\271", nullptr));
        del_cam->setText(QCoreApplication::translate("XViewerClass", "\345\210\240\351\231\244", nullptr));

        const bool __sortingEnabled1 = time_list->isSortingEnabled();
        time_list->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem1 = time_list->item(0);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("XViewerClass", "20:30:59", nullptr));
        time_list->setSortingEnabled(__sortingEnabled1);

    } // retranslateUi

};

namespace Ui {
    class XViewerClass: public Ui_XViewerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XVIEWER_H
