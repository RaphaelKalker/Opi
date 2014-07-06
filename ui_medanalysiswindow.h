/********************************************************************************
** Form generated from reading UI file 'medanalysiswindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDANALYSISWINDOW_H
#define UI_MEDANALYSISWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MedAnalysisWindow
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *msgPTE;
    QPushButton *inBrwsPB;
    QLineEdit *inLE;
    QLabel *inLa;
    QPushButton *cnvtPB;
    QComboBox *outTypCBox;
    QLabel *outTypeLa;

    void setupUi(QMainWindow *MedAnalysisWindow)
    {
        if (MedAnalysisWindow->objectName().isEmpty())
            MedAnalysisWindow->setObjectName(QString::fromUtf8("MedAnalysisWindow"));
        MedAnalysisWindow->resize(371, 353);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/OPIICO.png"), QSize(), QIcon::Normal, QIcon::Off);
        MedAnalysisWindow->setWindowIcon(icon);
        MedAnalysisWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg);\n"
"font: 75 8pt \"Arial\";"));
        centralwidget = new QWidget(MedAnalysisWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        msgPTE = new QPlainTextEdit(centralwidget);
        msgPTE->setObjectName(QString::fromUtf8("msgPTE"));
        msgPTE->setGeometry(QRect(20, 20, 331, 181));
        inBrwsPB = new QPushButton(centralwidget);
        inBrwsPB->setObjectName(QString::fromUtf8("inBrwsPB"));
        inBrwsPB->setGeometry(QRect(300, 220, 51, 23));
        inLE = new QLineEdit(centralwidget);
        inLE->setObjectName(QString::fromUtf8("inLE"));
        inLE->setGeometry(QRect(80, 220, 221, 21));
        inLa = new QLabel(centralwidget);
        inLa->setObjectName(QString::fromUtf8("inLa"));
        inLa->setGeometry(QRect(10, 223, 71, 16));
        inLa->setAlignment(Qt::AlignCenter);
        cnvtPB = new QPushButton(centralwidget);
        cnvtPB->setObjectName(QString::fromUtf8("cnvtPB"));
        cnvtPB->setGeometry(QRect(230, 260, 74, 74));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/Meditation.png"), QSize(), QIcon::Normal, QIcon::Off);
        cnvtPB->setIcon(icon1);
        cnvtPB->setIconSize(QSize(70, 70));
        outTypCBox = new QComboBox(centralwidget);
        outTypCBox->setObjectName(QString::fromUtf8("outTypCBox"));
        outTypCBox->setGeometry(QRect(140, 270, 69, 22));
        outTypeLa = new QLabel(centralwidget);
        outTypeLa->setObjectName(QString::fromUtf8("outTypeLa"));
        outTypeLa->setGeometry(QRect(40, 270, 91, 20));
        MedAnalysisWindow->setCentralWidget(centralwidget);

        retranslateUi(MedAnalysisWindow);

        QMetaObject::connectSlotsByName(MedAnalysisWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MedAnalysisWindow)
    {
        MedAnalysisWindow->setWindowTitle(QApplication::translate("MedAnalysisWindow", "Meditation Analysis", 0, QApplication::UnicodeUTF8));
        inBrwsPB->setText(QApplication::translate("MedAnalysisWindow", "Browse", 0, QApplication::UnicodeUTF8));
        inLa->setText(QApplication::translate("MedAnalysisWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Input File</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        cnvtPB->setText(QString());
        outTypCBox->clear();
        outTypCBox->insertItems(0, QStringList()
         << QApplication::translate("MedAnalysisWindow", "EDF+", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MedAnalysisWindow", "WAV", 0, QApplication::UnicodeUTF8)
        );
        outTypeLa->setText(QApplication::translate("MedAnalysisWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Output File Type</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MedAnalysisWindow: public Ui_MedAnalysisWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDANALYSISWINDOW_H
