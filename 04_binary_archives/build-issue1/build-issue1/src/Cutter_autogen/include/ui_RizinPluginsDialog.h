/********************************************************************************
** Form generated from reading UI file 'RizinPluginsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIZINPLUGINSDIALOG_H
#define UI_RIZINPLUGINSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RizinPluginsDialog
{
public:
    QVBoxLayout *verticalLayout_1;
    QTabWidget *tabWidget;
    QWidget *RzBinTab;
    QVBoxLayout *verticalLayout_2;
    QLabel *RzBinLabel;
    QTreeWidget *RzBinTreeWidget;
    QWidget *RzIOTab;
    QVBoxLayout *verticalLayout_3;
    QLabel *RzIOLabel;
    QTreeWidget *RzIOTreeWidget;
    QWidget *RzCoreTab;
    QVBoxLayout *verticalLayout_4;
    QLabel *RzCoreLabel;
    QTreeWidget *RzCoreTreeWidget;
    QWidget *RzAsmTab;
    QVBoxLayout *verticalLayout_5;
    QLabel *RzAsmLabel;
    QTreeWidget *RzAsmTreeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RizinPluginsDialog)
    {
        if (RizinPluginsDialog->objectName().isEmpty())
            RizinPluginsDialog->setObjectName(QString::fromUtf8("RizinPluginsDialog"));
        RizinPluginsDialog->resize(618, 642);
        verticalLayout_1 = new QVBoxLayout(RizinPluginsDialog);
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));
        tabWidget = new QTabWidget(RizinPluginsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        RzBinTab = new QWidget();
        RzBinTab->setObjectName(QString::fromUtf8("RzBinTab"));
        verticalLayout_2 = new QVBoxLayout(RzBinTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        RzBinLabel = new QLabel(RzBinTab);
        RzBinLabel->setObjectName(QString::fromUtf8("RzBinLabel"));

        verticalLayout_2->addWidget(RzBinLabel);

        RzBinTreeWidget = new QTreeWidget(RzBinTab);
        RzBinTreeWidget->setObjectName(QString::fromUtf8("RzBinTreeWidget"));
        RzBinTreeWidget->setSortingEnabled(true);

        verticalLayout_2->addWidget(RzBinTreeWidget);

        tabWidget->addTab(RzBinTab, QString());
        RzIOTab = new QWidget();
        RzIOTab->setObjectName(QString::fromUtf8("RzIOTab"));
        verticalLayout_3 = new QVBoxLayout(RzIOTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        RzIOLabel = new QLabel(RzIOTab);
        RzIOLabel->setObjectName(QString::fromUtf8("RzIOLabel"));

        verticalLayout_3->addWidget(RzIOLabel);

        RzIOTreeWidget = new QTreeWidget(RzIOTab);
        RzIOTreeWidget->setObjectName(QString::fromUtf8("RzIOTreeWidget"));
        RzIOTreeWidget->setSortingEnabled(true);

        verticalLayout_3->addWidget(RzIOTreeWidget);

        tabWidget->addTab(RzIOTab, QString());
        RzCoreTab = new QWidget();
        RzCoreTab->setObjectName(QString::fromUtf8("RzCoreTab"));
        verticalLayout_4 = new QVBoxLayout(RzCoreTab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        RzCoreLabel = new QLabel(RzCoreTab);
        RzCoreLabel->setObjectName(QString::fromUtf8("RzCoreLabel"));

        verticalLayout_4->addWidget(RzCoreLabel);

        RzCoreTreeWidget = new QTreeWidget(RzCoreTab);
        RzCoreTreeWidget->setObjectName(QString::fromUtf8("RzCoreTreeWidget"));
        RzCoreTreeWidget->setSortingEnabled(true);

        verticalLayout_4->addWidget(RzCoreTreeWidget);

        tabWidget->addTab(RzCoreTab, QString());
        RzAsmTab = new QWidget();
        RzAsmTab->setObjectName(QString::fromUtf8("RzAsmTab"));
        verticalLayout_5 = new QVBoxLayout(RzAsmTab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        RzAsmLabel = new QLabel(RzAsmTab);
        RzAsmLabel->setObjectName(QString::fromUtf8("RzAsmLabel"));

        verticalLayout_5->addWidget(RzAsmLabel);

        RzAsmTreeWidget = new QTreeWidget(RzAsmTab);
        RzAsmTreeWidget->setObjectName(QString::fromUtf8("RzAsmTreeWidget"));
        RzAsmTreeWidget->setSortingEnabled(true);

        verticalLayout_5->addWidget(RzAsmTreeWidget);

        tabWidget->addTab(RzAsmTab, QString());

        verticalLayout_1->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(RizinPluginsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_1->addWidget(buttonBox);


        retranslateUi(RizinPluginsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RizinPluginsDialog, SLOT(accept()));

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(RizinPluginsDialog);
    } // setupUi

    void retranslateUi(QDialog *RizinPluginsDialog)
    {
        RizinPluginsDialog->setWindowTitle(QCoreApplication::translate("RizinPluginsDialog", "Rizin plugin information", nullptr));
        RzBinLabel->setText(QCoreApplication::translate("RizinPluginsDialog", "RzBin plugins", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = RzBinTreeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("RizinPluginsDialog", "Type", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("RizinPluginsDialog", "License", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("RizinPluginsDialog", "Description", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("RizinPluginsDialog", "Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(RzBinTab), QCoreApplication::translate("RizinPluginsDialog", "RzBin", nullptr));
        RzIOLabel->setText(QCoreApplication::translate("RizinPluginsDialog", "RzIO plugins", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = RzIOTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(3, QCoreApplication::translate("RizinPluginsDialog", "Permissions", nullptr));
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("RizinPluginsDialog", "License", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("RizinPluginsDialog", "Description", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("RizinPluginsDialog", "Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(RzIOTab), QCoreApplication::translate("RizinPluginsDialog", "RzIO", nullptr));
        RzCoreLabel->setText(QCoreApplication::translate("RizinPluginsDialog", "RzCore plugins", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = RzCoreTreeWidget->headerItem();
        ___qtreewidgetitem2->setText(2, QCoreApplication::translate("RizinPluginsDialog", "License", nullptr));
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("RizinPluginsDialog", "Description", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("RizinPluginsDialog", "Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(RzCoreTab), QCoreApplication::translate("RizinPluginsDialog", "RzCore", nullptr));
        RzAsmLabel->setText(QCoreApplication::translate("RizinPluginsDialog", "RzAsm plugins", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = RzAsmTreeWidget->headerItem();
        ___qtreewidgetitem3->setText(6, QCoreApplication::translate("RizinPluginsDialog", "Author", nullptr));
        ___qtreewidgetitem3->setText(5, QCoreApplication::translate("RizinPluginsDialog", "License", nullptr));
        ___qtreewidgetitem3->setText(4, QCoreApplication::translate("RizinPluginsDialog", "Description", nullptr));
        ___qtreewidgetitem3->setText(3, QCoreApplication::translate("RizinPluginsDialog", "Version", nullptr));
        ___qtreewidgetitem3->setText(2, QCoreApplication::translate("RizinPluginsDialog", "CPU's", nullptr));
        ___qtreewidgetitem3->setText(1, QCoreApplication::translate("RizinPluginsDialog", "Architecture", nullptr));
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("RizinPluginsDialog", "Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(RzAsmTab), QCoreApplication::translate("RizinPluginsDialog", "RzAsm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RizinPluginsDialog: public Ui_RizinPluginsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIZINPLUGINSDIALOG_H
