/********************************************************************************
** Form generated from reading UI file 'showdatawindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWDATAWINDOW_H
#define UI_SHOWDATAWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showdatawindow
{
public:
    QWidget *centralwidget;
    QLabel *label_8;
    QGraphicsView *drawTemp;
    QGraphicsView *drawAccx;
    QGraphicsView *drawAccz;
    QGraphicsView *drawAccy;
    QGraphicsView *drawADC;
    QFrame *middle_line_x;
    QFrame *middle_line_y;
    QFrame *middle_line_z;
    QFrame *middle_line_adc;
    QSlider *zoomctrl;
    QGraphicsView *drawfft;
    QTextEdit *fftkfactor;
    QTextEdit *fftcofactor;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *fftbutton;
    QSlider *timeSlider;
    QLabel *timemorelabel;
    QPushButton *checkADC;
    QPushButton *checkTemp;
    QPushButton *checkAccx;
    QPushButton *checkAccy;
    QPushButton *checkAccz;
    QPushButton *checkSpectrogram;
    QSlider *FFT_TimeSlider;
    QLabel *label_3;
    QSlider *FFTGainSlider;
    QLabel *label_4;
    QFrame *middle_line_z_2;
    QLabel *EDM;
    QCheckBox *CheckPauseShow;
    QCheckBox *checkReverse;
    QPushButton *pushButton_2D_accel;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *showdatawindow)
    {
        if (showdatawindow->objectName().isEmpty())
            showdatawindow->setObjectName(QString::fromUtf8("showdatawindow"));
        showdatawindow->resize(590, 460);
        showdatawindow->setMinimumSize(QSize(590, 400));
        showdatawindow->setMaximumSize(QSize(1000, 750));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        showdatawindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/OPIICO.png"), QSize(), QIcon::Normal, QIcon::Off);
        showdatawindow->setWindowIcon(icon);
        showdatawindow->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg);\n"
"font: 75 8pt \"Arial\";"));
        centralwidget = new QWidget(showdatawindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 31, 21));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);
        drawTemp = new QGraphicsView(centralwidget);
        drawTemp->setObjectName(QString::fromUtf8("drawTemp"));
        drawTemp->setGeometry(QRect(440, 370, 141, 81));
        drawTemp->setFont(font);
        drawTemp->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawTemp->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawAccx = new QGraphicsView(centralwidget);
        drawAccx->setObjectName(QString::fromUtf8("drawAccx"));
        drawAccx->setGeometry(QRect(440, 40, 141, 101));
        drawAccx->setFont(font);
        drawAccx->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawAccx->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawAccz = new QGraphicsView(centralwidget);
        drawAccz->setObjectName(QString::fromUtf8("drawAccz"));
        drawAccz->setGeometry(QRect(440, 260, 141, 101));
        drawAccz->setFont(font);
        drawAccz->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawAccz->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawAccy = new QGraphicsView(centralwidget);
        drawAccy->setObjectName(QString::fromUtf8("drawAccy"));
        drawAccy->setGeometry(QRect(440, 150, 141, 101));
        drawAccy->setFont(font);
        drawAccy->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawAccy->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawADC = new QGraphicsView(centralwidget);
        drawADC->setObjectName(QString::fromUtf8("drawADC"));
        drawADC->setGeometry(QRect(10, 40, 401, 141));
        drawADC->setFont(font);
        drawADC->setMidLineWidth(0);
        drawADC->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawADC->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        drawADC->setBackgroundBrush(brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        drawADC->setForegroundBrush(brush1);
        middle_line_x = new QFrame(centralwidget);
        middle_line_x->setObjectName(QString::fromUtf8("middle_line_x"));
        middle_line_x->setGeometry(QRect(440, 90, 141, 2));
        middle_line_x->setFrameShape(QFrame::HLine);
        middle_line_x->setFrameShadow(QFrame::Sunken);
        middle_line_y = new QFrame(centralwidget);
        middle_line_y->setObjectName(QString::fromUtf8("middle_line_y"));
        middle_line_y->setGeometry(QRect(440, 200, 141, 2));
        middle_line_y->setFrameShape(QFrame::HLine);
        middle_line_y->setFrameShadow(QFrame::Sunken);
        middle_line_z = new QFrame(centralwidget);
        middle_line_z->setObjectName(QString::fromUtf8("middle_line_z"));
        middle_line_z->setGeometry(QRect(440, 310, 141, 2));
        middle_line_z->setFrameShape(QFrame::HLine);
        middle_line_z->setFrameShadow(QFrame::Sunken);
        middle_line_adc = new QFrame(centralwidget);
        middle_line_adc->setObjectName(QString::fromUtf8("middle_line_adc"));
        middle_line_adc->setGeometry(QRect(10, 110, 401, 2));
        middle_line_adc->setFont(font);
        middle_line_adc->setMidLineWidth(0);
        middle_line_adc->setFrameShape(QFrame::HLine);
        middle_line_adc->setFrameShadow(QFrame::Sunken);
        zoomctrl = new QSlider(centralwidget);
        zoomctrl->setObjectName(QString::fromUtf8("zoomctrl"));
        zoomctrl->setGeometry(QRect(420, 50, 15, 121));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(zoomctrl->sizePolicy().hasHeightForWidth());
        zoomctrl->setSizePolicy(sizePolicy);
        zoomctrl->setFont(font);
        zoomctrl->setCursor(QCursor(Qt::PointingHandCursor));
        zoomctrl->setMinimum(-100);
        zoomctrl->setMaximum(100);
        zoomctrl->setSingleStep(1);
        zoomctrl->setPageStep(1);
        zoomctrl->setValue(1);
        zoomctrl->setSliderPosition(1);
        zoomctrl->setOrientation(Qt::Vertical);
        drawfft = new QGraphicsView(centralwidget);
        drawfft->setObjectName(QString::fromUtf8("drawfft"));
        drawfft->setGeometry(QRect(10, 200, 402, 226));
        drawfft->setFont(font);
        drawfft->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawfft->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fftkfactor = new QTextEdit(centralwidget);
        fftkfactor->setObjectName(QString::fromUtf8("fftkfactor"));
        fftkfactor->setGeometry(QRect(210, 430, 41, 24));
        fftkfactor->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fftkfactor->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fftcofactor = new QTextEdit(centralwidget);
        fftcofactor->setObjectName(QString::fromUtf8("fftcofactor"));
        fftcofactor->setGeometry(QRect(290, 430, 41, 24));
        fftcofactor->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fftcofactor->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(180, 430, 31, 21));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(250, 430, 41, 21));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);
        fftbutton = new QPushButton(centralwidget);
        fftbutton->setObjectName(QString::fromUtf8("fftbutton"));
        fftbutton->setGeometry(QRect(350, 430, 61, 21));
        timeSlider = new QSlider(centralwidget);
        timeSlider->setObjectName(QString::fromUtf8("timeSlider"));
        timeSlider->setGeometry(QRect(90, 183, 270, 15));
        timeSlider->setCursor(QCursor(Qt::PointingHandCursor));
        timeSlider->setMinimum(256);
        timeSlider->setMaximum(30720);
        timeSlider->setSingleStep(256);
        timeSlider->setPageStep(256);
        timeSlider->setValue(2048);
        timeSlider->setOrientation(Qt::Horizontal);
        timemorelabel = new QLabel(centralwidget);
        timemorelabel->setObjectName(QString::fromUtf8("timemorelabel"));
        timemorelabel->setGeometry(QRect(360, 182, 45, 16));
        timemorelabel->setAlignment(Qt::AlignCenter);
        checkADC = new QPushButton(centralwidget);
        checkADC->setObjectName(QString::fromUtf8("checkADC"));
        checkADC->setGeometry(QRect(10, 40, 51, 17));
        checkADC->setCursor(QCursor(Qt::PointingHandCursor));
        checkADC->setCheckable(true);
        checkTemp = new QPushButton(centralwidget);
        checkTemp->setObjectName(QString::fromUtf8("checkTemp"));
        checkTemp->setGeometry(QRect(440, 370, 31, 17));
        checkTemp->setCursor(QCursor(Qt::PointingHandCursor));
        checkTemp->setCheckable(true);
        checkAccx = new QPushButton(centralwidget);
        checkAccx->setObjectName(QString::fromUtf8("checkAccx"));
        checkAccx->setGeometry(QRect(440, 40, 21, 17));
        checkAccx->setCursor(QCursor(Qt::PointingHandCursor));
        checkAccx->setCheckable(true);
        checkAccy = new QPushButton(centralwidget);
        checkAccy->setObjectName(QString::fromUtf8("checkAccy"));
        checkAccy->setGeometry(QRect(440, 150, 21, 17));
        checkAccy->setCursor(QCursor(Qt::PointingHandCursor));
        checkAccy->setCheckable(true);
        checkAccz = new QPushButton(centralwidget);
        checkAccz->setObjectName(QString::fromUtf8("checkAccz"));
        checkAccz->setGeometry(QRect(440, 260, 21, 17));
        checkAccz->setCursor(QCursor(Qt::PointingHandCursor));
        checkAccz->setCheckable(true);
        checkSpectrogram = new QPushButton(centralwidget);
        checkSpectrogram->setObjectName(QString::fromUtf8("checkSpectrogram"));
        checkSpectrogram->setGeometry(QRect(10, 182, 71, 17));
        checkSpectrogram->setCursor(QCursor(Qt::PointingHandCursor));
        checkSpectrogram->setCheckable(true);
        FFT_TimeSlider = new QSlider(centralwidget);
        FFT_TimeSlider->setObjectName(QString::fromUtf8("FFT_TimeSlider"));
        FFT_TimeSlider->setGeometry(QRect(10, 430, 81, 16));
        FFT_TimeSlider->setCursor(QCursor(Qt::PointingHandCursor));
        FFT_TimeSlider->setMinimum(32);
        FFT_TimeSlider->setMaximum(512);
        FFT_TimeSlider->setSingleStep(32);
        FFT_TimeSlider->setPageStep(32);
        FFT_TimeSlider->setValue(256);
        FFT_TimeSlider->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 430, 51, 20));
        label_3->setAlignment(Qt::AlignCenter);
        FFTGainSlider = new QSlider(centralwidget);
        FFTGainSlider->setObjectName(QString::fromUtf8("FFTGainSlider"));
        FFTGainSlider->setGeometry(QRect(420, 220, 15, 181));
        FFTGainSlider->setCursor(QCursor(Qt::PointingHandCursor));
        FFTGainSlider->setMinimum(-100);
        FFTGainSlider->setMaximum(100);
        FFTGainSlider->setPageStep(1);
        FFTGainSlider->setValue(10);
        FFTGainSlider->setOrientation(Qt::Vertical);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(410, 180, 21, 21));
        middle_line_z_2 = new QFrame(centralwidget);
        middle_line_z_2->setObjectName(QString::fromUtf8("middle_line_z_2"));
        middle_line_z_2->setGeometry(QRect(440, 410, 141, 2));
        middle_line_z_2->setFrameShape(QFrame::HLine);
        middle_line_z_2->setFrameShadow(QFrame::Sunken);
        EDM = new QLabel(centralwidget);
        EDM->setObjectName(QString::fromUtf8("EDM"));
        EDM->setGeometry(QRect(40, 10, 31, 20));
        EDM->setAlignment(Qt::AlignCenter);
        CheckPauseShow = new QCheckBox(centralwidget);
        CheckPauseShow->setObjectName(QString::fromUtf8("CheckPauseShow"));
        CheckPauseShow->setGeometry(QRect(440, 10, 81, 21));
        checkReverse = new QCheckBox(centralwidget);
        checkReverse->setObjectName(QString::fromUtf8("checkReverse"));
        checkReverse->setGeometry(QRect(320, 10, 91, 20));
        checkReverse->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2D_accel = new QPushButton(centralwidget);
        pushButton_2D_accel->setObjectName(QString::fromUtf8("pushButton_2D_accel"));
        pushButton_2D_accel->setGeometry(QRect(180, 10, 111, 23));
        pushButton_2D_accel->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(5, 200, 5, 226));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(412, 200, 5, 226));
        showdatawindow->setCentralWidget(centralwidget);

        retranslateUi(showdatawindow);

        QMetaObject::connectSlotsByName(showdatawindow);
    } // setupUi

    void retranslateUi(QMainWindow *showdatawindow)
    {
        showdatawindow->setWindowTitle(QApplication::translate("showdatawindow", "Live Display", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("showdatawindow", "RF: ", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("showdatawindow", "Gain", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("showdatawindow", "Offset", 0, QApplication::UnicodeUTF8));
        fftbutton->setText(QApplication::translate("showdatawindow", "Set", 0, QApplication::UnicodeUTF8));
        timemorelabel->setText(QApplication::translate("showdatawindow", "4s", 0, QApplication::UnicodeUTF8));
        checkADC->setText(QApplication::translate("showdatawindow", "Signal", 0, QApplication::UnicodeUTF8));
        checkTemp->setText(QApplication::translate("showdatawindow", "Temp", 0, QApplication::UnicodeUTF8));
        checkAccx->setText(QApplication::translate("showdatawindow", "X", 0, QApplication::UnicodeUTF8));
        checkAccy->setText(QApplication::translate("showdatawindow", "Y", 0, QApplication::UnicodeUTF8));
        checkAccz->setText(QApplication::translate("showdatawindow", "Z", 0, QApplication::UnicodeUTF8));
        checkSpectrogram->setText(QApplication::translate("showdatawindow", "Spectrogram", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("showdatawindow", "128Hz", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("showdatawindow", "Gain", 0, QApplication::UnicodeUTF8));
        EDM->setText(QApplication::translate("showdatawindow", "##", 0, QApplication::UnicodeUTF8));
        CheckPauseShow->setText(QApplication::translate("showdatawindow", "Pause", 0, QApplication::UnicodeUTF8));
        checkReverse->setText(QApplication::translate("showdatawindow", "Signal Invert", 0, QApplication::UnicodeUTF8));
        pushButton_2D_accel->setText(QApplication::translate("showdatawindow", "Posture Viewer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("showdatawindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'PMingLiU'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/images/images/LEDbar.png\" /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("showdatawindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'PMingLiU'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/images/images/LEDbar.png\" /></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class showdatawindow: public Ui_showdatawindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWDATAWINDOW_H
