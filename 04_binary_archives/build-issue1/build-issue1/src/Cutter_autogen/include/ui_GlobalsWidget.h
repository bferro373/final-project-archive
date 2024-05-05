/********************************************************************************
** Form generated from reading UI file 'GlobalsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALSWIDGET_H
#define UI_GLOBALSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/ComboQuickFilterView.h"
#include "widgets/CutterTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_GlobalsWidget
{
public:
    QAction *actionEditGlobal;
    QAction *actionDeleteGlobal;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    CutterTreeView *treeView;
    ComboQuickFilterView *quickFilterView;

    void setupUi(QDockWidget *GlobalsWidget)
    {
        if (GlobalsWidget->objectName().isEmpty())
            GlobalsWidget->setObjectName(QString::fromUtf8("GlobalsWidget"));
        GlobalsWidget->resize(400, 300);
        GlobalsWidget->setWindowTitle(QString::fromUtf8("Global Variables"));
        actionEditGlobal = new QAction(GlobalsWidget);
        actionEditGlobal->setObjectName(QString::fromUtf8("actionEditGlobal"));
        actionDeleteGlobal = new QAction(GlobalsWidget);
        actionDeleteGlobal->setObjectName(QString::fromUtf8("actionDeleteGlobal"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        treeView = new CutterTreeView(dockWidgetContents);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy);
        treeView->setStyleSheet(QString::fromUtf8("CutterTreeView::item\n"
"{\n"
"    padding-top: 1px;\n"
"    padding-bottom: 1px;\n"
"}"));
        treeView->setFrameShape(QFrame::NoFrame);
        treeView->setLineWidth(0);
        treeView->setIndentation(8);
        treeView->setSortingEnabled(true);

        verticalLayout->addWidget(treeView);

        quickFilterView = new ComboQuickFilterView(dockWidgetContents);
        quickFilterView->setObjectName(QString::fromUtf8("quickFilterView"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(quickFilterView->sizePolicy().hasHeightForWidth());
        quickFilterView->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(quickFilterView);

        GlobalsWidget->setWidget(dockWidgetContents);

        retranslateUi(GlobalsWidget);

        QMetaObject::connectSlotsByName(GlobalsWidget);
    } // setupUi

    void retranslateUi(QDockWidget *GlobalsWidget)
    {
        actionEditGlobal->setText(QCoreApplication::translate("GlobalsWidget", "Edit Global Variable", nullptr));
#if QT_CONFIG(tooltip)
        actionEditGlobal->setToolTip(QCoreApplication::translate("GlobalsWidget", "Edit Global Variable", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDeleteGlobal->setText(QCoreApplication::translate("GlobalsWidget", "Delete Global Variable", nullptr));
#if QT_CONFIG(tooltip)
        actionDeleteGlobal->setToolTip(QCoreApplication::translate("GlobalsWidget", "Delete Global Variable", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)GlobalsWidget;
    } // retranslateUi

};

namespace Ui {
    class GlobalsWidget: public Ui_GlobalsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALSWIDGET_H
