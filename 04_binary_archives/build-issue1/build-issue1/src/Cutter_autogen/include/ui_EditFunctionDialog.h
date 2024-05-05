/********************************************************************************
** Form generated from reading UI file 'EditFunctionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITFUNCTIONDIALOG_H
#define UI_EDITFUNCTIONDIALOG_H

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

class Ui_EditFunctionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *startLabel;
    QLineEdit *startLineEdit;
    QLabel *stackSizeLabel;
    QLineEdit *stackSizeLineEdit;
    QLabel *callConLabel;
    QComboBox *callConComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditFunctionDialog)
    {
        if (EditFunctionDialog->objectName().isEmpty())
            EditFunctionDialog->setObjectName(QString::fromUtf8("EditFunctionDialog"));
        EditFunctionDialog->resize(318, 192);
        EditFunctionDialog->setToolTipDuration(0);
        verticalLayout = new QVBoxLayout(EditFunctionDialog);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 5, 2, 2);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(-1, 0, -1, -1);
        nameLabel = new QLabel(EditFunctionDialog);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, nameLabel);

        nameLineEdit = new QLineEdit(EditFunctionDialog);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, nameLineEdit);

        startLabel = new QLabel(EditFunctionDialog);
        startLabel->setObjectName(QString::fromUtf8("startLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, startLabel);

        startLineEdit = new QLineEdit(EditFunctionDialog);
        startLineEdit->setObjectName(QString::fromUtf8("startLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, startLineEdit);

        stackSizeLabel = new QLabel(EditFunctionDialog);
        stackSizeLabel->setObjectName(QString::fromUtf8("stackSizeLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, stackSizeLabel);

        stackSizeLineEdit = new QLineEdit(EditFunctionDialog);
        stackSizeLineEdit->setObjectName(QString::fromUtf8("stackSizeLineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, stackSizeLineEdit);

        callConLabel = new QLabel(EditFunctionDialog);
        callConLabel->setObjectName(QString::fromUtf8("callConLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, callConLabel);

        callConComboBox = new QComboBox(EditFunctionDialog);
        callConComboBox->setObjectName(QString::fromUtf8("callConComboBox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, callConComboBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(EditFunctionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EditFunctionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditFunctionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditFunctionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditFunctionDialog);
    } // setupUi

    void retranslateUi(QDialog *EditFunctionDialog)
    {
        EditFunctionDialog->setWindowTitle(QCoreApplication::translate("EditFunctionDialog", "Edit Function", nullptr));
        nameLabel->setText(QCoreApplication::translate("EditFunctionDialog", "Name of function", nullptr));
        startLabel->setText(QCoreApplication::translate("EditFunctionDialog", "Start address", nullptr));
        stackSizeLabel->setText(QCoreApplication::translate("EditFunctionDialog", "Stack size", nullptr));
        callConLabel->setText(QCoreApplication::translate("EditFunctionDialog", "Calling convention", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditFunctionDialog: public Ui_EditFunctionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITFUNCTIONDIALOG_H
