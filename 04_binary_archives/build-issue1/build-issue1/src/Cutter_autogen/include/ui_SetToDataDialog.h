/********************************************************************************
** Form generated from reading UI file 'SetToDataDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTODATADIALOG_H
#define UI_SETTODATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_SetToDataDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *startAddrLabel;
    QLabel *label;
    QLabel *endAddrLabel;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *repeatEdit;
    QLineEdit *sizeEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SetToDataDialog)
    {
        if (SetToDataDialog->objectName().isEmpty())
            SetToDataDialog->setObjectName(QString::fromUtf8("SetToDataDialog"));
        SetToDataDialog->resize(273, 197);
        gridLayout = new QGridLayout(SetToDataDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        startAddrLabel = new QLabel(SetToDataDialog);
        startAddrLabel->setObjectName(QString::fromUtf8("startAddrLabel"));

        gridLayout->addWidget(startAddrLabel, 0, 1, 1, 1);

        label = new QLabel(SetToDataDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        endAddrLabel = new QLabel(SetToDataDialog);
        endAddrLabel->setObjectName(QString::fromUtf8("endAddrLabel"));

        gridLayout->addWidget(endAddrLabel, 1, 1, 1, 1);

        label_3 = new QLabel(SetToDataDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_5 = new QLabel(SetToDataDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_6 = new QLabel(SetToDataDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        repeatEdit = new QLineEdit(SetToDataDialog);
        repeatEdit->setObjectName(QString::fromUtf8("repeatEdit"));

        gridLayout->addWidget(repeatEdit, 3, 1, 1, 1);

        sizeEdit = new QLineEdit(SetToDataDialog);
        sizeEdit->setObjectName(QString::fromUtf8("sizeEdit"));

        gridLayout->addWidget(sizeEdit, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(SetToDataDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);

        QWidget::setTabOrder(sizeEdit, repeatEdit);

        retranslateUi(SetToDataDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SetToDataDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SetToDataDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SetToDataDialog);
    } // setupUi

    void retranslateUi(QDialog *SetToDataDialog)
    {
        SetToDataDialog->setWindowTitle(QCoreApplication::translate("SetToDataDialog", "Set to Data", nullptr));
        startAddrLabel->setText(QCoreApplication::translate("SetToDataDialog", "???", nullptr));
        label->setText(QCoreApplication::translate("SetToDataDialog", "Start address", nullptr));
        endAddrLabel->setText(QCoreApplication::translate("SetToDataDialog", "???", nullptr));
        label_3->setText(QCoreApplication::translate("SetToDataDialog", "End address", nullptr));
        label_5->setText(QCoreApplication::translate("SetToDataDialog", "Item size", nullptr));
        label_6->setText(QCoreApplication::translate("SetToDataDialog", "Number of items", nullptr));
        repeatEdit->setText(QCoreApplication::translate("SetToDataDialog", "1", nullptr));
        sizeEdit->setText(QCoreApplication::translate("SetToDataDialog", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetToDataDialog: public Ui_SetToDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTODATADIALOG_H
