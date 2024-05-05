/********************************************************************************
** Form generated from reading UI file 'FlagsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLAGSWIDGET_H
#define UI_FLAGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/AddressableItemList.h"

QT_BEGIN_NAMESPACE

class Ui_FlagsWidget
{
public:
    QAction *actionRename;
    QAction *actionDelete;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    AddressableItemList<> *flagsTreeView;
    QHBoxLayout *horizontalLayout_17;
    QLineEdit *filterLineEdit;
    QLabel *flagspaceLabel;
    QComboBox *flagspaceCombo;

    void setupUi(QDockWidget *FlagsWidget)
    {
        if (FlagsWidget->objectName().isEmpty())
            FlagsWidget->setObjectName(QString::fromUtf8("FlagsWidget"));
        FlagsWidget->resize(463, 300);
        FlagsWidget->setWindowTitle(QString::fromUtf8("Flags"));
        actionRename = new QAction(FlagsWidget);
        actionRename->setObjectName(QString::fromUtf8("actionRename"));
        actionRename->setShortcutContext(Qt::WidgetWithChildrenShortcut);
        actionDelete = new QAction(FlagsWidget);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionDelete->setShortcutContext(Qt::WidgetWithChildrenShortcut);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        flagsTreeView = new AddressableItemList<>(dockWidgetContents);
        flagsTreeView->setObjectName(QString::fromUtf8("flagsTreeView"));
        flagsTreeView->setStyleSheet(QString::fromUtf8("CutterTreeView::item\n"
"{\n"
"    padding-top: 1px;\n"
"    padding-bottom: 1px;\n"
"}"));
        flagsTreeView->setFrameShape(QFrame::NoFrame);
        flagsTreeView->setDragEnabled(true);
        flagsTreeView->setIndentation(8);
        flagsTreeView->setSortingEnabled(true);
        flagsTreeView->setAnimated(true);

        verticalLayout->addWidget(flagsTreeView);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(10);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, -1);
        filterLineEdit = new QLineEdit(dockWidgetContents);
        filterLineEdit->setObjectName(QString::fromUtf8("filterLineEdit"));

        horizontalLayout_17->addWidget(filterLineEdit);

        flagspaceLabel = new QLabel(dockWidgetContents);
        flagspaceLabel->setObjectName(QString::fromUtf8("flagspaceLabel"));

        horizontalLayout_17->addWidget(flagspaceLabel);

        flagspaceCombo = new QComboBox(dockWidgetContents);
        flagspaceCombo->setObjectName(QString::fromUtf8("flagspaceCombo"));

        horizontalLayout_17->addWidget(flagspaceCombo);


        verticalLayout->addLayout(horizontalLayout_17);

        FlagsWidget->setWidget(dockWidgetContents);

        retranslateUi(FlagsWidget);

        QMetaObject::connectSlotsByName(FlagsWidget);
    } // setupUi

    void retranslateUi(QDockWidget *FlagsWidget)
    {
        actionRename->setText(QCoreApplication::translate("FlagsWidget", "Rename", nullptr));
#if QT_CONFIG(shortcut)
        actionRename->setShortcut(QCoreApplication::translate("FlagsWidget", "N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete->setText(QCoreApplication::translate("FlagsWidget", "Delete", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("FlagsWidget", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        filterLineEdit->setText(QString());
        filterLineEdit->setPlaceholderText(QCoreApplication::translate("FlagsWidget", "Quick Filter", nullptr));
        flagspaceLabel->setText(QCoreApplication::translate("FlagsWidget", "Flagspace:", nullptr));
        (void)FlagsWidget;
    } // retranslateUi

};

namespace Ui {
    class FlagsWidget: public Ui_FlagsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLAGSWIDGET_H
