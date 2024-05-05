/********************************************************************************
** Form generated from reading UI file 'InitialOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIALOPTIONSDIALOG_H
#define UI_INITIALOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtSvg/QSvgWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InitialOptionsDialog
{
public:
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QSvgWidget *logoSvgWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *programLabel;
    QLineEdit *programLineEdit;
    QFrame *line_3;
    QWidget *optionsWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QFrame *line;
    QCheckBox *analysisCheckBox;
    QLabel *analDescription;
    QHBoxLayout *sliderLabelLayout;
    QLabel *sliderNone;
    QSpacerItem *horizontalSpacer;
    QLabel *sliderAuto;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *sliderAutoExp;
    QSpacerItem *horizontalSpacer_2;
    QLabel *sliderAdvanced;
    QSlider *analysisSlider;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *analysisoptionsFrame;
    QVBoxLayout *verticalLayout_7;
    QFrame *advancedAnlysisLine;
    QCheckBox *writeCheckBox;
    QCheckBox *binCheckBox;
    QCheckBox *vaCheckBox;
    QCheckBox *demangleCheckBox;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *AdvOptButton;
    QLabel *label_5;
    QFrame *hideFrame;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *archLabel;
    QComboBox *archComboBox;
    QLabel *cpuLabel;
    QComboBox *cpuComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *bitsLabel;
    QComboBox *bitsComboBox;
    QLabel *endiannessLabel;
    QComboBox *endiannessComboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *kernelLabel;
    QComboBox *kernelComboBox;
    QLabel *formatLabel;
    QComboBox *formatComboBox;
    QFrame *line_2;
    QFormLayout *formLayout_2;
    QLabel *offsetLabel;
    QLineEdit *entry_loadOffset;
    QLabel *mapLabel;
    QLineEdit *entry_mapOffset;
    QCheckBox *pdbCheckBox;
    QWidget *pdbWidget;
    QHBoxLayout *pdbLayout;
    QLineEdit *pdbLineEdit;
    QPushButton *pdbSelectButton;
    QCheckBox *scriptCheckBox;
    QWidget *scriptWidget;
    QHBoxLayout *scriptLayout;
    QLineEdit *scriptLineEdit;
    QPushButton *scriptSelectButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *InitialOptionsDialog)
    {
        if (InitialOptionsDialog->objectName().isEmpty())
            InitialOptionsDialog->setObjectName(QString::fromUtf8("InitialOptionsDialog"));
        InitialOptionsDialog->resize(598, 524);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InitialOptionsDialog->sizePolicy().hasHeightForWidth());
        InitialOptionsDialog->setSizePolicy(sizePolicy);
        InitialOptionsDialog->setMinimumSize(QSize(400, 0));
        InitialOptionsDialog->setAutoFillBackground(false);
        InitialOptionsDialog->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    margin-top: 5px;\n"
"    margin-bottom: 5px;\n"
"}"));
        verticalLayout_10 = new QVBoxLayout(InitialOptionsDialog);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(8, 8, 8, 8);
        logoSvgWidget = new QSvgWidget(InitialOptionsDialog);
        logoSvgWidget->setObjectName(QString::fromUtf8("logoSvgWidget"));
        logoSvgWidget->setMinimumSize(QSize(88, 88));
        logoSvgWidget->setMaximumSize(QSize(88, 88));

        verticalLayout_9->addWidget(logoSvgWidget, 0, Qt::AlignHCenter);


        verticalLayout_10->addLayout(verticalLayout_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 5, -1, -1);
        programLabel = new QLabel(InitialOptionsDialog);
        programLabel->setObjectName(QString::fromUtf8("programLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(programLabel->sizePolicy().hasHeightForWidth());
        programLabel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(programLabel);

        programLineEdit = new QLineEdit(InitialOptionsDialog);
        programLineEdit->setObjectName(QString::fromUtf8("programLineEdit"));
        programLineEdit->setFocusPolicy(Qt::ClickFocus);
        programLineEdit->setText(QString::fromUtf8(""));
        programLineEdit->setFrame(false);
        programLineEdit->setReadOnly(true);
        programLineEdit->setClearButtonEnabled(false);

        horizontalLayout->addWidget(programLineEdit);


        verticalLayout_10->addLayout(horizontalLayout);

        line_3 = new QFrame(InitialOptionsDialog);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(line_3);

        optionsWidget = new QWidget(InitialOptionsDialog);
        optionsWidget->setObjectName(QString::fromUtf8("optionsWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(optionsWidget->sizePolicy().hasHeightForWidth());
        optionsWidget->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(optionsWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        line = new QFrame(optionsWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        analysisCheckBox = new QCheckBox(optionsWidget);
        analysisCheckBox->setObjectName(QString::fromUtf8("analysisCheckBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(analysisCheckBox->sizePolicy().hasHeightForWidth());
        analysisCheckBox->setSizePolicy(sizePolicy3);
        analysisCheckBox->setLayoutDirection(Qt::LeftToRight);
        analysisCheckBox->setStyleSheet(QString::fromUtf8(""));
        analysisCheckBox->setChecked(true);

        verticalLayout_4->addWidget(analysisCheckBox);

        analDescription = new QLabel(optionsWidget);
        analDescription->setObjectName(QString::fromUtf8("analDescription"));
        sizePolicy3.setHeightForWidth(analDescription->sizePolicy().hasHeightForWidth());
        analDescription->setSizePolicy(sizePolicy3);

        verticalLayout_4->addWidget(analDescription);


        verticalLayout_3->addLayout(verticalLayout_4);

        sliderLabelLayout = new QHBoxLayout();
        sliderLabelLayout->setSpacing(0);
        sliderLabelLayout->setObjectName(QString::fromUtf8("sliderLabelLayout"));
        sliderLabelLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        sliderLabelLayout->setContentsMargins(0, 0, 0, -1);
        sliderNone = new QLabel(optionsWidget);
        sliderNone->setObjectName(QString::fromUtf8("sliderNone"));
        sliderNone->setEnabled(true);
        sizePolicy2.setHeightForWidth(sliderNone->sizePolicy().hasHeightForWidth());
        sliderNone->setSizePolicy(sizePolicy2);
        sliderNone->setMinimumSize(QSize(55, 0));

        sliderLabelLayout->addWidget(sliderNone);

        horizontalSpacer = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        sliderLabelLayout->addItem(horizontalSpacer);

        sliderAuto = new QLabel(optionsWidget);
        sliderAuto->setObjectName(QString::fromUtf8("sliderAuto"));
        sizePolicy2.setHeightForWidth(sliderAuto->sizePolicy().hasHeightForWidth());
        sliderAuto->setSizePolicy(sizePolicy2);
        sliderAuto->setMinimumSize(QSize(55, 0));
        sliderAuto->setAlignment(Qt::AlignCenter);

        sliderLabelLayout->addWidget(sliderAuto);

        horizontalSpacer_4 = new QSpacerItem(12, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        sliderLabelLayout->addItem(horizontalSpacer_4);

        horizontalSpacer_5 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        sliderLabelLayout->addItem(horizontalSpacer_5);

        horizontalSpacer_6 = new QSpacerItem(12, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        sliderLabelLayout->addItem(horizontalSpacer_6);

        sliderAutoExp = new QLabel(optionsWidget);
        sliderAutoExp->setObjectName(QString::fromUtf8("sliderAutoExp"));
        sizePolicy2.setHeightForWidth(sliderAutoExp->sizePolicy().hasHeightForWidth());
        sliderAutoExp->setSizePolicy(sizePolicy2);
        sliderAutoExp->setMinimumSize(QSize(55, 0));
        sliderAutoExp->setAlignment(Qt::AlignCenter);

        sliderLabelLayout->addWidget(sliderAutoExp);

        horizontalSpacer_2 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        sliderLabelLayout->addItem(horizontalSpacer_2);

        sliderAdvanced = new QLabel(optionsWidget);
        sliderAdvanced->setObjectName(QString::fromUtf8("sliderAdvanced"));
        sizePolicy2.setHeightForWidth(sliderAdvanced->sizePolicy().hasHeightForWidth());
        sliderAdvanced->setSizePolicy(sizePolicy2);
        sliderAdvanced->setMinimumSize(QSize(55, 0));
        sliderAdvanced->setLayoutDirection(Qt::LeftToRight);
        sliderAdvanced->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        sliderLabelLayout->addWidget(sliderAdvanced);


        verticalLayout_3->addLayout(sliderLabelLayout);

        analysisSlider = new QSlider(optionsWidget);
        analysisSlider->setObjectName(QString::fromUtf8("analysisSlider"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(analysisSlider->sizePolicy().hasHeightForWidth());
        analysisSlider->setSizePolicy(sizePolicy4);
        analysisSlider->setMinimumSize(QSize(0, 24));
        analysisSlider->setMinimum(0);
        analysisSlider->setMaximum(3);
        analysisSlider->setPageStep(1);
        analysisSlider->setValue(0);
        analysisSlider->setOrientation(Qt::Horizontal);
        analysisSlider->setInvertedAppearance(false);
        analysisSlider->setTickPosition(QSlider::NoTicks);

        verticalLayout_3->addWidget(analysisSlider);

        scrollArea = new QScrollArea(optionsWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 553, 410));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 0, -1, 0);
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(5, 0, 5, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        analysisoptionsFrame = new QFrame(frame);
        analysisoptionsFrame->setObjectName(QString::fromUtf8("analysisoptionsFrame"));
        analysisoptionsFrame->setEnabled(true);
        sizePolicy4.setHeightForWidth(analysisoptionsFrame->sizePolicy().hasHeightForWidth());
        analysisoptionsFrame->setSizePolicy(sizePolicy4);
        verticalLayout_7 = new QVBoxLayout(analysisoptionsFrame);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(5, 5, 5, 5);

        verticalLayout_2->addWidget(analysisoptionsFrame);

        advancedAnlysisLine = new QFrame(frame);
        advancedAnlysisLine->setObjectName(QString::fromUtf8("advancedAnlysisLine"));
        advancedAnlysisLine->setVisible(false);
        advancedAnlysisLine->setFrameShape(QFrame::HLine);
        advancedAnlysisLine->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(advancedAnlysisLine);

        writeCheckBox = new QCheckBox(frame);
        writeCheckBox->setObjectName(QString::fromUtf8("writeCheckBox"));
        writeCheckBox->setChecked(false);

        verticalLayout_2->addWidget(writeCheckBox);

        binCheckBox = new QCheckBox(frame);
        binCheckBox->setObjectName(QString::fromUtf8("binCheckBox"));
        binCheckBox->setChecked(false);

        verticalLayout_2->addWidget(binCheckBox);

        vaCheckBox = new QCheckBox(frame);
        vaCheckBox->setObjectName(QString::fromUtf8("vaCheckBox"));
        vaCheckBox->setStyleSheet(QString::fromUtf8(""));
        vaCheckBox->setChecked(true);

        verticalLayout_2->addWidget(vaCheckBox);

        demangleCheckBox = new QCheckBox(frame);
        demangleCheckBox->setObjectName(QString::fromUtf8("demangleCheckBox"));
        demangleCheckBox->setChecked(true);

        verticalLayout_2->addWidget(demangleCheckBox);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        AdvOptButton = new QToolButton(frame);
        AdvOptButton->setObjectName(QString::fromUtf8("AdvOptButton"));
        AdvOptButton->setIconSize(QSize(8, 8));
        AdvOptButton->setCheckable(true);
        AdvOptButton->setArrowType(Qt::RightArrow);

        horizontalLayout_6->addWidget(AdvOptButton);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout_6->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_6);

        hideFrame = new QFrame(frame);
        hideFrame->setObjectName(QString::fromUtf8("hideFrame"));
        verticalLayout_8 = new QVBoxLayout(hideFrame);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_2 = new QLabel(hideFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        label_2->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)

        verticalLayout_8->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        archLabel = new QLabel(hideFrame);
        archLabel->setObjectName(QString::fromUtf8("archLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(archLabel->sizePolicy().hasHeightForWidth());
        archLabel->setSizePolicy(sizePolicy5);

        horizontalLayout_2->addWidget(archLabel);

        archComboBox = new QComboBox(hideFrame);
        archComboBox->addItem(QString());
        archComboBox->setObjectName(QString::fromUtf8("archComboBox"));
        archComboBox->setCurrentText(QString::fromUtf8("Auto"));

        horizontalLayout_2->addWidget(archComboBox);

        cpuLabel = new QLabel(hideFrame);
        cpuLabel->setObjectName(QString::fromUtf8("cpuLabel"));
        sizePolicy5.setHeightForWidth(cpuLabel->sizePolicy().hasHeightForWidth());
        cpuLabel->setSizePolicy(sizePolicy5);

        horizontalLayout_2->addWidget(cpuLabel);

        cpuComboBox = new QComboBox(hideFrame);
        cpuComboBox->addItem(QString());
        cpuComboBox->setObjectName(QString::fromUtf8("cpuComboBox"));
        cpuComboBox->setMinimumSize(QSize(70, 0));
        cpuComboBox->setEditable(true);

        horizontalLayout_2->addWidget(cpuComboBox);


        verticalLayout_8->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        bitsLabel = new QLabel(hideFrame);
        bitsLabel->setObjectName(QString::fromUtf8("bitsLabel"));
        sizePolicy5.setHeightForWidth(bitsLabel->sizePolicy().hasHeightForWidth());
        bitsLabel->setSizePolicy(sizePolicy5);
        bitsLabel->setText(QString::fromUtf8("Bits: "));

        horizontalLayout_5->addWidget(bitsLabel);

        bitsComboBox = new QComboBox(hideFrame);
        bitsComboBox->addItem(QString());
        bitsComboBox->addItem(QString());
        bitsComboBox->addItem(QString());
        bitsComboBox->addItem(QString());
        bitsComboBox->addItem(QString());
        bitsComboBox->setObjectName(QString::fromUtf8("bitsComboBox"));

        horizontalLayout_5->addWidget(bitsComboBox);

        endiannessLabel = new QLabel(hideFrame);
        endiannessLabel->setObjectName(QString::fromUtf8("endiannessLabel"));
        sizePolicy5.setHeightForWidth(endiannessLabel->sizePolicy().hasHeightForWidth());
        endiannessLabel->setSizePolicy(sizePolicy5);

        horizontalLayout_5->addWidget(endiannessLabel);

        endiannessComboBox = new QComboBox(hideFrame);
        endiannessComboBox->addItem(QString());
        endiannessComboBox->addItem(QString());
        endiannessComboBox->addItem(QString());
        endiannessComboBox->setObjectName(QString::fromUtf8("endiannessComboBox"));
        endiannessComboBox->setEditable(false);
        endiannessComboBox->setCurrentText(QString::fromUtf8("Auto"));

        horizontalLayout_5->addWidget(endiannessComboBox);


        verticalLayout_8->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        kernelLabel = new QLabel(hideFrame);
        kernelLabel->setObjectName(QString::fromUtf8("kernelLabel"));
        sizePolicy5.setHeightForWidth(kernelLabel->sizePolicy().hasHeightForWidth());
        kernelLabel->setSizePolicy(sizePolicy5);

        horizontalLayout_3->addWidget(kernelLabel);

        kernelComboBox = new QComboBox(hideFrame);
        kernelComboBox->addItem(QString());
        kernelComboBox->setObjectName(QString::fromUtf8("kernelComboBox"));
        kernelComboBox->setEditable(false);
        kernelComboBox->setCurrentText(QString::fromUtf8("Auto"));

        horizontalLayout_3->addWidget(kernelComboBox);

        formatLabel = new QLabel(hideFrame);
        formatLabel->setObjectName(QString::fromUtf8("formatLabel"));
        sizePolicy5.setHeightForWidth(formatLabel->sizePolicy().hasHeightForWidth());
        formatLabel->setSizePolicy(sizePolicy5);

        horizontalLayout_3->addWidget(formatLabel);

        formatComboBox = new QComboBox(hideFrame);
        formatComboBox->addItem(QString());
        formatComboBox->setObjectName(QString::fromUtf8("formatComboBox"));
        formatComboBox->setCurrentText(QString::fromUtf8("Auto"));

        horizontalLayout_3->addWidget(formatComboBox);


        verticalLayout_8->addLayout(horizontalLayout_3);

        line_2 = new QFrame(hideFrame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(line_2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_2->setVerticalSpacing(10);
        formLayout_2->setContentsMargins(-1, 0, -1, -1);
        offsetLabel = new QLabel(hideFrame);
        offsetLabel->setObjectName(QString::fromUtf8("offsetLabel"));
        sizePolicy5.setHeightForWidth(offsetLabel->sizePolicy().hasHeightForWidth());
        offsetLabel->setSizePolicy(sizePolicy5);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, offsetLabel);

        entry_loadOffset = new QLineEdit(hideFrame);
        entry_loadOffset->setObjectName(QString::fromUtf8("entry_loadOffset"));
        entry_loadOffset->setInputMask(QString::fromUtf8(""));
        entry_loadOffset->setText(QString::fromUtf8(""));
        entry_loadOffset->setFrame(false);
        entry_loadOffset->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, entry_loadOffset);

        mapLabel = new QLabel(hideFrame);
        mapLabel->setObjectName(QString::fromUtf8("mapLabel"));
        sizePolicy5.setHeightForWidth(mapLabel->sizePolicy().hasHeightForWidth());
        mapLabel->setSizePolicy(sizePolicy5);
        mapLabel->setMinimumSize(QSize(0, 0));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, mapLabel);

        entry_mapOffset = new QLineEdit(hideFrame);
        entry_mapOffset->setObjectName(QString::fromUtf8("entry_mapOffset"));
        entry_mapOffset->setFrame(false);
        entry_mapOffset->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, entry_mapOffset);

        pdbCheckBox = new QCheckBox(hideFrame);
        pdbCheckBox->setObjectName(QString::fromUtf8("pdbCheckBox"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, pdbCheckBox);

        pdbWidget = new QWidget(hideFrame);
        pdbWidget->setObjectName(QString::fromUtf8("pdbWidget"));
        pdbWidget->setEnabled(true);
        pdbLayout = new QHBoxLayout(pdbWidget);
        pdbLayout->setObjectName(QString::fromUtf8("pdbLayout"));
        pdbLayout->setContentsMargins(0, 0, 0, 0);
        pdbLineEdit = new QLineEdit(pdbWidget);
        pdbLineEdit->setObjectName(QString::fromUtf8("pdbLineEdit"));

        pdbLayout->addWidget(pdbLineEdit);

        pdbSelectButton = new QPushButton(pdbWidget);
        pdbSelectButton->setObjectName(QString::fromUtf8("pdbSelectButton"));

        pdbLayout->addWidget(pdbSelectButton);


        formLayout_2->setWidget(2, QFormLayout::FieldRole, pdbWidget);

        scriptCheckBox = new QCheckBox(hideFrame);
        scriptCheckBox->setObjectName(QString::fromUtf8("scriptCheckBox"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, scriptCheckBox);

        scriptWidget = new QWidget(hideFrame);
        scriptWidget->setObjectName(QString::fromUtf8("scriptWidget"));
        scriptWidget->setEnabled(true);
        scriptLayout = new QHBoxLayout(scriptWidget);
        scriptLayout->setObjectName(QString::fromUtf8("scriptLayout"));
        scriptLayout->setContentsMargins(0, 0, 0, 0);
        scriptLineEdit = new QLineEdit(scriptWidget);
        scriptLineEdit->setObjectName(QString::fromUtf8("scriptLineEdit"));

        scriptLayout->addWidget(scriptLineEdit);

        scriptSelectButton = new QPushButton(scriptWidget);
        scriptSelectButton->setObjectName(QString::fromUtf8("scriptSelectButton"));

        scriptLayout->addWidget(scriptSelectButton);


        formLayout_2->setWidget(3, QFormLayout::FieldRole, scriptWidget);


        verticalLayout_8->addLayout(formLayout_2);


        verticalLayout->addWidget(hideFrame);


        verticalLayout_5->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        verticalLayout_10->addWidget(optionsWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        cancelButton = new QPushButton(InitialOptionsDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setFlat(false);

        horizontalLayout_4->addWidget(cancelButton);

        okButton = new QPushButton(InitialOptionsDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_4->addWidget(okButton);


        verticalLayout_10->addLayout(horizontalLayout_4);


        retranslateUi(InitialOptionsDialog);

        cancelButton->setDefault(false);
        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(InitialOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *InitialOptionsDialog)
    {
        InitialOptionsDialog->setWindowTitle(QCoreApplication::translate("InitialOptionsDialog", "Load Options", nullptr));
        programLabel->setText(QCoreApplication::translate("InitialOptionsDialog", "Program:", nullptr));
        analysisCheckBox->setText(QCoreApplication::translate("InitialOptionsDialog", "Analysis: Enabled", nullptr));
        analDescription->setText(QCoreApplication::translate("InitialOptionsDialog", "Level: ", nullptr));
        sliderNone->setText(QCoreApplication::translate("InitialOptionsDialog", "None", nullptr));
        sliderAuto->setText(QCoreApplication::translate("InitialOptionsDialog", "Auto", nullptr));
        sliderAutoExp->setText(QCoreApplication::translate("InitialOptionsDialog", "Experimental", nullptr));
        sliderAdvanced->setText(QCoreApplication::translate("InitialOptionsDialog", "Advanced", nullptr));
        writeCheckBox->setText(QCoreApplication::translate("InitialOptionsDialog", "Load in write mode (-w)", nullptr));
        binCheckBox->setText(QCoreApplication::translate("InitialOptionsDialog", "Do not load bin information (-n)", nullptr));
        vaCheckBox->setText(QCoreApplication::translate("InitialOptionsDialog", "Use virtual addressing", nullptr));
        demangleCheckBox->setText(QCoreApplication::translate("InitialOptionsDialog", "Import demangled symbols", nullptr));
        AdvOptButton->setText(QCoreApplication::translate("InitialOptionsDialog", "...", nullptr));
        label_5->setText(QCoreApplication::translate("InitialOptionsDialog", "Advanced options", nullptr));
        label_2->setText(QCoreApplication::translate("InitialOptionsDialog", "CPU options", nullptr));
        archLabel->setText(QCoreApplication::translate("InitialOptionsDialog", "Architecture:", nullptr));
        archComboBox->setItemText(0, QCoreApplication::translate("InitialOptionsDialog", "Auto", nullptr));

        cpuLabel->setText(QCoreApplication::translate("InitialOptionsDialog", "CPU:", nullptr));
        cpuComboBox->setItemText(0, QString());

        bitsComboBox->setItemText(0, QCoreApplication::translate("InitialOptionsDialog", "Auto", nullptr));
        bitsComboBox->setItemText(1, QCoreApplication::translate("InitialOptionsDialog", "8", nullptr));
        bitsComboBox->setItemText(2, QCoreApplication::translate("InitialOptionsDialog", "16", nullptr));
        bitsComboBox->setItemText(3, QCoreApplication::translate("InitialOptionsDialog", "32", nullptr));
        bitsComboBox->setItemText(4, QCoreApplication::translate("InitialOptionsDialog", "64", nullptr));

        endiannessLabel->setText(QCoreApplication::translate("InitialOptionsDialog", "Endianness: ", nullptr));
        endiannessComboBox->setItemText(0, QCoreApplication::translate("InitialOptionsDialog", "Auto", nullptr));
        endiannessComboBox->setItemText(1, QCoreApplication::translate("InitialOptionsDialog", "Little", nullptr));
        endiannessComboBox->setItemText(2, QCoreApplication::translate("InitialOptionsDialog", "Big", nullptr));

        kernelLabel->setText(QCoreApplication::translate("InitialOptionsDialog", "Kernel: ", nullptr));
        kernelComboBox->setItemText(0, QCoreApplication::translate("InitialOptionsDialog", "Auto", nullptr));

        formatLabel->setText(QCoreApplication::translate("InitialOptionsDialog", "Format:", nullptr));
        formatComboBox->setItemText(0, QCoreApplication::translate("InitialOptionsDialog", "Auto", nullptr));

        offsetLabel->setText(QCoreApplication::translate("InitialOptionsDialog", "Load bin offset (-B)", nullptr));
        entry_loadOffset->setPlaceholderText(QCoreApplication::translate("InitialOptionsDialog", "1024", nullptr));
        mapLabel->setText(QCoreApplication::translate("InitialOptionsDialog", "Map offset (-m)", nullptr));
        entry_mapOffset->setText(QString());
        entry_mapOffset->setPlaceholderText(QCoreApplication::translate("InitialOptionsDialog", "0x40000", nullptr));
        pdbCheckBox->setText(QCoreApplication::translate("InitialOptionsDialog", "Load PDB", nullptr));
        pdbLineEdit->setPlaceholderText(QCoreApplication::translate("InitialOptionsDialog", "PDB File path", nullptr));
        pdbSelectButton->setText(QCoreApplication::translate("InitialOptionsDialog", "Select", nullptr));
        scriptCheckBox->setText(QCoreApplication::translate("InitialOptionsDialog", "Load script file", nullptr));
        scriptLineEdit->setPlaceholderText(QCoreApplication::translate("InitialOptionsDialog", "Path to Rizin script file", nullptr));
        scriptSelectButton->setText(QCoreApplication::translate("InitialOptionsDialog", "Select", nullptr));
        cancelButton->setText(QCoreApplication::translate("InitialOptionsDialog", "Cancel", nullptr));
        okButton->setText(QCoreApplication::translate("InitialOptionsDialog", "  Ok  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InitialOptionsDialog: public Ui_InitialOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIALOPTIONSDIALOG_H
