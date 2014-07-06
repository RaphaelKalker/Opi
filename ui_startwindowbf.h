/********************************************************************************
** Form generated from reading UI file 'startwindowbf.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWINDOWBF_H
#define UI_STARTWINDOWBF_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startwindowbf
{
public:
    QWidget *centralwidget;
    QCheckBox *checkWriteFileBox;
    QPushButton *pushButton_2;
    QPushButton *CBP1;
    QPushButton *CBP4;
    QPushButton *pushButton;
    QLabel *opsign;
    QPushButton *CBP2;
    QPushButton *CBP3;

    void setupUi(QMainWindow *startwindowbf)
    {
        if (startwindowbf->objectName().isEmpty())
            startwindowbf->setObjectName(QString::fromUtf8("startwindowbf"));
        startwindowbf->resize(189, 192);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/OPIICO.png"), QSize(), QIcon::Normal, QIcon::Off);
        startwindowbf->setWindowIcon(icon);
        startwindowbf->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg);\n"
"font: 75 8pt \"Arial\";"));
        centralwidget = new QWidget(startwindowbf);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        checkWriteFileBox = new QCheckBox(centralwidget);
        checkWriteFileBox->setObjectName(QString::fromUtf8("checkWriteFileBox"));
        checkWriteFileBox->setGeometry(QRect(100, 10, 81, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        checkWriteFileBox->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 100, 54, 54));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/Live-Display.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(50, 50));
        pushButton_2->setCheckable(false);
        CBP1 = new QPushButton(centralwidget);
        CBP1->setObjectName(QString::fromUtf8("CBP1"));
        CBP1->setGeometry(QRect(10, 40, 70, 27));
        CBP1->setFont(font);
        CBP1->setCursor(QCursor(Qt::PointingHandCursor));
        CBP1->setCheckable(true);
        CBP4 = new QPushButton(centralwidget);
        CBP4->setObjectName(QString::fromUtf8("CBP4"));
        CBP4->setGeometry(QRect(10, 130, 70, 27));
        CBP4->setFont(font);
        CBP4->setCursor(QCursor(Qt::PointingHandCursor));
        CBP4->setCheckable(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(110, 40, 54, 54));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(50, 50));
        opsign = new QLabel(centralwidget);
        opsign->setObjectName(QString::fromUtf8("opsign"));
        opsign->setEnabled(true);
        opsign->setGeometry(QRect(10, 10, 70, 27));
        opsign->setAutoFillBackground(false);
        opsign->setStyleSheet(QString::fromUtf8(""));
        opsign->setPixmap(QPixmap(QString::fromUtf8(":/images/images/Paired-Device.png")));
        opsign->setScaledContents(true);
        CBP2 = new QPushButton(centralwidget);
        CBP2->setObjectName(QString::fromUtf8("CBP2"));
        CBP2->setGeometry(QRect(10, 70, 70, 27));
        CBP2->setFont(font);
        CBP2->setCursor(QCursor(Qt::PointingHandCursor));
        CBP2->setCheckable(true);
        CBP3 = new QPushButton(centralwidget);
        CBP3->setObjectName(QString::fromUtf8("CBP3"));
        CBP3->setGeometry(QRect(10, 100, 70, 27));
        CBP3->setFont(font);
        CBP3->setCursor(QCursor(Qt::PointingHandCursor));
        CBP3->setCheckable(true);
        startwindowbf->setCentralWidget(centralwidget);

        retranslateUi(startwindowbf);

        QMetaObject::connectSlotsByName(startwindowbf);
    } // setupUi

    void retranslateUi(QMainWindow *startwindowbf)
    {
        startwindowbf->setWindowTitle(QApplication::translate("startwindowbf", "BioFB", 0, QApplication::UnicodeUTF8));
        checkWriteFileBox->setText(QApplication::translate("startwindowbf", "Recording", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QString());
        CBP1->setText(QApplication::translate("startwindowbf", "A", 0, QApplication::UnicodeUTF8));
        CBP4->setText(QApplication::translate("startwindowbf", "D", 0, QApplication::UnicodeUTF8));
        opsign->setText(QString());
        CBP2->setText(QApplication::translate("startwindowbf", "B", 0, QApplication::UnicodeUTF8));
        CBP3->setText(QApplication::translate("startwindowbf", "C", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class startwindowbf: public Ui_startwindowbf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWINDOWBF_H
