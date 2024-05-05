/********************************************************************************
** Form generated from reading UI file 'EditVariablesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITVARIABLESDIALOG_H
#define UI_EDITVARIABLESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditVariablesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *dropdownLocalVars;
    QLineEdit *nameEdit;
    QLabel *nameLabel;
    QLabel *labelSetTypeTo;
    QComboBox *typeComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditVariablesDialog)
    {
        if (EditVariablesDialog->objectName().isEmpty())
            EditVariablesDialog->setObjectName(QString::fromUtf8("EditVariablesDialog"));
        EditVariablesDialog->resize(435, 137);
        verticalLayout = new QVBoxLayout(EditVariablesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(EditVariablesDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        dropdownLocalVars = new QComboBox(EditVariablesDialog);
        dropdownLocalVars->setObjectName(QString::fromUtf8("dropdownLocalVars"));

        formLayout->setWidget(0, QFormLayout::FieldRole, dropdownLocalVars);

        nameEdit = new QLineEdit(EditVariablesDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nameEdit);

        nameLabel = new QLabel(EditVariablesDialog);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, nameLabel);

        labelSetTypeTo = new QLabel(EditVariablesDialog);
        labelSetTypeTo->setObjectName(QString::fromUtf8("labelSetTypeTo"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelSetTypeTo);

        typeComboBox = new QComboBox(EditVariablesDialog);
        typeComboBox->setObjectName(QString::fromUtf8("typeComboBox"));
        typeComboBox->setEditable(true);
        typeComboBox->setMaxVisibleItems(15);

        formLayout->setWidget(2, QFormLayout::FieldRole, typeComboBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(EditVariablesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EditVariablesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditVariablesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditVariablesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditVariablesDialog);
    } // setupUi

    void retranslateUi(QDialog *EditVariablesDialog)
    {
        EditVariablesDialog->setWindowTitle(QCoreApplication::translate("EditVariablesDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("EditVariablesDialog", "Modify:", nullptr));
        nameLabel->setText(QCoreApplication::translate("EditVariablesDialog", "Name:", nullptr));
        labelSetTypeTo->setText(QCoreApplication::translate("EditVariablesDialog", "Type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditVariablesDialog: public Ui_EditVariablesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITVARIABLESDIALOG_H
