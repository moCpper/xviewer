/********************************************************************************
** Form generated from reading UI file 'xplayvideo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XPLAYVIDEO_H
#define UI_XPLAYVIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XPlayVideoClass
{
public:
    QWidget *video;
    QLabel *label;
    QSlider *speed;
    QLabel *speedtxt;
    QSlider *pos;
    QPushButton *play;

    void setupUi(QWidget *XPlayVideoClass)
    {
        if (XPlayVideoClass->objectName().isEmpty())
            XPlayVideoClass->setObjectName(QString::fromUtf8("XPlayVideoClass"));
        XPlayVideoClass->resize(600, 400);
        video = new QWidget(XPlayVideoClass);
        video->setObjectName(QString::fromUtf8("video"));
        video->setGeometry(QRect(-50, -20, 671, 411));
        label = new QLabel(XPlayVideoClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 54, 12));
        speed = new QSlider(XPlayVideoClass);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setGeometry(QRect(60, 10, 91, 16));
        speed->setMinimum(1);
        speed->setMaximum(20);
        speed->setPageStep(2);
        speed->setValue(10);
        speed->setOrientation(Qt::Horizontal);
        speedtxt = new QLabel(XPlayVideoClass);
        speedtxt->setObjectName(QString::fromUtf8("speedtxt"));
        speedtxt->setGeometry(QRect(160, 10, 21, 20));
        pos = new QSlider(XPlayVideoClass);
        pos->setObjectName(QString::fromUtf8("pos"));
        pos->setGeometry(QRect(260, 10, 331, 16));
        pos->setMinimum(1);
        pos->setMaximum(999);
        pos->setPageStep(100);
        pos->setOrientation(Qt::Horizontal);
        play = new QPushButton(XPlayVideoClass);
        play->setObjectName(QString::fromUtf8("play"));
        play->setGeometry(QRect(20, 370, 21, 21));
        play->setStyleSheet(QString::fromUtf8("background-image: url(:/XViewer/img/play.png);"));

        retranslateUi(XPlayVideoClass);
        QObject::connect(speed, SIGNAL(sliderReleased()), XPlayVideoClass, SLOT(SetSpeed()));
        QObject::connect(pos, SIGNAL(sliderReleased()), XPlayVideoClass, SLOT(PlayPos()));
        QObject::connect(play, SIGNAL(clicked()), XPlayVideoClass, SLOT(Pause()));
        QObject::connect(pos, SIGNAL(sliderMoved(int)), XPlayVideoClass, SLOT(Move()));

        QMetaObject::connectSlotsByName(XPlayVideoClass);
    } // setupUi

    void retranslateUi(QWidget *XPlayVideoClass)
    {
        XPlayVideoClass->setWindowTitle(QCoreApplication::translate("XPlayVideoClass", "XPlayVideo", nullptr));
        label->setText(QCoreApplication::translate("XPlayVideoClass", "\346\222\255\346\224\276\351\200\237\345\272\246\357\274\232", nullptr));
        speedtxt->setText(QCoreApplication::translate("XPlayVideoClass", "1", nullptr));
        play->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class XPlayVideoClass: public Ui_XPlayVideoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XPLAYVIDEO_H
