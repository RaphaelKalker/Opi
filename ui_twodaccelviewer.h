/********************************************************************************
** Form generated from reading UI file 'twodaccelviewer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWODACCELVIEWER_H
#define UI_TWODACCELVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_twoDaccelviewer
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QDateTimeEdit *stDTE;
    QDateTimeEdit *endDTE;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_trace;
    QPushButton *genActTextPB;
    QGraphicsView *zGV;
    QFrame *line;
    QLabel *label_3;

    void setupUi(QMainWindow *twoDaccelviewer)
    {
        if (twoDaccelviewer->objectName().isEmpty())
            twoDaccelviewer->setObjectName(QString::fromUtf8("twoDaccelviewer"));
        twoDaccelviewer->resize(390, 430);
        twoDaccelviewer->setMinimumSize(QSize(390, 430));
        twoDaccelviewer->setMaximumSize(QSize(390, 430));
        twoDaccelviewer->setStyleSheet(QString::fromUtf8("QWidget#centralwidget, QPushButton, QGraphicsView {background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg); }\n"
"font: 75 9pt \"Arial\";"));
        centralwidget = new QWidget(twoDaccelviewer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 30, 371, 311));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg);\n"
"font: 75 9pt \"Arial\";"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        stDTE = new QDateTimeEdit(centralwidget);
        stDTE->setObjectName(QString::fromUtf8("stDTE"));
        stDTE->setGeometry(QRect(150, 10, 101, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(8);
        stDTE->setFont(font);
        stDTE->setAlignment(Qt::AlignCenter);
        stDTE->setReadOnly(true);
        stDTE->setButtonSymbols(QAbstractSpinBox::NoButtons);
        stDTE->setDisplayFormat(QString::fromUtf8("M/d HH:mm:ss.zzz"));
        endDTE = new QDateTimeEdit(centralwidget);
        endDTE->setObjectName(QString::fromUtf8("endDTE"));
        endDTE->setGeometry(QRect(280, 10, 101, 20));
        endDTE->setFont(font);
        endDTE->setAlignment(Qt::AlignCenter);
        endDTE->setReadOnly(true);
        endDTE->setButtonSymbols(QAbstractSpinBox::NoButtons);
        endDTE->setDisplayFormat(QString::fromUtf8("M/d HH:mm:ss.zzz"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 9, 31, 21));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 9, 31, 21));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        pushButton_trace = new QPushButton(centralwidget);
        pushButton_trace->setObjectName(QString::fromUtf8("pushButton_trace"));
        pushButton_trace->setGeometry(QRect(10, 10, 51, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton_trace->setFont(font1);
        genActTextPB = new QPushButton(centralwidget);
        genActTextPB->setObjectName(QString::fromUtf8("genActTextPB"));
        genActTextPB->setGeometry(QRect(60, 10, 51, 20));
        genActTextPB->setFont(font);
        zGV = new QGraphicsView(centralwidget);
        zGV->setObjectName(QString::fromUtf8("zGV"));
        zGV->setGeometry(QRect(10, 340, 371, 80));
        zGV->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg);\n"
"font: 75 9pt \"Arial\";"));
        zGV->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        zGV->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 380, 371, 1));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 340, 16, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);
        twoDaccelviewer->setCentralWidget(centralwidget);

        retranslateUi(twoDaccelviewer);

        QMetaObject::connectSlotsByName(twoDaccelviewer);
    } // setupUi

    void retranslateUi(QMainWindow *twoDaccelviewer)
    {
        twoDaccelviewer->setWindowTitle(QApplication::translate("twoDaccelviewer", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("twoDaccelviewer", "From", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("twoDaccelviewer", "To", 0, QApplication::UnicodeUTF8));
        pushButton_trace->setText(QApplication::translate("twoDaccelviewer", "Replay", 0, QApplication::UnicodeUTF8));
        genActTextPB->setText(QApplication::translate("twoDaccelviewer", "Summary", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("twoDaccelviewer", "Z", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class twoDaccelviewer: public Ui_twoDaccelviewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWODACCELVIEWER_H
