/********************************************************************************
** Form generated from reading UI file 'HexdumpRangeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEXDUMPRANGEDIALOG_H
#define UI_HEXDUMPRANGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HexdumpRangeDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *endAddressRadioButton;
    QLabel *startAddressLabel;
    QLineEdit *startAddressLineEdit;
    QLineEdit *endAddressLineEdit;
    QLineEdit *lengthLineEdit;
    QRadioButton *lengthRadioButton;
    QLabel *selectionWarningLabel;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *HexdumpRangeDialog)
    {
        if (HexdumpRangeDialog->objectName().isEmpty())
            HexdumpRangeDialog->setObjectName(QString::fromUtf8("HexdumpRangeDialog"));
        HexdumpRangeDialog->resize(455, 201);
        buttonBox = new QDialogButtonBox(HexdumpRangeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 160, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget = new QWidget(HexdumpRangeDialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(29, 19, 401, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        endAddressRadioButton = new QRadioButton(gridLayoutWidget);
        buttonGroup = new QButtonGroup(HexdumpRangeDialog);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(endAddressRadioButton);
        endAddressRadioButton->setObjectName(QString::fromUtf8("endAddressRadioButton"));
        endAddressRadioButton->setChecked(true);

        horizontalLayout->addWidget(endAddressRadioButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        startAddressLabel = new QLabel(gridLayoutWidget);
        startAddressLabel->setObjectName(QString::fromUtf8("startAddressLabel"));

        gridLayout->addWidget(startAddressLabel, 0, 0, 1, 1);

        startAddressLineEdit = new QLineEdit(gridLayoutWidget);
        startAddressLineEdit->setObjectName(QString::fromUtf8("startAddressLineEdit"));
        startAddressLineEdit->setMaxLength(18);

        gridLayout->addWidget(startAddressLineEdit, 0, 1, 1, 1);

        endAddressLineEdit = new QLineEdit(gridLayoutWidget);
        endAddressLineEdit->setObjectName(QString::fromUtf8("endAddressLineEdit"));
        endAddressLineEdit->setMaxLength(18);

        gridLayout->addWidget(endAddressLineEdit, 2, 1, 1, 1);

        lengthLineEdit = new QLineEdit(gridLayoutWidget);
        lengthLineEdit->setObjectName(QString::fromUtf8("lengthLineEdit"));
        lengthLineEdit->setEnabled(false);
        lengthLineEdit->setMaxLength(10);

        gridLayout->addWidget(lengthLineEdit, 3, 1, 1, 1);

        lengthRadioButton = new QRadioButton(gridLayoutWidget);
        buttonGroup->addButton(lengthRadioButton);
        lengthRadioButton->setObjectName(QString::fromUtf8("lengthRadioButton"));

        gridLayout->addWidget(lengthRadioButton, 3, 0, 1, 1);

        selectionWarningLabel = new QLabel(gridLayoutWidget);
        selectionWarningLabel->setObjectName(QString::fromUtf8("selectionWarningLabel"));
        selectionWarningLabel->setEnabled(true);
        selectionWarningLabel->setVisible(false);

        gridLayout->addWidget(selectionWarningLabel, 4, 1, 1, 1);


        retranslateUi(HexdumpRangeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), HexdumpRangeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HexdumpRangeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(HexdumpRangeDialog);
    } // setupUi

    void retranslateUi(QDialog *HexdumpRangeDialog)
    {
        HexdumpRangeDialog->setWindowTitle(QCoreApplication::translate("HexdumpRangeDialog", "Select Block", nullptr));
#if QT_CONFIG(tooltip)
        endAddressRadioButton->setToolTip(QCoreApplication::translate("HexdumpRangeDialog", "Exclusive end address", nullptr));
#endif // QT_CONFIG(tooltip)
        endAddressRadioButton->setText(QCoreApplication::translate("HexdumpRangeDialog", "End Address:", nullptr));
        startAddressLabel->setText(QCoreApplication::translate("HexdumpRangeDialog", "Start Address:", nullptr));
#if QT_CONFIG(tooltip)
        endAddressLineEdit->setToolTip(QCoreApplication::translate("HexdumpRangeDialog", "Exclusive end address", nullptr));
#endif // QT_CONFIG(tooltip)
        lengthRadioButton->setText(QCoreApplication::translate("HexdumpRangeDialog", "Length:", nullptr));
        selectionWarningLabel->setText(QCoreApplication::translate("HexdumpRangeDialog", "<html><head/><body><p><span style=\" color:#ff8585;\">Big selection might cause a delay</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HexdumpRangeDialog: public Ui_HexdumpRangeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXDUMPRANGEDIALOG_H
