/********************************************************************************
** Form generated from reading UI file 'AnalysisOptionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYSISOPTIONSWIDGET_H
#define UI_ANALYSISOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnalysisOptionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QCheckBox *verboseCheckBox;
    QCheckBox *pushRetCheckBox;
    QCheckBox *typesVerboseCheckBox;
    QCheckBox *autonameCheckbox;
    QCheckBox *hasnextCheckbox;
    QCheckBox *jmpRefCheckbox;
    QCheckBox *jmpTblCheckbox;
    QWidget *verticalLayoutWidget;
    QFormLayout *formLayout;
    QLabel *analInLabel;
    QComboBox *analysisInComboBox;
    QWidget *verticalLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *ptrDepthLabel;
    QSpinBox *ptrDepthSpinBox;
    QWidget *verticalLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *preludeLabel;
    QLineEdit *preludeLineEdit;
    QPushButton *analyzePushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AnalysisOptionsWidget)
    {
        if (AnalysisOptionsWidget->objectName().isEmpty())
            AnalysisOptionsWidget->setObjectName(QString::fromUtf8("AnalysisOptionsWidget"));
        AnalysisOptionsWidget->resize(633, 689);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AnalysisOptionsWidget->sizePolicy().hasHeightForWidth());
        AnalysisOptionsWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(AnalysisOptionsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(AnalysisOptionsWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 611, 610));
        verboseCheckBox = new QCheckBox(scrollAreaWidgetContents);
        verboseCheckBox->setObjectName(QString::fromUtf8("verboseCheckBox"));
        verboseCheckBox->setGeometry(QRect(10, 240, 601, 23));
        pushRetCheckBox = new QCheckBox(scrollAreaWidgetContents);
        pushRetCheckBox->setObjectName(QString::fromUtf8("pushRetCheckBox"));
        pushRetCheckBox->setGeometry(QRect(10, 180, 601, 23));
        typesVerboseCheckBox = new QCheckBox(scrollAreaWidgetContents);
        typesVerboseCheckBox->setObjectName(QString::fromUtf8("typesVerboseCheckBox"));
        typesVerboseCheckBox->setGeometry(QRect(10, 210, 601, 23));
        autonameCheckbox = new QCheckBox(scrollAreaWidgetContents);
        autonameCheckbox->setObjectName(QString::fromUtf8("autonameCheckbox"));
        autonameCheckbox->setGeometry(QRect(10, 60, 601, 23));
        hasnextCheckbox = new QCheckBox(scrollAreaWidgetContents);
        hasnextCheckbox->setObjectName(QString::fromUtf8("hasnextCheckbox"));
        hasnextCheckbox->setGeometry(QRect(10, 90, 601, 23));
        jmpRefCheckbox = new QCheckBox(scrollAreaWidgetContents);
        jmpRefCheckbox->setObjectName(QString::fromUtf8("jmpRefCheckbox"));
        jmpRefCheckbox->setGeometry(QRect(10, 120, 601, 23));
        jmpTblCheckbox = new QCheckBox(scrollAreaWidgetContents);
        jmpTblCheckbox->setObjectName(QString::fromUtf8("jmpTblCheckbox"));
        jmpTblCheckbox->setGeometry(QRect(10, 150, 601, 23));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 581, 27));
        formLayout = new QFormLayout(verticalLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        analInLabel = new QLabel(verticalLayoutWidget);
        analInLabel->setObjectName(QString::fromUtf8("analInLabel"));
        analInLabel->setEnabled(true);
        analInLabel->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(0, QFormLayout::LabelRole, analInLabel);

        analysisInComboBox = new QComboBox(verticalLayoutWidget);
        analysisInComboBox->setObjectName(QString::fromUtf8("analysisInComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, analysisInComboBox);

        verticalLayoutWidget_2 = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 270, 581, 28));
        formLayout_2 = new QFormLayout(verticalLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        ptrDepthLabel = new QLabel(verticalLayoutWidget_2);
        ptrDepthLabel->setObjectName(QString::fromUtf8("ptrDepthLabel"));
        ptrDepthLabel->setEnabled(true);
        ptrDepthLabel->setMinimumSize(QSize(0, 0));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, ptrDepthLabel);

        ptrDepthSpinBox = new QSpinBox(verticalLayoutWidget_2);
        ptrDepthSpinBox->setObjectName(QString::fromUtf8("ptrDepthSpinBox"));
        ptrDepthSpinBox->setMinimum(0);
        ptrDepthSpinBox->setValue(0);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, ptrDepthSpinBox);

        verticalLayoutWidget_3 = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 300, 581, 28));
        formLayout_3 = new QFormLayout(verticalLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        preludeLabel = new QLabel(verticalLayoutWidget_3);
        preludeLabel->setObjectName(QString::fromUtf8("preludeLabel"));
        preludeLabel->setEnabled(true);
        preludeLabel->setMinimumSize(QSize(0, 0));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, preludeLabel);

        preludeLineEdit = new QLineEdit(verticalLayoutWidget_3);
        preludeLineEdit->setObjectName(QString::fromUtf8("preludeLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(preludeLineEdit->sizePolicy().hasHeightForWidth());
        preludeLineEdit->setSizePolicy(sizePolicy2);
        preludeLineEdit->setPlaceholderText(QString::fromUtf8("e.g.: 0x554889e5"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, preludeLineEdit);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        verticalLayout->addLayout(verticalLayout_2);

        analyzePushButton = new QPushButton(AnalysisOptionsWidget);
        analyzePushButton->setObjectName(QString::fromUtf8("analyzePushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(analyzePushButton->sizePolicy().hasHeightForWidth());
        analyzePushButton->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(analyzePushButton, 0, Qt::AlignRight);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(AnalysisOptionsWidget);

        QMetaObject::connectSlotsByName(AnalysisOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *AnalysisOptionsWidget)
    {
        AnalysisOptionsWidget->setWindowTitle(QCoreApplication::translate("AnalysisOptionsWidget", "Analysis", nullptr));
        verboseCheckBox->setText(QCoreApplication::translate("AnalysisOptionsWidget", "Show verbose information when performing analysis (analysis.verbose)", nullptr));
        pushRetCheckBox->setText(QCoreApplication::translate("AnalysisOptionsWidget", "Analyze push+ret as jmp (analysis.pushret)", nullptr));
        typesVerboseCheckBox->setText(QCoreApplication::translate("AnalysisOptionsWidget", "Verbose output from type analysis (analysis.types.verbose)", nullptr));
        autonameCheckbox->setText(QCoreApplication::translate("AnalysisOptionsWidget", "Speculatively set a name for the functions (analysis.autoname)", nullptr));
        hasnextCheckbox->setText(QCoreApplication::translate("AnalysisOptionsWidget", "Search for new functions following already defined functions (analysis.hasnext)", nullptr));
        jmpRefCheckbox->setText(QCoreApplication::translate("AnalysisOptionsWidget", "Create references for unconditional jumps (analysis.jmp.ref)", nullptr));
        jmpTblCheckbox->setText(QCoreApplication::translate("AnalysisOptionsWidget", "Analyze jump tables in switch statements (analysis.jmp.tbl)", nullptr));
        analInLabel->setText(QCoreApplication::translate("AnalysisOptionsWidget", "Search boundaries for analysis (analysis.in): ", nullptr));
        ptrDepthLabel->setText(QCoreApplication::translate("AnalysisOptionsWidget", "Pointer depth (analysis.ptrdepth):", nullptr));
        preludeLabel->setText(QCoreApplication::translate("AnalysisOptionsWidget", "Functions Prelude (analysis.prelude):", nullptr));
        analyzePushButton->setText(QCoreApplication::translate("AnalysisOptionsWidget", "Analyze program", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnalysisOptionsWidget: public Ui_AnalysisOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYSISOPTIONSWIDGET_H
