/********************************************************************************
** Form generated from reading UI file 'AsmOptionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASMOPTIONSWIDGET_H
#define UI_ASMOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AsmOptionsWidget
{
public:
    QAction *actionSaveAsDefault;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *asmOptionsTab;
    QWidget *asmStyleTab;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *disassemblyGroupBox;
    QGridLayout *gridLayout;
    QComboBox *caseComboBox;
    QLabel *asmTabsLabel;
    QCheckBox *bytesCheckBox;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QCheckBox *realnameCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *relOffsetLabel;
    QCheckBox *relOffsetCheckBox;
    QLabel *asmTabsOffLabel;
    QCheckBox *indentCheckBox;
    QCheckBox *offsetCheckBox;
    QComboBox *asmComboBox;
    QCheckBox *bblineCheckBox;
    QCheckBox *previewCheckBox;
    QLabel *syntaxLabel;
    QCheckBox *bytespaceCheckBox;
    QSpinBox *asmTabsOffSpinBox;
    QLabel *nbytesLabel;
    QCheckBox *lbytesCheckBox;
    QSpinBox *asmTabsSpinBox;
    QCheckBox *relOffFlagsCheckBox;
    QComboBox *syntaxComboBox;
    QSpinBox *nbytesSpinBox;
    QCheckBox *varTooltipsCheckBox;
    QGroupBox *commentsGroupBox;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QCheckBox *describeCheckBox;
    QComboBox *commentsComboBox;
    QLabel *label_2;
    QSpinBox *cmtcolSpinBox;
    QLabel *cmtcolLabel;
    QCheckBox *xrefCheckBox;
    QCheckBox *refptrCheckBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *slowCheckBox;
    QCheckBox *linesCheckBox;
    QCheckBox *fcnlinesCheckBox;
    QCheckBox *flgoffCheckBox;
    QCheckBox *emuCheckBox;
    QCheckBox *emuStrCheckBox;
    QCheckBox *sizeCheckBox;
    QCheckBox *varsumCheckBox;
    QCheckBox *varsubCheckBox;
    QCheckBox *varsubOnlyCheckBox;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *AsmOptionsWidget)
    {
        if (AsmOptionsWidget->objectName().isEmpty())
            AsmOptionsWidget->setObjectName(QString::fromUtf8("AsmOptionsWidget"));
        AsmOptionsWidget->resize(652, 686);
        actionSaveAsDefault = new QAction(AsmOptionsWidget);
        actionSaveAsDefault->setObjectName(QString::fromUtf8("actionSaveAsDefault"));
        verticalLayout = new QVBoxLayout(AsmOptionsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(16, -1, -1, -1);
        asmOptionsTab = new QTabWidget(AsmOptionsWidget);
        asmOptionsTab->setObjectName(QString::fromUtf8("asmOptionsTab"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(asmOptionsTab->sizePolicy().hasHeightForWidth());
        asmOptionsTab->setSizePolicy(sizePolicy);
        asmStyleTab = new QWidget();
        asmStyleTab->setObjectName(QString::fromUtf8("asmStyleTab"));
        verticalLayout_4 = new QVBoxLayout(asmStyleTab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        scrollArea = new QScrollArea(asmStyleTab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 686, 886));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        disassemblyGroupBox = new QGroupBox(scrollAreaWidgetContents);
        disassemblyGroupBox->setObjectName(QString::fromUtf8("disassemblyGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(disassemblyGroupBox->sizePolicy().hasHeightForWidth());
        disassemblyGroupBox->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(disassemblyGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        caseComboBox = new QComboBox(disassemblyGroupBox);
        caseComboBox->addItem(QString());
        caseComboBox->addItem(QString());
        caseComboBox->addItem(QString());
        caseComboBox->setObjectName(QString::fromUtf8("caseComboBox"));

        gridLayout->addWidget(caseComboBox, 5, 2, 1, 1);

        asmTabsLabel = new QLabel(disassemblyGroupBox);
        asmTabsLabel->setObjectName(QString::fromUtf8("asmTabsLabel"));
        asmTabsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(asmTabsLabel, 17, 1, 1, 1);

        bytesCheckBox = new QCheckBox(disassemblyGroupBox);
        bytesCheckBox->setObjectName(QString::fromUtf8("bytesCheckBox"));

        gridLayout->addWidget(bytesCheckBox, 11, 1, 1, 1);

        label = new QLabel(disassemblyGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label, 3, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 2);

        realnameCheckBox = new QCheckBox(disassemblyGroupBox);
        realnameCheckBox->setObjectName(QString::fromUtf8("realnameCheckBox"));

        gridLayout->addWidget(realnameCheckBox, 13, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        relOffsetLabel = new QLabel(disassemblyGroupBox);
        relOffsetLabel->setObjectName(QString::fromUtf8("relOffsetLabel"));

        horizontalLayout->addWidget(relOffsetLabel);

        relOffsetCheckBox = new QCheckBox(disassemblyGroupBox);
        relOffsetCheckBox->setObjectName(QString::fromUtf8("relOffsetCheckBox"));

        horizontalLayout->addWidget(relOffsetCheckBox);


        gridLayout->addLayout(horizontalLayout, 8, 1, 1, 1);

        asmTabsOffLabel = new QLabel(disassemblyGroupBox);
        asmTabsOffLabel->setObjectName(QString::fromUtf8("asmTabsOffLabel"));
        asmTabsOffLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(asmTabsOffLabel, 18, 1, 1, 1);

        indentCheckBox = new QCheckBox(disassemblyGroupBox);
        indentCheckBox->setObjectName(QString::fromUtf8("indentCheckBox"));

        gridLayout->addWidget(indentCheckBox, 19, 1, 1, 2);

        offsetCheckBox = new QCheckBox(disassemblyGroupBox);
        offsetCheckBox->setObjectName(QString::fromUtf8("offsetCheckBox"));

        gridLayout->addWidget(offsetCheckBox, 7, 1, 1, 1);

        asmComboBox = new QComboBox(disassemblyGroupBox);
        asmComboBox->addItem(QString());
        asmComboBox->addItem(QString());
        asmComboBox->addItem(QString());
        asmComboBox->setObjectName(QString::fromUtf8("asmComboBox"));

        gridLayout->addWidget(asmComboBox, 3, 2, 1, 2);

        bblineCheckBox = new QCheckBox(disassemblyGroupBox);
        bblineCheckBox->setObjectName(QString::fromUtf8("bblineCheckBox"));

        gridLayout->addWidget(bblineCheckBox, 14, 1, 1, 2);

        previewCheckBox = new QCheckBox(disassemblyGroupBox);
        previewCheckBox->setObjectName(QString::fromUtf8("previewCheckBox"));

        gridLayout->addWidget(previewCheckBox, 15, 1, 1, 1);

        syntaxLabel = new QLabel(disassemblyGroupBox);
        syntaxLabel->setObjectName(QString::fromUtf8("syntaxLabel"));
        syntaxLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(syntaxLabel, 4, 1, 1, 1);

        bytespaceCheckBox = new QCheckBox(disassemblyGroupBox);
        bytespaceCheckBox->setObjectName(QString::fromUtf8("bytespaceCheckBox"));

        gridLayout->addWidget(bytespaceCheckBox, 21, 1, 1, 2);

        asmTabsOffSpinBox = new QSpinBox(disassemblyGroupBox);
        asmTabsOffSpinBox->setObjectName(QString::fromUtf8("asmTabsOffSpinBox"));
        asmTabsOffSpinBox->setMaximum(100);
        asmTabsOffSpinBox->setSingleStep(5);

        gridLayout->addWidget(asmTabsOffSpinBox, 18, 2, 1, 1);

        nbytesLabel = new QLabel(disassemblyGroupBox);
        nbytesLabel->setObjectName(QString::fromUtf8("nbytesLabel"));
        nbytesLabel->setEnabled(true);
        nbytesLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(nbytesLabel, 12, 1, 1, 1);

        lbytesCheckBox = new QCheckBox(disassemblyGroupBox);
        lbytesCheckBox->setObjectName(QString::fromUtf8("lbytesCheckBox"));

        gridLayout->addWidget(lbytesCheckBox, 20, 1, 1, 2);

        asmTabsSpinBox = new QSpinBox(disassemblyGroupBox);
        asmTabsSpinBox->setObjectName(QString::fromUtf8("asmTabsSpinBox"));
        asmTabsSpinBox->setMaximum(100);
        asmTabsSpinBox->setSingleStep(5);

        gridLayout->addWidget(asmTabsSpinBox, 17, 2, 1, 1);

        relOffFlagsCheckBox = new QCheckBox(disassemblyGroupBox);
        relOffFlagsCheckBox->setObjectName(QString::fromUtf8("relOffFlagsCheckBox"));

        gridLayout->addWidget(relOffFlagsCheckBox, 8, 2, 1, 1);

        syntaxComboBox = new QComboBox(disassemblyGroupBox);
        syntaxComboBox->setObjectName(QString::fromUtf8("syntaxComboBox"));

        gridLayout->addWidget(syntaxComboBox, 4, 2, 1, 1);

        nbytesSpinBox = new QSpinBox(disassemblyGroupBox);
        nbytesSpinBox->setObjectName(QString::fromUtf8("nbytesSpinBox"));
        nbytesSpinBox->setEnabled(true);

        gridLayout->addWidget(nbytesSpinBox, 12, 2, 1, 1);

        varTooltipsCheckBox = new QCheckBox(disassemblyGroupBox);
        varTooltipsCheckBox->setObjectName(QString::fromUtf8("varTooltipsCheckBox"));

        gridLayout->addWidget(varTooltipsCheckBox, 16, 1, 1, 1);


        verticalLayout_2->addWidget(disassemblyGroupBox);

        commentsGroupBox = new QGroupBox(scrollAreaWidgetContents);
        commentsGroupBox->setObjectName(QString::fromUtf8("commentsGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(commentsGroupBox->sizePolicy().hasHeightForWidth());
        commentsGroupBox->setSizePolicy(sizePolicy2);
        gridLayout_6 = new QGridLayout(commentsGroupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        describeCheckBox = new QCheckBox(commentsGroupBox);
        describeCheckBox->setObjectName(QString::fromUtf8("describeCheckBox"));

        gridLayout_5->addWidget(describeCheckBox, 1, 0, 1, 2);

        commentsComboBox = new QComboBox(commentsGroupBox);
        commentsComboBox->addItem(QString());
        commentsComboBox->addItem(QString());
        commentsComboBox->addItem(QString());
        commentsComboBox->setObjectName(QString::fromUtf8("commentsComboBox"));

        gridLayout_5->addWidget(commentsComboBox, 0, 1, 1, 1);

        label_2 = new QLabel(commentsGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        cmtcolSpinBox = new QSpinBox(commentsGroupBox);
        cmtcolSpinBox->setObjectName(QString::fromUtf8("cmtcolSpinBox"));
        cmtcolSpinBox->setMaximum(100);
        cmtcolSpinBox->setSingleStep(5);

        gridLayout_5->addWidget(cmtcolSpinBox, 4, 1, 1, 1);

        cmtcolLabel = new QLabel(commentsGroupBox);
        cmtcolLabel->setObjectName(QString::fromUtf8("cmtcolLabel"));
        cmtcolLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(cmtcolLabel, 4, 0, 1, 1);

        xrefCheckBox = new QCheckBox(commentsGroupBox);
        xrefCheckBox->setObjectName(QString::fromUtf8("xrefCheckBox"));

        gridLayout_5->addWidget(xrefCheckBox, 2, 0, 1, 1);

        refptrCheckBox = new QCheckBox(commentsGroupBox);
        refptrCheckBox->setObjectName(QString::fromUtf8("refptrCheckBox"));

        gridLayout_5->addWidget(refptrCheckBox, 3, 0, 1, 2);


        gridLayout_6->addLayout(gridLayout_5, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_6->addItem(verticalSpacer_2, 0, 0, 1, 1);


        verticalLayout_2->addWidget(commentsGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);

        asmOptionsTab->addTab(asmStyleTab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        scrollArea_2 = new QScrollArea(tab_2);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::StyledPanel);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 518, 326));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        slowCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        slowCheckBox->setObjectName(QString::fromUtf8("slowCheckBox"));

        verticalLayout_6->addWidget(slowCheckBox);

        linesCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        linesCheckBox->setObjectName(QString::fromUtf8("linesCheckBox"));

        verticalLayout_6->addWidget(linesCheckBox);

        fcnlinesCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        fcnlinesCheckBox->setObjectName(QString::fromUtf8("fcnlinesCheckBox"));

        verticalLayout_6->addWidget(fcnlinesCheckBox);

        flgoffCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        flgoffCheckBox->setObjectName(QString::fromUtf8("flgoffCheckBox"));

        verticalLayout_6->addWidget(flgoffCheckBox);

        emuCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        emuCheckBox->setObjectName(QString::fromUtf8("emuCheckBox"));

        verticalLayout_6->addWidget(emuCheckBox);

        emuStrCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        emuStrCheckBox->setObjectName(QString::fromUtf8("emuStrCheckBox"));

        verticalLayout_6->addWidget(emuStrCheckBox);

        sizeCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        sizeCheckBox->setObjectName(QString::fromUtf8("sizeCheckBox"));

        verticalLayout_6->addWidget(sizeCheckBox);

        varsumCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        varsumCheckBox->setObjectName(QString::fromUtf8("varsumCheckBox"));

        verticalLayout_6->addWidget(varsumCheckBox);

        varsubCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        varsubCheckBox->setObjectName(QString::fromUtf8("varsubCheckBox"));

        verticalLayout_6->addWidget(varsubCheckBox);

        varsubOnlyCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        varsubOnlyCheckBox->setObjectName(QString::fromUtf8("varsubOnlyCheckBox"));

        verticalLayout_6->addWidget(varsubOnlyCheckBox);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_5->addWidget(scrollArea_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        asmOptionsTab->addTab(tab_2, QString());

        verticalLayout_3->addWidget(asmOptionsTab);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(AsmOptionsWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AsmOptionsWidget);

        asmOptionsTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AsmOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *AsmOptionsWidget)
    {
        AsmOptionsWidget->setWindowTitle(QCoreApplication::translate("AsmOptionsWidget", "Disassembly", nullptr));
        actionSaveAsDefault->setText(QCoreApplication::translate("AsmOptionsWidget", "Save as Default", nullptr));
        disassemblyGroupBox->setTitle(QCoreApplication::translate("AsmOptionsWidget", "Disassembly", nullptr));
        caseComboBox->setItemText(0, QCoreApplication::translate("AsmOptionsWidget", "Lowercase", nullptr));
        caseComboBox->setItemText(1, QCoreApplication::translate("AsmOptionsWidget", "Uppercase (asm.ucase)", nullptr));
        caseComboBox->setItemText(2, QCoreApplication::translate("AsmOptionsWidget", "Capitalize (asm.capitalize)", nullptr));

        asmTabsLabel->setText(QCoreApplication::translate("AsmOptionsWidget", "Tabs in assembly (asm.tabs):", nullptr));
        bytesCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Display the bytes of each instruction (asm.bytes)", nullptr));
        label->setText(QCoreApplication::translate("AsmOptionsWidget", "Show Disassembly as:", nullptr));
        realnameCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Display flags' real name (asm.flags.real)", nullptr));
        relOffsetLabel->setText(QCoreApplication::translate("AsmOptionsWidget", "Show offsets relative to:", nullptr));
        relOffsetCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Functions (asm.reloff)", nullptr));
        asmTabsOffLabel->setText(QCoreApplication::translate("AsmOptionsWidget", "The number of tabulate spaces after the offset (asm.tabs.off):", nullptr));
        indentCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Indent disassembly based on reflines depth (asm.indent)", nullptr));
        offsetCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Show offsets (asm.offset)", nullptr));
        asmComboBox->setItemText(0, QCoreApplication::translate("AsmOptionsWidget", "Normal", nullptr));
        asmComboBox->setItemText(1, QCoreApplication::translate("AsmOptionsWidget", "ESIL (asm.esil)", nullptr));
        asmComboBox->setItemText(2, QCoreApplication::translate("AsmOptionsWidget", "Pseudocode (asm.pseudo)", nullptr));

        bblineCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Show empty line after every basic block (asm.bb.line)", nullptr));
        previewCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Show preview when hovering", nullptr));
        syntaxLabel->setText(QCoreApplication::translate("AsmOptionsWidget", "Syntax (asm.syntax):", nullptr));
        bytespaceCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Separate bytes with whitespace (asm.bytes.space)", nullptr));
        nbytesLabel->setText(QCoreApplication::translate("AsmOptionsWidget", "Number of bytes to display (asm.nbytes):", nullptr));
        lbytesCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Align bytes to the left (asm.lbytes)", nullptr));
        relOffFlagsCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Flags (asm.reloff.flags)", nullptr));
        varTooltipsCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Show known variable values when hovering", nullptr));
        commentsGroupBox->setTitle(QCoreApplication::translate("AsmOptionsWidget", "Comments", nullptr));
        describeCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Show opcode description (asm.describe)", nullptr));
        commentsComboBox->setItemText(0, QCoreApplication::translate("AsmOptionsWidget", "Normal", nullptr));
        commentsComboBox->setItemText(1, QCoreApplication::translate("AsmOptionsWidget", "Above instructions", nullptr));
        commentsComboBox->setItemText(2, QCoreApplication::translate("AsmOptionsWidget", "Off", nullptr));

        label_2->setText(QCoreApplication::translate("AsmOptionsWidget", "Show comments:", nullptr));
        cmtcolLabel->setText(QCoreApplication::translate("AsmOptionsWidget", "Column to align comments (asm.cmt.col):", nullptr));
        xrefCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Show x-refs (asm.xrefs)", nullptr));
        refptrCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Show refpointer information (asm.refptr)", nullptr));
        asmOptionsTab->setTabText(asmOptionsTab->indexOf(asmStyleTab), QCoreApplication::translate("AsmOptionsWidget", "Style", nullptr));
        slowCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Slow Analysis (asm.slow)", nullptr));
        linesCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Show jump lines (asm.lines)", nullptr));
        fcnlinesCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Show function boundary lines (asm.lines.fcn)", nullptr));
        flgoffCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Show offset before flags (asm.flags.off)", nullptr));
        emuCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Run ESIL emulation analysis (asm.emu)", nullptr));
        emuStrCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Show only strings if any in the asm.emu output (emu.str)", nullptr));
        sizeCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Show size of opcodes in disassembly (asm.size)", nullptr));
        varsumCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Show variables summary instead of full list (asm.var.summary)", nullptr));
        varsubCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Substitute variables in disassembly (asm.sub.var)", nullptr));
        varsubOnlyCheckBox->setText(QCoreApplication::translate("AsmOptionsWidget", "Substitute entire variable expressions with names (asm.sub.varonly)", nullptr));
        asmOptionsTab->setTabText(asmOptionsTab->indexOf(tab_2), QCoreApplication::translate("AsmOptionsWidget", "Metadata", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AsmOptionsWidget: public Ui_AsmOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASMOPTIONSWIDGET_H
