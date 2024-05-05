/********************************************************************************
** Form generated from reading UI file 'Base64EnDecodedWriteDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE64ENDECODEDWRITEDIALOG_H
#define UI_BASE64ENDECODEDWRITEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Base64EnDecodedWriteDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *base64LineEdit;
    QVBoxLayout *verticalLayout;
    QRadioButton *decodeRB;
    QRadioButton *encodeRB;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QButtonGroup *modeButtonGroup;

    void setupUi(QDialog *Base64EnDecodedWriteDialog)
    {
        if (Base64EnDecodedWriteDialog->objectName().isEmpty())
            Base64EnDecodedWriteDialog->setObjectName(QString::fromUtf8("Base64EnDecodedWriteDialog"));
        Base64EnDecodedWriteDialog->resize(535, 217);
        verticalLayout_3 = new QVBoxLayout(Base64EnDecodedWriteDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Base64EnDecodedWriteDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        base64LineEdit = new QLineEdit(Base64EnDecodedWriteDialog);
        base64LineEdit->setObjectName(QString::fromUtf8("base64LineEdit"));

        horizontalLayout->addWidget(base64LineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        decodeRB = new QRadioButton(Base64EnDecodedWriteDialog);
        modeButtonGroup = new QButtonGroup(Base64EnDecodedWriteDialog);
        modeButtonGroup->setObjectName(QString::fromUtf8("modeButtonGroup"));
        modeButtonGroup->addButton(decodeRB);
        decodeRB->setObjectName(QString::fromUtf8("decodeRB"));

        verticalLayout->addWidget(decodeRB);

        encodeRB = new QRadioButton(Base64EnDecodedWriteDialog);
        modeButtonGroup->addButton(encodeRB);
        encodeRB->setObjectName(QString::fromUtf8("encodeRB"));

        verticalLayout->addWidget(encodeRB);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(Base64EnDecodedWriteDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(Base64EnDecodedWriteDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Base64EnDecodedWriteDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Base64EnDecodedWriteDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Base64EnDecodedWriteDialog);
    } // setupUi

    void retranslateUi(QDialog *Base64EnDecodedWriteDialog)
    {
        Base64EnDecodedWriteDialog->setWindowTitle(QCoreApplication::translate("Base64EnDecodedWriteDialog", "Base64 Encode/Decode", nullptr));
        label->setText(QCoreApplication::translate("Base64EnDecodedWriteDialog", "String:", nullptr));
        decodeRB->setText(QCoreApplication::translate("Base64EnDecodedWriteDialog", "Decode", nullptr));
        encodeRB->setText(QCoreApplication::translate("Base64EnDecodedWriteDialog", "Encode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Base64EnDecodedWriteDialog: public Ui_Base64EnDecodedWriteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASE64ENDECODEDWRITEDIALOG_H
