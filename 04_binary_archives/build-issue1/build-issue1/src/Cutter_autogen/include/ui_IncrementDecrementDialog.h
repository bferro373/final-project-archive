/********************************************************************************
** Form generated from reading UI file 'IncrementDecrementDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCREMENTDECREMENTDIALOG_H
#define UI_INCREMENTDECREMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_IncrementDecrementDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *nBytesCB;
    QHBoxLayout *horizontalLayout_2;
    QLabel *valueLabel;
    QLineEdit *valueLE;
    QRadioButton *incrementRB;
    QRadioButton *decrementRB;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *IncrementDecrementDialog)
    {
        if (IncrementDecrementDialog->objectName().isEmpty())
            IncrementDecrementDialog->setObjectName(QString::fromUtf8("IncrementDecrementDialog"));
        IncrementDecrementDialog->resize(241, 258);
        verticalLayout_2 = new QVBoxLayout(IncrementDecrementDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(IncrementDecrementDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        nBytesCB = new QComboBox(IncrementDecrementDialog);
        nBytesCB->setObjectName(QString::fromUtf8("nBytesCB"));

        horizontalLayout->addWidget(nBytesCB);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        valueLabel = new QLabel(IncrementDecrementDialog);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));

        horizontalLayout_2->addWidget(valueLabel);

        valueLE = new QLineEdit(IncrementDecrementDialog);
        valueLE->setObjectName(QString::fromUtf8("valueLE"));
        valueLE->setInputMask(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(valueLE);


        verticalLayout->addLayout(horizontalLayout_2);

        incrementRB = new QRadioButton(IncrementDecrementDialog);
        buttonGroup = new QButtonGroup(IncrementDecrementDialog);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(incrementRB);
        incrementRB->setObjectName(QString::fromUtf8("incrementRB"));

        verticalLayout->addWidget(incrementRB);

        decrementRB = new QRadioButton(IncrementDecrementDialog);
        buttonGroup->addButton(decrementRB);
        decrementRB->setObjectName(QString::fromUtf8("decrementRB"));

        verticalLayout->addWidget(decrementRB);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(IncrementDecrementDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(IncrementDecrementDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), IncrementDecrementDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), IncrementDecrementDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(IncrementDecrementDialog);
    } // setupUi

    void retranslateUi(QDialog *IncrementDecrementDialog)
    {
        IncrementDecrementDialog->setWindowTitle(QCoreApplication::translate("IncrementDecrementDialog", "Increment/Decrement", nullptr));
        label->setText(QCoreApplication::translate("IncrementDecrementDialog", "Interpret as", nullptr));
        valueLabel->setText(QCoreApplication::translate("IncrementDecrementDialog", "Value:", nullptr));
        incrementRB->setText(QCoreApplication::translate("IncrementDecrementDialog", "Increment", nullptr));
        decrementRB->setText(QCoreApplication::translate("IncrementDecrementDialog", "Decrement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IncrementDecrementDialog: public Ui_IncrementDecrementDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCREMENTDECREMENTDIALOG_H
