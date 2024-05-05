/********************************************************************************
** Form generated from reading UI file 'ListDockWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTDOCKWIDGET_H
#define UI_LISTDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/AddressableItemList.h"
#include "widgets/QuickFilterView.h"

QT_BEGIN_NAMESPACE

class Ui_ListDockWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    AddressableItemList<> *treeView;
    QuickFilterView *quickFilterView;

    void setupUi(QDockWidget *ListDockWidget)
    {
        if (ListDockWidget->objectName().isEmpty())
            ListDockWidget->setObjectName(QString::fromUtf8("ListDockWidget"));
        ListDockWidget->resize(645, 250);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        treeView = new AddressableItemList<>(dockWidgetContents);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setStyleSheet(QString::fromUtf8("CutterTreeView::item\n"
"{\n"
"    padding-top: 1px;\n"
"    padding-bottom: 1px;\n"
"}"));
        treeView->setFrameShape(QFrame::NoFrame);
        treeView->setIndentation(8);
        treeView->setSortingEnabled(true);
        treeView->header()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout->addWidget(treeView);

        quickFilterView = new QuickFilterView(dockWidgetContents);
        quickFilterView->setObjectName(QString::fromUtf8("quickFilterView"));

        verticalLayout->addWidget(quickFilterView);

        ListDockWidget->setWidget(dockWidgetContents);

        retranslateUi(ListDockWidget);

        QMetaObject::connectSlotsByName(ListDockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *ListDockWidget)
    {
        (void)ListDockWidget;
    } // retranslateUi

};

namespace Ui {
    class ListDockWidget: public Ui_ListDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTDOCKWIDGET_H
