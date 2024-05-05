/********************************************************************************
** Form generated from reading UI file 'EditStringDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSTRINGDIALOG_H
#define UI_EDITSTRINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditStringDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *dialogButtonBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_size;
    QLabel *label_type;
    QLabel *label_address;
    QVBoxLayout *verticalLayout;
    QSpinBox *spinBox_size;
    QComboBox *comboBox_type;
    QLineEdit *lineEdit_address;
    QCheckBox *checkBox_autoSize;

    void setupUi(QDialog *EditStringDialog)
    {
        if (EditStringDialog->objectName().isEmpty())
            EditStringDialog->setObjectName(QString::fromUtf8("EditStringDialog"));
        EditStringDialog->setWindowModality(Qt::WindowModal);
        EditStringDialog->resize(243, 109);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditStringDialog->sizePolicy().hasHeightForWidth());
        EditStringDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(EditStringDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dialogButtonBox = new QDialogButtonBox(EditStringDialog);
        dialogButtonBox->setObjectName(QString::fromUtf8("dialogButtonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dialogButtonBox->sizePolicy().hasHeightForWidth());
        dialogButtonBox->setSizePolicy(sizePolicy1);
        dialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(dialogButtonBox, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_size = new QLabel(EditStringDialog);
        label_size->setObjectName(QString::fromUtf8("label_size"));
        label_size->setMinimumSize(QSize(0, 0));

        verticalLayout_2->addWidget(label_size);

        label_type = new QLabel(EditStringDialog);
        label_type->setObjectName(QString::fromUtf8("label_type"));

        verticalLayout_2->addWidget(label_type);

        label_address = new QLabel(EditStringDialog);
        label_address->setObjectName(QString::fromUtf8("label_address"));

        verticalLayout_2->addWidget(label_address);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        spinBox_size = new QSpinBox(EditStringDialog);
        spinBox_size->setObjectName(QString::fromUtf8("spinBox_size"));
        spinBox_size->setMinimumSize(QSize(150, 24));

        verticalLayout->addWidget(spinBox_size);

        comboBox_type = new QComboBox(EditStringDialog);
        comboBox_type->setObjectName(QString::fromUtf8("comboBox_type"));

        verticalLayout->addWidget(comboBox_type);

        lineEdit_address = new QLineEdit(EditStringDialog);
        lineEdit_address->setObjectName(QString::fromUtf8("lineEdit_address"));

        verticalLayout->addWidget(lineEdit_address);


        horizontalLayout->addLayout(verticalLayout);

        checkBox_autoSize = new QCheckBox(EditStringDialog);
        checkBox_autoSize->setObjectName(QString::fromUtf8("checkBox_autoSize"));

        horizontalLayout->addWidget(checkBox_autoSize, 0, Qt::AlignTop);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        QWidget::setTabOrder(spinBox_size, checkBox_autoSize);
        QWidget::setTabOrder(checkBox_autoSize, comboBox_type);
        QWidget::setTabOrder(comboBox_type, lineEdit_address);
        QWidget::setTabOrder(lineEdit_address, dialogButtonBox);

        retranslateUi(EditStringDialog);
        QObject::connect(dialogButtonBox, SIGNAL(accepted()), EditStringDialog, SLOT(accept()));
        QObject::connect(dialogButtonBox, SIGNAL(rejected()), EditStringDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditStringDialog);
    } // setupUi

    void retranslateUi(QDialog *EditStringDialog)
    {
        EditStringDialog->setWindowTitle(QCoreApplication::translate("EditStringDialog", "Edit string", nullptr));
        label_size->setText(QCoreApplication::translate("EditStringDialog", "Size:", nullptr));
        label_type->setText(QCoreApplication::translate("EditStringDialog", "Type:", nullptr));
        label_address->setText(QCoreApplication::translate("EditStringDialog", "Address:", nullptr));
        lineEdit_address->setText(QString());
        checkBox_autoSize->setText(QCoreApplication::translate("EditStringDialog", "Auto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditStringDialog: public Ui_EditStringDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSTRINGDIALOG_H
