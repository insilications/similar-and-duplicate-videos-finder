/********************************************************************************
** Form generated from reading UI file 'comparison.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPARISON_H
#define UI_COMPARISON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Comparison
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QRadioButton *selectPhash;
    QRadioButton *selectSSIM;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label;
    QSlider *thresholdSlider;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    ClickableLabel *leftImage;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_3;
    ClickableLabel *leftFileName;
    QLabel *leftPathName;
    QGridLayout *gridLayout_2;
    QLabel *leftModified;
    QLabel *leftDuration;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_16;
    QLabel *label_10;
    QLabel *leftFileSize;
    QLabel *label_12;
    QLabel *leftResolution;
    QLabel *label_14;
    QLabel *label_22;
    QLabel *leftCodec;
    QLabel *leftBitRate;
    QLabel *leftFrameRate;
    QLabel *label_23;
    QLabel *leftAudio;
    QVBoxLayout *verticalLayout_5;
    ClickableLabel *rightImage;
    QGridLayout *gridLayout_4;
    QLabel *label_28;
    QLabel *label_29;
    ClickableLabel *rightFileName;
    QLabel *rightPathName;
    QGridLayout *gridLayout_3;
    QLabel *label_45;
    QLabel *label_44;
    QLabel *rightBitRate;
    QLabel *label_33;
    QLabel *label_32;
    QLabel *rightFileSize;
    QLabel *label_43;
    QLabel *rightModified;
    QLabel *label_42;
    QLabel *rightFrameRate;
    QLabel *rightDuration;
    QLabel *rightCodec;
    QLabel *rightAudio;
    QLabel *label_35;
    QLabel *rightResolution;
    QLabel *label_34;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *prevVideo;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *leftMove;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *leftDelete;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *rightDelete;
    QSpacerItem *horizontalSpacer;
    QPushButton *rightMove;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *nextVideo;
    QPushButton *swapFilenames;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_15;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QCheckBox *autoIdenticalFilesNamesMustBeContainedCheckbox;
    QLabel *label_8;
    QPushButton *identicalFilesAutoTrash;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QCheckBox *autoOnlySizeDiffNamesCheckbox;
    QCheckBox *autoOnlySizeDontCheckResFpsCheckbox;
    QPushButton *autoDelOnlySizeDiffersButton;
    QFrame *line;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_20;
    QLabel *label_21;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *identicalBits;
    QSpacerItem *horizontalSpacer_3;
    QLabel *trashedFiles;
    QProgressBar *progressBar;
    QLabel *currentVideo;
    QLabel *label_9;
    QLabel *totalVideos;
    QCheckBox *disableDeleteConfirmationCheckbox;

    void setupUi(QDialog *Comparison)
    {
        if (Comparison->objectName().isEmpty())
            Comparison->setObjectName(QString::fromUtf8("Comparison"));
        Comparison->resize(995, 650);
        verticalLayout = new QVBoxLayout(Comparison);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        selectPhash = new QRadioButton(Comparison);
        selectPhash->setObjectName(QString::fromUtf8("selectPhash"));
        selectPhash->setChecked(true);

        horizontalLayout_4->addWidget(selectPhash);

        selectSSIM = new QRadioButton(Comparison);
        selectSSIM->setObjectName(QString::fromUtf8("selectSSIM"));

        horizontalLayout_4->addWidget(selectSSIM);

        horizontalSpacer_8 = new QSpacerItem(30, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        label = new QLabel(Comparison);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        thresholdSlider = new QSlider(Comparison);
        thresholdSlider->setObjectName(QString::fromUtf8("thresholdSlider"));
        thresholdSlider->setMinimum(1);
        thresholdSlider->setMaximum(100);
        thresholdSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(thresholdSlider);


        verticalLayout->addLayout(horizontalLayout_4);

        tabWidget = new QTabWidget(Comparison);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(100, 100));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_5 = new QHBoxLayout(tab);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 0);
        leftImage = new ClickableLabel(tab);
        leftImage->setObjectName(QString::fromUtf8("leftImage"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leftImage->sizePolicy().hasHeightForWidth());
        leftImage->setSizePolicy(sizePolicy1);
        leftImage->setMinimumSize(QSize(400, 300));

        verticalLayout_4->addWidget(leftImage);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        leftFileName = new ClickableLabel(tab);
        leftFileName->setObjectName(QString::fromUtf8("leftFileName"));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(leftFileName->sizePolicy().hasHeightForWidth());
        leftFileName->setSizePolicy(sizePolicy4);
        leftFileName->setMinimumSize(QSize(0, 13));
        leftFileName->setStyleSheet(QString::fromUtf8("color : blue; text-decoration : underline;"));

        gridLayout->addWidget(leftFileName, 0, 1, 1, 1);

        leftPathName = new QLabel(tab);
        leftPathName->setObjectName(QString::fromUtf8("leftPathName"));
        sizePolicy4.setHeightForWidth(leftPathName->sizePolicy().hasHeightForWidth());
        leftPathName->setSizePolicy(sizePolicy4);
        leftPathName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(leftPathName, 1, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setContentsMargins(-1, 0, -1, -1);
        leftModified = new QLabel(tab);
        leftModified->setObjectName(QString::fromUtf8("leftModified"));
        sizePolicy2.setHeightForWidth(leftModified->sizePolicy().hasHeightForWidth());
        leftModified->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(leftModified, 2, 3, 1, 1);

        leftDuration = new QLabel(tab);
        leftDuration->setObjectName(QString::fromUtf8("leftDuration"));
        sizePolicy2.setHeightForWidth(leftDuration->sizePolicy().hasHeightForWidth());
        leftDuration->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(leftDuration, 3, 1, 1, 1);

        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy2.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_18, 4, 0, 1, 1);

        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy2.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_19, 5, 0, 1, 1);

        label_16 = new QLabel(tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy2.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_16, 3, 2, 1, 1);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy5);

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        leftFileSize = new QLabel(tab);
        leftFileSize->setObjectName(QString::fromUtf8("leftFileSize"));
        sizePolicy2.setHeightForWidth(leftFileSize->sizePolicy().hasHeightForWidth());
        leftFileSize->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(leftFileSize, 2, 1, 1, 1);

        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy3.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_12, 2, 2, 1, 1);

        leftResolution = new QLabel(tab);
        leftResolution->setObjectName(QString::fromUtf8("leftResolution"));
        sizePolicy2.setHeightForWidth(leftResolution->sizePolicy().hasHeightForWidth());
        leftResolution->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(leftResolution, 3, 3, 1, 1);

        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy2.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_14, 3, 0, 1, 1);

        label_22 = new QLabel(tab);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy2.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_22, 4, 2, 1, 1);

        leftCodec = new QLabel(tab);
        leftCodec->setObjectName(QString::fromUtf8("leftCodec"));
        sizePolicy4.setHeightForWidth(leftCodec->sizePolicy().hasHeightForWidth());
        leftCodec->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(leftCodec, 5, 1, 1, 1);

        leftBitRate = new QLabel(tab);
        leftBitRate->setObjectName(QString::fromUtf8("leftBitRate"));
        sizePolicy2.setHeightForWidth(leftBitRate->sizePolicy().hasHeightForWidth());
        leftBitRate->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(leftBitRate, 4, 1, 1, 1);

        leftFrameRate = new QLabel(tab);
        leftFrameRate->setObjectName(QString::fromUtf8("leftFrameRate"));
        sizePolicy2.setHeightForWidth(leftFrameRate->sizePolicy().hasHeightForWidth());
        leftFrameRate->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(leftFrameRate, 4, 3, 1, 1);

        label_23 = new QLabel(tab);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy2.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_23, 5, 2, 1, 1);

        leftAudio = new QLabel(tab);
        leftAudio->setObjectName(QString::fromUtf8("leftAudio"));
        sizePolicy4.setHeightForWidth(leftAudio->sizePolicy().hasHeightForWidth());
        leftAudio->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(leftAudio, 5, 3, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 0);
        rightImage = new ClickableLabel(tab);
        rightImage->setObjectName(QString::fromUtf8("rightImage"));
        sizePolicy1.setHeightForWidth(rightImage->sizePolicy().hasHeightForWidth());
        rightImage->setSizePolicy(sizePolicy1);
        rightImage->setMinimumSize(QSize(400, 300));

        verticalLayout_5->addWidget(rightImage);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, 0, -1, -1);
        label_28 = new QLabel(tab);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        sizePolicy3.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(label_28, 0, 0, 1, 1);

        label_29 = new QLabel(tab);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        sizePolicy2.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(label_29, 1, 0, 1, 1);

        rightFileName = new ClickableLabel(tab);
        rightFileName->setObjectName(QString::fromUtf8("rightFileName"));
        sizePolicy4.setHeightForWidth(rightFileName->sizePolicy().hasHeightForWidth());
        rightFileName->setSizePolicy(sizePolicy4);
        rightFileName->setMinimumSize(QSize(0, 13));
        rightFileName->setStyleSheet(QString::fromUtf8("color : blue; text-decoration : underline;"));

        gridLayout_4->addWidget(rightFileName, 0, 1, 1, 1);

        rightPathName = new QLabel(tab);
        rightPathName->setObjectName(QString::fromUtf8("rightPathName"));
        sizePolicy4.setHeightForWidth(rightPathName->sizePolicy().hasHeightForWidth());
        rightPathName->setSizePolicy(sizePolicy4);
        rightPathName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(rightPathName, 1, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_4);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, 0, -1, 0);
        label_45 = new QLabel(tab);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        sizePolicy2.setHeightForWidth(label_45->sizePolicy().hasHeightForWidth());
        label_45->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(label_45, 5, 2, 1, 1);

        label_44 = new QLabel(tab);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        sizePolicy2.setHeightForWidth(label_44->sizePolicy().hasHeightForWidth());
        label_44->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(label_44, 4, 2, 1, 1);

        rightBitRate = new QLabel(tab);
        rightBitRate->setObjectName(QString::fromUtf8("rightBitRate"));
        sizePolicy2.setHeightForWidth(rightBitRate->sizePolicy().hasHeightForWidth());
        rightBitRate->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(rightBitRate, 4, 1, 1, 1);

        label_33 = new QLabel(tab);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        sizePolicy2.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(label_33, 3, 0, 1, 1);

        label_32 = new QLabel(tab);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        sizePolicy5.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy5);

        gridLayout_3->addWidget(label_32, 2, 0, 1, 1);

        rightFileSize = new QLabel(tab);
        rightFileSize->setObjectName(QString::fromUtf8("rightFileSize"));
        sizePolicy2.setHeightForWidth(rightFileSize->sizePolicy().hasHeightForWidth());
        rightFileSize->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(rightFileSize, 2, 1, 1, 1);

        label_43 = new QLabel(tab);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        sizePolicy2.setHeightForWidth(label_43->sizePolicy().hasHeightForWidth());
        label_43->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(label_43, 3, 2, 1, 1);

        rightModified = new QLabel(tab);
        rightModified->setObjectName(QString::fromUtf8("rightModified"));
        sizePolicy2.setHeightForWidth(rightModified->sizePolicy().hasHeightForWidth());
        rightModified->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(rightModified, 2, 3, 1, 1);

        label_42 = new QLabel(tab);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        sizePolicy3.setHeightForWidth(label_42->sizePolicy().hasHeightForWidth());
        label_42->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(label_42, 2, 2, 1, 1);

        rightFrameRate = new QLabel(tab);
        rightFrameRate->setObjectName(QString::fromUtf8("rightFrameRate"));
        sizePolicy2.setHeightForWidth(rightFrameRate->sizePolicy().hasHeightForWidth());
        rightFrameRate->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(rightFrameRate, 4, 3, 1, 1);

        rightDuration = new QLabel(tab);
        rightDuration->setObjectName(QString::fromUtf8("rightDuration"));
        sizePolicy2.setHeightForWidth(rightDuration->sizePolicy().hasHeightForWidth());
        rightDuration->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(rightDuration, 3, 1, 1, 1);

        rightCodec = new QLabel(tab);
        rightCodec->setObjectName(QString::fromUtf8("rightCodec"));
        sizePolicy4.setHeightForWidth(rightCodec->sizePolicy().hasHeightForWidth());
        rightCodec->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(rightCodec, 5, 1, 1, 1);

        rightAudio = new QLabel(tab);
        rightAudio->setObjectName(QString::fromUtf8("rightAudio"));
        sizePolicy4.setHeightForWidth(rightAudio->sizePolicy().hasHeightForWidth());
        rightAudio->setSizePolicy(sizePolicy4);

        gridLayout_3->addWidget(rightAudio, 5, 3, 1, 1);

        label_35 = new QLabel(tab);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        sizePolicy2.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(label_35, 5, 0, 1, 1);

        rightResolution = new QLabel(tab);
        rightResolution->setObjectName(QString::fromUtf8("rightResolution"));
        sizePolicy2.setHeightForWidth(rightResolution->sizePolicy().hasHeightForWidth());
        rightResolution->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(rightResolution, 3, 3, 1, 1);

        label_34 = new QLabel(tab);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        sizePolicy2.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(label_34, 4, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_3);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        prevVideo = new QPushButton(tab);
        prevVideo->setObjectName(QString::fromUtf8("prevVideo"));

        horizontalLayout_3->addWidget(prevVideo);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        leftMove = new QPushButton(tab);
        leftMove->setObjectName(QString::fromUtf8("leftMove"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(leftMove->sizePolicy().hasHeightForWidth());
        leftMove->setSizePolicy(sizePolicy6);

        horizontalLayout_3->addWidget(leftMove);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        leftDelete = new QPushButton(tab);
        leftDelete->setObjectName(QString::fromUtf8("leftDelete"));
        sizePolicy6.setHeightForWidth(leftDelete->sizePolicy().hasHeightForWidth());
        leftDelete->setSizePolicy(sizePolicy6);

        horizontalLayout_3->addWidget(leftDelete);

        horizontalSpacer_10 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        rightDelete = new QPushButton(tab);
        rightDelete->setObjectName(QString::fromUtf8("rightDelete"));

        horizontalLayout_3->addWidget(rightDelete);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        rightMove = new QPushButton(tab);
        rightMove->setObjectName(QString::fromUtf8("rightMove"));

        horizontalLayout_3->addWidget(rightMove);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        nextVideo = new QPushButton(tab);
        nextVideo->setObjectName(QString::fromUtf8("nextVideo"));

        horizontalLayout_3->addWidget(nextVideo);


        verticalLayout_2->addLayout(horizontalLayout_3);

        swapFilenames = new QPushButton(tab);
        swapFilenames->setObjectName(QString::fromUtf8("swapFilenames"));
        swapFilenames->setMaximumSize(QSize(150, 16777215));
        swapFilenames->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_2->addWidget(swapFilenames);


        horizontalLayout_5->addLayout(verticalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_6 = new QHBoxLayout(tab_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy2.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy2);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_15);

        line_4 = new QFrame(tab_2);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy7);
        label_2->setMinimumSize(QSize(150, 0));
        label_2->setFont(font);

        horizontalLayout_7->addWidget(label_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        verticalLayout_6->addWidget(label_4);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer);

        autoIdenticalFilesNamesMustBeContainedCheckbox = new QCheckBox(tab_2);
        autoIdenticalFilesNamesMustBeContainedCheckbox->setObjectName(QString::fromUtf8("autoIdenticalFilesNamesMustBeContainedCheckbox"));
        autoIdenticalFilesNamesMustBeContainedCheckbox->setEnabled(true);

        verticalLayout_6->addWidget(autoIdenticalFilesNamesMustBeContainedCheckbox);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setWordWrap(true);

        verticalLayout_6->addWidget(label_8);


        horizontalLayout_7->addLayout(verticalLayout_6);

        identicalFilesAutoTrash = new QPushButton(tab_2);
        identicalFilesAutoTrash->setObjectName(QString::fromUtf8("identicalFilesAutoTrash"));
        sizePolicy5.setHeightForWidth(identicalFilesAutoTrash->sizePolicy().hasHeightForWidth());
        identicalFilesAutoTrash->setSizePolicy(sizePolicy5);
        identicalFilesAutoTrash->setMinimumSize(QSize(300, 0));

        horizontalLayout_7->addWidget(identicalFilesAutoTrash);


        verticalLayout_3->addLayout(horizontalLayout_7);

        line_2 = new QFrame(tab_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy7.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy7);
        label_7->setMinimumSize(QSize(150, 0));
        label_7->setFont(font);

        horizontalLayout_8->addWidget(label_7);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setLineWidth(2);

        verticalLayout_7->addWidget(label_5);

        autoOnlySizeDiffNamesCheckbox = new QCheckBox(tab_2);
        autoOnlySizeDiffNamesCheckbox->setObjectName(QString::fromUtf8("autoOnlySizeDiffNamesCheckbox"));
        autoOnlySizeDiffNamesCheckbox->setEnabled(true);

        verticalLayout_7->addWidget(autoOnlySizeDiffNamesCheckbox);

        autoOnlySizeDontCheckResFpsCheckbox = new QCheckBox(tab_2);
        autoOnlySizeDontCheckResFpsCheckbox->setObjectName(QString::fromUtf8("autoOnlySizeDontCheckResFpsCheckbox"));
        autoOnlySizeDontCheckResFpsCheckbox->setEnabled(true);

        verticalLayout_7->addWidget(autoOnlySizeDontCheckResFpsCheckbox);


        horizontalLayout_8->addLayout(verticalLayout_7);

        autoDelOnlySizeDiffersButton = new QPushButton(tab_2);
        autoDelOnlySizeDiffersButton->setObjectName(QString::fromUtf8("autoDelOnlySizeDiffersButton"));
        autoDelOnlySizeDiffersButton->setEnabled(true);
        sizePolicy5.setHeightForWidth(autoDelOnlySizeDiffersButton->sizePolicy().hasHeightForWidth());
        autoDelOnlySizeDiffersButton->setSizePolicy(sizePolicy5);
        autoDelOnlySizeDiffersButton->setMinimumSize(QSize(300, 0));

        horizontalLayout_8->addWidget(autoDelOnlySizeDiffersButton);


        verticalLayout_3->addLayout(horizontalLayout_8);

        line = new QFrame(tab_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy7.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy7);
        label_20->setMinimumSize(QSize(150, 0));
        label_20->setFont(font);

        horizontalLayout_13->addWidget(label_20);

        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setLineWidth(2);

        horizontalLayout_13->addWidget(label_21);

        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setEnabled(false);
        sizePolicy5.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy5);
        pushButton_6->setMinimumSize(QSize(300, 0));

        horizontalLayout_13->addWidget(pushButton_6);


        verticalLayout_3->addLayout(horizontalLayout_13);


        horizontalLayout_6->addLayout(verticalLayout_3);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        identicalBits = new QLabel(Comparison);
        identicalBits->setObjectName(QString::fromUtf8("identicalBits"));
        QSizePolicy sizePolicy8(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(identicalBits->sizePolicy().hasHeightForWidth());
        identicalBits->setSizePolicy(sizePolicy8);
        identicalBits->setFrameShape(QFrame::Box);

        horizontalLayout_2->addWidget(identicalBits);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        trashedFiles = new QLabel(Comparison);
        trashedFiles->setObjectName(QString::fromUtf8("trashedFiles"));

        horizontalLayout_2->addWidget(trashedFiles);

        progressBar = new QProgressBar(Comparison);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_2->addWidget(progressBar);

        currentVideo = new QLabel(Comparison);
        currentVideo->setObjectName(QString::fromUtf8("currentVideo"));

        horizontalLayout_2->addWidget(currentVideo);

        label_9 = new QLabel(Comparison);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        totalVideos = new QLabel(Comparison);
        totalVideos->setObjectName(QString::fromUtf8("totalVideos"));

        horizontalLayout_2->addWidget(totalVideos);

        disableDeleteConfirmationCheckbox = new QCheckBox(Comparison);
        disableDeleteConfirmationCheckbox->setObjectName(QString::fromUtf8("disableDeleteConfirmationCheckbox"));
        disableDeleteConfirmationCheckbox->setEnabled(true);

        horizontalLayout_2->addWidget(disableDeleteConfirmationCheckbox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Comparison);
        QObject::connect(progressBar, SIGNAL(valueChanged(int)), currentVideo, SLOT(setNum(int)));

        tabWidget->setCurrentIndex(0);
        nextVideo->setDefault(true);


        QMetaObject::connectSlotsByName(Comparison);
    } // setupUi

    void retranslateUi(QDialog *Comparison)
    {
        Comparison->setWindowTitle(QCoreApplication::translate("Comparison", "Similiar and duplicate video finder", nullptr));
        selectPhash->setText(QCoreApplication::translate("Comparison", "pHash", nullptr));
        selectSSIM->setText(QCoreApplication::translate("Comparison", "SSIM", nullptr));
        label->setText(QCoreApplication::translate("Comparison", "Comparison threshold:", nullptr));
#if QT_CONFIG(tooltip)
        leftImage->setToolTip(QCoreApplication::translate("Comparison", "Click to launch video in default player, scroll mouse wheel to zoom", nullptr));
#endif // QT_CONFIG(tooltip)
        leftImage->setProperty("text", QVariant(QString()));
        label_6->setText(QCoreApplication::translate("Comparison", "Path:", nullptr));
        label_3->setText(QCoreApplication::translate("Comparison", "File name:", nullptr));
        leftFileName->setProperty("text", QVariant(QString()));
        leftPathName->setText(QString());
        leftModified->setText(QString());
        leftDuration->setText(QString());
        label_18->setText(QCoreApplication::translate("Comparison", "Bit rate:", nullptr));
        label_19->setText(QCoreApplication::translate("Comparison", "Codec:", nullptr));
        label_16->setText(QCoreApplication::translate("Comparison", "Resolution:", nullptr));
        label_10->setText(QCoreApplication::translate("Comparison", "File size:", nullptr));
        leftFileSize->setText(QString());
        label_12->setText(QCoreApplication::translate("Comparison", "Modified:", nullptr));
        leftResolution->setText(QString());
        label_14->setText(QCoreApplication::translate("Comparison", "Duration:", nullptr));
        label_22->setText(QCoreApplication::translate("Comparison", "Frame rate:", nullptr));
        leftCodec->setText(QString());
        leftBitRate->setText(QString());
        leftFrameRate->setText(QString());
        label_23->setText(QCoreApplication::translate("Comparison", "Audio:", nullptr));
        leftAudio->setText(QString());
#if QT_CONFIG(tooltip)
        rightImage->setToolTip(QCoreApplication::translate("Comparison", "Click to launch video in default player, scroll mouse wheel to zoom", nullptr));
#endif // QT_CONFIG(tooltip)
        rightImage->setProperty("text", QVariant(QString()));
        label_28->setText(QCoreApplication::translate("Comparison", "File name:", nullptr));
        label_29->setText(QCoreApplication::translate("Comparison", "Path:", nullptr));
        rightFileName->setProperty("text", QVariant(QString()));
        rightPathName->setText(QString());
        label_45->setText(QCoreApplication::translate("Comparison", "Audio:", nullptr));
        label_44->setText(QCoreApplication::translate("Comparison", "Frame rate:", nullptr));
        rightBitRate->setText(QString());
        label_33->setText(QCoreApplication::translate("Comparison", "Duration:", nullptr));
        label_32->setText(QCoreApplication::translate("Comparison", "File size:", nullptr));
        rightFileSize->setText(QString());
        label_43->setText(QCoreApplication::translate("Comparison", "Resolution:", nullptr));
        rightModified->setText(QString());
        label_42->setText(QCoreApplication::translate("Comparison", "Modified:", nullptr));
        rightFrameRate->setText(QString());
        rightDuration->setText(QString());
        rightCodec->setText(QString());
        rightAudio->setText(QString());
        label_35->setText(QCoreApplication::translate("Comparison", "Codec:", nullptr));
        rightResolution->setText(QString());
        label_34->setText(QCoreApplication::translate("Comparison", "Bit rate:", nullptr));
        prevVideo->setText(QCoreApplication::translate("Comparison", "Prev", nullptr));
        leftMove->setText(QCoreApplication::translate("Comparison", "Move ->", nullptr));
        leftDelete->setText(QCoreApplication::translate("Comparison", "Trash", nullptr));
        rightDelete->setText(QCoreApplication::translate("Comparison", "Trash", nullptr));
        rightMove->setText(QCoreApplication::translate("Comparison", "<- Move", nullptr));
        nextVideo->setText(QCoreApplication::translate("Comparison", "Next", nullptr));
        swapFilenames->setText(QCoreApplication::translate("Comparison", "Swap filenames", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Comparison", "Manual", nullptr));
        label_15->setText(QCoreApplication::translate("Comparison", "Take care,  the following use the comparison threshold,  so be careful to set it as wanted.", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("Comparison", "Identical files", nullptr));
        label_4->setText(QCoreApplication::translate("Comparison", "If both files have all equal parameters, except name and path : randomly keep one of the two and trash the other, or if both names are similar keep the file with shortest name.", nullptr));
        autoIdenticalFilesNamesMustBeContainedCheckbox->setText(QCoreApplication::translate("Comparison", "Names must be contained in one another", nullptr));
        label_8->setText(QCoreApplication::translate("Comparison", "If this option is enabled, the file with the shortest name will be kept (and none will be moved to trash is one name isn't contained in the other).", nullptr));
        identicalFilesAutoTrash->setText(QCoreApplication::translate("Comparison", "Move one of each to trash", nullptr));
        label_7->setText(QCoreApplication::translate("Comparison", "Only size differs", nullptr));
        label_5->setText(QCoreApplication::translate("Comparison", "If both have : \n"
" - max 1 second time duration difference\n"
" - same resolution\n"
" - same FPS\n"
" - different file sizes \n"
"\n"
"Keeps the bigger file.", nullptr));
        autoOnlySizeDiffNamesCheckbox->setText(QCoreApplication::translate("Comparison", "Names must be contained in one another", nullptr));
        autoOnlySizeDontCheckResFpsCheckbox->setText(QCoreApplication::translate("Comparison", "Don't check resolution and FPS", nullptr));
        autoDelOnlySizeDiffersButton->setText(QCoreApplication::translate("Comparison", "Move all smaller to trash", nullptr));
        label_20->setText(QCoreApplication::translate("Comparison", "Only time differs", nullptr));
        label_21->setText(QCoreApplication::translate("Comparison", "If both have all same parameters except time.", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Comparison", "Move to trash based on preferred folder", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Comparison", "Auto", nullptr));
        identicalBits->setText(QCoreApplication::translate("Comparison", "Identical bits", nullptr));
        trashedFiles->setText(QCoreApplication::translate("Comparison", "trashedFiles", nullptr));
        currentVideo->setText(QCoreApplication::translate("Comparison", "currentVideo", nullptr));
        label_9->setText(QCoreApplication::translate("Comparison", "/", nullptr));
        totalVideos->setText(QCoreApplication::translate("Comparison", "totalVideos", nullptr));
        disableDeleteConfirmationCheckbox->setText(QCoreApplication::translate("Comparison", "Disable confirmations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Comparison: public Ui_Comparison {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPARISON_H
