/********************************************************************************
** Form generated from reading UI file 'NativeDebugDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NATIVEDEBUGDIALOG_H
#define UI_NATIVEDEBUGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NativeDebugDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *argText;
    QPlainTextEdit *argEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NativeDebugDialog)
    {
        if (NativeDebugDialog->objectName().isEmpty())
            NativeDebugDialog->setObjectName(QString::fromUtf8("NativeDebugDialog"));
        NativeDebugDialog->setWindowModality(Qt::NonModal);
        NativeDebugDialog->resize(350, 113);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NativeDebugDialog->sizePolicy().hasHeightForWidth());
        NativeDebugDialog->setSizePolicy(sizePolicy);
        NativeDebugDialog->setMinimumSize(QSize(0, 0));
        NativeDebugDialog->setWindowTitle(QString::fromUtf8("Native debugging configuration"));
        verticalLayout = new QVBoxLayout(NativeDebugDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        argText = new QLabel(NativeDebugDialog);
        argText->setObjectName(QString::fromUtf8("argText"));

        verticalLayout->addWidget(argText);

        argEdit = new QPlainTextEdit(NativeDebugDialog);
        argEdit->setObjectName(QString::fromUtf8("argEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(argEdit->sizePolicy().hasHeightForWidth());
        argEdit->setSizePolicy(sizePolicy1);
        argEdit->setMinimumSize(QSize(0, 35));
        argEdit->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(argEdit);

        buttonBox = new QDialogButtonBox(NativeDebugDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NativeDebugDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NativeDebugDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NativeDebugDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NativeDebugDialog);
    } // setupUi

    void retranslateUi(QDialog *NativeDebugDialog)
    {
        argText->setText(QCoreApplication::translate("NativeDebugDialog", "Command line arguments:", nullptr));
        (void)NativeDebugDialog;
    } // retranslateUi

};

namespace Ui {
    class NativeDebugDialog: public Ui_NativeDebugDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NATIVEDEBUGDIALOG_H
