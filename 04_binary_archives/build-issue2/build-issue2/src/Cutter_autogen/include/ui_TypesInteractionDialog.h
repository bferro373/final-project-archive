/********************************************************************************
** Form generated from reading UI file 'TypesInteractionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPESINTERACTIONDIALOG_H
#define UI_TYPESINTERACTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TypesInteractionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *filenameLabel;
    QLineEdit *filenameLineEdit;
    QPushButton *selectFileButton;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TypesInteractionDialog)
    {
        if (TypesInteractionDialog->objectName().isEmpty())
            TypesInteractionDialog->setObjectName(QString::fromUtf8("TypesInteractionDialog"));
        TypesInteractionDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(TypesInteractionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        layoutWidget = new QWidget(TypesInteractionDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        filenameLabel = new QLabel(layoutWidget);
        filenameLabel->setObjectName(QString::fromUtf8("filenameLabel"));

        horizontalLayout->addWidget(filenameLabel);

        filenameLineEdit = new QLineEdit(layoutWidget);
        filenameLineEdit->setObjectName(QString::fromUtf8("filenameLineEdit"));
        filenameLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(filenameLineEdit);

        selectFileButton = new QPushButton(layoutWidget);
        selectFileButton->setObjectName(QString::fromUtf8("selectFileButton"));

        horizontalLayout->addWidget(selectFileButton);


        verticalLayout->addWidget(layoutWidget);

        plainTextEdit = new QPlainTextEdit(TypesInteractionDialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        buttonBox = new QDialogButtonBox(TypesInteractionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TypesInteractionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TypesInteractionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TypesInteractionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TypesInteractionDialog);
    } // setupUi

    void retranslateUi(QDialog *TypesInteractionDialog)
    {
        TypesInteractionDialog->setWindowTitle(QCoreApplication::translate("TypesInteractionDialog", "Dialog", nullptr));
        filenameLabel->setText(QCoreApplication::translate("TypesInteractionDialog", "Load From File:", nullptr));
        selectFileButton->setText(QCoreApplication::translate("TypesInteractionDialog", "Select File", nullptr));
        plainTextEdit->setPlainText(QString());
        plainTextEdit->setPlaceholderText(QCoreApplication::translate("TypesInteractionDialog", "Enter Types Manually", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TypesInteractionDialog: public Ui_TypesInteractionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPESINTERACTIONDIALOG_H
