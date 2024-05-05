/********************************************************************************
** Form generated from reading UI file 'GlobalVariableDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALVARIABLEDIALOG_H
#define UI_GLOBALVARIABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GlobalVariableDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelAction;
    QFormLayout *formLayout;
    QLabel *labelName;
    QLineEdit *nameEdit;
    QLineEdit *typeEdit;
    QLabel *labelType;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GlobalVariableDialog)
    {
        if (GlobalVariableDialog->objectName().isEmpty())
            GlobalVariableDialog->setObjectName(QString::fromUtf8("GlobalVariableDialog"));
        GlobalVariableDialog->resize(452, 121);
        verticalLayout = new QVBoxLayout(GlobalVariableDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelAction = new QLabel(GlobalVariableDialog);
        labelAction->setObjectName(QString::fromUtf8("labelAction"));

        verticalLayout->addWidget(labelAction);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(12);
        labelName = new QLabel(GlobalVariableDialog);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelName->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelName);

        nameEdit = new QLineEdit(GlobalVariableDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setFrame(false);
        nameEdit->setPlaceholderText(QString::fromUtf8(""));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        typeEdit = new QLineEdit(GlobalVariableDialog);
        typeEdit->setObjectName(QString::fromUtf8("typeEdit"));
        typeEdit->setMaximumSize(QSize(100, 16777215));
        typeEdit->setFrame(false);
        typeEdit->setPlaceholderText(QString::fromUtf8(""));

        formLayout->setWidget(1, QFormLayout::FieldRole, typeEdit);

        labelType = new QLabel(GlobalVariableDialog);
        labelType->setObjectName(QString::fromUtf8("labelType"));
        labelType->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelType);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(GlobalVariableDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GlobalVariableDialog);

        QMetaObject::connectSlotsByName(GlobalVariableDialog);
    } // setupUi

    void retranslateUi(QDialog *GlobalVariableDialog)
    {
        GlobalVariableDialog->setWindowTitle(QCoreApplication::translate("GlobalVariableDialog", "Add Global Variable", nullptr));
        labelAction->setText(QCoreApplication::translate("GlobalVariableDialog", "Add global variable at", nullptr));
        labelName->setText(QCoreApplication::translate("GlobalVariableDialog", "Name:", nullptr));
        typeEdit->setText(QCoreApplication::translate("GlobalVariableDialog", "int", nullptr));
        labelType->setText(QCoreApplication::translate("GlobalVariableDialog", "Type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GlobalVariableDialog: public Ui_GlobalVariableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALVARIABLEDIALOG_H
