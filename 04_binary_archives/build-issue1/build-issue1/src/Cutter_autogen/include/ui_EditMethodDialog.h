/********************************************************************************
** Form generated from reading UI file 'EditMethodDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITMETHODDIALOG_H
#define UI_EDITMETHODDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditMethodDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *nameLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *nameEdit;
    QCheckBox *autoRenameCheckBox;
    QLabel *realNameLabel;
    QLineEdit *realNameEdit;
    QLabel *addressLabel;
    QLineEdit *addressEdit;
    QLabel *virtualLabel;
    QCheckBox *virtualCheckBox;
    QLabel *vtableOffsetLabel;
    QLineEdit *vtableOffsetEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditMethodDialog)
    {
        if (EditMethodDialog->objectName().isEmpty())
            EditMethodDialog->setObjectName(QString::fromUtf8("EditMethodDialog"));
        EditMethodDialog->setWindowModality(Qt::NonModal);
        EditMethodDialog->resize(461, 238);
        EditMethodDialog->setWindowTitle(QString::fromUtf8("Method"));
        verticalLayout = new QVBoxLayout(EditMethodDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(EditMethodDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nameLabel = new QLabel(EditMethodDialog);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, nameLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        nameEdit = new QLineEdit(EditMethodDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        horizontalLayout->addWidget(nameEdit);

        autoRenameCheckBox = new QCheckBox(EditMethodDialog);
        autoRenameCheckBox->setObjectName(QString::fromUtf8("autoRenameCheckBox"));
        autoRenameCheckBox->setChecked(false);

        horizontalLayout->addWidget(autoRenameCheckBox);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        realNameLabel = new QLabel(EditMethodDialog);
        realNameLabel->setObjectName(QString::fromUtf8("realNameLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, realNameLabel);

        realNameEdit = new QLineEdit(EditMethodDialog);
        realNameEdit->setObjectName(QString::fromUtf8("realNameEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, realNameEdit);

        addressLabel = new QLabel(EditMethodDialog);
        addressLabel->setObjectName(QString::fromUtf8("addressLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, addressLabel);

        addressEdit = new QLineEdit(EditMethodDialog);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, addressEdit);

        virtualLabel = new QLabel(EditMethodDialog);
        virtualLabel->setObjectName(QString::fromUtf8("virtualLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, virtualLabel);

        virtualCheckBox = new QCheckBox(EditMethodDialog);
        virtualCheckBox->setObjectName(QString::fromUtf8("virtualCheckBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, virtualCheckBox);

        vtableOffsetLabel = new QLabel(EditMethodDialog);
        vtableOffsetLabel->setObjectName(QString::fromUtf8("vtableOffsetLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, vtableOffsetLabel);

        vtableOffsetEdit = new QLineEdit(EditMethodDialog);
        vtableOffsetEdit->setObjectName(QString::fromUtf8("vtableOffsetEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, vtableOffsetEdit);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(EditMethodDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(nameEdit, autoRenameCheckBox);
        QWidget::setTabOrder(autoRenameCheckBox, realNameEdit);
        QWidget::setTabOrder(realNameEdit, addressEdit);
        QWidget::setTabOrder(addressEdit, virtualCheckBox);
        QWidget::setTabOrder(virtualCheckBox, vtableOffsetEdit);

        retranslateUi(EditMethodDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditMethodDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditMethodDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditMethodDialog);
    } // setupUi

    void retranslateUi(QDialog *EditMethodDialog)
    {
        label->setText(QCoreApplication::translate("EditMethodDialog", "Class:", nullptr));
        nameLabel->setText(QCoreApplication::translate("EditMethodDialog", "Unique Identifier (name):", nullptr));
        autoRenameCheckBox->setText(QCoreApplication::translate("EditMethodDialog", "Auto-Rename", nullptr));
        realNameLabel->setText(QCoreApplication::translate("EditMethodDialog", "Display Name (realname):", nullptr));
        addressLabel->setText(QCoreApplication::translate("EditMethodDialog", "Address:", nullptr));
        virtualLabel->setText(QCoreApplication::translate("EditMethodDialog", "Virtual:", nullptr));
        virtualCheckBox->setText(QString());
        vtableOffsetLabel->setText(QCoreApplication::translate("EditMethodDialog", "Offset in VTable:", nullptr));
        (void)EditMethodDialog;
    } // retranslateUi

};

namespace Ui {
    class EditMethodDialog: public Ui_EditMethodDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITMETHODDIALOG_H
