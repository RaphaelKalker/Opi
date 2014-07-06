/********************************************************************************
** Form generated from reading UI file 'biofeedback.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIOFEEDBACK_H
#define UI_BIOFEEDBACK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
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

class Ui_biofeedback
{
public:
    QWidget *centralwidget;
    QSlider *timeSlider;
    QTextEdit *fftcofactor;
    QGraphicsView *drawSignalC;
    QGraphicsView *drawSignalE;
    QLabel *label_8;
    QSlider *zoomctrl;
    QLabel *label_12;
    QGraphicsView *drawSignalD;
    QGraphicsView *drawSignalA;
    QLabel *label_4;
    QSlider *other_zoomctrl;
    QGraphicsView *drawSignalB;
    QLabel *timemorelabel;
    QPushButton *fftbutton;
    QFrame *middle_line_adc;
    QFrame *line;
    QLabel *label_SignalA;
    QLabel *label_SignalB;
    QLabel *EDM;
    QComboBox *checkSignalA;
    QLabel *alphalabel;
    QTextEdit *alphatextEdit;
    QLabel *Sigmalabel;
    QTextEdit *SigmatextEdit;
    QComboBox *checkSignalB;
    QComboBox *checkSignalC;
    QComboBox *checkSignalD;
    QComboBox *checkSignalE;
    QPushButton *pushButton_5;
    QLabel *label_SignalC;
    QLabel *label_SignalD;
    QLabel *label_SignalE;
    QCheckBox *CheckPauseShow;
    QCheckBox *CheckInvertShow;
    QPushButton *pushButton_2D_accel;

    void setupUi(QMainWindow *biofeedback)
    {
        if (biofeedback->objectName().isEmpty())
            biofeedback->setObjectName(QString::fromUtf8("biofeedback"));
        biofeedback->resize(760, 450);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/OPIICO.png"), QSize(), QIcon::Normal, QIcon::Off);
        biofeedback->setWindowIcon(icon);
        biofeedback->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg);\n"
"font: 75 8pt \"Arial\";"));
        centralwidget = new QWidget(biofeedback);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        timeSlider = new QSlider(centralwidget);
        timeSlider->setObjectName(QString::fromUtf8("timeSlider"));
        timeSlider->setGeometry(QRect(560, 10, 151, 20));
        timeSlider->setCursor(QCursor(Qt::PointingHandCursor));
        timeSlider->setMinimum(1);
        timeSlider->setMaximum(20);
        timeSlider->setSingleStep(1);
        timeSlider->setPageStep(1);
        timeSlider->setValue(1);
        timeSlider->setOrientation(Qt::Horizontal);
        fftcofactor = new QTextEdit(centralwidget);
        fftcofactor->setObjectName(QString::fromUtf8("fftcofactor"));
        fftcofactor->setGeometry(QRect(370, 10, 41, 21));
        fftcofactor->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fftcofactor->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fftcofactor->setAutoFormatting(QTextEdit::AutoNone);
        drawSignalC = new QGraphicsView(centralwidget);
        drawSignalC->setObjectName(QString::fromUtf8("drawSignalC"));
        drawSignalC->setGeometry(QRect(10, 290, 721, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        drawSignalC->setFont(font);
        drawSignalC->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawSignalC->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawSignalE = new QGraphicsView(centralwidget);
        drawSignalE->setObjectName(QString::fromUtf8("drawSignalE"));
        drawSignalE->setGeometry(QRect(10, 390, 721, 51));
        drawSignalE->setFont(font);
        drawSignalE->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawSignalE->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 21, 21));
        label_8->setFont(font);
        zoomctrl = new QSlider(centralwidget);
        zoomctrl->setObjectName(QString::fromUtf8("zoomctrl"));
        zoomctrl->setGeometry(QRect(740, 60, 15, 161));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(zoomctrl->sizePolicy().hasHeightForWidth());
        zoomctrl->setSizePolicy(sizePolicy);
        zoomctrl->setFont(font);
        zoomctrl->setCursor(QCursor(Qt::PointingHandCursor));
        zoomctrl->setMinimum(-10);
        zoomctrl->setMaximum(10);
        zoomctrl->setSingleStep(1);
        zoomctrl->setPageStep(1);
        zoomctrl->setValue(1);
        zoomctrl->setSliderPosition(1);
        zoomctrl->setOrientation(Qt::Vertical);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(300, 10, 71, 20));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        drawSignalD = new QGraphicsView(centralwidget);
        drawSignalD->setObjectName(QString::fromUtf8("drawSignalD"));
        drawSignalD->setGeometry(QRect(10, 340, 721, 51));
        drawSignalD->setFont(font);
        drawSignalD->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawSignalD->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawSignalA = new QGraphicsView(centralwidget);
        drawSignalA->setObjectName(QString::fromUtf8("drawSignalA"));
        drawSignalA->setGeometry(QRect(10, 40, 721, 201));
        drawSignalA->setFont(font);
        drawSignalA->setMidLineWidth(0);
        drawSignalA->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawSignalA->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        drawSignalA->setBackgroundBrush(brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        drawSignalA->setForegroundBrush(brush1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(735, 230, 21, 21));
        other_zoomctrl = new QSlider(centralwidget);
        other_zoomctrl->setObjectName(QString::fromUtf8("other_zoomctrl"));
        other_zoomctrl->setGeometry(QRect(740, 260, 15, 161));
        other_zoomctrl->setCursor(QCursor(Qt::PointingHandCursor));
        other_zoomctrl->setMinimum(-10);
        other_zoomctrl->setMaximum(10);
        other_zoomctrl->setPageStep(1);
        other_zoomctrl->setValue(1);
        other_zoomctrl->setOrientation(Qt::Vertical);
        drawSignalB = new QGraphicsView(centralwidget);
        drawSignalB->setObjectName(QString::fromUtf8("drawSignalB"));
        drawSignalB->setGeometry(QRect(10, 240, 721, 51));
        drawSignalB->setFont(font);
        drawSignalB->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawSignalB->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        timemorelabel = new QLabel(centralwidget);
        timemorelabel->setObjectName(QString::fromUtf8("timemorelabel"));
        timemorelabel->setGeometry(QRect(710, 10, 41, 16));
        timemorelabel->setAlignment(Qt::AlignCenter);
        fftbutton = new QPushButton(centralwidget);
        fftbutton->setObjectName(QString::fromUtf8("fftbutton"));
        fftbutton->setGeometry(QRect(410, 10, 31, 21));
        middle_line_adc = new QFrame(centralwidget);
        middle_line_adc->setObjectName(QString::fromUtf8("middle_line_adc"));
        middle_line_adc->setGeometry(QRect(10, 140, 721, 2));
        middle_line_adc->setFont(font);
        middle_line_adc->setMidLineWidth(0);
        middle_line_adc->setFrameShape(QFrame::HLine);
        middle_line_adc->setFrameShadow(QFrame::Sunken);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(370, 40, 2, 400));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_SignalA = new QLabel(centralwidget);
        label_SignalA->setObjectName(QString::fromUtf8("label_SignalA"));
        label_SignalA->setGeometry(QRect(630, 40, 101, 16));
        label_SignalA->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_SignalB = new QLabel(centralwidget);
        label_SignalB->setObjectName(QString::fromUtf8("label_SignalB"));
        label_SignalB->setGeometry(QRect(630, 240, 101, 16));
        label_SignalB->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        EDM = new QLabel(centralwidget);
        EDM->setObjectName(QString::fromUtf8("EDM"));
        EDM->setGeometry(QRect(30, 10, 31, 16));
        EDM->setAlignment(Qt::AlignCenter);
        checkSignalA = new QComboBox(centralwidget);
        checkSignalA->setObjectName(QString::fromUtf8("checkSignalA"));
        checkSignalA->setGeometry(QRect(10, 40, 61, 16));
        alphalabel = new QLabel(centralwidget);
        alphalabel->setObjectName(QString::fromUtf8("alphalabel"));
        alphalabel->setGeometry(QRect(120, 10, 41, 21));
        alphalabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        alphatextEdit = new QTextEdit(centralwidget);
        alphatextEdit->setObjectName(QString::fromUtf8("alphatextEdit"));
        alphatextEdit->setGeometry(QRect(160, 10, 31, 21));
        alphatextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        alphatextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Sigmalabel = new QLabel(centralwidget);
        Sigmalabel->setObjectName(QString::fromUtf8("Sigmalabel"));
        Sigmalabel->setGeometry(QRect(190, 10, 41, 21));
        Sigmalabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        SigmatextEdit = new QTextEdit(centralwidget);
        SigmatextEdit->setObjectName(QString::fromUtf8("SigmatextEdit"));
        SigmatextEdit->setGeometry(QRect(230, 10, 31, 21));
        SigmatextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        SigmatextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        checkSignalB = new QComboBox(centralwidget);
        checkSignalB->setObjectName(QString::fromUtf8("checkSignalB"));
        checkSignalB->setGeometry(QRect(10, 240, 61, 16));
        checkSignalC = new QComboBox(centralwidget);
        checkSignalC->setObjectName(QString::fromUtf8("checkSignalC"));
        checkSignalC->setGeometry(QRect(10, 290, 61, 16));
        checkSignalD = new QComboBox(centralwidget);
        checkSignalD->setObjectName(QString::fromUtf8("checkSignalD"));
        checkSignalD->setGeometry(QRect(10, 340, 61, 16));
        checkSignalE = new QComboBox(centralwidget);
        checkSignalE->setObjectName(QString::fromUtf8("checkSignalE"));
        checkSignalE->setGeometry(QRect(10, 390, 61, 16));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(260, 10, 31, 21));
        label_SignalC = new QLabel(centralwidget);
        label_SignalC->setObjectName(QString::fromUtf8("label_SignalC"));
        label_SignalC->setGeometry(QRect(670, 290, 61, 16));
        label_SignalC->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_SignalD = new QLabel(centralwidget);
        label_SignalD->setObjectName(QString::fromUtf8("label_SignalD"));
        label_SignalD->setGeometry(QRect(670, 340, 61, 16));
        label_SignalD->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_SignalE = new QLabel(centralwidget);
        label_SignalE->setObjectName(QString::fromUtf8("label_SignalE"));
        label_SignalE->setGeometry(QRect(670, 390, 61, 16));
        label_SignalE->setLayoutDirection(Qt::LeftToRight);
        label_SignalE->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CheckPauseShow = new QCheckBox(centralwidget);
        CheckPauseShow->setObjectName(QString::fromUtf8("CheckPauseShow"));
        CheckPauseShow->setGeometry(QRect(60, 10, 61, 16));
        CheckInvertShow = new QCheckBox(centralwidget);
        CheckInvertShow->setObjectName(QString::fromUtf8("CheckInvertShow"));
        CheckInvertShow->setGeometry(QRect(70, 40, 51, 17));
        pushButton_2D_accel = new QPushButton(centralwidget);
        pushButton_2D_accel->setObjectName(QString::fromUtf8("pushButton_2D_accel"));
        pushButton_2D_accel->setGeometry(QRect(460, 10, 91, 21));
        pushButton_2D_accel->setCursor(QCursor(Qt::PointingHandCursor));
        biofeedback->setCentralWidget(centralwidget);
        drawSignalB->raise();
        drawSignalD->raise();
        drawSignalE->raise();
        timeSlider->raise();
        fftcofactor->raise();
        drawSignalC->raise();
        label_8->raise();
        zoomctrl->raise();
        label_12->raise();
        drawSignalA->raise();
        label_4->raise();
        other_zoomctrl->raise();
        timemorelabel->raise();
        fftbutton->raise();
        middle_line_adc->raise();
        line->raise();
        label_SignalA->raise();
        label_SignalB->raise();
        EDM->raise();
        checkSignalA->raise();
        alphalabel->raise();
        alphatextEdit->raise();
        Sigmalabel->raise();
        SigmatextEdit->raise();
        checkSignalB->raise();
        checkSignalC->raise();
        checkSignalD->raise();
        checkSignalE->raise();
        pushButton_5->raise();
        label_SignalC->raise();
        label_SignalD->raise();
        label_SignalE->raise();
        CheckPauseShow->raise();
        CheckInvertShow->raise();
        pushButton_2D_accel->raise();

        retranslateUi(biofeedback);

        QMetaObject::connectSlotsByName(biofeedback);
    } // setupUi

    void retranslateUi(QMainWindow *biofeedback)
    {
        biofeedback->setWindowTitle(QApplication::translate("biofeedback", "BioFeedback", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("biofeedback", "RF:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("biofeedback", "Offset(-dB)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("biofeedback", "Gain", 0, QApplication::UnicodeUTF8));
        timemorelabel->setText(QApplication::translate("biofeedback", "60 s", 0, QApplication::UnicodeUTF8));
        fftbutton->setText(QApplication::translate("biofeedback", "Set", 0, QApplication::UnicodeUTF8));
        label_SignalA->setText(QApplication::translate("biofeedback", "finding", 0, QApplication::UnicodeUTF8));
        label_SignalB->setText(QApplication::translate("biofeedback", "finding", 0, QApplication::UnicodeUTF8));
        EDM->setText(QApplication::translate("biofeedback", "0", 0, QApplication::UnicodeUTF8));
        checkSignalA->clear();
        checkSignalA->insertItems(0, QStringList()
         << QApplication::translate("biofeedback", "Stop", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "RR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "RPeak", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "M2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "M1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "G2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "G1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "UP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Beta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Sigma", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Alpha", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Theta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Delta", 0, QApplication::UnicodeUTF8)
        );
        alphalabel->setText(QApplication::translate("biofeedback", "Alpha", 0, QApplication::UnicodeUTF8));
        Sigmalabel->setText(QApplication::translate("biofeedback", "Sigma", 0, QApplication::UnicodeUTF8));
        checkSignalB->clear();
        checkSignalB->insertItems(0, QStringList()
         << QApplication::translate("biofeedback", "Stop", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "RR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "RPeak", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "M2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "M1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "G2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "G1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "UP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Beta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Sigma", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Alpha", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Theta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Delta", 0, QApplication::UnicodeUTF8)
        );
        checkSignalC->clear();
        checkSignalC->insertItems(0, QStringList()
         << QApplication::translate("biofeedback", "Stop", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "--", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "--", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "M2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "M1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "G2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "G1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "UP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Beta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Sigma", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Alpha", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Theta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Delta", 0, QApplication::UnicodeUTF8)
        );
        checkSignalD->clear();
        checkSignalD->insertItems(0, QStringList()
         << QApplication::translate("biofeedback", "Stop", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "--", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "--", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "M2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "M1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "G2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "G1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "UP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Beta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Sigma", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Alpha", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Theta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Delta", 0, QApplication::UnicodeUTF8)
        );
        checkSignalE->clear();
        checkSignalE->insertItems(0, QStringList()
         << QApplication::translate("biofeedback", "Stop", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "--", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "--", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "M2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "M1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "G2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "G1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "UP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Beta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Sigma", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Alpha", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Theta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("biofeedback", "Delta", 0, QApplication::UnicodeUTF8)
        );
        pushButton_5->setText(QApplication::translate("biofeedback", "Set", 0, QApplication::UnicodeUTF8));
        label_SignalC->setText(QApplication::translate("biofeedback", "finding", 0, QApplication::UnicodeUTF8));
        label_SignalD->setText(QApplication::translate("biofeedback", "finding", 0, QApplication::UnicodeUTF8));
        label_SignalE->setText(QApplication::translate("biofeedback", "finding", 0, QApplication::UnicodeUTF8));
        CheckPauseShow->setText(QApplication::translate("biofeedback", "Pause", 0, QApplication::UnicodeUTF8));
        CheckInvertShow->setText(QApplication::translate("biofeedback", "Invert", 0, QApplication::UnicodeUTF8));
        pushButton_2D_accel->setText(QApplication::translate("biofeedback", "Posture Viewer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class biofeedback: public Ui_biofeedback {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIOFEEDBACK_H
