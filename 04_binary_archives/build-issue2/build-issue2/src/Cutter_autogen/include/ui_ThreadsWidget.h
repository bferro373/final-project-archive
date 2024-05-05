/********************************************************************************
** Form generated from reading UI file 'ThreadsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREADSWIDGET_H
#define UI_THREADSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/QuickFilterView.h"

QT_BEGIN_NAMESPACE

class Ui_ThreadsWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QTableView *viewThreads;
    QuickFilterView *quickFilterView;

    void setupUi(QDockWidget *ThreadsWidget)
    {
        if (ThreadsWidget->objectName().isEmpty())
            ThreadsWidget->setObjectName(QString::fromUtf8("ThreadsWidget"));
        ThreadsWidget->resize(463, 300);
        ThreadsWidget->setWindowTitle(QString::fromUtf8("Threads"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        viewThreads = new QTableView(dockWidgetContents);
        viewThreads->setObjectName(QString::fromUtf8("viewThreads"));
        viewThreads->setSortingEnabled(true);
        viewThreads->setCornerButtonEnabled(false);
        viewThreads->setSelectionMode(QAbstractItemView::SingleSelection);
        viewThreads->setEditTriggers(QAbstractItemView::NoEditTriggers);
        viewThreads->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout->addWidget(viewThreads);

        quickFilterView = new QuickFilterView(dockWidgetContents);
        quickFilterView->setObjectName(QString::fromUtf8("quickFilterView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(quickFilterView->sizePolicy().hasHeightForWidth());
        quickFilterView->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(quickFilterView);

        ThreadsWidget->setWidget(dockWidgetContents);

        retranslateUi(ThreadsWidget);

        QMetaObject::connectSlotsByName(ThreadsWidget);
    } // setupUi

    void retranslateUi(QDockWidget *ThreadsWidget)
    {
        (void)ThreadsWidget;
    } // retranslateUi

};

namespace Ui {
    class ThreadsWidget: public Ui_ThreadsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREADSWIDGET_H
