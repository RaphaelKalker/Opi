/********************************************************************************
** Form generated from reading UI file 'configwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGWINDOW_H
#define UI_CONFIGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigWindow
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *msgPTE;
    QFrame *line;
    QPushButton *ucForgetSensPB;
    QPushButton *ucReadEventsPB;
    QComboBox *ucSensValCB;
    QPushButton *ucSetZBPB;
    QComboBox *ucModOnOffCB;
    QPushButton *ucStatusPB;
    QPushButton *ucEraseEventsPB;
    QPushButton *ucCopySensPB;
    QPushButton *ucSetTimePB;
    QLabel *ucDevNumLa;
    QComboBox *ucZBValCB;
    QPushButton *ucWLMeasurePB;
    QLabel *mmSectionLa;
    QPushButton *tsSetPDNPB;
    QLineEdit *tsPDNValLE;
    QComboBox *tsRFModeValCB;
    QPushButton *tsSetRFTOPB;
    QComboBox *tsZBValCB;
    QPushButton *tsSetZBPB;
    QPushButton *tsSetRFModePB;
    QPushButton *tsSetTimePB;
    QPushButton *tsStatusPB;
    QPushButton *tsTogMMWritePB;
    QPushButton *mmChipErasePB;
    QComboBox *tsRFTOValCB;
    QPushButton *mmReadPktsPB;
    QFrame *line_2;
    QPushButton *ucShutdownPB;

    void setupUi(QMainWindow *ConfigWindow)
    {
        if (ConfigWindow->objectName().isEmpty())
            ConfigWindow->setObjectName(QString::fromUtf8("ConfigWindow"));
        ConfigWindow->resize(610, 411);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/OPIICO.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConfigWindow->setWindowIcon(icon);
        ConfigWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg);\n"
"font: 75 8pt \"Arial\";"));
        centralwidget = new QWidget(ConfigWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        msgPTE = new QPlainTextEdit(centralwidget);
        msgPTE->setObjectName(QString::fromUtf8("msgPTE"));
        msgPTE->setGeometry(QRect(20, 20, 571, 181));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 275, 571, 15));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        ucForgetSensPB = new QPushButton(centralwidget);
        ucForgetSensPB->setObjectName(QString::fromUtf8("ucForgetSensPB"));
        ucForgetSensPB->setGeometry(QRect(470, 241, 81, 31));
        ucReadEventsPB = new QPushButton(centralwidget);
        ucReadEventsPB->setObjectName(QString::fromUtf8("ucReadEventsPB"));
        ucReadEventsPB->setGeometry(QRect(370, 210, 81, 31));
        ucSensValCB = new QComboBox(centralwidget);
        ucSensValCB->setObjectName(QString::fromUtf8("ucSensValCB"));
        ucSensValCB->setGeometry(QRect(550, 230, 41, 31));
        ucSetZBPB = new QPushButton(centralwidget);
        ucSetZBPB->setObjectName(QString::fromUtf8("ucSetZBPB"));
        ucSetZBPB->setGeometry(QRect(220, 240, 81, 31));
        ucModOnOffCB = new QComboBox(centralwidget);
        ucModOnOffCB->setObjectName(QString::fromUtf8("ucModOnOffCB"));
        ucModOnOffCB->setGeometry(QRect(120, 290, 81, 31));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        ucModOnOffCB->setPalette(palette);
        ucStatusPB = new QPushButton(centralwidget);
        ucStatusPB->setObjectName(QString::fromUtf8("ucStatusPB"));
        ucStatusPB->setGeometry(QRect(20, 220, 91, 41));
        ucEraseEventsPB = new QPushButton(centralwidget);
        ucEraseEventsPB->setObjectName(QString::fromUtf8("ucEraseEventsPB"));
        ucEraseEventsPB->setGeometry(QRect(370, 240, 81, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        ucEraseEventsPB->setPalette(palette1);
        ucCopySensPB = new QPushButton(centralwidget);
        ucCopySensPB->setObjectName(QString::fromUtf8("ucCopySensPB"));
        ucCopySensPB->setGeometry(QRect(470, 210, 81, 31));
        ucSetTimePB = new QPushButton(centralwidget);
        ucSetTimePB->setObjectName(QString::fromUtf8("ucSetTimePB"));
        ucSetTimePB->setGeometry(QRect(120, 240, 81, 31));
        ucDevNumLa = new QLabel(centralwidget);
        ucDevNumLa->setObjectName(QString::fromUtf8("ucDevNumLa"));
        ucDevNumLa->setGeometry(QRect(550, 210, 41, 20));
        ucDevNumLa->setAlignment(Qt::AlignCenter);
        ucZBValCB = new QComboBox(centralwidget);
        ucZBValCB->setObjectName(QString::fromUtf8("ucZBValCB"));
        ucZBValCB->setGeometry(QRect(300, 240, 41, 31));
        ucWLMeasurePB = new QPushButton(centralwidget);
        ucWLMeasurePB->setObjectName(QString::fromUtf8("ucWLMeasurePB"));
        ucWLMeasurePB->setGeometry(QRect(220, 210, 121, 31));
        mmSectionLa = new QLabel(centralwidget);
        mmSectionLa->setObjectName(QString::fromUtf8("mmSectionLa"));
        mmSectionLa->setGeometry(QRect(20, 370, 91, 21));
        mmSectionLa->setAlignment(Qt::AlignCenter);
        tsSetPDNPB = new QPushButton(centralwidget);
        tsSetPDNPB->setObjectName(QString::fromUtf8("tsSetPDNPB"));
        tsSetPDNPB->setGeometry(QRect(220, 320, 71, 31));
        tsPDNValLE = new QLineEdit(centralwidget);
        tsPDNValLE->setObjectName(QString::fromUtf8("tsPDNValLE"));
        tsPDNValLE->setGeometry(QRect(290, 319, 31, 31));
        tsPDNValLE->setAlignment(Qt::AlignCenter);
        tsRFModeValCB = new QComboBox(centralwidget);
        tsRFModeValCB->setObjectName(QString::fromUtf8("tsRFModeValCB"));
        tsRFModeValCB->setGeometry(QRect(480, 320, 111, 31));
        tsSetRFTOPB = new QPushButton(centralwidget);
        tsSetRFTOPB->setObjectName(QString::fromUtf8("tsSetRFTOPB"));
        tsSetRFTOPB->setGeometry(QRect(410, 290, 111, 31));
        tsZBValCB = new QComboBox(centralwidget);
        tsZBValCB->setObjectName(QString::fromUtf8("tsZBValCB"));
        tsZBValCB->setGeometry(QRect(370, 290, 41, 31));
        tsSetZBPB = new QPushButton(centralwidget);
        tsSetZBPB->setObjectName(QString::fromUtf8("tsSetZBPB"));
        tsSetZBPB->setGeometry(QRect(290, 290, 81, 31));
        tsSetRFModePB = new QPushButton(centralwidget);
        tsSetRFModePB->setObjectName(QString::fromUtf8("tsSetRFModePB"));
        tsSetRFModePB->setGeometry(QRect(410, 320, 71, 31));
        tsSetTimePB = new QPushButton(centralwidget);
        tsSetTimePB->setObjectName(QString::fromUtf8("tsSetTimePB"));
        tsSetTimePB->setGeometry(QRect(120, 320, 81, 31));
        tsStatusPB = new QPushButton(centralwidget);
        tsStatusPB->setObjectName(QString::fromUtf8("tsStatusPB"));
        tsStatusPB->setGeometry(QRect(20, 300, 91, 41));
        tsTogMMWritePB = new QPushButton(centralwidget);
        tsTogMMWritePB->setObjectName(QString::fromUtf8("tsTogMMWritePB"));
        tsTogMMWritePB->setGeometry(QRect(220, 290, 71, 31));
        mmChipErasePB = new QPushButton(centralwidget);
        mmChipErasePB->setObjectName(QString::fromUtf8("mmChipErasePB"));
        mmChipErasePB->setGeometry(QRect(230, 365, 81, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        mmChipErasePB->setPalette(palette2);
        tsRFTOValCB = new QComboBox(centralwidget);
        tsRFTOValCB->setObjectName(QString::fromUtf8("tsRFTOValCB"));
        tsRFTOValCB->setGeometry(QRect(520, 290, 71, 31));
        mmReadPktsPB = new QPushButton(centralwidget);
        mmReadPktsPB->setObjectName(QString::fromUtf8("mmReadPktsPB"));
        mmReadPktsPB->setGeometry(QRect(120, 365, 101, 31));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 350, 571, 15));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        ucShutdownPB = new QPushButton(centralwidget);
        ucShutdownPB->setObjectName(QString::fromUtf8("ucShutdownPB"));
        ucShutdownPB->setGeometry(QRect(120, 210, 81, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        ucShutdownPB->setPalette(palette3);
        ConfigWindow->setCentralWidget(centralwidget);

        retranslateUi(ConfigWindow);

        QMetaObject::connectSlotsByName(ConfigWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ConfigWindow)
    {
        ConfigWindow->setWindowTitle(QApplication::translate("ConfigWindow", "Advanced Configuration", 0, QApplication::UnicodeUTF8));
        ucForgetSensPB->setText(QApplication::translate("ConfigWindow", "Unpair Sensor", 0, QApplication::UnicodeUTF8));
        ucReadEventsPB->setText(QApplication::translate("ConfigWindow", "Upload Tags", 0, QApplication::UnicodeUTF8));
        ucSensValCB->clear();
        ucSensValCB->insertItems(0, QStringList()
         << QApplication::translate("ConfigWindow", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "4", 0, QApplication::UnicodeUTF8)
        );
        ucSetZBPB->setText(QApplication::translate("ConfigWindow", "Set ZB Chan", 0, QApplication::UnicodeUTF8));
        ucModOnOffCB->clear();
        ucModOnOffCB->insertItems(0, QStringList()
         << QApplication::translate("ConfigWindow", "Sensor ON", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "Sensor OFF", 0, QApplication::UnicodeUTF8)
        );
        ucStatusPB->setText(QApplication::translate("ConfigWindow", "Controller\n"
"Check Status", 0, QApplication::UnicodeUTF8));
        ucEraseEventsPB->setText(QApplication::translate("ConfigWindow", "Erase Tags", 0, QApplication::UnicodeUTF8));
        ucCopySensPB->setText(QApplication::translate("ConfigWindow", "Pair Sensor", 0, QApplication::UnicodeUTF8));
        ucSetTimePB->setText(QApplication::translate("ConfigWindow", "Set Time", 0, QApplication::UnicodeUTF8));
        ucDevNumLa->setText(QApplication::translate("ConfigWindow", "Slot", 0, QApplication::UnicodeUTF8));
        ucZBValCB->clear();
        ucZBValCB->insertItems(0, QStringList()
         << QApplication::translate("ConfigWindow", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "21", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "22", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "23", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "24", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "25", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "26", 0, QApplication::UnicodeUTF8)
        );
        ucWLMeasurePB->setText(QApplication::translate("ConfigWindow", "Wireless Channel\n"
"Check (100x)", 0, QApplication::UnicodeUTF8));
        mmSectionLa->setText(QApplication::translate("ConfigWindow", "MemoryModule", 0, QApplication::UnicodeUTF8));
        tsSetPDNPB->setText(QApplication::translate("ConfigWindow", "Set PDN", 0, QApplication::UnicodeUTF8));
        tsPDNValLE->setInputMask(QApplication::translate("ConfigWindow", "009; ", 0, QApplication::UnicodeUTF8));
        tsPDNValLE->setText(QApplication::translate("ConfigWindow", "0", 0, QApplication::UnicodeUTF8));
        tsRFModeValCB->clear();
        tsRFModeValCB->insertItems(0, QStringList()
         << QApplication::translate("ConfigWindow", "Always OFF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "Always ON", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "DTap ON, Timeout", 0, QApplication::UnicodeUTF8)
        );
        tsSetRFTOPB->setText(QApplication::translate("ConfigWindow", "Set RF Timeout", 0, QApplication::UnicodeUTF8));
        tsZBValCB->clear();
        tsZBValCB->insertItems(0, QStringList()
         << QApplication::translate("ConfigWindow", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "21", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "22", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "23", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "24", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "25", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "26", 0, QApplication::UnicodeUTF8)
        );
        tsSetZBPB->setText(QApplication::translate("ConfigWindow", "Set ZB Chan", 0, QApplication::UnicodeUTF8));
        tsSetRFModePB->setText(QApplication::translate("ConfigWindow", "Set RF Mode", 0, QApplication::UnicodeUTF8));
        tsSetTimePB->setText(QApplication::translate("ConfigWindow", "Set Time", 0, QApplication::UnicodeUTF8));
        tsStatusPB->setText(QApplication::translate("ConfigWindow", "Sensor\n"
"Check Status", 0, QApplication::UnicodeUTF8));
        tsTogMMWritePB->setText(QApplication::translate("ConfigWindow", "Toggle MM", 0, QApplication::UnicodeUTF8));
        mmChipErasePB->setText(QApplication::translate("ConfigWindow", "Erase MM", 0, QApplication::UnicodeUTF8));
        tsRFTOValCB->clear();
        tsRFTOValCB->insertItems(0, QStringList()
         << QApplication::translate("ConfigWindow", "Never", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "30 min", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigWindow", "1 hour", 0, QApplication::UnicodeUTF8)
        );
        mmReadPktsPB->setText(QApplication::translate("ConfigWindow", "Upload to .OPI", 0, QApplication::UnicodeUTF8));
        ucShutdownPB->setText(QApplication::translate("ConfigWindow", "Shutdown", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConfigWindow: public Ui_ConfigWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGWINDOW_H
