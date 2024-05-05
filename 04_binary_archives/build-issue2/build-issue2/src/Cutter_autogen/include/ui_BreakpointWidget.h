/********************************************************************************
** Form generated from reading UI file 'BreakpointWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BREAKPOINTWIDGET_H
#define UI_BREAKPOINTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/AddressableItemList.h"

QT_BEGIN_NAMESPACE

class Ui_BreakpointWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    AddressableItemList<> *breakpointTreeView;
    QHBoxLayout *hLayout;
    QToolButton *addBreakpoint;
    QToolButton *delBreakpoint;
    QToolButton *delAllBreakpoints;

    void setupUi(QDockWidget *BreakpointWidget)
    {
        if (BreakpointWidget->objectName().isEmpty())
            BreakpointWidget->setObjectName(QString::fromUtf8("BreakpointWidget"));
        BreakpointWidget->resize(400, 300);
        BreakpointWidget->setWindowTitle(QString::fromUtf8("Breakpoints"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        breakpointTreeView = new AddressableItemList<>(dockWidgetContents);
        breakpointTreeView->setObjectName(QString::fromUtf8("breakpointTreeView"));
        breakpointTreeView->setStyleSheet(QString::fromUtf8("CutterTreeView::item\n"
"{\n"
"    padding-top: 1px;\n"
"    padding-bottom: 1px;\n"
"}"));
        breakpointTreeView->setFrameShape(QFrame::NoFrame);
        breakpointTreeView->setLineWidth(0);
        breakpointTreeView->setIndentation(8);
        breakpointTreeView->setSortingEnabled(true);

        verticalLayout->addWidget(breakpointTreeView);

        hLayout = new QHBoxLayout();
        hLayout->setObjectName(QString::fromUtf8("hLayout"));
        addBreakpoint = new QToolButton(dockWidgetContents);
        addBreakpoint->setObjectName(QString::fromUtf8("addBreakpoint"));

        hLayout->addWidget(addBreakpoint);

        delBreakpoint = new QToolButton(dockWidgetContents);
        delBreakpoint->setObjectName(QString::fromUtf8("delBreakpoint"));

        hLayout->addWidget(delBreakpoint);

        delAllBreakpoints = new QToolButton(dockWidgetContents);
        delAllBreakpoints->setObjectName(QString::fromUtf8("delAllBreakpoints"));

        hLayout->addWidget(delAllBreakpoints, 0, Qt::AlignLeft);


        verticalLayout->addLayout(hLayout);

        BreakpointWidget->setWidget(dockWidgetContents);

        retranslateUi(BreakpointWidget);

        QMetaObject::connectSlotsByName(BreakpointWidget);
    } // setupUi

    void retranslateUi(QDockWidget *BreakpointWidget)
    {
        addBreakpoint->setText(QCoreApplication::translate("BreakpointWidget", "Add new breakpoint", nullptr));
        delBreakpoint->setText(QCoreApplication::translate("BreakpointWidget", "Delete breakpoint", nullptr));
        delAllBreakpoints->setText(QCoreApplication::translate("BreakpointWidget", "Delete all breakpoints", nullptr));
        (void)BreakpointWidget;
    } // retranslateUi

};

namespace Ui {
    class BreakpointWidget: public Ui_BreakpointWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BREAKPOINTWIDGET_H
