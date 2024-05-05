/********************************************************************************
** Form generated from reading UI file 'ArenaInfoDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARENAINFODIALOG_H
#define UI_ARENAINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ArenaInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEditTop;
    QLineEdit *lineEditNext;
    QLineEdit *lineEditNextfree;
    QLineEdit *lineEditSysMem;
    QLineEdit *lineEditMaxMem;
    QLabel *label_6;
    QLineEdit *lineEditLastRem;

    void setupUi(QDialog *ArenaInfoDialog)
    {
        if (ArenaInfoDialog->objectName().isEmpty())
            ArenaInfoDialog->setObjectName(QString::fromUtf8("ArenaInfoDialog"));
        ArenaInfoDialog->resize(400, 202);
        verticalLayout = new QVBoxLayout(ArenaInfoDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(ArenaInfoDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(ArenaInfoDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(ArenaInfoDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(ArenaInfoDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(ArenaInfoDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEditTop = new QLineEdit(ArenaInfoDialog);
        lineEditTop->setObjectName(QString::fromUtf8("lineEditTop"));
        lineEditTop->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditTop);

        lineEditNext = new QLineEdit(ArenaInfoDialog);
        lineEditNext->setObjectName(QString::fromUtf8("lineEditNext"));
        lineEditNext->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditNext);

        lineEditNextfree = new QLineEdit(ArenaInfoDialog);
        lineEditNextfree->setObjectName(QString::fromUtf8("lineEditNextfree"));
        lineEditNextfree->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditNextfree);

        lineEditSysMem = new QLineEdit(ArenaInfoDialog);
        lineEditSysMem->setObjectName(QString::fromUtf8("lineEditSysMem"));
        lineEditSysMem->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditSysMem);

        lineEditMaxMem = new QLineEdit(ArenaInfoDialog);
        lineEditMaxMem->setObjectName(QString::fromUtf8("lineEditMaxMem"));
        lineEditMaxMem->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditMaxMem);

        label_6 = new QLabel(ArenaInfoDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        lineEditLastRem = new QLineEdit(ArenaInfoDialog);
        lineEditLastRem->setObjectName(QString::fromUtf8("lineEditLastRem"));
        lineEditLastRem->setReadOnly(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEditLastRem);


        verticalLayout->addLayout(formLayout);


        retranslateUi(ArenaInfoDialog);

        QMetaObject::connectSlotsByName(ArenaInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *ArenaInfoDialog)
    {
        ArenaInfoDialog->setWindowTitle(QCoreApplication::translate("ArenaInfoDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ArenaInfoDialog", "Top", nullptr));
        label_2->setText(QCoreApplication::translate("ArenaInfoDialog", "Next", nullptr));
        label_3->setText(QCoreApplication::translate("ArenaInfoDialog", "Next free", nullptr));
        label_4->setText(QCoreApplication::translate("ArenaInfoDialog", "System Memory", nullptr));
        label_5->setText(QCoreApplication::translate("ArenaInfoDialog", "Max Memory", nullptr));
        label_6->setText(QCoreApplication::translate("ArenaInfoDialog", "Last Remainder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ArenaInfoDialog: public Ui_ArenaInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARENAINFODIALOG_H
