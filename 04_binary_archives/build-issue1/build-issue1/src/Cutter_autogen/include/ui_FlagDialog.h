/********************************************************************************
** Form generated from reading UI file 'FlagDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLAGDIALOG_H
#define UI_FLAGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FlagDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelAction;
    QFormLayout *formLayout;
    QLabel *labelFlag;
    QLineEdit *nameEdit;
    QLineEdit *sizeEdit;
    QLabel *labelSize;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FlagDialog)
    {
        if (FlagDialog->objectName().isEmpty())
            FlagDialog->setObjectName(QString::fromUtf8("FlagDialog"));
        FlagDialog->resize(452, 121);
        verticalLayout = new QVBoxLayout(FlagDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelAction = new QLabel(FlagDialog);
        labelAction->setObjectName(QString::fromUtf8("labelAction"));

        verticalLayout->addWidget(labelAction);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(12);
        labelFlag = new QLabel(FlagDialog);
        labelFlag->setObjectName(QString::fromUtf8("labelFlag"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelFlag->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelFlag);

        nameEdit = new QLineEdit(FlagDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setFrame(false);
        nameEdit->setPlaceholderText(QString::fromUtf8(""));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        sizeEdit = new QLineEdit(FlagDialog);
        sizeEdit->setObjectName(QString::fromUtf8("sizeEdit"));
        sizeEdit->setMaximumSize(QSize(100, 16777215));
        sizeEdit->setFrame(false);
        sizeEdit->setPlaceholderText(QString::fromUtf8(""));

        formLayout->setWidget(1, QFormLayout::FieldRole, sizeEdit);

        labelSize = new QLabel(FlagDialog);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));
        labelSize->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelSize);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(FlagDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FlagDialog);

        QMetaObject::connectSlotsByName(FlagDialog);
    } // setupUi

    void retranslateUi(QDialog *FlagDialog)
    {
        FlagDialog->setWindowTitle(QCoreApplication::translate("FlagDialog", "Add Flag", nullptr));
        labelAction->setText(QCoreApplication::translate("FlagDialog", "Add flag at", nullptr));
        labelFlag->setText(QCoreApplication::translate("FlagDialog", "Flag:", nullptr));
        sizeEdit->setText(QCoreApplication::translate("FlagDialog", "1", nullptr));
        labelSize->setText(QCoreApplication::translate("FlagDialog", "Size:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FlagDialog: public Ui_FlagDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLAGDIALOG_H
