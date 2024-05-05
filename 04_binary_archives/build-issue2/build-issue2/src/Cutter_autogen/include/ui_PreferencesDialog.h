/********************************************************************************
** Form generated from reading UI file 'PreferencesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QTreeWidget *configCategories;
    QVBoxLayout *verticalLayout;
    QStackedWidget *configPanel;
    QDialogButtonBox *saveButtons;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QString::fromUtf8("PreferencesDialog"));
        horizontalLayout = new QHBoxLayout(PreferencesDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        configCategories = new QTreeWidget(PreferencesDialog);
        configCategories->setObjectName(QString::fromUtf8("configCategories"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(configCategories->sizePolicy().hasHeightForWidth());
        configCategories->setSizePolicy(sizePolicy);
        configCategories->setMaximumSize(QSize(175, 16777215));
        configCategories->setRootIsDecorated(false);
        configCategories->header()->setVisible(false);

        horizontalLayout->addWidget(configCategories);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        configPanel = new QStackedWidget(PreferencesDialog);
        configPanel->setObjectName(QString::fromUtf8("configPanel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(configPanel->sizePolicy().hasHeightForWidth());
        configPanel->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(configPanel);

        saveButtons = new QDialogButtonBox(PreferencesDialog);
        saveButtons->setObjectName(QString::fromUtf8("saveButtons"));
        saveButtons->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(saveButtons);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(PreferencesDialog);

        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QCoreApplication::translate("PreferencesDialog", "Preferences", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
