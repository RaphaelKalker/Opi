/********************************************************************************
** Form generated from reading UI file 'signalviewer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNALVIEWER_H
#define UI_SIGNALVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_signalviewer
{
public:
    QSlider *ShiftSlider;
    QGraphicsView *drawSignalD;
    QSlider *adczoom;
    QGraphicsView *drawSignalF;
    QSlider *TimeSlider;
    QGraphicsView *drawSignalC;
    QGraphicsView *drawSignalE;
    QFrame *middle_line_adc;
    QGraphicsView *drawSignalA;
    QPushButton *pushButton_4;
    QSlider *otherzoom;
    QFrame *line;
    QLabel *labelSignalF;
    QLabel *label_4;
    QGraphicsView *drawSignalB;
    QDateTimeEdit *stDTE;
    QDateTimeEdit *endDTE;
    QPushButton *StartTimeButtion;
    QPushButton *EndTimeButton;
    QLabel *timemorelabel;
    QLabel *label_11;
    QTextEdit *TagText;
    QPushButton *pushButton_TM;
    QPushButton *pushButton_TP;
    QDateTimeEdit *middleDTE;
    QTextEdit *TagText_2;
    QComboBox *comboBoxSignalA;
    QLabel *GenericlabelADC;
    QLabel *GenericlabelX;
    QLabel *GenericlabelY;
    QLabel *GenericlabelZ;
    QLabel *GenericlabelTemp;
    QLabel *ECGlabelRR;
    QLabel *ECGlabelHF;
    QLabel *ECGlabelamp;
    QLabel *ECGlabelLF;
    QLabel *ECGlabelLH;
    QComboBox *comboBoxSignalB;
    QComboBox *comboBoxSignalC;
    QComboBox *comboBoxSignalD;
    QComboBox *comboBoxSignalE;
    QComboBox *comboBoxTAG;
    QLabel *label;
    QCheckBox *checkReverse;
    QPushButton *pushButton_2D_accel;
    QPushButton *pushButton_spectrogram;
    QLabel *timemorelabel_now;
    QLabel *timemorelabel_total;

    void setupUi(QDialog *signalviewer)
    {
        if (signalviewer->objectName().isEmpty())
            signalviewer->setObjectName(QString::fromUtf8("signalviewer"));
        signalviewer->resize(773, 556);
        signalviewer->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bioshare-BGtiletexturedMixedGloss600px.jpg);\n"
"font: 75 8pt \"Arial\";"));
        ShiftSlider = new QSlider(signalviewer);
        ShiftSlider->setObjectName(QString::fromUtf8("ShiftSlider"));
        ShiftSlider->setGeometry(QRect(60, 530, 651, 16));
        ShiftSlider->setCursor(QCursor(Qt::PointingHandCursor));
        ShiftSlider->setMinimum(0);
        ShiftSlider->setMaximum(86400);
        ShiftSlider->setSingleStep(128);
        ShiftSlider->setPageStep(1024);
        ShiftSlider->setValue(0);
        ShiftSlider->setOrientation(Qt::Horizontal);
        drawSignalD = new QGraphicsView(signalviewer);
        drawSignalD->setObjectName(QString::fromUtf8("drawSignalD"));
        drawSignalD->setGeometry(QRect(10, 340, 721, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        drawSignalD->setFont(font);
        drawSignalD->viewport()->setProperty("cursor", QVariant(QCursor(Qt::OpenHandCursor)));
        drawSignalD->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawSignalD->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        adczoom = new QSlider(signalviewer);
        adczoom->setObjectName(QString::fromUtf8("adczoom"));
        adczoom->setGeometry(QRect(740, 50, 21, 171));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(adczoom->sizePolicy().hasHeightForWidth());
        adczoom->setSizePolicy(sizePolicy);
        adczoom->setFont(font);
        adczoom->setCursor(QCursor(Qt::PointingHandCursor));
        adczoom->setMinimum(-20);
        adczoom->setMaximum(20);
        adczoom->setSingleStep(1);
        adczoom->setPageStep(1);
        adczoom->setValue(0);
        adczoom->setSliderPosition(0);
        adczoom->setOrientation(Qt::Vertical);
        drawSignalF = new QGraphicsView(signalviewer);
        drawSignalF->setObjectName(QString::fromUtf8("drawSignalF"));
        drawSignalF->setGeometry(QRect(10, 440, 721, 41));
        drawSignalF->setFont(font);
        drawSignalF->viewport()->setProperty("cursor", QVariant(QCursor(Qt::OpenHandCursor)));
        drawSignalF->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawSignalF->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TimeSlider = new QSlider(signalviewer);
        TimeSlider->setObjectName(QString::fromUtf8("TimeSlider"));
        TimeSlider->setGeometry(QRect(460, 500, 241, 16));
        TimeSlider->setCursor(QCursor(Qt::PointingHandCursor));
        TimeSlider->setMinimum(10);
        TimeSlider->setMaximum(86400);
        TimeSlider->setSingleStep(10);
        TimeSlider->setPageStep(30);
        TimeSlider->setValue(3600);
        TimeSlider->setSliderPosition(3600);
        TimeSlider->setOrientation(Qt::Horizontal);
        drawSignalC = new QGraphicsView(signalviewer);
        drawSignalC->setObjectName(QString::fromUtf8("drawSignalC"));
        drawSignalC->setGeometry(QRect(10, 290, 721, 51));
        drawSignalC->setFont(font);
        drawSignalC->viewport()->setProperty("cursor", QVariant(QCursor(Qt::OpenHandCursor)));
        drawSignalC->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawSignalC->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawSignalE = new QGraphicsView(signalviewer);
        drawSignalE->setObjectName(QString::fromUtf8("drawSignalE"));
        drawSignalE->setGeometry(QRect(10, 390, 721, 51));
        drawSignalE->setFont(font);
        drawSignalE->viewport()->setProperty("cursor", QVariant(QCursor(Qt::OpenHandCursor)));
        drawSignalE->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawSignalE->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        middle_line_adc = new QFrame(signalviewer);
        middle_line_adc->setObjectName(QString::fromUtf8("middle_line_adc"));
        middle_line_adc->setGeometry(QRect(10, 140, 721, 2));
        middle_line_adc->setFont(font);
        middle_line_adc->setMidLineWidth(0);
        middle_line_adc->setFrameShape(QFrame::HLine);
        middle_line_adc->setFrameShadow(QFrame::Sunken);
        drawSignalA = new QGraphicsView(signalviewer);
        drawSignalA->setObjectName(QString::fromUtf8("drawSignalA"));
        drawSignalA->setGeometry(QRect(10, 40, 721, 201));
        drawSignalA->setFont(font);
        drawSignalA->viewport()->setProperty("cursor", QVariant(QCursor(Qt::OpenHandCursor)));
        drawSignalA->setMidLineWidth(0);
        drawSignalA->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawSignalA->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        drawSignalA->setBackgroundBrush(brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        drawSignalA->setForegroundBrush(brush1);
        pushButton_4 = new QPushButton(signalviewer);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(340, 0, 61, 41));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/Data-File-Convert.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(50, 45));
        otherzoom = new QSlider(signalviewer);
        otherzoom->setObjectName(QString::fromUtf8("otherzoom"));
        otherzoom->setGeometry(QRect(740, 260, 20, 211));
        otherzoom->setCursor(QCursor(Qt::PointingHandCursor));
        otherzoom->setMinimum(-20);
        otherzoom->setMaximum(20);
        otherzoom->setSingleStep(1);
        otherzoom->setPageStep(1);
        otherzoom->setValue(0);
        otherzoom->setOrientation(Qt::Vertical);
        line = new QFrame(signalviewer);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(370, 40, 2, 440));
        line->setCursor(QCursor(Qt::OpenHandCursor));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        labelSignalF = new QLabel(signalviewer);
        labelSignalF->setObjectName(QString::fromUtf8("labelSignalF"));
        labelSignalF->setGeometry(QRect(10, 440, 31, 21));
        labelSignalF->setFont(font);
        labelSignalF->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(signalviewer);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(740, 220, 21, 41));
        drawSignalB = new QGraphicsView(signalviewer);
        drawSignalB->setObjectName(QString::fromUtf8("drawSignalB"));
        drawSignalB->setGeometry(QRect(10, 240, 721, 51));
        drawSignalB->setFont(font);
        drawSignalB->viewport()->setProperty("cursor", QVariant(QCursor(Qt::OpenHandCursor)));
        drawSignalB->setLineWidth(1);
        drawSignalB->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        drawSignalB->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        stDTE = new QDateTimeEdit(signalviewer);
        stDTE->setObjectName(QString::fromUtf8("stDTE"));
        stDTE->setGeometry(QRect(420, 10, 111, 22));
        stDTE->setAlignment(Qt::AlignCenter);
        stDTE->setReadOnly(true);
        stDTE->setButtonSymbols(QAbstractSpinBox::NoButtons);
        stDTE->setDisplayFormat(QString::fromUtf8("M/d HH:mm:ss.zzz"));
        endDTE = new QDateTimeEdit(signalviewer);
        endDTE->setObjectName(QString::fromUtf8("endDTE"));
        endDTE->setGeometry(QRect(600, 10, 111, 22));
        endDTE->setAlignment(Qt::AlignCenter);
        endDTE->setReadOnly(true);
        endDTE->setButtonSymbols(QAbstractSpinBox::NoButtons);
        endDTE->setDisplayFormat(QString::fromUtf8("M/d HH:mm:ss.zzz"));
        StartTimeButtion = new QPushButton(signalviewer);
        StartTimeButtion->setObjectName(QString::fromUtf8("StartTimeButtion"));
        StartTimeButtion->setGeometry(QRect(530, 10, 51, 21));
        StartTimeButtion->setCursor(QCursor(Qt::PointingHandCursor));
        EndTimeButton = new QPushButton(signalviewer);
        EndTimeButton->setObjectName(QString::fromUtf8("EndTimeButton"));
        EndTimeButton->setGeometry(QRect(710, 10, 51, 21));
        EndTimeButton->setCursor(QCursor(Qt::PointingHandCursor));
        timemorelabel = new QLabel(signalviewer);
        timemorelabel->setObjectName(QString::fromUtf8("timemorelabel"));
        timemorelabel->setGeometry(QRect(710, 500, 50, 16));
        timemorelabel->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(signalviewer);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(230, 500, 31, 21));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);
        TagText = new QTextEdit(signalviewer);
        TagText->setObjectName(QString::fromUtf8("TagText"));
        TagText->setGeometry(QRect(80, 490, 151, 21));
        TagText->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        TagText->setAcceptDrops(false);
        TagText->setInputMethodHints(Qt::ImhNone);
        TagText->setLineWidth(1);
        TagText->setMidLineWidth(0);
        TagText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TagText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TagText->setLineWrapMode(QTextEdit::WidgetWidth);
        TagText->setLineWrapColumnOrWidth(0);
        TagText->setTabStopWidth(80);
        TagText->setAcceptRichText(true);
        pushButton_TM = new QPushButton(signalviewer);
        pushButton_TM->setObjectName(QString::fromUtf8("pushButton_TM"));
        pushButton_TM->setGeometry(QRect(40, 500, 31, 23));
        pushButton_TM->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_TP = new QPushButton(signalviewer);
        pushButton_TP->setObjectName(QString::fromUtf8("pushButton_TP"));
        pushButton_TP->setGeometry(QRect(10, 500, 31, 23));
        pushButton_TP->setCursor(QCursor(Qt::PointingHandCursor));
        middleDTE = new QDateTimeEdit(signalviewer);
        middleDTE->setObjectName(QString::fromUtf8("middleDTE"));
        middleDTE->setGeometry(QRect(300, 500, 141, 22));
        middleDTE->setAlignment(Qt::AlignCenter);
        middleDTE->setReadOnly(true);
        middleDTE->setButtonSymbols(QAbstractSpinBox::NoButtons);
        middleDTE->setDisplayFormat(QString::fromUtf8("M/d HH:mm:ss.zzz"));
        TagText_2 = new QTextEdit(signalviewer);
        TagText_2->setObjectName(QString::fromUtf8("TagText_2"));
        TagText_2->setGeometry(QRect(80, 510, 151, 21));
        TagText_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        TagText_2->setAcceptDrops(false);
        TagText_2->setInputMethodHints(Qt::ImhNone);
        TagText_2->setLineWidth(1);
        TagText_2->setMidLineWidth(0);
        TagText_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TagText_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TagText_2->setLineWrapMode(QTextEdit::WidgetWidth);
        TagText_2->setLineWrapColumnOrWidth(0);
        TagText_2->setTabStopWidth(80);
        TagText_2->setAcceptRichText(true);
        comboBoxSignalA = new QComboBox(signalviewer);
        comboBoxSignalA->setObjectName(QString::fromUtf8("comboBoxSignalA"));
        comboBoxSignalA->setGeometry(QRect(10, 40, 75, 22));
        comboBoxSignalA->setCursor(QCursor(Qt::PointingHandCursor));
        GenericlabelADC = new QLabel(signalviewer);
        GenericlabelADC->setObjectName(QString::fromUtf8("GenericlabelADC"));
        GenericlabelADC->setGeometry(QRect(10, 40, 41, 21));
        GenericlabelX = new QLabel(signalviewer);
        GenericlabelX->setObjectName(QString::fromUtf8("GenericlabelX"));
        GenericlabelX->setGeometry(QRect(10, 240, 21, 21));
        GenericlabelY = new QLabel(signalviewer);
        GenericlabelY->setObjectName(QString::fromUtf8("GenericlabelY"));
        GenericlabelY->setGeometry(QRect(10, 290, 21, 21));
        GenericlabelZ = new QLabel(signalviewer);
        GenericlabelZ->setObjectName(QString::fromUtf8("GenericlabelZ"));
        GenericlabelZ->setGeometry(QRect(10, 340, 16, 21));
        GenericlabelTemp = new QLabel(signalviewer);
        GenericlabelTemp->setObjectName(QString::fromUtf8("GenericlabelTemp"));
        GenericlabelTemp->setGeometry(QRect(10, 390, 41, 21));
        ECGlabelRR = new QLabel(signalviewer);
        ECGlabelRR->setObjectName(QString::fromUtf8("ECGlabelRR"));
        ECGlabelRR->setGeometry(QRect(10, 40, 51, 21));
        ECGlabelRR->setAlignment(Qt::AlignCenter);
        ECGlabelHF = new QLabel(signalviewer);
        ECGlabelHF->setObjectName(QString::fromUtf8("ECGlabelHF"));
        ECGlabelHF->setGeometry(QRect(10, 340, 51, 21));
        ECGlabelHF->setAlignment(Qt::AlignCenter);
        ECGlabelamp = new QLabel(signalviewer);
        ECGlabelamp->setObjectName(QString::fromUtf8("ECGlabelamp"));
        ECGlabelamp->setGeometry(QRect(10, 240, 51, 21));
        ECGlabelamp->setAlignment(Qt::AlignCenter);
        ECGlabelLF = new QLabel(signalviewer);
        ECGlabelLF->setObjectName(QString::fromUtf8("ECGlabelLF"));
        ECGlabelLF->setGeometry(QRect(10, 290, 51, 21));
        ECGlabelLF->setAlignment(Qt::AlignCenter);
        ECGlabelLH = new QLabel(signalviewer);
        ECGlabelLH->setObjectName(QString::fromUtf8("ECGlabelLH"));
        ECGlabelLH->setGeometry(QRect(10, 390, 51, 21));
        ECGlabelLH->setAlignment(Qt::AlignCenter);
        comboBoxSignalB = new QComboBox(signalviewer);
        comboBoxSignalB->setObjectName(QString::fromUtf8("comboBoxSignalB"));
        comboBoxSignalB->setGeometry(QRect(10, 240, 75, 22));
        comboBoxSignalB->setCursor(QCursor(Qt::PointingHandCursor));
        comboBoxSignalC = new QComboBox(signalviewer);
        comboBoxSignalC->setObjectName(QString::fromUtf8("comboBoxSignalC"));
        comboBoxSignalC->setGeometry(QRect(10, 290, 75, 22));
        comboBoxSignalC->setCursor(QCursor(Qt::PointingHandCursor));
        comboBoxSignalD = new QComboBox(signalviewer);
        comboBoxSignalD->setObjectName(QString::fromUtf8("comboBoxSignalD"));
        comboBoxSignalD->setGeometry(QRect(10, 340, 75, 22));
        comboBoxSignalD->setCursor(QCursor(Qt::PointingHandCursor));
        comboBoxSignalE = new QComboBox(signalviewer);
        comboBoxSignalE->setObjectName(QString::fromUtf8("comboBoxSignalE"));
        comboBoxSignalE->setGeometry(QRect(10, 390, 75, 22));
        comboBoxSignalE->setCursor(QCursor(Qt::PointingHandCursor));
        comboBoxTAG = new QComboBox(signalviewer);
        comboBoxTAG->setObjectName(QString::fromUtf8("comboBoxTAG"));
        comboBoxTAG->setGeometry(QRect(40, 10, 171, 22));
        comboBoxTAG->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(signalviewer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 31, 21));
        label->setAlignment(Qt::AlignCenter);
        checkReverse = new QCheckBox(signalviewer);
        checkReverse->setObjectName(QString::fromUtf8("checkReverse"));
        checkReverse->setGeometry(QRect(670, 40, 61, 17));
        checkReverse->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2D_accel = new QPushButton(signalviewer);
        pushButton_2D_accel->setObjectName(QString::fromUtf8("pushButton_2D_accel"));
        pushButton_2D_accel->setGeometry(QRect(210, 10, 61, 23));
        pushButton_2D_accel->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_spectrogram = new QPushButton(signalviewer);
        pushButton_spectrogram->setObjectName(QString::fromUtf8("pushButton_spectrogram"));
        pushButton_spectrogram->setGeometry(QRect(270, 10, 71, 23));
        timemorelabel_now = new QLabel(signalviewer);
        timemorelabel_now->setObjectName(QString::fromUtf8("timemorelabel_now"));
        timemorelabel_now->setGeometry(QRect(10, 530, 50, 16));
        timemorelabel_now->setAlignment(Qt::AlignCenter);
        timemorelabel_total = new QLabel(signalviewer);
        timemorelabel_total->setObjectName(QString::fromUtf8("timemorelabel_total"));
        timemorelabel_total->setGeometry(QRect(710, 530, 50, 16));
        timemorelabel_total->setAlignment(Qt::AlignCenter);
        drawSignalE->raise();
        drawSignalB->raise();
        drawSignalA->raise();
        ShiftSlider->raise();
        drawSignalD->raise();
        adczoom->raise();
        drawSignalF->raise();
        TimeSlider->raise();
        drawSignalC->raise();
        middle_line_adc->raise();
        pushButton_4->raise();
        otherzoom->raise();
        line->raise();
        labelSignalF->raise();
        label_4->raise();
        stDTE->raise();
        endDTE->raise();
        StartTimeButtion->raise();
        EndTimeButton->raise();
        timemorelabel->raise();
        label_11->raise();
        TagText->raise();
        pushButton_TM->raise();
        pushButton_TP->raise();
        middleDTE->raise();
        TagText_2->raise();
        comboBoxSignalA->raise();
        GenericlabelADC->raise();
        GenericlabelX->raise();
        GenericlabelY->raise();
        GenericlabelZ->raise();
        GenericlabelTemp->raise();
        ECGlabelRR->raise();
        ECGlabelHF->raise();
        ECGlabelamp->raise();
        ECGlabelLF->raise();
        ECGlabelLH->raise();
        comboBoxSignalB->raise();
        comboBoxSignalC->raise();
        comboBoxSignalD->raise();
        comboBoxSignalE->raise();
        comboBoxTAG->raise();
        label->raise();
        checkReverse->raise();
        pushButton_2D_accel->raise();
        pushButton_spectrogram->raise();
        timemorelabel_now->raise();
        timemorelabel_total->raise();

        retranslateUi(signalviewer);

        comboBoxSignalB->setCurrentIndex(3);
        comboBoxSignalC->setCurrentIndex(6);
        comboBoxSignalD->setCurrentIndex(7);
        comboBoxSignalE->setCurrentIndex(9);


        QMetaObject::connectSlotsByName(signalviewer);
    } // setupUi

    void retranslateUi(QDialog *signalviewer)
    {
        signalviewer->setWindowTitle(QApplication::translate("signalviewer", "Signal Viewer", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QString());
        labelSignalF->setText(QApplication::translate("signalviewer", "Tag", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("signalviewer", "Gain", 0, QApplication::UnicodeUTF8));
        StartTimeButtion->setText(QApplication::translate("signalviewer", "Set Start", 0, QApplication::UnicodeUTF8));
        EndTimeButton->setText(QApplication::translate("signalviewer", "Set End", 0, QApplication::UnicodeUTF8));
        timemorelabel->setText(QApplication::translate("signalviewer", "600s", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("signalviewer", "Tag", 0, QApplication::UnicodeUTF8));
        pushButton_TM->setText(QApplication::translate("signalviewer", "T-", 0, QApplication::UnicodeUTF8));
        pushButton_TP->setText(QApplication::translate("signalviewer", "T+", 0, QApplication::UnicodeUTF8));
        comboBoxSignalA->clear();
        comboBoxSignalA->insertItems(0, QStringList()
         << QApplication::translate("signalviewer", "M2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "M1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "G2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "G1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "UP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Beta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Sigma", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Alpha", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Theta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Delta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Mix", 0, QApplication::UnicodeUTF8)
        );
        GenericlabelADC->setText(QApplication::translate("signalviewer", "Signal", 0, QApplication::UnicodeUTF8));
        GenericlabelX->setText(QApplication::translate("signalviewer", "X", 0, QApplication::UnicodeUTF8));
        GenericlabelY->setText(QApplication::translate("signalviewer", "Y", 0, QApplication::UnicodeUTF8));
        GenericlabelZ->setText(QApplication::translate("signalviewer", "Z", 0, QApplication::UnicodeUTF8));
        GenericlabelTemp->setText(QApplication::translate("signalviewer", "Temp", 0, QApplication::UnicodeUTF8));
        ECGlabelRR->setText(QApplication::translate("signalviewer", "RR", 0, QApplication::UnicodeUTF8));
        ECGlabelHF->setText(QApplication::translate("signalviewer", "logHFp", 0, QApplication::UnicodeUTF8));
        ECGlabelamp->setText(QApplication::translate("signalviewer", "RPeak", 0, QApplication::UnicodeUTF8));
        ECGlabelLF->setText(QApplication::translate("signalviewer", "SDNN*10", 0, QApplication::UnicodeUTF8));
        ECGlabelLH->setText(QApplication::translate("signalviewer", "logLF/HF", 0, QApplication::UnicodeUTF8));
        comboBoxSignalB->clear();
        comboBoxSignalB->insertItems(0, QStringList()
         << QApplication::translate("signalviewer", "M2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "M1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "G2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "G1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "UP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Beta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Sigma", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Alpha", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Theta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Delta", 0, QApplication::UnicodeUTF8)
        );
        comboBoxSignalC->clear();
        comboBoxSignalC->insertItems(0, QStringList()
         << QApplication::translate("signalviewer", "M2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "M1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "G2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "G1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "UP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Beta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Sigma", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Alpha", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Theta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Delta", 0, QApplication::UnicodeUTF8)
        );
        comboBoxSignalD->clear();
        comboBoxSignalD->insertItems(0, QStringList()
         << QApplication::translate("signalviewer", "M2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "M1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "G2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "G1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "UP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Beta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Sigma", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Alpha", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Theta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Delta", 0, QApplication::UnicodeUTF8)
        );
        comboBoxSignalE->clear();
        comboBoxSignalE->insertItems(0, QStringList()
         << QApplication::translate("signalviewer", "M2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "M1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "G2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "G1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "UP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Beta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Sigma", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Alpha", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Theta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("signalviewer", "Delta", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("signalviewer", "Tag", 0, QApplication::UnicodeUTF8));
        checkReverse->setText(QApplication::translate("signalviewer", "Invert", 0, QApplication::UnicodeUTF8));
        pushButton_2D_accel->setText(QApplication::translate("signalviewer", "Posture ", 0, QApplication::UnicodeUTF8));
        pushButton_spectrogram->setText(QApplication::translate("signalviewer", "spectrogram", 0, QApplication::UnicodeUTF8));
        timemorelabel_now->setText(QApplication::translate("signalviewer", "0s", 0, QApplication::UnicodeUTF8));
        timemorelabel_total->setText(QApplication::translate("signalviewer", "86400s", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class signalviewer: public Ui_signalviewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNALVIEWER_H
