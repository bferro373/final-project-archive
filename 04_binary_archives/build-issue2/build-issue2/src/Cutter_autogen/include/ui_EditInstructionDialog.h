/********************************************************************************
** Form generated from reading UI file 'EditInstructionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITINSTRUCTIONDIALOG_H
#define UI_EDITINSTRUCTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditInstructionDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *instructionLabel;
    QCheckBox *fillWithNops;
    QSpacerItem *verticalSpacer_1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditInstructionDialog)
    {
        if (EditInstructionDialog->objectName().isEmpty())
            EditInstructionDialog->setObjectName(QString::fromUtf8("EditInstructionDialog"));
        EditInstructionDialog->resize(400, 151);
        EditInstructionDialog->setSizeGripEnabled(false);
        verticalLayout_2 = new QVBoxLayout(EditInstructionDialog);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_2->setContentsMargins(2, 5, 2, 2);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        lineEdit = new QLineEdit(EditInstructionDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 0, -1, -1);
        instructionLabel = new QLabel(EditInstructionDialog);
        instructionLabel->setObjectName(QString::fromUtf8("instructionLabel"));
        instructionLabel->setBaseSize(QSize(1000, 10));
        instructionLabel->setLayoutDirection(Qt::RightToLeft);
        instructionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(instructionLabel);


        verticalLayout->addLayout(horizontalLayout);

        fillWithNops = new QCheckBox(EditInstructionDialog);
        fillWithNops->setObjectName(QString::fromUtf8("fillWithNops"));
        fillWithNops->setChecked(true);

        verticalLayout->addWidget(fillWithNops);

        verticalSpacer_1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_1);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(EditInstructionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(EditInstructionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditInstructionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditInstructionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditInstructionDialog);
    } // setupUi

    void retranslateUi(QDialog *EditInstructionDialog)
    {
        EditInstructionDialog->setWindowTitle(QCoreApplication::translate("EditInstructionDialog", "Edit Instruction", nullptr));
        instructionLabel->setText(QCoreApplication::translate("EditInstructionDialog", "Unknown Instruction", nullptr));
        fillWithNops->setText(QCoreApplication::translate("EditInstructionDialog", "Fill all remaining bytes with NOP opcodes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditInstructionDialog: public Ui_EditInstructionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITINSTRUCTIONDIALOG_H
