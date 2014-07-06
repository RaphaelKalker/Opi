/********************************************************************************
** Form generated from reading UI file 'consolewindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLEWINDOW_H
#define UI_CONSOLEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsoleWindow
{
public:
    QWidget *centralWidget;
    QPushButton *rtDisplayPB;
    QPushButton *convertPB;
    QPushButton *profMgrPB;
    QPushButton *contIndPB;
    QLabel *contIDLa;
    QLabel *contFTagDTLa;
    QPushButton *contRefreshPB;
    QPushButton *contShutdownPB;
    QPushButton *sensAIndPB;
    QLabel *sensAIDLa;
    QPushButton *sensBIndPB;
    QRadioButton *sensARFRB;
    QRadioButton *sensAMMRB;
    QRadioButton *sensADTRB;
    QPushButton *sensAUnpairPB;
    QPushButton *sensShutdownPB;
    QRadioButton *sensBMMRB;
    QLabel *sensBIDLa;
    QRadioButton *sensBDTRB;
    QPushButton *sensBUnpairPB;
    QRadioButton *sensBRFRB;
    QPushButton *sensCIndPB;
    QRadioButton *sensCRFRB;
    QPushButton *sensCUnpairPB;
    QLabel *sensCIDLa;
    QRadioButton *sensCMMRB;
    QRadioButton *sensCDTRB;
    QRadioButton *sensDDTRB;
    QRadioButton *sensDMMRB;
    QPushButton *sensDIndPB;
    QLabel *sensDIDLa;
    QRadioButton *sensDRFRB;
    QPushButton *sensDUnpairPB;
    QPushButton *sensUPairPB;
    QPushButton *sensUIndPB;
    QLabel *sensUIDLa;
    QLabel *memIDLa;
    QPushButton *memIndPB;
    QPushButton *memUploadPB;
    QLabel *memFPktDTLa;
    QPushButton *bioFBPB;
    QPushButton *medAnalyzePB;
    QPushButton *slpAnalyzePB;
    QPushButton *tgPB;
    QPushButton *memErasePB;
    QPushButton *contTagUploadPB;
    QProgressBar *memFullQPB;
    QPushButton *aboutPB;

    void setupUi(QMainWindow *ConsoleWindow)
    {
        if (ConsoleWindow->objectName().isEmpty())
            ConsoleWindow->setObjectName(QString::fromUtf8("ConsoleWindow"));
        ConsoleWindow->setEnabled(true);
        ConsoleWindow->resize(581, 360);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/OPIICO.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConsoleWindow->setWindowIcon(icon);
        ConsoleWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg);\n"
"font: 75 8pt \"Arial\";"));
        centralWidget = new QWidget(ConsoleWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        rtDisplayPB = new QPushButton(centralWidget);
        rtDisplayPB->setObjectName(QString::fromUtf8("rtDisplayPB"));
        rtDisplayPB->setGeometry(QRect(170, 270, 76, 76));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        rtDisplayPB->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/Live-Display.png"), QSize(), QIcon::Normal, QIcon::Off);
        rtDisplayPB->setIcon(icon1);
        rtDisplayPB->setIconSize(QSize(70, 70));
        rtDisplayPB->setCheckable(false);
        rtDisplayPB->setChecked(false);
        convertPB = new QPushButton(centralWidget);
        convertPB->setObjectName(QString::fromUtf8("convertPB"));
        convertPB->setGeometry(QRect(90, 270, 76, 76));
        convertPB->setFont(font);
        convertPB->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/Data-File-Convert.png"), QSize(), QIcon::Normal, QIcon::Off);
        convertPB->setIcon(icon2);
        convertPB->setIconSize(QSize(70, 70));
        convertPB->setCheckable(false);
        profMgrPB = new QPushButton(centralWidget);
        profMgrPB->setObjectName(QString::fromUtf8("profMgrPB"));
        profMgrPB->setGeometry(QRect(10, 270, 76, 76));
        profMgrPB->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/Data-Setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        profMgrPB->setIcon(icon3);
        profMgrPB->setIconSize(QSize(70, 70));
        contIndPB = new QPushButton(centralWidget);
        contIndPB->setObjectName(QString::fromUtf8("contIndPB"));
        contIndPB->setEnabled(false);
        contIndPB->setGeometry(QRect(50, 2, 50, 50));
        contIndPB->setStyleSheet(QString::fromUtf8(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/images/images/logo.png"), QSize(), QIcon::Disabled, QIcon::Off);
        contIndPB->setIcon(icon4);
        contIndPB->setIconSize(QSize(48, 48));
        contIndPB->setCheckable(false);
        contIndPB->setFlat(true);
        contIDLa = new QLabel(centralWidget);
        contIDLa->setObjectName(QString::fromUtf8("contIDLa"));
        contIDLa->setGeometry(QRect(120, 20, 51, 16));
        contIDLa->setFont(font);
        contIDLa->setAlignment(Qt::AlignCenter);
        contFTagDTLa = new QLabel(centralWidget);
        contFTagDTLa->setObjectName(QString::fromUtf8("contFTagDTLa"));
        contFTagDTLa->setGeometry(QRect(170, 20, 151, 20));
        contFTagDTLa->setAlignment(Qt::AlignCenter);
        contRefreshPB = new QPushButton(centralWidget);
        contRefreshPB->setObjectName(QString::fromUtf8("contRefreshPB"));
        contRefreshPB->setGeometry(QRect(405, 5, 40, 40));
        contRefreshPB->setCursor(QCursor(Qt::ArrowCursor));
        contRefreshPB->setMouseTracking(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        contRefreshPB->setIcon(icon5);
        contRefreshPB->setIconSize(QSize(38, 38));
        contRefreshPB->setCheckable(false);
        contRefreshPB->setChecked(false);
        contShutdownPB = new QPushButton(centralWidget);
        contShutdownPB->setObjectName(QString::fromUtf8("contShutdownPB"));
        contShutdownPB->setGeometry(QRect(470, 5, 40, 40));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/shutdown-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        contShutdownPB->setIcon(icon6);
        contShutdownPB->setIconSize(QSize(38, 38));
        contShutdownPB->setCheckable(false);
        sensAIndPB = new QPushButton(centralWidget);
        sensAIndPB->setObjectName(QString::fromUtf8("sensAIndPB"));
        sensAIndPB->setEnabled(true);
        sensAIndPB->setGeometry(QRect(40, 50, 70, 27));
        sensAIndPB->setStyleSheet(QString::fromUtf8(""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/Paired-Device.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QString::fromUtf8(":/images/images/Paired-Device.png"), QSize(), QIcon::Disabled, QIcon::Off);
        sensAIndPB->setIcon(icon7);
        sensAIndPB->setIconSize(QSize(65, 25));
        sensAIndPB->setCheckable(false);
        sensAIndPB->setFlat(true);
        sensAIDLa = new QLabel(centralWidget);
        sensAIDLa->setObjectName(QString::fromUtf8("sensAIDLa"));
        sensAIDLa->setGeometry(QRect(140, 55, 71, 17));
        sensBIndPB = new QPushButton(centralWidget);
        sensBIndPB->setObjectName(QString::fromUtf8("sensBIndPB"));
        sensBIndPB->setEnabled(true);
        sensBIndPB->setGeometry(QRect(40, 80, 70, 27));
        sensBIndPB->setStyleSheet(QString::fromUtf8(""));
        sensBIndPB->setIcon(icon7);
        sensBIndPB->setIconSize(QSize(65, 25));
        sensBIndPB->setCheckable(false);
        sensBIndPB->setFlat(true);
        sensARFRB = new QRadioButton(centralWidget);
        sensARFRB->setObjectName(QString::fromUtf8("sensARFRB"));
        sensARFRB->setGeometry(QRect(220, 55, 41, 17));
        sensARFRB->setAutoExclusive(false);
        sensAMMRB = new QRadioButton(centralWidget);
        sensAMMRB->setObjectName(QString::fromUtf8("sensAMMRB"));
        sensAMMRB->setGeometry(QRect(270, 55, 51, 17));
        sensAMMRB->setAutoExclusive(false);
        sensADTRB = new QRadioButton(centralWidget);
        sensADTRB->setObjectName(QString::fromUtf8("sensADTRB"));
        sensADTRB->setGeometry(QRect(320, 55, 51, 17));
        sensADTRB->setAutoExclusive(false);
        sensAUnpairPB = new QPushButton(centralWidget);
        sensAUnpairPB->setObjectName(QString::fromUtf8("sensAUnpairPB"));
        sensAUnpairPB->setGeometry(QRect(390, 50, 70, 27));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/Unpaired-Device.png"), QSize(), QIcon::Normal, QIcon::Off);
        sensAUnpairPB->setIcon(icon8);
        sensAUnpairPB->setIconSize(QSize(65, 25));
        sensShutdownPB = new QPushButton(centralWidget);
        sensShutdownPB->setObjectName(QString::fromUtf8("sensShutdownPB"));
        sensShutdownPB->setGeometry(QRect(470, 50, 40, 166));
        sensShutdownPB->setIcon(icon6);
        sensShutdownPB->setIconSize(QSize(38, 38));
        sensShutdownPB->setCheckable(true);
        sensBMMRB = new QRadioButton(centralWidget);
        sensBMMRB->setObjectName(QString::fromUtf8("sensBMMRB"));
        sensBMMRB->setEnabled(true);
        sensBMMRB->setGeometry(QRect(270, 85, 51, 17));
        sensBMMRB->setAutoExclusive(false);
        sensBIDLa = new QLabel(centralWidget);
        sensBIDLa->setObjectName(QString::fromUtf8("sensBIDLa"));
        sensBIDLa->setGeometry(QRect(140, 85, 71, 17));
        sensBDTRB = new QRadioButton(centralWidget);
        sensBDTRB->setObjectName(QString::fromUtf8("sensBDTRB"));
        sensBDTRB->setEnabled(true);
        sensBDTRB->setGeometry(QRect(320, 85, 51, 17));
        sensBDTRB->setAutoExclusive(false);
        sensBUnpairPB = new QPushButton(centralWidget);
        sensBUnpairPB->setObjectName(QString::fromUtf8("sensBUnpairPB"));
        sensBUnpairPB->setGeometry(QRect(390, 80, 70, 27));
        sensBUnpairPB->setIcon(icon8);
        sensBUnpairPB->setIconSize(QSize(65, 25));
        sensBRFRB = new QRadioButton(centralWidget);
        sensBRFRB->setObjectName(QString::fromUtf8("sensBRFRB"));
        sensBRFRB->setEnabled(true);
        sensBRFRB->setGeometry(QRect(220, 85, 41, 17));
        sensBRFRB->setAutoExclusive(false);
        sensCIndPB = new QPushButton(centralWidget);
        sensCIndPB->setObjectName(QString::fromUtf8("sensCIndPB"));
        sensCIndPB->setEnabled(true);
        sensCIndPB->setGeometry(QRect(40, 110, 70, 27));
        sensCIndPB->setStyleSheet(QString::fromUtf8(""));
        sensCIndPB->setIcon(icon7);
        sensCIndPB->setIconSize(QSize(65, 25));
        sensCIndPB->setCheckable(false);
        sensCIndPB->setFlat(true);
        sensCRFRB = new QRadioButton(centralWidget);
        sensCRFRB->setObjectName(QString::fromUtf8("sensCRFRB"));
        sensCRFRB->setEnabled(true);
        sensCRFRB->setGeometry(QRect(220, 115, 41, 17));
        sensCRFRB->setAutoExclusive(false);
        sensCUnpairPB = new QPushButton(centralWidget);
        sensCUnpairPB->setObjectName(QString::fromUtf8("sensCUnpairPB"));
        sensCUnpairPB->setGeometry(QRect(390, 110, 70, 27));
        sensCUnpairPB->setIcon(icon8);
        sensCUnpairPB->setIconSize(QSize(65, 25));
        sensCIDLa = new QLabel(centralWidget);
        sensCIDLa->setObjectName(QString::fromUtf8("sensCIDLa"));
        sensCIDLa->setGeometry(QRect(140, 115, 71, 17));
        sensCMMRB = new QRadioButton(centralWidget);
        sensCMMRB->setObjectName(QString::fromUtf8("sensCMMRB"));
        sensCMMRB->setEnabled(true);
        sensCMMRB->setGeometry(QRect(270, 115, 51, 17));
        sensCMMRB->setAutoExclusive(false);
        sensCDTRB = new QRadioButton(centralWidget);
        sensCDTRB->setObjectName(QString::fromUtf8("sensCDTRB"));
        sensCDTRB->setEnabled(true);
        sensCDTRB->setGeometry(QRect(320, 115, 51, 17));
        sensCDTRB->setAutoExclusive(false);
        sensDDTRB = new QRadioButton(centralWidget);
        sensDDTRB->setObjectName(QString::fromUtf8("sensDDTRB"));
        sensDDTRB->setEnabled(true);
        sensDDTRB->setGeometry(QRect(320, 145, 51, 17));
        sensDDTRB->setAutoExclusive(false);
        sensDMMRB = new QRadioButton(centralWidget);
        sensDMMRB->setObjectName(QString::fromUtf8("sensDMMRB"));
        sensDMMRB->setEnabled(true);
        sensDMMRB->setGeometry(QRect(270, 145, 51, 17));
        sensDMMRB->setAutoExclusive(false);
        sensDIndPB = new QPushButton(centralWidget);
        sensDIndPB->setObjectName(QString::fromUtf8("sensDIndPB"));
        sensDIndPB->setEnabled(true);
        sensDIndPB->setGeometry(QRect(40, 140, 70, 27));
        sensDIndPB->setStyleSheet(QString::fromUtf8(""));
        sensDIndPB->setIcon(icon7);
        sensDIndPB->setIconSize(QSize(65, 25));
        sensDIndPB->setCheckable(false);
        sensDIndPB->setFlat(true);
        sensDIDLa = new QLabel(centralWidget);
        sensDIDLa->setObjectName(QString::fromUtf8("sensDIDLa"));
        sensDIDLa->setGeometry(QRect(140, 145, 71, 17));
        sensDRFRB = new QRadioButton(centralWidget);
        sensDRFRB->setObjectName(QString::fromUtf8("sensDRFRB"));
        sensDRFRB->setEnabled(true);
        sensDRFRB->setGeometry(QRect(220, 145, 41, 17));
        sensDRFRB->setAutoExclusive(false);
        sensDUnpairPB = new QPushButton(centralWidget);
        sensDUnpairPB->setObjectName(QString::fromUtf8("sensDUnpairPB"));
        sensDUnpairPB->setGeometry(QRect(390, 140, 70, 27));
        sensDUnpairPB->setIcon(icon8);
        sensDUnpairPB->setIconSize(QSize(65, 25));
        sensUPairPB = new QPushButton(centralWidget);
        sensUPairPB->setObjectName(QString::fromUtf8("sensUPairPB"));
        sensUPairPB->setGeometry(QRect(390, 190, 70, 27));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/Paired-Device.png"), QSize(), QIcon::Normal, QIcon::Off);
        sensUPairPB->setIcon(icon9);
        sensUPairPB->setIconSize(QSize(65, 25));
        sensUIndPB = new QPushButton(centralWidget);
        sensUIndPB->setObjectName(QString::fromUtf8("sensUIndPB"));
        sensUIndPB->setEnabled(true);
        sensUIndPB->setGeometry(QRect(40, 190, 70, 27));
        sensUIndPB->setStyleSheet(QString::fromUtf8(""));
        sensUIndPB->setIcon(icon7);
        sensUIndPB->setIconSize(QSize(65, 25));
        sensUIndPB->setCheckable(false);
        sensUIndPB->setFlat(true);
        sensUIDLa = new QLabel(centralWidget);
        sensUIDLa->setObjectName(QString::fromUtf8("sensUIDLa"));
        sensUIDLa->setGeometry(QRect(130, 195, 51, 17));
        sensUIDLa->setAlignment(Qt::AlignCenter);
        memIDLa = new QLabel(centralWidget);
        memIDLa->setObjectName(QString::fromUtf8("memIDLa"));
        memIDLa->setGeometry(QRect(130, 235, 51, 17));
        memIDLa->setAlignment(Qt::AlignCenter);
        memIndPB = new QPushButton(centralWidget);
        memIndPB->setObjectName(QString::fromUtf8("memIndPB"));
        memIndPB->setEnabled(true);
        memIndPB->setGeometry(QRect(40, 230, 70, 27));
        memIndPB->setFont(font);
        memIndPB->setStyleSheet(QString::fromUtf8(""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/MM.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon10.addFile(QString::fromUtf8(":/images/images/MM.png"), QSize(), QIcon::Disabled, QIcon::Off);
        memIndPB->setIcon(icon10);
        memIndPB->setIconSize(QSize(68, 25));
        memIndPB->setCheckable(false);
        memIndPB->setFlat(true);
        memUploadPB = new QPushButton(centralWidget);
        memUploadPB->setObjectName(QString::fromUtf8("memUploadPB"));
        memUploadPB->setGeometry(QRect(390, 230, 70, 27));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/images/uparrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        memUploadPB->setIcon(icon11);
        memUploadPB->setIconSize(QSize(20, 20));
        memFPktDTLa = new QLabel(centralWidget);
        memFPktDTLa->setObjectName(QString::fromUtf8("memFPktDTLa"));
        memFPktDTLa->setGeometry(QRect(180, 232, 131, 20));
        memFPktDTLa->setAlignment(Qt::AlignCenter);
        bioFBPB = new QPushButton(centralWidget);
        bioFBPB->setObjectName(QString::fromUtf8("bioFBPB"));
        bioFBPB->setGeometry(QRect(250, 270, 76, 76));
        bioFBPB->setFont(font);
        bioFBPB->setStyleSheet(QString::fromUtf8(""));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/images/Live-Biofeedback.png"), QSize(), QIcon::Normal, QIcon::Off);
        bioFBPB->setIcon(icon12);
        bioFBPB->setIconSize(QSize(70, 70));
        bioFBPB->setCheckable(false);
        medAnalyzePB = new QPushButton(centralWidget);
        medAnalyzePB->setObjectName(QString::fromUtf8("medAnalyzePB"));
        medAnalyzePB->setGeometry(QRect(330, 270, 76, 76));
        medAnalyzePB->setFont(font);
        medAnalyzePB->setStyleSheet(QString::fromUtf8(""));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/images/Meditation.png"), QSize(), QIcon::Normal, QIcon::Off);
        medAnalyzePB->setIcon(icon13);
        medAnalyzePB->setIconSize(QSize(70, 70));
        medAnalyzePB->setCheckable(false);
        slpAnalyzePB = new QPushButton(centralWidget);
        slpAnalyzePB->setObjectName(QString::fromUtf8("slpAnalyzePB"));
        slpAnalyzePB->setGeometry(QRect(410, 270, 76, 76));
        slpAnalyzePB->setFont(font);
        slpAnalyzePB->setStyleSheet(QString::fromUtf8(""));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/images/Sleep.png"), QSize(), QIcon::Normal, QIcon::Off);
        slpAnalyzePB->setIcon(icon14);
        slpAnalyzePB->setIconSize(QSize(70, 70));
        slpAnalyzePB->setCheckable(false);
        tgPB = new QPushButton(centralWidget);
        tgPB->setObjectName(QString::fromUtf8("tgPB"));
        tgPB->setGeometry(QRect(490, 270, 76, 76));
        tgPB->setFont(font);
        tgPB->setStyleSheet(QString::fromUtf8(""));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/images/game-applet-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        tgPB->setIcon(icon15);
        tgPB->setIconSize(QSize(70, 70));
        tgPB->setCheckable(false);
        memErasePB = new QPushButton(centralWidget);
        memErasePB->setObjectName(QString::fromUtf8("memErasePB"));
        memErasePB->setGeometry(QRect(470, 230, 41, 27));
        memErasePB->setIconSize(QSize(20, 20));
        contTagUploadPB = new QPushButton(centralWidget);
        contTagUploadPB->setObjectName(QString::fromUtf8("contTagUploadPB"));
        contTagUploadPB->setGeometry(QRect(330, 10, 51, 27));
        contTagUploadPB->setIcon(icon11);
        contTagUploadPB->setIconSize(QSize(20, 20));
        memFullQPB = new QProgressBar(centralWidget);
        memFullQPB->setObjectName(QString::fromUtf8("memFullQPB"));
        memFullQPB->setGeometry(QRect(310, 233, 71, 20));
        memFullQPB->setValue(24);
        memFullQPB->setTextVisible(false);
        memFullQPB->setInvertedAppearance(false);
        aboutPB = new QPushButton(centralWidget);
        aboutPB->setObjectName(QString::fromUtf8("aboutPB"));
        aboutPB->setGeometry(QRect(530, 5, 40, 40));
        ConsoleWindow->setCentralWidget(centralWidget);

        retranslateUi(ConsoleWindow);

        QMetaObject::connectSlotsByName(ConsoleWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ConsoleWindow)
    {
        ConsoleWindow->setWindowTitle(QApplication::translate("ConsoleWindow", "OPI Console", 0, QApplication::UnicodeUTF8));
        rtDisplayPB->setText(QString());
        convertPB->setText(QString());
        profMgrPB->setText(QString());
        contIndPB->setText(QString());
        contIDLa->setText(QApplication::translate("ConsoleWindow", "[ ? ]", 0, QApplication::UnicodeUTF8));
        contFTagDTLa->setText(QApplication::translate("ConsoleWindow", "<first tag date_time>", 0, QApplication::UnicodeUTF8));
        contRefreshPB->setText(QString());
        contShutdownPB->setText(QString());
        sensAIndPB->setText(QString());
        sensAIDLa->setText(QApplication::translate("ConsoleWindow", "[ A ] ( 194 )", 0, QApplication::UnicodeUTF8));
        sensBIndPB->setText(QString());
        sensARFRB->setText(QApplication::translate("ConsoleWindow", "RF", 0, QApplication::UnicodeUTF8));
        sensAMMRB->setText(QApplication::translate("ConsoleWindow", "MM", 0, QApplication::UnicodeUTF8));
        sensADTRB->setText(QApplication::translate("ConsoleWindow", "DTap", 0, QApplication::UnicodeUTF8));
        sensAUnpairPB->setText(QString());
        sensShutdownPB->setText(QString());
        sensBMMRB->setText(QApplication::translate("ConsoleWindow", "MM", 0, QApplication::UnicodeUTF8));
        sensBIDLa->setText(QApplication::translate("ConsoleWindow", "[ B ] ( 194 )", 0, QApplication::UnicodeUTF8));
        sensBDTRB->setText(QApplication::translate("ConsoleWindow", "DTap", 0, QApplication::UnicodeUTF8));
        sensBUnpairPB->setText(QString());
        sensBRFRB->setText(QApplication::translate("ConsoleWindow", "RF", 0, QApplication::UnicodeUTF8));
        sensCIndPB->setText(QString());
        sensCRFRB->setText(QApplication::translate("ConsoleWindow", "RF", 0, QApplication::UnicodeUTF8));
        sensCUnpairPB->setText(QString());
        sensCIDLa->setText(QApplication::translate("ConsoleWindow", "[ C ] ( 194 )", 0, QApplication::UnicodeUTF8));
        sensCMMRB->setText(QApplication::translate("ConsoleWindow", "MM", 0, QApplication::UnicodeUTF8));
        sensCDTRB->setText(QApplication::translate("ConsoleWindow", "DTap", 0, QApplication::UnicodeUTF8));
        sensDDTRB->setText(QApplication::translate("ConsoleWindow", "DTap", 0, QApplication::UnicodeUTF8));
        sensDMMRB->setText(QApplication::translate("ConsoleWindow", "MM", 0, QApplication::UnicodeUTF8));
        sensDIndPB->setText(QString());
        sensDIDLa->setText(QApplication::translate("ConsoleWindow", "[ D ] ( 194 )", 0, QApplication::UnicodeUTF8));
        sensDRFRB->setText(QApplication::translate("ConsoleWindow", "RF", 0, QApplication::UnicodeUTF8));
        sensDUnpairPB->setText(QString());
        sensUPairPB->setText(QString());
        sensUIndPB->setText(QString());
        sensUIDLa->setText(QApplication::translate("ConsoleWindow", " ( 194 )", 0, QApplication::UnicodeUTF8));
        memIDLa->setText(QApplication::translate("ConsoleWindow", " ( 194)", 0, QApplication::UnicodeUTF8));
        memIndPB->setText(QString());
        memUploadPB->setText(QString());
        memFPktDTLa->setText(QApplication::translate("ConsoleWindow", "<first entry date_time>", 0, QApplication::UnicodeUTF8));
        bioFBPB->setText(QString());
        medAnalyzePB->setText(QString());
        slpAnalyzePB->setText(QString());
        tgPB->setText(QString());
        memErasePB->setText(QApplication::translate("ConsoleWindow", "Erase", 0, QApplication::UnicodeUTF8));
        contTagUploadPB->setText(QString());
        aboutPB->setText(QApplication::translate("ConsoleWindow", "About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConsoleWindow: public Ui_ConsoleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLEWINDOW_H
