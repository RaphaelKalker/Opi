/********************************************************************************
** Form generated from reading UI file 'readmmdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READMMDIALOG_H
#define UI_READMMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ReadMMDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *tagFileLE;
    QPushButton *tagFileBrwsPB;
    QLabel *tagFileLA;
    QCheckBox *useProfileCB;
    QPushButton *editProfilePB;
    QProgressBar *readMMProgBar;
    QLabel *label;
    QLineEdit *outFileLE;
    QLabel *outFileLA;
    QLabel *statusLA;
    QLabel *tagStatLA;
    QLineEdit *outDirLE;
    QLabel *outDirLA;
    QPushButton *outDirBrwsPB;

    void setupUi(QDialog *ReadMMDialog)
    {
        if (ReadMMDialog->objectName().isEmpty())
            ReadMMDialog->setObjectName(QString::fromUtf8("ReadMMDialog"));
        ReadMMDialog->resize(251, 355);
        ReadMMDialog->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg);\n"
"font: 75 8pt \"Arial\";"));
        buttonBox = new QDialogButtonBox(ReadMMDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 300, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        tagFileLE = new QLineEdit(ReadMMDialog);
        tagFileLE->setObjectName(QString::fromUtf8("tagFileLE"));
        tagFileLE->setGeometry(QRect(60, 170, 131, 20));
        tagFileLE->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tagFileBrwsPB = new QPushButton(ReadMMDialog);
        tagFileBrwsPB->setObjectName(QString::fromUtf8("tagFileBrwsPB"));
        tagFileBrwsPB->setGeometry(QRect(190, 170, 51, 23));
        tagFileLA = new QLabel(ReadMMDialog);
        tagFileLA->setObjectName(QString::fromUtf8("tagFileLA"));
        tagFileLA->setGeometry(QRect(0, 170, 61, 20));
        tagFileLA->setAlignment(Qt::AlignCenter);
        useProfileCB = new QCheckBox(ReadMMDialog);
        useProfileCB->setObjectName(QString::fromUtf8("useProfileCB"));
        useProfileCB->setEnabled(true);
        useProfileCB->setGeometry(QRect(10, 120, 151, 20));
        useProfileCB->setChecked(true);
        editProfilePB = new QPushButton(ReadMMDialog);
        editProfilePB->setObjectName(QString::fromUtf8("editProfilePB"));
        editProfilePB->setEnabled(true);
        editProfilePB->setGeometry(QRect(160, 120, 81, 21));
        readMMProgBar = new QProgressBar(ReadMMDialog);
        readMMProgBar->setObjectName(QString::fromUtf8("readMMProgBar"));
        readMMProgBar->setGeometry(QRect(40, 240, 191, 23));
        readMMProgBar->setValue(24);
        label = new QLabel(ReadMMDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 15, 251, 21));
        outFileLE = new QLineEdit(ReadMMDialog);
        outFileLE->setObjectName(QString::fromUtf8("outFileLE"));
        outFileLE->setEnabled(true);
        outFileLE->setGeometry(QRect(60, 80, 181, 20));
        outFileLE->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        outFileLE->setReadOnly(true);
        outFileLA = new QLabel(ReadMMDialog);
        outFileLA->setObjectName(QString::fromUtf8("outFileLA"));
        outFileLA->setGeometry(QRect(0, 80, 61, 20));
        outFileLA->setAlignment(Qt::AlignCenter);
        statusLA = new QLabel(ReadMMDialog);
        statusLA->setObjectName(QString::fromUtf8("statusLA"));
        statusLA->setGeometry(QRect(20, 270, 211, 20));
        statusLA->setAlignment(Qt::AlignCenter);
        tagStatLA = new QLabel(ReadMMDialog);
        tagStatLA->setObjectName(QString::fromUtf8("tagStatLA"));
        tagStatLA->setGeometry(QRect(60, 190, 131, 20));
        tagStatLA->setAlignment(Qt::AlignCenter);
        outDirLE = new QLineEdit(ReadMMDialog);
        outDirLE->setObjectName(QString::fromUtf8("outDirLE"));
        outDirLE->setEnabled(true);
        outDirLE->setGeometry(QRect(60, 50, 131, 20));
        outDirLE->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        outDirLE->setReadOnly(true);
        outDirLA = new QLabel(ReadMMDialog);
        outDirLA->setObjectName(QString::fromUtf8("outDirLA"));
        outDirLA->setGeometry(QRect(0, 50, 61, 20));
        outDirLA->setAlignment(Qt::AlignCenter);
        outDirBrwsPB = new QPushButton(ReadMMDialog);
        outDirBrwsPB->setObjectName(QString::fromUtf8("outDirBrwsPB"));
        outDirBrwsPB->setGeometry(QRect(190, 50, 51, 23));

        retranslateUi(ReadMMDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ReadMMDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ReadMMDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ReadMMDialog);
    } // setupUi

    void retranslateUi(QDialog *ReadMMDialog)
    {
        ReadMMDialog->setWindowTitle(QApplication::translate("ReadMMDialog", "MM Upload", 0, QApplication::UnicodeUTF8));
        tagFileLE->setText(QString());
        tagFileLE->setPlaceholderText(QApplication::translate("ReadMMDialog", "None", 0, QApplication::UnicodeUTF8));
        tagFileBrwsPB->setText(QApplication::translate("ReadMMDialog", "Browse", 0, QApplication::UnicodeUTF8));
        tagFileLA->setText(QApplication::translate("ReadMMDialog", "Tag File", 0, QApplication::UnicodeUTF8));
        useProfileCB->setText(QApplication::translate("ReadMMDialog", "Use profile for headers", 0, QApplication::UnicodeUTF8));
        editProfilePB->setText(QApplication::translate("ReadMMDialog", "Edit Profile", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ReadMMDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8pt; font-weight:72; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:400;\">Memory Module Upload to EDF</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        outFileLE->setText(QString());
        outFileLE->setPlaceholderText(QApplication::translate("ReadMMDialog", "None", 0, QApplication::UnicodeUTF8));
        outFileLA->setText(QApplication::translate("ReadMMDialog", "Out File", 0, QApplication::UnicodeUTF8));
        statusLA->setText(QApplication::translate("ReadMMDialog", "Upload Progress", 0, QApplication::UnicodeUTF8));
        tagStatLA->setText(QApplication::translate("ReadMMDialog", "Tag Status", 0, QApplication::UnicodeUTF8));
        outDirLE->setText(QString());
        outDirLE->setPlaceholderText(QString());
        outDirLA->setText(QApplication::translate("ReadMMDialog", "Out Dir", 0, QApplication::UnicodeUTF8));
        outDirBrwsPB->setText(QApplication::translate("ReadMMDialog", "Browse", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ReadMMDialog: public Ui_ReadMMDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READMMDIALOG_H
