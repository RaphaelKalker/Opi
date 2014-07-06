/********************************************************************************
** Form generated from reading UI file 'profiledialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEDIALOG_H
#define UI_PROFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_ProfileDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *lpiddobLa;
    QLineEdit *lpidnameLE;
    QLabel *lpidnameLa;
    QLabel *lpidsexLa;
    QLineEdit *lpiddobLE;
    QLineEdit *lpidsexLE;
    QLabel *TitleLa;
    QLabel *alphaLa;
    QLineEdit *alphaLE;
    QLineEdit *sigmaLE;
    QLabel *sigmaLa;
    QLineEdit *deltaSE_D2;
    QLabel *deltaS_1;
    QLabel *deltaS_2;
    QLabel *deltaS_3;
    QLabel *deltaS_4;
    QLineEdit *deltaSE_D1;
    QLineEdit *deltaSE_T;
    QLineEdit *deltaSE_S;
    QLineEdit *deltaME_D2;
    QLabel *deltaM_1;
    QLabel *deltaM_2;
    QLabel *deltaM_3;
    QLabel *deltaM_4;
    QLineEdit *deltaME_T;
    QLineEdit *deltaME_A;
    QLineEdit *deltaME_S;
    QLabel *deltaS_0;
    QLabel *deltaM_0;
    QLineEdit *deltaSE_B;
    QLabel *deltaS_5;
    QLabel *deltaM_5;
    QLineEdit *deltaME_B;
    QLabel *deltaM_6;
    QLineEdit *deltaME_G;
    QLabel *deltaS_6;
    QLineEdit *deltaSE_G;

    void setupUi(QDialog *ProfileDialog)
    {
        if (ProfileDialog->objectName().isEmpty())
            ProfileDialog->setObjectName(QString::fromUtf8("ProfileDialog"));
        ProfileDialog->resize(436, 249);
        ProfileDialog->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg);\n"
"font: 75 8pt \"Arial\";"));
        buttonBox = new QDialogButtonBox(ProfileDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 210, 411, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        lpiddobLa = new QLabel(ProfileDialog);
        lpiddobLa->setObjectName(QString::fromUtf8("lpiddobLa"));
        lpiddobLa->setGeometry(QRect(10, 50, 51, 20));
        lpiddobLa->setAlignment(Qt::AlignCenter);
        lpidnameLE = new QLineEdit(ProfileDialog);
        lpidnameLE->setObjectName(QString::fromUtf8("lpidnameLE"));
        lpidnameLE->setGeometry(QRect(70, 30, 151, 20));
        lpidnameLE->setMaxLength(49);
        lpidnameLE->setAlignment(Qt::AlignCenter);
        lpidnameLa = new QLabel(ProfileDialog);
        lpidnameLa->setObjectName(QString::fromUtf8("lpidnameLa"));
        lpidnameLa->setGeometry(QRect(10, 30, 51, 20));
        lpidnameLa->setAlignment(Qt::AlignCenter);
        lpidsexLa = new QLabel(ProfileDialog);
        lpidsexLa->setObjectName(QString::fromUtf8("lpidsexLa"));
        lpidsexLa->setGeometry(QRect(230, 30, 41, 20));
        lpidsexLa->setAlignment(Qt::AlignCenter);
        lpiddobLE = new QLineEdit(ProfileDialog);
        lpiddobLE->setObjectName(QString::fromUtf8("lpiddobLE"));
        lpiddobLE->setGeometry(QRect(70, 50, 101, 20));
        lpiddobLE->setMaxLength(11);
        lpiddobLE->setAlignment(Qt::AlignCenter);
        lpidsexLE = new QLineEdit(ProfileDialog);
        lpidsexLE->setObjectName(QString::fromUtf8("lpidsexLE"));
        lpidsexLE->setGeometry(QRect(270, 30, 31, 20));
        lpidsexLE->setMaxLength(1);
        lpidsexLE->setAlignment(Qt::AlignCenter);
        TitleLa = new QLabel(ProfileDialog);
        TitleLa->setObjectName(QString::fromUtf8("TitleLa"));
        TitleLa->setGeometry(QRect(170, 10, 81, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        TitleLa->setFont(font);
        TitleLa->setAlignment(Qt::AlignCenter);
        alphaLa = new QLabel(ProfileDialog);
        alphaLa->setObjectName(QString::fromUtf8("alphaLa"));
        alphaLa->setGeometry(QRect(10, 120, 71, 20));
        alphaLa->setAlignment(Qt::AlignCenter);
        alphaLE = new QLineEdit(ProfileDialog);
        alphaLE->setObjectName(QString::fromUtf8("alphaLE"));
        alphaLE->setGeometry(QRect(90, 120, 51, 20));
        alphaLE->setMaxLength(4);
        alphaLE->setAlignment(Qt::AlignCenter);
        sigmaLE = new QLineEdit(ProfileDialog);
        sigmaLE->setObjectName(QString::fromUtf8("sigmaLE"));
        sigmaLE->setGeometry(QRect(90, 150, 51, 20));
        sigmaLE->setMaxLength(4);
        sigmaLE->setAlignment(Qt::AlignCenter);
        sigmaLa = new QLabel(ProfileDialog);
        sigmaLa->setObjectName(QString::fromUtf8("sigmaLa"));
        sigmaLa->setGeometry(QRect(10, 150, 71, 20));
        sigmaLa->setAlignment(Qt::AlignCenter);
        deltaSE_D2 = new QLineEdit(ProfileDialog);
        deltaSE_D2->setObjectName(QString::fromUtf8("deltaSE_D2"));
        deltaSE_D2->setGeometry(QRect(240, 80, 51, 20));
        deltaSE_D2->setMaxLength(4);
        deltaSE_D2->setAlignment(Qt::AlignCenter);
        deltaS_1 = new QLabel(ProfileDialog);
        deltaS_1->setObjectName(QString::fromUtf8("deltaS_1"));
        deltaS_1->setGeometry(QRect(180, 80, 61, 20));
        deltaS_1->setAlignment(Qt::AlignCenter);
        deltaS_2 = new QLabel(ProfileDialog);
        deltaS_2->setObjectName(QString::fromUtf8("deltaS_2"));
        deltaS_2->setGeometry(QRect(180, 100, 61, 20));
        deltaS_2->setAlignment(Qt::AlignCenter);
        deltaS_3 = new QLabel(ProfileDialog);
        deltaS_3->setObjectName(QString::fromUtf8("deltaS_3"));
        deltaS_3->setGeometry(QRect(180, 120, 61, 20));
        deltaS_3->setAlignment(Qt::AlignCenter);
        deltaS_4 = new QLabel(ProfileDialog);
        deltaS_4->setObjectName(QString::fromUtf8("deltaS_4"));
        deltaS_4->setGeometry(QRect(180, 140, 61, 20));
        deltaS_4->setAlignment(Qt::AlignCenter);
        deltaSE_D1 = new QLineEdit(ProfileDialog);
        deltaSE_D1->setObjectName(QString::fromUtf8("deltaSE_D1"));
        deltaSE_D1->setGeometry(QRect(240, 100, 51, 20));
        deltaSE_D1->setMaxLength(4);
        deltaSE_D1->setAlignment(Qt::AlignCenter);
        deltaSE_T = new QLineEdit(ProfileDialog);
        deltaSE_T->setObjectName(QString::fromUtf8("deltaSE_T"));
        deltaSE_T->setGeometry(QRect(240, 120, 51, 20));
        deltaSE_T->setMaxLength(4);
        deltaSE_T->setAlignment(Qt::AlignCenter);
        deltaSE_S = new QLineEdit(ProfileDialog);
        deltaSE_S->setObjectName(QString::fromUtf8("deltaSE_S"));
        deltaSE_S->setGeometry(QRect(240, 140, 51, 20));
        deltaSE_S->setMaxLength(4);
        deltaSE_S->setAlignment(Qt::AlignCenter);
        deltaME_D2 = new QLineEdit(ProfileDialog);
        deltaME_D2->setObjectName(QString::fromUtf8("deltaME_D2"));
        deltaME_D2->setGeometry(QRect(370, 80, 51, 20));
        deltaME_D2->setMaxLength(4);
        deltaME_D2->setAlignment(Qt::AlignCenter);
        deltaM_1 = new QLabel(ProfileDialog);
        deltaM_1->setObjectName(QString::fromUtf8("deltaM_1"));
        deltaM_1->setGeometry(QRect(310, 80, 61, 20));
        deltaM_1->setAlignment(Qt::AlignCenter);
        deltaM_2 = new QLabel(ProfileDialog);
        deltaM_2->setObjectName(QString::fromUtf8("deltaM_2"));
        deltaM_2->setGeometry(QRect(310, 100, 61, 20));
        deltaM_2->setAlignment(Qt::AlignCenter);
        deltaM_3 = new QLabel(ProfileDialog);
        deltaM_3->setObjectName(QString::fromUtf8("deltaM_3"));
        deltaM_3->setGeometry(QRect(310, 120, 61, 20));
        deltaM_3->setAlignment(Qt::AlignCenter);
        deltaM_4 = new QLabel(ProfileDialog);
        deltaM_4->setObjectName(QString::fromUtf8("deltaM_4"));
        deltaM_4->setGeometry(QRect(310, 140, 61, 20));
        deltaM_4->setAlignment(Qt::AlignCenter);
        deltaME_T = new QLineEdit(ProfileDialog);
        deltaME_T->setObjectName(QString::fromUtf8("deltaME_T"));
        deltaME_T->setGeometry(QRect(370, 100, 51, 20));
        deltaME_T->setMaxLength(4);
        deltaME_T->setAlignment(Qt::AlignCenter);
        deltaME_A = new QLineEdit(ProfileDialog);
        deltaME_A->setObjectName(QString::fromUtf8("deltaME_A"));
        deltaME_A->setGeometry(QRect(370, 120, 51, 20));
        deltaME_A->setMaxLength(4);
        deltaME_A->setAlignment(Qt::AlignCenter);
        deltaME_S = new QLineEdit(ProfileDialog);
        deltaME_S->setObjectName(QString::fromUtf8("deltaME_S"));
        deltaME_S->setGeometry(QRect(370, 140, 51, 20));
        deltaME_S->setMaxLength(4);
        deltaME_S->setAlignment(Qt::AlignCenter);
        deltaS_0 = new QLabel(ProfileDialog);
        deltaS_0->setObjectName(QString::fromUtf8("deltaS_0"));
        deltaS_0->setGeometry(QRect(180, 60, 111, 20));
        deltaS_0->setAlignment(Qt::AlignCenter);
        deltaM_0 = new QLabel(ProfileDialog);
        deltaM_0->setObjectName(QString::fromUtf8("deltaM_0"));
        deltaM_0->setGeometry(QRect(310, 60, 111, 20));
        deltaM_0->setAlignment(Qt::AlignCenter);
        deltaSE_B = new QLineEdit(ProfileDialog);
        deltaSE_B->setObjectName(QString::fromUtf8("deltaSE_B"));
        deltaSE_B->setGeometry(QRect(240, 160, 51, 20));
        deltaSE_B->setMaxLength(4);
        deltaSE_B->setAlignment(Qt::AlignCenter);
        deltaS_5 = new QLabel(ProfileDialog);
        deltaS_5->setObjectName(QString::fromUtf8("deltaS_5"));
        deltaS_5->setGeometry(QRect(180, 160, 61, 20));
        deltaS_5->setAlignment(Qt::AlignCenter);
        deltaM_5 = new QLabel(ProfileDialog);
        deltaM_5->setObjectName(QString::fromUtf8("deltaM_5"));
        deltaM_5->setGeometry(QRect(310, 160, 61, 20));
        deltaM_5->setAlignment(Qt::AlignCenter);
        deltaME_B = new QLineEdit(ProfileDialog);
        deltaME_B->setObjectName(QString::fromUtf8("deltaME_B"));
        deltaME_B->setGeometry(QRect(370, 160, 51, 20));
        deltaME_B->setMaxLength(4);
        deltaME_B->setAlignment(Qt::AlignCenter);
        deltaM_6 = new QLabel(ProfileDialog);
        deltaM_6->setObjectName(QString::fromUtf8("deltaM_6"));
        deltaM_6->setGeometry(QRect(310, 180, 61, 20));
        deltaM_6->setAlignment(Qt::AlignCenter);
        deltaME_G = new QLineEdit(ProfileDialog);
        deltaME_G->setObjectName(QString::fromUtf8("deltaME_G"));
        deltaME_G->setGeometry(QRect(370, 180, 51, 20));
        deltaME_G->setMaxLength(4);
        deltaME_G->setAlignment(Qt::AlignCenter);
        deltaS_6 = new QLabel(ProfileDialog);
        deltaS_6->setObjectName(QString::fromUtf8("deltaS_6"));
        deltaS_6->setGeometry(QRect(180, 180, 61, 20));
        deltaS_6->setAlignment(Qt::AlignCenter);
        deltaSE_G = new QLineEdit(ProfileDialog);
        deltaSE_G->setObjectName(QString::fromUtf8("deltaSE_G"));
        deltaSE_G->setGeometry(QRect(240, 180, 51, 20));
        deltaSE_G->setMaxLength(4);
        deltaSE_G->setAlignment(Qt::AlignCenter);

        retranslateUi(ProfileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ProfileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ProfileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *ProfileDialog)
    {
        ProfileDialog->setWindowTitle(QApplication::translate("ProfileDialog", "EDF Profile Edit", 0, QApplication::UnicodeUTF8));
        lpiddobLa->setText(QApplication::translate("ProfileDialog", "DOB", 0, QApplication::UnicodeUTF8));
        lpidnameLE->setPlaceholderText(QApplication::translate("ProfileDialog", "Jane_Doe", 0, QApplication::UnicodeUTF8));
        lpidnameLa->setText(QApplication::translate("ProfileDialog", "Name", 0, QApplication::UnicodeUTF8));
        lpidsexLa->setText(QApplication::translate("ProfileDialog", "Sex", 0, QApplication::UnicodeUTF8));
        lpiddobLE->setInputMask(QApplication::translate("ProfileDialog", "99->AAA!-9999; ", 0, QApplication::UnicodeUTF8));
        lpiddobLE->setText(QApplication::translate("ProfileDialog", "01-JAN-1900", 0, QApplication::UnicodeUTF8));
        lpiddobLE->setPlaceholderText(QString());
        lpidsexLE->setInputMask(QApplication::translate("ProfileDialog", ">A; ", 0, QApplication::UnicodeUTF8));
        lpidsexLE->setPlaceholderText(QApplication::translate("ProfileDialog", "F", 0, QApplication::UnicodeUTF8));
        TitleLa->setText(QApplication::translate("ProfileDialog", "PROFILE", 0, QApplication::UnicodeUTF8));
        alphaLa->setText(QApplication::translate("ProfileDialog", "Alpha (Hz)", 0, QApplication::UnicodeUTF8));
        alphaLE->setInputMask(QApplication::translate("ProfileDialog", "09.9; ", 0, QApplication::UnicodeUTF8));
        alphaLE->setText(QApplication::translate("ProfileDialog", "9.0", 0, QApplication::UnicodeUTF8));
        alphaLE->setPlaceholderText(QString());
        sigmaLE->setInputMask(QApplication::translate("ProfileDialog", "09.9; ", 0, QApplication::UnicodeUTF8));
        sigmaLE->setText(QApplication::translate("ProfileDialog", "11.0", 0, QApplication::UnicodeUTF8));
        sigmaLE->setPlaceholderText(QString());
        sigmaLa->setText(QApplication::translate("ProfileDialog", "Sigma (Hz)", 0, QApplication::UnicodeUTF8));
        deltaSE_D2->setInputMask(QApplication::translate("ProfileDialog", "09.9; ", 0, QApplication::UnicodeUTF8));
        deltaSE_D2->setText(QApplication::translate("ProfileDialog", "10.5", 0, QApplication::UnicodeUTF8));
        deltaSE_D2->setPlaceholderText(QString());
        deltaS_1->setText(QApplication::translate("ProfileDialog", "DeltaTH2", 0, QApplication::UnicodeUTF8));
        deltaS_2->setText(QApplication::translate("ProfileDialog", "DeltaTH1", 0, QApplication::UnicodeUTF8));
        deltaS_3->setText(QApplication::translate("ProfileDialog", "ThetaTH", 0, QApplication::UnicodeUTF8));
        deltaS_4->setText(QApplication::translate("ProfileDialog", "SigmaTH", 0, QApplication::UnicodeUTF8));
        deltaSE_D1->setInputMask(QApplication::translate("ProfileDialog", "09.9; ", 0, QApplication::UnicodeUTF8));
        deltaSE_D1->setText(QApplication::translate("ProfileDialog", "8.0", 0, QApplication::UnicodeUTF8));
        deltaSE_D1->setPlaceholderText(QString());
        deltaSE_T->setInputMask(QApplication::translate("ProfileDialog", "09.9; ", 0, QApplication::UnicodeUTF8));
        deltaSE_T->setText(QApplication::translate("ProfileDialog", "10.0", 0, QApplication::UnicodeUTF8));
        deltaSE_T->setPlaceholderText(QString());
        deltaSE_S->setInputMask(QApplication::translate("ProfileDialog", "09.9; ", 0, QApplication::UnicodeUTF8));
        deltaSE_S->setText(QApplication::translate("ProfileDialog", "7.0", 0, QApplication::UnicodeUTF8));
        deltaSE_S->setPlaceholderText(QString());
        deltaME_D2->setInputMask(QApplication::translate("ProfileDialog", "09.9; ", 0, QApplication::UnicodeUTF8));
        deltaME_D2->setText(QApplication::translate("ProfileDialog", "10.5", 0, QApplication::UnicodeUTF8));
        deltaME_D2->setPlaceholderText(QString());
        deltaM_1->setText(QApplication::translate("ProfileDialog", "DeltaTH2", 0, QApplication::UnicodeUTF8));
        deltaM_2->setText(QApplication::translate("ProfileDialog", "ThetaTH", 0, QApplication::UnicodeUTF8));
        deltaM_3->setText(QApplication::translate("ProfileDialog", "AlphaTH", 0, QApplication::UnicodeUTF8));
        deltaM_4->setText(QApplication::translate("ProfileDialog", "SigmaTH", 0, QApplication::UnicodeUTF8));
        deltaME_T->setInputMask(QApplication::translate("ProfileDialog", "09.9; ", 0, QApplication::UnicodeUTF8));
        deltaME_T->setText(QApplication::translate("ProfileDialog", "10.0", 0, QApplication::UnicodeUTF8));
        deltaME_T->setPlaceholderText(QString());
        deltaME_A->setInputMask(QApplication::translate("ProfileDialog", "09.9; ", 0, QApplication::UnicodeUTF8));
        deltaME_A->setText(QApplication::translate("ProfileDialog", "8.0", 0, QApplication::UnicodeUTF8));
        deltaME_A->setPlaceholderText(QString());
        deltaME_S->setInputMask(QApplication::translate("ProfileDialog", "09.9; ", 0, QApplication::UnicodeUTF8));
        deltaME_S->setText(QApplication::translate("ProfileDialog", "7.0", 0, QApplication::UnicodeUTF8));
        deltaME_S->setPlaceholderText(QString());
        deltaS_0->setText(QApplication::translate("ProfileDialog", "SleepTH (db)", 0, QApplication::UnicodeUTF8));
        deltaM_0->setText(QApplication::translate("ProfileDialog", "MeditateTH (db)", 0, QApplication::UnicodeUTF8));
        deltaSE_B->setInputMask(QApplication::translate("ProfileDialog", "09.9; ", 0, QApplication::UnicodeUTF8));
        deltaSE_B->setText(QApplication::translate("ProfileDialog", "10.0", 0, QApplication::UnicodeUTF8));
        deltaSE_B->setPlaceholderText(QString());
        deltaS_5->setText(QApplication::translate("ProfileDialog", "BetaTH", 0, QApplication::UnicodeUTF8));
        deltaM_5->setText(QApplication::translate("ProfileDialog", "BetaTH", 0, QApplication::UnicodeUTF8));
        deltaME_B->setInputMask(QApplication::translate("ProfileDialog", "09.9; ", 0, QApplication::UnicodeUTF8));
        deltaME_B->setText(QApplication::translate("ProfileDialog", "10.0", 0, QApplication::UnicodeUTF8));
        deltaME_B->setPlaceholderText(QString());
        deltaM_6->setText(QApplication::translate("ProfileDialog", "G1TH", 0, QApplication::UnicodeUTF8));
        deltaME_G->setInputMask(QApplication::translate("ProfileDialog", "09.9; ", 0, QApplication::UnicodeUTF8));
        deltaME_G->setText(QApplication::translate("ProfileDialog", "4.5", 0, QApplication::UnicodeUTF8));
        deltaME_G->setPlaceholderText(QString());
        deltaS_6->setText(QApplication::translate("ProfileDialog", "G1TH", 0, QApplication::UnicodeUTF8));
        deltaSE_G->setInputMask(QApplication::translate("ProfileDialog", "09.9; ", 0, QApplication::UnicodeUTF8));
        deltaSE_G->setText(QApplication::translate("ProfileDialog", "4.5", 0, QApplication::UnicodeUTF8));
        deltaSE_G->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProfileDialog: public Ui_ProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEDIALOG_H
