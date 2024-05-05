/********************************************************************************
** Form generated from reading UI file 'LayoutManager.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTMANAGER_H
#define UI_LAYOUTMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LayoutManager
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *layoutSelector;
    QHBoxLayout *horizontalLayout;
    QPushButton *renameButton;
    QPushButton *deleteButton;

    void setupUi(QDialog *LayoutManager)
    {
        if (LayoutManager->objectName().isEmpty())
            LayoutManager->setObjectName(QString::fromUtf8("LayoutManager"));
        LayoutManager->resize(254, 88);
        verticalLayout = new QVBoxLayout(LayoutManager);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        layoutSelector = new QComboBox(LayoutManager);
        layoutSelector->setObjectName(QString::fromUtf8("layoutSelector"));

        verticalLayout->addWidget(layoutSelector);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        renameButton = new QPushButton(LayoutManager);
        renameButton->setObjectName(QString::fromUtf8("renameButton"));

        horizontalLayout->addWidget(renameButton);

        deleteButton = new QPushButton(LayoutManager);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout->addWidget(deleteButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LayoutManager);

        QMetaObject::connectSlotsByName(LayoutManager);
    } // setupUi

    void retranslateUi(QDialog *LayoutManager)
    {
        LayoutManager->setWindowTitle(QCoreApplication::translate("LayoutManager", "Layout", nullptr));
        renameButton->setText(QCoreApplication::translate("LayoutManager", "Rename", nullptr));
        deleteButton->setText(QCoreApplication::translate("LayoutManager", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutManager: public Ui_LayoutManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTMANAGER_H
