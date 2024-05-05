/********************************************************************************
** Form generated from reading UI file 'ProcessesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSESWIDGET_H
#define UI_PROCESSESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/QuickFilterView.h"

QT_BEGIN_NAMESPACE

class Ui_ProcessesWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QTableView *viewProcesses;
    QuickFilterView *quickFilterView;

    void setupUi(QDockWidget *ProcessesWidget)
    {
        if (ProcessesWidget->objectName().isEmpty())
            ProcessesWidget->setObjectName(QString::fromUtf8("ProcessesWidget"));
        ProcessesWidget->resize(463, 300);
        ProcessesWidget->setWindowTitle(QString::fromUtf8("Processes"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        viewProcesses = new QTableView(dockWidgetContents);
        viewProcesses->setObjectName(QString::fromUtf8("viewProcesses"));
        viewProcesses->setSortingEnabled(true);
        viewProcesses->setCornerButtonEnabled(false);
        viewProcesses->setSelectionMode(QAbstractItemView::SingleSelection);
        viewProcesses->setEditTriggers(QAbstractItemView::NoEditTriggers);
        viewProcesses->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout->addWidget(viewProcesses);

        quickFilterView = new QuickFilterView(dockWidgetContents);
        quickFilterView->setObjectName(QString::fromUtf8("quickFilterView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(quickFilterView->sizePolicy().hasHeightForWidth());
        quickFilterView->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(quickFilterView);

        ProcessesWidget->setWidget(dockWidgetContents);

        retranslateUi(ProcessesWidget);

        QMetaObject::connectSlotsByName(ProcessesWidget);
    } // setupUi

    void retranslateUi(QDockWidget *ProcessesWidget)
    {
        (void)ProcessesWidget;
    } // retranslateUi

};

namespace Ui {
    class ProcessesWidget: public Ui_ProcessesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSESWIDGET_H
