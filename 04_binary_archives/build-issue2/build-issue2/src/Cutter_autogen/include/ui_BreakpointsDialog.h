/********************************************************************************
** Form generated from reading UI file 'BreakpointsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BREAKPOINTSDIALOG_H
#define UI_BREAKPOINTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BreakpointsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *topGroup;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *positionType;
    QLineEdit *breakpointPosition;
    QLabel *label_2;
    QComboBox *breakpointCondition;
    QLabel *moduleLabel;
    QComboBox *moduleName;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkEnabled;
    QRadioButton *radioSoftware;
    QRadioButton *radioHardware;
    QWidget *hwConfigBox;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *hwRead;
    QCheckBox *hwWrite;
    QCheckBox *hwExecute;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *breakpointSize;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkTrace;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QPlainTextEdit *breakpointCommand;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BreakpointsDialog)
    {
        if (BreakpointsDialog->objectName().isEmpty())
            BreakpointsDialog->setObjectName(QString::fromUtf8("BreakpointsDialog"));
        BreakpointsDialog->resize(610, 437);
        verticalLayout = new QVBoxLayout(BreakpointsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        topGroup = new QFormLayout();
        topGroup->setObjectName(QString::fromUtf8("topGroup"));
        label = new QLabel(BreakpointsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        topGroup->setWidget(0, QFormLayout::LabelRole, label);

        widget = new QWidget(BreakpointsDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        positionType = new QComboBox(widget);
        positionType->setObjectName(QString::fromUtf8("positionType"));

        horizontalLayout_2->addWidget(positionType);

        breakpointPosition = new QLineEdit(widget);
        breakpointPosition->setObjectName(QString::fromUtf8("breakpointPosition"));

        horizontalLayout_2->addWidget(breakpointPosition);


        topGroup->setWidget(0, QFormLayout::FieldRole, widget);

        label_2 = new QLabel(BreakpointsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        topGroup->setWidget(3, QFormLayout::LabelRole, label_2);

        breakpointCondition = new QComboBox(BreakpointsDialog);
        breakpointCondition->addItem(QString());
        breakpointCondition->setObjectName(QString::fromUtf8("breakpointCondition"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(breakpointCondition->sizePolicy().hasHeightForWidth());
        breakpointCondition->setSizePolicy(sizePolicy);
        breakpointCondition->setEditable(true);
        breakpointCondition->setInsertPolicy(QComboBox::NoInsert);
        breakpointCondition->setFrame(true);

        topGroup->setWidget(3, QFormLayout::FieldRole, breakpointCondition);

        moduleLabel = new QLabel(BreakpointsDialog);
        moduleLabel->setObjectName(QString::fromUtf8("moduleLabel"));

        topGroup->setWidget(2, QFormLayout::LabelRole, moduleLabel);

        moduleName = new QComboBox(BreakpointsDialog);
        moduleName->setObjectName(QString::fromUtf8("moduleName"));
        sizePolicy.setHeightForWidth(moduleName->sizePolicy().hasHeightForWidth());
        moduleName->setSizePolicy(sizePolicy);
        moduleName->setEditable(true);

        topGroup->setWidget(2, QFormLayout::FieldRole, moduleName);


        verticalLayout->addLayout(topGroup);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(BreakpointsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkEnabled = new QCheckBox(groupBox);
        checkEnabled->setObjectName(QString::fromUtf8("checkEnabled"));
        checkEnabled->setChecked(true);

        verticalLayout_2->addWidget(checkEnabled);

        radioSoftware = new QRadioButton(groupBox);
        radioSoftware->setObjectName(QString::fromUtf8("radioSoftware"));
        radioSoftware->setChecked(true);

        verticalLayout_2->addWidget(radioSoftware);

        radioHardware = new QRadioButton(groupBox);
        radioHardware->setObjectName(QString::fromUtf8("radioHardware"));

        verticalLayout_2->addWidget(radioHardware);

        hwConfigBox = new QWidget(groupBox);
        hwConfigBox->setObjectName(QString::fromUtf8("hwConfigBox"));
        hwConfigBox->setEnabled(false);
        verticalLayout_5 = new QVBoxLayout(hwConfigBox);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        hwRead = new QCheckBox(hwConfigBox);
        hwRead->setObjectName(QString::fromUtf8("hwRead"));

        verticalLayout_5->addWidget(hwRead);

        hwWrite = new QCheckBox(hwConfigBox);
        hwWrite->setObjectName(QString::fromUtf8("hwWrite"));

        verticalLayout_5->addWidget(hwWrite);

        hwExecute = new QCheckBox(hwConfigBox);
        hwExecute->setObjectName(QString::fromUtf8("hwExecute"));
        hwExecute->setChecked(true);

        verticalLayout_5->addWidget(hwExecute);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(hwConfigBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        breakpointSize = new QComboBox(hwConfigBox);
        breakpointSize->addItem(QString());
        breakpointSize->addItem(QString());
        breakpointSize->addItem(QString());
        breakpointSize->addItem(QString());
        breakpointSize->setObjectName(QString::fromUtf8("breakpointSize"));

        horizontalLayout_3->addWidget(breakpointSize);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(hwConfigBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(BreakpointsDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        checkTrace = new QCheckBox(groupBox_2);
        checkTrace->setObjectName(QString::fromUtf8("checkTrace"));

        verticalLayout_4->addWidget(checkTrace);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        breakpointCommand = new QPlainTextEdit(groupBox_2);
        breakpointCommand->setObjectName(QString::fromUtf8("breakpointCommand"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, breakpointCommand);


        verticalLayout_4->addLayout(formLayout_3);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(BreakpointsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(breakpointPosition);
        label_2->setBuddy(breakpointCondition);
        moduleLabel->setBuddy(moduleName);
        label_4->setBuddy(breakpointSize);
        label_5->setBuddy(breakpointCommand);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(positionType, breakpointPosition);
        QWidget::setTabOrder(breakpointPosition, moduleName);
        QWidget::setTabOrder(moduleName, breakpointCondition);
        QWidget::setTabOrder(breakpointCondition, checkEnabled);
        QWidget::setTabOrder(checkEnabled, radioSoftware);
        QWidget::setTabOrder(radioSoftware, radioHardware);
        QWidget::setTabOrder(radioHardware, checkTrace);
        QWidget::setTabOrder(checkTrace, breakpointCommand);

        retranslateUi(BreakpointsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BreakpointsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BreakpointsDialog, SLOT(reject()));
        QObject::connect(radioHardware, SIGNAL(toggled(bool)), hwConfigBox, SLOT(setEnabled(bool)));

        breakpointCondition->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(BreakpointsDialog);
    } // setupUi

    void retranslateUi(QDialog *BreakpointsDialog)
    {
        BreakpointsDialog->setWindowTitle(QCoreApplication::translate("BreakpointsDialog", "Add/Edit breakpoint", nullptr));
        label->setText(QCoreApplication::translate("BreakpointsDialog", "Position", nullptr));
        label_2->setText(QCoreApplication::translate("BreakpointsDialog", "Condition", nullptr));
        breakpointCondition->setItemText(0, QCoreApplication::translate("BreakpointsDialog", "?v $.rax-0x6  # break when rax is 6", nullptr));

        breakpointCondition->setCurrentText(QString());
        moduleLabel->setText(QCoreApplication::translate("BreakpointsDialog", "Module", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BreakpointsDialog", "Type/Options", nullptr));
        checkEnabled->setText(QCoreApplication::translate("BreakpointsDialog", "Enabled", nullptr));
        radioSoftware->setText(QCoreApplication::translate("BreakpointsDialog", "Software", nullptr));
        radioHardware->setText(QCoreApplication::translate("BreakpointsDialog", "Hardware", nullptr));
        hwRead->setText(QCoreApplication::translate("BreakpointsDialog", "Read", nullptr));
        hwWrite->setText(QCoreApplication::translate("BreakpointsDialog", "Write", nullptr));
        hwExecute->setText(QCoreApplication::translate("BreakpointsDialog", "Execute", nullptr));
        label_4->setText(QCoreApplication::translate("BreakpointsDialog", "Size", nullptr));
        breakpointSize->setItemText(0, QCoreApplication::translate("BreakpointsDialog", "1", nullptr));
        breakpointSize->setItemText(1, QCoreApplication::translate("BreakpointsDialog", "2", nullptr));
        breakpointSize->setItemText(2, QCoreApplication::translate("BreakpointsDialog", "4", nullptr));
        breakpointSize->setItemText(3, QCoreApplication::translate("BreakpointsDialog", "8", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("BreakpointsDialog", "Action", nullptr));
        checkTrace->setText(QCoreApplication::translate("BreakpointsDialog", "Trace", nullptr));
        label_5->setText(QCoreApplication::translate("BreakpointsDialog", "Command", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BreakpointsDialog: public Ui_BreakpointsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BREAKPOINTSDIALOG_H
