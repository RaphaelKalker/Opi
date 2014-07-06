/********************************************************************************
** Form generated from reading UI file 'spectrogram.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECTROGRAM_H
#define UI_SPECTROGRAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Spectrogram
{
public:
    QWidget *centralwidget;
    QPushButton *fftbutton;
    QSlider *FFT_TimeSlider;
    QLabel *label_3;
    QTextEdit *fftcofactor;
    QLabel *label_12;
    QTextEdit *fftkfactor;
    QLabel *label_11;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *Spectrogram)
    {
        if (Spectrogram->objectName().isEmpty())
            Spectrogram->setObjectName(QString::fromUtf8("Spectrogram"));
        Spectrogram->resize(743, 260);
        Spectrogram->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg);\n"
"font: 75 8pt \"Arial\";"));
        centralwidget = new QWidget(Spectrogram);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        fftbutton = new QPushButton(centralwidget);
        fftbutton->setObjectName(QString::fromUtf8("fftbutton"));
        fftbutton->setGeometry(QRect(440, 240, 61, 16));
        FFT_TimeSlider = new QSlider(centralwidget);
        FFT_TimeSlider->setObjectName(QString::fromUtf8("FFT_TimeSlider"));
        FFT_TimeSlider->setGeometry(QRect(20, 240, 151, 15));
        FFT_TimeSlider->setCursor(QCursor(Qt::PointingHandCursor));
        FFT_TimeSlider->setMinimum(32);
        FFT_TimeSlider->setMaximum(512);
        FFT_TimeSlider->setSingleStep(32);
        FFT_TimeSlider->setPageStep(32);
        FFT_TimeSlider->setValue(256);
        FFT_TimeSlider->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 240, 51, 16));
        label_3->setAlignment(Qt::AlignCenter);
        fftcofactor = new QTextEdit(centralwidget);
        fftcofactor->setObjectName(QString::fromUtf8("fftcofactor"));
        fftcofactor->setGeometry(QRect(390, 240, 41, 16));
        fftcofactor->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fftcofactor->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(350, 240, 41, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);
        fftkfactor = new QTextEdit(centralwidget);
        fftkfactor->setObjectName(QString::fromUtf8("fftkfactor"));
        fftkfactor->setGeometry(QRect(300, 240, 41, 16));
        fftkfactor->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fftkfactor->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(260, 240, 31, 16));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 721, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(5, 10, 5, 226));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(732, 10, 5, 226));
        Spectrogram->setCentralWidget(centralwidget);

        retranslateUi(Spectrogram);

        QMetaObject::connectSlotsByName(Spectrogram);
    } // setupUi

    void retranslateUi(QMainWindow *Spectrogram)
    {
        Spectrogram->setWindowTitle(QApplication::translate("Spectrogram", "MainWindow", 0, QApplication::UnicodeUTF8));
        fftbutton->setText(QApplication::translate("Spectrogram", "Set", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Spectrogram", "128Hz", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Spectrogram", "Offset", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Spectrogram", "Gain", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Spectrogram", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'PMingLiU'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/images/images/LEDbar.png\" /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Spectrogram", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'PMingLiU'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/images/images/LEDbar.png\" /></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Spectrogram: public Ui_Spectrogram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECTROGRAM_H
