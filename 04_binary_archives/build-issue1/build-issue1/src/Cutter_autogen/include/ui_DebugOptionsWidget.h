/********************************************************************************
** Form generated from reading UI file 'DebugOptionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGOPTIONSWIDGET_H
#define UI_DEBUGOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DebugOptionsWidget
{
public:
    QVBoxLayout *verticalLayout_1;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_1;
    QLabel *pluginLabel;
    QComboBox *pluginComboBox;
    QGroupBox *EsilOptions;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *esilBreakOnInvalid;
    QFormLayout *formLayout_2;
    QLabel *stackAddrLabel;
    QLabel *stackSizeLabel;
    QLineEdit *stackAddr;
    QLineEdit *stackSize;
    QGroupBox *TraceOptions;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *traceContinue;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DebugOptionsWidget)
    {
        if (DebugOptionsWidget->objectName().isEmpty())
            DebugOptionsWidget->setObjectName(QString::fromUtf8("DebugOptionsWidget"));
        DebugOptionsWidget->resize(742, 698);
        verticalLayout_1 = new QVBoxLayout(DebugOptionsWidget);
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout_1 = new QFormLayout();
        formLayout_1->setObjectName(QString::fromUtf8("formLayout_1"));
        formLayout_1->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_1->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        pluginLabel = new QLabel(DebugOptionsWidget);
        pluginLabel->setObjectName(QString::fromUtf8("pluginLabel"));

        formLayout_1->setWidget(0, QFormLayout::LabelRole, pluginLabel);

        pluginComboBox = new QComboBox(DebugOptionsWidget);
        pluginComboBox->setObjectName(QString::fromUtf8("pluginComboBox"));

        formLayout_1->setWidget(0, QFormLayout::FieldRole, pluginComboBox);


        verticalLayout_2->addLayout(formLayout_1);

        EsilOptions = new QGroupBox(DebugOptionsWidget);
        EsilOptions->setObjectName(QString::fromUtf8("EsilOptions"));
        verticalLayout_3 = new QVBoxLayout(EsilOptions);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(-1, 24, -1, -1);
        esilBreakOnInvalid = new QCheckBox(EsilOptions);
        esilBreakOnInvalid->setObjectName(QString::fromUtf8("esilBreakOnInvalid"));

        verticalLayout_3->addWidget(esilBreakOnInvalid);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_2->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        stackAddrLabel = new QLabel(EsilOptions);
        stackAddrLabel->setObjectName(QString::fromUtf8("stackAddrLabel"));
        stackAddrLabel->setScaledContents(false);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, stackAddrLabel);

        stackSizeLabel = new QLabel(EsilOptions);
        stackSizeLabel->setObjectName(QString::fromUtf8("stackSizeLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, stackSizeLabel);

        stackAddr = new QLineEdit(EsilOptions);
        stackAddr->setObjectName(QString::fromUtf8("stackAddr"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, stackAddr);

        stackSize = new QLineEdit(EsilOptions);
        stackSize->setObjectName(QString::fromUtf8("stackSize"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, stackSize);


        verticalLayout_3->addLayout(formLayout_2);


        verticalLayout_2->addWidget(EsilOptions);

        TraceOptions = new QGroupBox(DebugOptionsWidget);
        TraceOptions->setObjectName(QString::fromUtf8("TraceOptions"));
        verticalLayout_4 = new QVBoxLayout(TraceOptions);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 24, -1, -1);
        traceContinue = new QCheckBox(TraceOptions);
        traceContinue->setObjectName(QString::fromUtf8("traceContinue"));

        verticalLayout_4->addWidget(traceContinue);


        verticalLayout_2->addWidget(TraceOptions);


        verticalLayout_1->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_1->addItem(verticalSpacer);


        retranslateUi(DebugOptionsWidget);

        QMetaObject::connectSlotsByName(DebugOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *DebugOptionsWidget)
    {
        DebugOptionsWidget->setWindowTitle(QCoreApplication::translate("DebugOptionsWidget", "Debug", nullptr));
        pluginLabel->setText(QCoreApplication::translate("DebugOptionsWidget", "Debug plugin:", nullptr));
        EsilOptions->setTitle(QCoreApplication::translate("DebugOptionsWidget", "ESIL options", nullptr));
        esilBreakOnInvalid->setText(QCoreApplication::translate("DebugOptionsWidget", "Break esil execution when instruction is invalid (esil.breakoninvalid)", nullptr));
        stackAddrLabel->setText(QCoreApplication::translate("DebugOptionsWidget", "ESIL stack address:", nullptr));
#if QT_CONFIG(tooltip)
        stackSizeLabel->setToolTip(QCoreApplication::translate("DebugOptionsWidget", "Hide text when zooming out and it is smaller than the given value. Higher values can increase Performance.", nullptr));
#endif // QT_CONFIG(tooltip)
        stackSizeLabel->setText(QCoreApplication::translate("DebugOptionsWidget", "ESIL stack size:", nullptr));
        TraceOptions->setTitle(QCoreApplication::translate("DebugOptionsWidget", "Trace options", nullptr));
        traceContinue->setText(QCoreApplication::translate("DebugOptionsWidget", "Trace each step during continue in a trace session (dbg.trace_continue)", nullptr));
#if QT_CONFIG(tooltip)
        traceContinue->setToolTip(QCoreApplication::translate("DebugOptionsWidget", "Disabling this option means that stepping back after continue will return to the previous PC. Significantly improves performance.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class DebugOptionsWidget: public Ui_DebugOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGOPTIONSWIDGET_H
