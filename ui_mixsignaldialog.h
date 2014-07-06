/********************************************************************************
** Form generated from reading UI file 'mixsignaldialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIXSIGNALDIALOG_H
#define UI_MIXSIGNALDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_mixsignaldialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *BetaSigmalabel;
    QLabel *alphaSigmalabel;
    QTextEdit *BetatextEdit;
    QTextEdit *deltatextEdit;
    QTextEdit *G1textEdit;
    QLabel *thetaSigmalabel;
    QLabel *UPSigmalabel;
    QLabel *G2Sigmalabel;
    QLabel *G1Sigmalabel;
    QTextEdit *UPtextEdit;
    QLabel *M1Sigmalabel;
    QTextEdit *SigmatextEdit;
    QLabel *deltaSigmalabel;
    QLabel *M2Sigmalabel;
    QTextEdit *M1textEdit;
    QTextEdit *thetatextEdit;
    QLabel *SigmaSigmalabel;
    QTextEdit *G2textEdit;
    QTextEdit *alphatextEdit;
    QTextEdit *M2textEdit;

    void setupUi(QDialog *mixsignaldialog)
    {
        if (mixsignaldialog->objectName().isEmpty())
            mixsignaldialog->setObjectName(QString::fromUtf8("mixsignaldialog"));
        mixsignaldialog->resize(205, 200);
        mixsignaldialog->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg);\n"
"font: 75 8pt \"Arial\";"));
        buttonBox = new QDialogButtonBox(mixsignaldialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 160, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        BetaSigmalabel = new QLabel(mixsignaldialog);
        BetaSigmalabel->setObjectName(QString::fromUtf8("BetaSigmalabel"));
        BetaSigmalabel->setGeometry(QRect(160, 70, 41, 21));
        alphaSigmalabel = new QLabel(mixsignaldialog);
        alphaSigmalabel->setObjectName(QString::fromUtf8("alphaSigmalabel"));
        alphaSigmalabel->setGeometry(QRect(160, 100, 41, 21));
        BetatextEdit = new QTextEdit(mixsignaldialog);
        BetatextEdit->setObjectName(QString::fromUtf8("BetatextEdit"));
        BetatextEdit->setGeometry(QRect(110, 70, 41, 21));
        BetatextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        BetatextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        deltatextEdit = new QTextEdit(mixsignaldialog);
        deltatextEdit->setObjectName(QString::fromUtf8("deltatextEdit"));
        deltatextEdit->setGeometry(QRect(110, 130, 41, 21));
        deltatextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        deltatextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        G1textEdit = new QTextEdit(mixsignaldialog);
        G1textEdit->setObjectName(QString::fromUtf8("G1textEdit"));
        G1textEdit->setGeometry(QRect(110, 40, 41, 21));
        G1textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        G1textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        thetaSigmalabel = new QLabel(mixsignaldialog);
        thetaSigmalabel->setObjectName(QString::fromUtf8("thetaSigmalabel"));
        thetaSigmalabel->setGeometry(QRect(60, 130, 41, 21));
        UPSigmalabel = new QLabel(mixsignaldialog);
        UPSigmalabel->setObjectName(QString::fromUtf8("UPSigmalabel"));
        UPSigmalabel->setGeometry(QRect(60, 70, 41, 21));
        G2Sigmalabel = new QLabel(mixsignaldialog);
        G2Sigmalabel->setObjectName(QString::fromUtf8("G2Sigmalabel"));
        G2Sigmalabel->setGeometry(QRect(60, 40, 41, 21));
        G1Sigmalabel = new QLabel(mixsignaldialog);
        G1Sigmalabel->setObjectName(QString::fromUtf8("G1Sigmalabel"));
        G1Sigmalabel->setGeometry(QRect(160, 40, 41, 21));
        UPtextEdit = new QTextEdit(mixsignaldialog);
        UPtextEdit->setObjectName(QString::fromUtf8("UPtextEdit"));
        UPtextEdit->setGeometry(QRect(10, 71, 41, 20));
        UPtextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        UPtextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        M1Sigmalabel = new QLabel(mixsignaldialog);
        M1Sigmalabel->setObjectName(QString::fromUtf8("M1Sigmalabel"));
        M1Sigmalabel->setGeometry(QRect(160, 10, 41, 21));
        M1Sigmalabel->setStyleSheet(QString::fromUtf8(""));
        M1Sigmalabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        SigmatextEdit = new QTextEdit(mixsignaldialog);
        SigmatextEdit->setObjectName(QString::fromUtf8("SigmatextEdit"));
        SigmatextEdit->setGeometry(QRect(10, 100, 41, 21));
        SigmatextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        SigmatextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        deltaSigmalabel = new QLabel(mixsignaldialog);
        deltaSigmalabel->setObjectName(QString::fromUtf8("deltaSigmalabel"));
        deltaSigmalabel->setGeometry(QRect(160, 130, 41, 21));
        deltaSigmalabel->setText(QString::fromUtf8("Delta"));
        M2Sigmalabel = new QLabel(mixsignaldialog);
        M2Sigmalabel->setObjectName(QString::fromUtf8("M2Sigmalabel"));
        M2Sigmalabel->setGeometry(QRect(60, 10, 41, 21));
        M1textEdit = new QTextEdit(mixsignaldialog);
        M1textEdit->setObjectName(QString::fromUtf8("M1textEdit"));
        M1textEdit->setGeometry(QRect(110, 10, 41, 21));
        M1textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        M1textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        thetatextEdit = new QTextEdit(mixsignaldialog);
        thetatextEdit->setObjectName(QString::fromUtf8("thetatextEdit"));
        thetatextEdit->setGeometry(QRect(10, 130, 41, 21));
        thetatextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        thetatextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        SigmaSigmalabel = new QLabel(mixsignaldialog);
        SigmaSigmalabel->setObjectName(QString::fromUtf8("SigmaSigmalabel"));
        SigmaSigmalabel->setGeometry(QRect(60, 100, 41, 21));
        G2textEdit = new QTextEdit(mixsignaldialog);
        G2textEdit->setObjectName(QString::fromUtf8("G2textEdit"));
        G2textEdit->setGeometry(QRect(10, 40, 41, 21));
        G2textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        G2textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        alphatextEdit = new QTextEdit(mixsignaldialog);
        alphatextEdit->setObjectName(QString::fromUtf8("alphatextEdit"));
        alphatextEdit->setGeometry(QRect(110, 100, 41, 21));
        alphatextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        alphatextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        M2textEdit = new QTextEdit(mixsignaldialog);
        M2textEdit->setObjectName(QString::fromUtf8("M2textEdit"));
        M2textEdit->setGeometry(QRect(10, 10, 41, 21));
        M2textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        M2textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        retranslateUi(mixsignaldialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), mixsignaldialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), mixsignaldialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(mixsignaldialog);
    } // setupUi

    void retranslateUi(QDialog *mixsignaldialog)
    {
        mixsignaldialog->setWindowTitle(QApplication::translate("mixsignaldialog", "Dialog", 0, QApplication::UnicodeUTF8));
        BetaSigmalabel->setText(QApplication::translate("mixsignaldialog", "Beta", 0, QApplication::UnicodeUTF8));
        alphaSigmalabel->setText(QApplication::translate("mixsignaldialog", "Alpha", 0, QApplication::UnicodeUTF8));
        thetaSigmalabel->setText(QApplication::translate("mixsignaldialog", "Theta", 0, QApplication::UnicodeUTF8));
        UPSigmalabel->setText(QApplication::translate("mixsignaldialog", "UP", 0, QApplication::UnicodeUTF8));
        G2Sigmalabel->setText(QApplication::translate("mixsignaldialog", "G2", 0, QApplication::UnicodeUTF8));
        G1Sigmalabel->setText(QApplication::translate("mixsignaldialog", "G1", 0, QApplication::UnicodeUTF8));
        M1Sigmalabel->setText(QApplication::translate("mixsignaldialog", "M1", 0, QApplication::UnicodeUTF8));
        M2Sigmalabel->setText(QApplication::translate("mixsignaldialog", "M2", 0, QApplication::UnicodeUTF8));
        SigmaSigmalabel->setText(QApplication::translate("mixsignaldialog", "Sigma", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mixsignaldialog: public Ui_mixsignaldialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIXSIGNALDIALOG_H
