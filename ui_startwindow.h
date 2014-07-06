/********************************************************************************
** Form generated from reading UI file 'startwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWINDOW_H
#define UI_STARTWINDOW_H

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

class Ui_startwindow
{
public:
    QAction *actionPDN;
    QAction *actionPDN_2;
    QAction *actionPDN_3;
    QAction *actionPDN_4;
    QAction *actionConnect_Again;
    QWidget *centralwidget;
    QPushButton *CBP1;
    QLabel *opsign;
    QPushButton *CBP3;
    QPushButton *CBP2;
    QPushButton *CBP4;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QCheckBox *checkWriteFileBox;

    void setupUi(QMainWindow *startwindow)
    {
        if (startwindow->objectName().isEmpty())
            startwindow->setObjectName(QString::fromUtf8("startwindow"));
        startwindow->setWindowModality(Qt::NonModal);
        startwindow->setEnabled(true);
        startwindow->resize(180, 190);
        startwindow->setMinimumSize(QSize(180, 190));
        startwindow->setMaximumSize(QSize(180, 190));
        startwindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/OPIICO.png"), QSize(), QIcon::Normal, QIcon::Off);
        startwindow->setWindowIcon(icon);
        startwindow->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg);\n"
"font: 75 8pt \"Arial\";"));
        startwindow->setAnimated(true);
        startwindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actionPDN = new QAction(startwindow);
        actionPDN->setObjectName(QString::fromUtf8("actionPDN"));
        actionPDN->setCheckable(false);
        actionPDN->setChecked(false);
        actionPDN_2 = new QAction(startwindow);
        actionPDN_2->setObjectName(QString::fromUtf8("actionPDN_2"));
        actionPDN_3 = new QAction(startwindow);
        actionPDN_3->setObjectName(QString::fromUtf8("actionPDN_3"));
        actionPDN_4 = new QAction(startwindow);
        actionPDN_4->setObjectName(QString::fromUtf8("actionPDN_4"));
        actionConnect_Again = new QAction(startwindow);
        actionConnect_Again->setObjectName(QString::fromUtf8("actionConnect_Again"));
        centralwidget = new QWidget(startwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        CBP1 = new QPushButton(centralwidget);
        CBP1->setObjectName(QString::fromUtf8("CBP1"));
        CBP1->setGeometry(QRect(10, 40, 70, 27));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        CBP1->setFont(font);
        CBP1->setCursor(QCursor(Qt::PointingHandCursor));
        CBP1->setCheckable(true);
        opsign = new QLabel(centralwidget);
        opsign->setObjectName(QString::fromUtf8("opsign"));
        opsign->setEnabled(true);
        opsign->setGeometry(QRect(10, 10, 70, 27));
        opsign->setAutoFillBackground(false);
        opsign->setStyleSheet(QString::fromUtf8(""));
        opsign->setPixmap(QPixmap(QString::fromUtf8(":/images/images/Paired-Device.png")));
        opsign->setScaledContents(true);
        CBP3 = new QPushButton(centralwidget);
        CBP3->setObjectName(QString::fromUtf8("CBP3"));
        CBP3->setGeometry(QRect(10, 100, 70, 27));
        CBP3->setFont(font);
        CBP3->setCursor(QCursor(Qt::PointingHandCursor));
        CBP3->setCheckable(true);
        CBP2 = new QPushButton(centralwidget);
        CBP2->setObjectName(QString::fromUtf8("CBP2"));
        CBP2->setGeometry(QRect(10, 70, 70, 27));
        CBP2->setFont(font);
        CBP2->setCursor(QCursor(Qt::PointingHandCursor));
        CBP2->setCheckable(true);
        CBP4 = new QPushButton(centralwidget);
        CBP4->setObjectName(QString::fromUtf8("CBP4"));
        CBP4->setGeometry(QRect(10, 130, 70, 27));
        CBP4->setFont(font);
        CBP4->setCursor(QCursor(Qt::PointingHandCursor));
        CBP4->setCheckable(true);
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
        checkWriteFileBox = new QCheckBox(centralwidget);
        checkWriteFileBox->setObjectName(QString::fromUtf8("checkWriteFileBox"));
        checkWriteFileBox->setGeometry(QRect(100, 10, 71, 21));
        checkWriteFileBox->setFont(font);
        startwindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(CBP1, pushButton);
        QWidget::setTabOrder(pushButton, CBP2);
        QWidget::setTabOrder(CBP2, CBP4);
        QWidget::setTabOrder(CBP4, CBP3);
        QWidget::setTabOrder(CBP3, pushButton_2);

        retranslateUi(startwindow);

        QMetaObject::connectSlotsByName(startwindow);
    } // setupUi

    void retranslateUi(QMainWindow *startwindow)
    {
        startwindow->setWindowTitle(QApplication::translate("startwindow", "LiveDisp", 0, QApplication::UnicodeUTF8));
        actionPDN->setText(QApplication::translate("startwindow", "None", 0, QApplication::UnicodeUTF8));
        actionPDN_2->setText(QApplication::translate("startwindow", "None", 0, QApplication::UnicodeUTF8));
        actionPDN_3->setText(QApplication::translate("startwindow", "None", 0, QApplication::UnicodeUTF8));
        actionPDN_4->setText(QApplication::translate("startwindow", "None", 0, QApplication::UnicodeUTF8));
        actionConnect_Again->setText(QApplication::translate("startwindow", "Connect Again", 0, QApplication::UnicodeUTF8));
        CBP1->setText(QApplication::translate("startwindow", "A", 0, QApplication::UnicodeUTF8));
        opsign->setText(QString());
        CBP3->setText(QApplication::translate("startwindow", "C", 0, QApplication::UnicodeUTF8));
        CBP2->setText(QApplication::translate("startwindow", "B", 0, QApplication::UnicodeUTF8));
        CBP4->setText(QApplication::translate("startwindow", "D", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QString());
        checkWriteFileBox->setText(QApplication::translate("startwindow", "Recording", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class startwindow: public Ui_startwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWINDOW_H
