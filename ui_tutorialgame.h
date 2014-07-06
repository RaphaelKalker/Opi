/********************************************************************************
** Form generated from reading UI file 'tutorialgame.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTORIALGAME_H
#define UI_TUTORIALGAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tutorialgame
{
public:
    QWidget *centralwidget;
    QLabel *EDM;
    QPushButton *pushButton_Start;
    QGraphicsView *graphicsView;
    QLabel *label_start;
    QLabel *label_M;
    QLabel *label_G;
    QLabel *label_B;
    QLabel *label_A;
    QPushButton *HIT;
    QLabel *BALL;
    QLabel *label;
    QPushButton *pushButton_2D_accel;

    void setupUi(QMainWindow *tutorialgame)
    {
        if (tutorialgame->objectName().isEmpty())
            tutorialgame->setObjectName(QString::fromUtf8("tutorialgame"));
        tutorialgame->resize(601, 500);
        tutorialgame->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg);\n"
"font: 75 8pt \"Arial\";"));
        centralwidget = new QWidget(tutorialgame);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        EDM = new QLabel(centralwidget);
        EDM->setObjectName(QString::fromUtf8("EDM"));
        EDM->setGeometry(QRect(0, 0, 31, 16));
        QPalette palette;
        QBrush brush(QColor(255, 85, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        EDM->setPalette(palette);
        pushButton_Start = new QPushButton(centralwidget);
        pushButton_Start->setObjectName(QString::fromUtf8("pushButton_Start"));
        pushButton_Start->setGeometry(QRect(270, 220, 60, 60));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Start->setIcon(icon);
        pushButton_Start->setIconSize(QSize(50, 50));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 20, 601, 481));
        graphicsView->setStyleSheet(QString::fromUtf8("font: 75 8pt \"Arial\";"));
        label_start = new QLabel(centralwidget);
        label_start->setObjectName(QString::fromUtf8("label_start"));
        label_start->setGeometry(QRect(190, 350, 231, 23));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_start->setPalette(palette1);
        label_start->setAlignment(Qt::AlignCenter);
        label_M = new QLabel(centralwidget);
        label_M->setObjectName(QString::fromUtf8("label_M"));
        label_M->setGeometry(QRect(30, 0, 81, 16));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_M->setPalette(palette2);
        label_G = new QLabel(centralwidget);
        label_G->setObjectName(QString::fromUtf8("label_G"));
        label_G->setGeometry(QRect(110, 0, 81, 16));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_G->setPalette(palette3);
        label_B = new QLabel(centralwidget);
        label_B->setObjectName(QString::fromUtf8("label_B"));
        label_B->setGeometry(QRect(200, 0, 81, 16));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_B->setPalette(palette4);
        label_A = new QLabel(centralwidget);
        label_A->setObjectName(QString::fromUtf8("label_A"));
        label_A->setGeometry(QRect(280, 0, 91, 16));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_A->setPalette(palette5);
        HIT = new QPushButton(centralwidget);
        HIT->setObjectName(QString::fromUtf8("HIT"));
        HIT->setGeometry(QRect(200, 460, 211, 23));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        HIT->setPalette(palette6);
        BALL = new QLabel(centralwidget);
        BALL->setObjectName(QString::fromUtf8("BALL"));
        BALL->setGeometry(QRect(420, 210, 81, 81));
        BALL->setPixmap(QPixmap(QString::fromUtf8(":/images/images/Button-ball.png")));
        BALL->setScaledContents(true);
        BALL->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(460, 0, 131, 20));
        QPalette palette7;
        QBrush brush2(QColor(0, 0, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label->setPalette(palette7);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);
        pushButton_2D_accel = new QPushButton(centralwidget);
        pushButton_2D_accel->setObjectName(QString::fromUtf8("pushButton_2D_accel"));
        pushButton_2D_accel->setGeometry(QRect(370, 0, 81, 21));
        pushButton_2D_accel->setCursor(QCursor(Qt::PointingHandCursor));
        tutorialgame->setCentralWidget(centralwidget);
        graphicsView->raise();
        EDM->raise();
        pushButton_Start->raise();
        label_start->raise();
        label_M->raise();
        label_G->raise();
        label_B->raise();
        label_A->raise();
        HIT->raise();
        BALL->raise();
        label->raise();
        pushButton_2D_accel->raise();

        retranslateUi(tutorialgame);

        QMetaObject::connectSlotsByName(tutorialgame);
    } // setupUi

    void retranslateUi(QMainWindow *tutorialgame)
    {
        tutorialgame->setWindowTitle(QApplication::translate("tutorialgame", "MainWindow", 0, QApplication::UnicodeUTF8));
        EDM->setText(QApplication::translate("tutorialgame", "RF:", 0, QApplication::UnicodeUTF8));
        pushButton_Start->setText(QString());
        label_start->setText(QApplication::translate("tutorialgame", "Relax, wait for     <       to Start", 0, QApplication::UnicodeUTF8));
        label_M->setText(QApplication::translate("tutorialgame", "EMG", 0, QApplication::UnicodeUTF8));
        label_G->setText(QApplication::translate("tutorialgame", "Gamma", 0, QApplication::UnicodeUTF8));
        label_B->setText(QApplication::translate("tutorialgame", "Beta", 0, QApplication::UnicodeUTF8));
        label_A->setText(QApplication::translate("tutorialgame", "Alpha", 0, QApplication::UnicodeUTF8));
        HIT->setText(QApplication::translate("tutorialgame", "JAW or HIT (move ball into hole)", 0, QApplication::UnicodeUTF8));
        BALL->setText(QString());
        label->setText(QApplication::translate("tutorialgame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'PMingLiU'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Blue when Relaxed</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_2D_accel->setText(QApplication::translate("tutorialgame", "Posture Viewer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tutorialgame: public Ui_tutorialgame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTORIALGAME_H
