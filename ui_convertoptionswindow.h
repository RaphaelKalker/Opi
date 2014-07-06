/********************************************************************************
** Form generated from reading UI file 'convertoptionswindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTOPTIONSWINDOW_H
#define UI_CONVERTOPTIONSWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ConvertOptionsWindow
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *stDTLa;
    QLabel *endDTLa;
    QDateTimeEdit *stDTE;
    QDateTimeEdit *endDTE;
    QCheckBox *tmpAvgCB;
    QComboBox *dataTypeValCB;
    QLabel *dataTypeLA;
    QCheckBox *useProfileCB;
    QPushButton *editProfilePB;
    QTextEdit *alphatextEdit;
    QTextEdit *SigmatextEdit;
    QLabel *alphalabel;
    QLabel *Sigmalabel;
    QLabel *alphalabelHz;
    QLabel *SigmalabelHz;
    QPushButton *viewPB;
    QComboBox *ViewercomboBox;
    QPushButton *tagFileBrwsPB;
    QLabel *tagFileLA;
    QTextEdit *tagFileLE;
    QLabel *label;
    QLabel *outDirLA;
    QLineEdit *outDirLE;
    QPushButton *outDirBrwsPB;
    QCheckBox *checkReverse;
    QCheckBox *checkBox_RRfile;

    void setupUi(QDialog *ConvertOptionsWindow)
    {
        if (ConvertOptionsWindow->objectName().isEmpty())
            ConvertOptionsWindow->setObjectName(QString::fromUtf8("ConvertOptionsWindow"));
        ConvertOptionsWindow->resize(297, 371);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/OPIICO.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConvertOptionsWindow->setWindowIcon(icon);
        ConvertOptionsWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg);\n"
"font: 75 8pt \"Arial\";"));
        buttonBox = new QDialogButtonBox(ConvertOptionsWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(130, 320, 151, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        stDTLa = new QLabel(ConvertOptionsWindow);
        stDTLa->setObjectName(QString::fromUtf8("stDTLa"));
        stDTLa->setGeometry(QRect(10, 100, 71, 21));
        stDTLa->setAlignment(Qt::AlignCenter);
        endDTLa = new QLabel(ConvertOptionsWindow);
        endDTLa->setObjectName(QString::fromUtf8("endDTLa"));
        endDTLa->setGeometry(QRect(10, 130, 71, 16));
        endDTLa->setAlignment(Qt::AlignCenter);
        stDTE = new QDateTimeEdit(ConvertOptionsWindow);
        stDTE->setObjectName(QString::fromUtf8("stDTE"));
        stDTE->setGeometry(QRect(90, 100, 151, 22));
        stDTE->setAlignment(Qt::AlignCenter);
        stDTE->setDisplayFormat(QString::fromUtf8("yyyy-MM-dd HH:mm:ss"));
        endDTE = new QDateTimeEdit(ConvertOptionsWindow);
        endDTE->setObjectName(QString::fromUtf8("endDTE"));
        endDTE->setGeometry(QRect(90, 130, 151, 22));
        endDTE->setAlignment(Qt::AlignCenter);
        endDTE->setDisplayFormat(QString::fromUtf8("yyyy-MM-dd HH:mm:ss"));
        tmpAvgCB = new QCheckBox(ConvertOptionsWindow);
        tmpAvgCB->setObjectName(QString::fromUtf8("tmpAvgCB"));
        tmpAvgCB->setGeometry(QRect(20, 160, 161, 20));
        tmpAvgCB->setChecked(true);
        dataTypeValCB = new QComboBox(ConvertOptionsWindow);
        dataTypeValCB->setObjectName(QString::fromUtf8("dataTypeValCB"));
        dataTypeValCB->setGeometry(QRect(70, 280, 69, 22));
        dataTypeLA = new QLabel(ConvertOptionsWindow);
        dataTypeLA->setObjectName(QString::fromUtf8("dataTypeLA"));
        dataTypeLA->setGeometry(QRect(10, 280, 61, 20));
        dataTypeLA->setAlignment(Qt::AlignCenter);
        useProfileCB = new QCheckBox(ConvertOptionsWindow);
        useProfileCB->setObjectName(QString::fromUtf8("useProfileCB"));
        useProfileCB->setEnabled(true);
        useProfileCB->setGeometry(QRect(20, 190, 161, 20));
        useProfileCB->setChecked(true);
        editProfilePB = new QPushButton(ConvertOptionsWindow);
        editProfilePB->setObjectName(QString::fromUtf8("editProfilePB"));
        editProfilePB->setEnabled(true);
        editProfilePB->setGeometry(QRect(210, 190, 71, 21));
        alphatextEdit = new QTextEdit(ConvertOptionsWindow);
        alphatextEdit->setObjectName(QString::fromUtf8("alphatextEdit"));
        alphatextEdit->setGeometry(QRect(210, 270, 41, 21));
        alphatextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        alphatextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        SigmatextEdit = new QTextEdit(ConvertOptionsWindow);
        SigmatextEdit->setObjectName(QString::fromUtf8("SigmatextEdit"));
        SigmatextEdit->setGeometry(QRect(210, 300, 41, 21));
        SigmatextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        SigmatextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        alphalabel = new QLabel(ConvertOptionsWindow);
        alphalabel->setObjectName(QString::fromUtf8("alphalabel"));
        alphalabel->setGeometry(QRect(160, 270, 41, 21));
        alphalabel->setAlignment(Qt::AlignCenter);
        Sigmalabel = new QLabel(ConvertOptionsWindow);
        Sigmalabel->setObjectName(QString::fromUtf8("Sigmalabel"));
        Sigmalabel->setGeometry(QRect(160, 300, 41, 21));
        Sigmalabel->setAlignment(Qt::AlignCenter);
        alphalabelHz = new QLabel(ConvertOptionsWindow);
        alphalabelHz->setObjectName(QString::fromUtf8("alphalabelHz"));
        alphalabelHz->setGeometry(QRect(260, 270, 16, 21));
        alphalabelHz->setAlignment(Qt::AlignCenter);
        SigmalabelHz = new QLabel(ConvertOptionsWindow);
        SigmalabelHz->setObjectName(QString::fromUtf8("SigmalabelHz"));
        SigmalabelHz->setGeometry(QRect(260, 300, 16, 21));
        SigmalabelHz->setAlignment(Qt::AlignCenter);
        viewPB = new QPushButton(ConvertOptionsWindow);
        viewPB->setObjectName(QString::fromUtf8("viewPB"));
        viewPB->setGeometry(QRect(24, 330, 51, 23));
        ViewercomboBox = new QComboBox(ConvertOptionsWindow);
        ViewercomboBox->setObjectName(QString::fromUtf8("ViewercomboBox"));
        ViewercomboBox->setGeometry(QRect(80, 330, 41, 22));
        ViewercomboBox->setCursor(QCursor(Qt::PointingHandCursor));
        tagFileBrwsPB = new QPushButton(ConvertOptionsWindow);
        tagFileBrwsPB->setObjectName(QString::fromUtf8("tagFileBrwsPB"));
        tagFileBrwsPB->setGeometry(QRect(230, 230, 51, 23));
        tagFileLA = new QLabel(ConvertOptionsWindow);
        tagFileLA->setObjectName(QString::fromUtf8("tagFileLA"));
        tagFileLA->setGeometry(QRect(10, 230, 41, 20));
        tagFileLA->setAlignment(Qt::AlignCenter);
        tagFileLE = new QTextEdit(ConvertOptionsWindow);
        tagFileLE->setObjectName(QString::fromUtf8("tagFileLE"));
        tagFileLE->setGeometry(QRect(50, 230, 181, 21));
        tagFileLE->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tagFileLE->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(ConvertOptionsWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 221, 21));
        label->setAlignment(Qt::AlignCenter);
        outDirLA = new QLabel(ConvertOptionsWindow);
        outDirLA->setObjectName(QString::fromUtf8("outDirLA"));
        outDirLA->setGeometry(QRect(10, 60, 41, 20));
        outDirLA->setAlignment(Qt::AlignCenter);
        outDirLE = new QLineEdit(ConvertOptionsWindow);
        outDirLE->setObjectName(QString::fromUtf8("outDirLE"));
        outDirLE->setEnabled(true);
        outDirLE->setGeometry(QRect(50, 60, 181, 20));
        outDirLE->setReadOnly(true);
        outDirBrwsPB = new QPushButton(ConvertOptionsWindow);
        outDirBrwsPB->setObjectName(QString::fromUtf8("outDirBrwsPB"));
        outDirBrwsPB->setGeometry(QRect(230, 60, 51, 23));
        checkReverse = new QCheckBox(ConvertOptionsWindow);
        checkReverse->setObjectName(QString::fromUtf8("checkReverse"));
        checkReverse->setGeometry(QRect(190, 160, 91, 16));
        checkReverse->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox_RRfile = new QCheckBox(ConvertOptionsWindow);
        checkBox_RRfile->setObjectName(QString::fromUtf8("checkBox_RRfile"));
        checkBox_RRfile->setGeometry(QRect(170, 280, 111, 20));

        retranslateUi(ConvertOptionsWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConvertOptionsWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConvertOptionsWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConvertOptionsWindow);
    } // setupUi

    void retranslateUi(QDialog *ConvertOptionsWindow)
    {
        ConvertOptionsWindow->setWindowTitle(QApplication::translate("ConvertOptionsWindow", "ViewConverter Options", 0, QApplication::UnicodeUTF8));
        stDTLa->setText(QApplication::translate("ConvertOptionsWindow", "Start Time", 0, QApplication::UnicodeUTF8));
        endDTLa->setText(QApplication::translate("ConvertOptionsWindow", "End Time", 0, QApplication::UnicodeUTF8));
        tmpAvgCB->setText(QApplication::translate("ConvertOptionsWindow", "Temperature Averaging", 0, QApplication::UnicodeUTF8));
        dataTypeValCB->clear();
        dataTypeValCB->insertItems(0, QStringList()
         << QApplication::translate("ConvertOptionsWindow", "Generic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConvertOptionsWindow", "EEG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConvertOptionsWindow", "ECG", 0, QApplication::UnicodeUTF8)
        );
        dataTypeLA->setText(QApplication::translate("ConvertOptionsWindow", "Data Type", 0, QApplication::UnicodeUTF8));
        useProfileCB->setText(QApplication::translate("ConvertOptionsWindow", "Use profile for headers", 0, QApplication::UnicodeUTF8));
        editProfilePB->setText(QApplication::translate("ConvertOptionsWindow", "Edit Profile", 0, QApplication::UnicodeUTF8));
        alphalabel->setText(QApplication::translate("ConvertOptionsWindow", "Alpha", 0, QApplication::UnicodeUTF8));
        Sigmalabel->setText(QApplication::translate("ConvertOptionsWindow", "Sigma", 0, QApplication::UnicodeUTF8));
        alphalabelHz->setText(QApplication::translate("ConvertOptionsWindow", "Hz", 0, QApplication::UnicodeUTF8));
        SigmalabelHz->setText(QApplication::translate("ConvertOptionsWindow", "Hz", 0, QApplication::UnicodeUTF8));
        viewPB->setText(QApplication::translate("ConvertOptionsWindow", "Viewer", 0, QApplication::UnicodeUTF8));
        tagFileBrwsPB->setText(QApplication::translate("ConvertOptionsWindow", "Browse", 0, QApplication::UnicodeUTF8));
        tagFileLA->setText(QApplication::translate("ConvertOptionsWindow", "Tag File", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ConvertOptionsWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Conversion Options</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        outDirLA->setText(QApplication::translate("ConvertOptionsWindow", "Out Dir", 0, QApplication::UnicodeUTF8));
        outDirLE->setText(QString());
        outDirLE->setPlaceholderText(QApplication::translate("ConvertOptionsWindow", "<current working directory>", 0, QApplication::UnicodeUTF8));
        outDirBrwsPB->setText(QApplication::translate("ConvertOptionsWindow", "Browse", 0, QApplication::UnicodeUTF8));
        checkReverse->setText(QApplication::translate("ConvertOptionsWindow", "Invert ADC", 0, QApplication::UnicodeUTF8));
        checkBox_RRfile->setText(QApplication::translate("ConvertOptionsWindow", "RR.txt (Kubios)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConvertOptionsWindow: public Ui_ConvertOptionsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTOPTIONSWINDOW_H
