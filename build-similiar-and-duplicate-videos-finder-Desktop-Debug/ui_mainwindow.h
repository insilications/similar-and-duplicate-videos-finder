/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionCredits;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QComboBox *selectThumbnails;
    QCheckBox *verboseCheckbox;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *selectPhash;
    QRadioButton *selectSSIM;
    QLabel *label_3;
    QComboBox *blocksizeCombo;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSlider *thresholdSlider;
    QGridLayout *gridLayout;
    QLabel *sameDurationModifierLabel;
    QComboBox *sameDurationCombo;
    QComboBox *differentDurationCombo;
    QLabel *differentDurationModifierLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *directoryBox;
    QPushButton *browseFolders;
    QPushButton *findDuplicates;
    QTextEdit *statusBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *processedFiles;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QMenu *menuGeneral;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(677, 642);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAcceptDrops(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionCredits = new QAction(MainWindow);
        actionCredits->setObjectName(QString::fromUtf8("actionCredits"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, 0, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, 0, -1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(label_2);

        selectThumbnails = new QComboBox(centralWidget);
        selectThumbnails->setObjectName(QString::fromUtf8("selectThumbnails"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(selectThumbnails->sizePolicy().hasHeightForWidth());
        selectThumbnails->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(selectThumbnails);

        verboseCheckbox = new QCheckBox(centralWidget);
        verboseCheckbox->setObjectName(QString::fromUtf8("verboseCheckbox"));
        verboseCheckbox->setToolTipDuration(-1);
        verboseCheckbox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        verticalLayout_2->addWidget(verboseCheckbox);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        selectPhash = new QRadioButton(centralWidget);
        selectPhash->setObjectName(QString::fromUtf8("selectPhash"));
        sizePolicy3.setHeightForWidth(selectPhash->sizePolicy().hasHeightForWidth());
        selectPhash->setSizePolicy(sizePolicy3);
        selectPhash->setChecked(true);

        verticalLayout_6->addWidget(selectPhash);

        selectSSIM = new QRadioButton(centralWidget);
        selectSSIM->setObjectName(QString::fromUtf8("selectSSIM"));
        sizePolicy3.setHeightForWidth(selectSSIM->sizePolicy().hasHeightForWidth());
        selectSSIM->setSizePolicy(sizePolicy3);

        verticalLayout_6->addWidget(selectSSIM);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_6->addWidget(label_3);

        blocksizeCombo = new QComboBox(centralWidget);
        blocksizeCombo->setObjectName(QString::fromUtf8("blocksizeCombo"));
        sizePolicy3.setHeightForWidth(blocksizeCombo->sizePolicy().hasHeightForWidth());
        blocksizeCombo->setSizePolicy(sizePolicy3);

        verticalLayout_6->addWidget(blocksizeCombo);


        horizontalLayout_4->addLayout(verticalLayout_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 10);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label);

        thresholdSlider = new QSlider(centralWidget);
        thresholdSlider->setObjectName(QString::fromUtf8("thresholdSlider"));
        sizePolicy3.setHeightForWidth(thresholdSlider->sizePolicy().hasHeightForWidth());
        thresholdSlider->setSizePolicy(sizePolicy3);
        thresholdSlider->setMinimumSize(QSize(200, 1));
        thresholdSlider->setMinimum(1);
        thresholdSlider->setMaximum(100);
        thresholdSlider->setPageStep(8);
        thresholdSlider->setValue(100);
        thresholdSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(thresholdSlider);


        verticalLayout_3->addLayout(horizontalLayout_5);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(6);
        sameDurationModifierLabel = new QLabel(centralWidget);
        sameDurationModifierLabel->setObjectName(QString::fromUtf8("sameDurationModifierLabel"));
        sameDurationModifierLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(sameDurationModifierLabel, 1, 0, 1, 1);

        sameDurationCombo = new QComboBox(centralWidget);
        sameDurationCombo->setObjectName(QString::fromUtf8("sameDurationCombo"));
        sizePolicy.setHeightForWidth(sameDurationCombo->sizePolicy().hasHeightForWidth());
        sameDurationCombo->setSizePolicy(sizePolicy);
        sameDurationCombo->setMinimumSize(QSize(0, 0));
        sameDurationCombo->setMaximumSize(QSize(50, 16777215));
        sameDurationCombo->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(sameDurationCombo, 1, 1, 1, 1);

        differentDurationCombo = new QComboBox(centralWidget);
        differentDurationCombo->setObjectName(QString::fromUtf8("differentDurationCombo"));
        differentDurationCombo->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(differentDurationCombo, 0, 1, 1, 1);

        differentDurationModifierLabel = new QLabel(centralWidget);
        differentDurationModifierLabel->setObjectName(QString::fromUtf8("differentDurationModifierLabel"));
        differentDurationModifierLabel->setLayoutDirection(Qt::LeftToRight);
        differentDurationModifierLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(differentDurationModifierLabel, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        directoryBox = new QLineEdit(centralWidget);
        directoryBox->setObjectName(QString::fromUtf8("directoryBox"));

        horizontalLayout->addWidget(directoryBox);

        browseFolders = new QPushButton(centralWidget);
        browseFolders->setObjectName(QString::fromUtf8("browseFolders"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(browseFolders->sizePolicy().hasHeightForWidth());
        browseFolders->setSizePolicy(sizePolicy4);
        browseFolders->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(browseFolders);

        findDuplicates = new QPushButton(centralWidget);
        findDuplicates->setObjectName(QString::fromUtf8("findDuplicates"));

        horizontalLayout->addWidget(findDuplicates);


        verticalLayout->addLayout(horizontalLayout);

        statusBox = new QTextEdit(centralWidget);
        statusBox->setObjectName(QString::fromUtf8("statusBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(statusBox->sizePolicy().hasHeightForWidth());
        statusBox->setSizePolicy(sizePolicy5);
        statusBox->setMinimumSize(QSize(0, 281));
        statusBox->setReadOnly(true);

        verticalLayout->addWidget(statusBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        processedFiles = new QLabel(centralWidget);
        processedFiles->setObjectName(QString::fromUtf8("processedFiles"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(processedFiles->sizePolicy().hasHeightForWidth());
        processedFiles->setSizePolicy(sizePolicy6);
        processedFiles->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(processedFiles);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        horizontalLayout_3->addWidget(progressBar);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 677, 24));
        menuGeneral = new QMenu(menuBar);
        menuGeneral->setObjectName(QString::fromUtf8("menuGeneral"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuGeneral->menuAction());
        menuGeneral->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Similiar and duplicate video finder", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionCredits->setText(QCoreApplication::translate("MainWindow", "Credits", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Thumbnails:", nullptr));
#if QT_CONFIG(tooltip)
        selectThumbnails->setToolTip(QCoreApplication::translate("MainWindow", "<nobr>CutEnds finds videos where beginning or end is cut off</nobr><br><nobr>2x2 is usually enough to find identical videos, but</nobr>\n"
"<br><nobr>every mode will have slightly different results. More = slower</nobr>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        verboseCheckbox->setToolTip(QCoreApplication::translate("MainWindow", "List all processed video names.  \n"
"Errors will be listed in any case.", nullptr));
#endif // QT_CONFIG(tooltip)
        verboseCheckbox->setText(QCoreApplication::translate("MainWindow", "Verbose", nullptr));
#if QT_CONFIG(tooltip)
        selectPhash->setToolTip(QCoreApplication::translate("MainWindow", "Perceptual hashing algorithm", nullptr));
#endif // QT_CONFIG(tooltip)
        selectPhash->setText(QCoreApplication::translate("MainWindow", "pHash", nullptr));
#if QT_CONFIG(tooltip)
        selectSSIM->setToolTip(QCoreApplication::translate("MainWindow", "Structural similarity algorithm. Slighly more accurate, much slower", nullptr));
#endif // QT_CONFIG(tooltip)
        selectSSIM->setText(QCoreApplication::translate("MainWindow", "SSIM", nullptr));
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("MainWindow", "SSIM block size:", nullptr));
#if QT_CONFIG(tooltip)
        blocksizeCombo->setToolTip(QCoreApplication::translate("MainWindow", "Smaller block size is more accurate, but slower", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "Comparison threshold:", nullptr));
        sameDurationModifierLabel->setText(QCoreApplication::translate("MainWindow", "If both durations within 1s, lower threshold by", nullptr));
#if QT_CONFIG(tooltip)
        sameDurationCombo->setToolTip(QCoreApplication::translate("MainWindow", "<nobr>How important it is that same length videos should match</nobr><br><nobr>Avoid false positives by increasing comparison threshold</nobr><br><nobr>at the same time you increase this value</nobr>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        differentDurationCombo->setToolTip(QCoreApplication::translate("MainWindow", "<nobr>How important it is that different length videos should not match</nobr>", nullptr));
#endif // QT_CONFIG(tooltip)
        differentDurationModifierLabel->setText(QCoreApplication::translate("MainWindow", "If both durations differ 1s, raise threshold by", nullptr));
        directoryBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Folders to search, separated by semicolon. Drag and drop supported.", nullptr));
        browseFolders->setText(QString());
        findDuplicates->setText(QCoreApplication::translate("MainWindow", "Find duplicates", nullptr));
#if QT_CONFIG(tooltip)
        statusBox->setToolTip(QCoreApplication::translate("MainWindow", "Print all found video names", nullptr));
#endif // QT_CONFIG(tooltip)
        processedFiles->setText(QCoreApplication::translate("MainWindow", "Processed files", nullptr));
        menuGeneral->setTitle(QCoreApplication::translate("MainWindow", "General", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
