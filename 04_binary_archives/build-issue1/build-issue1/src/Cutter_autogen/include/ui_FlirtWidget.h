/********************************************************************************
** Form generated from reading UI file 'FlirtWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIRTWIDGET_H
#define UI_FLIRTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/CutterTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_FlirtWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    CutterTreeView *flirtTreeView;

    void setupUi(QDockWidget *FlirtWidget)
    {
        if (FlirtWidget->objectName().isEmpty())
            FlirtWidget->setObjectName(QString::fromUtf8("FlirtWidget"));
        FlirtWidget->resize(400, 300);
        FlirtWidget->setWindowTitle(QString::fromUtf8("Signatures"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        flirtTreeView = new CutterTreeView(dockWidgetContents);
        flirtTreeView->setObjectName(QString::fromUtf8("flirtTreeView"));
        flirtTreeView->setStyleSheet(QString::fromUtf8("CutterTreeView::item\n"
"{\n"
"    padding-top: 1px;\n"
"    padding-bottom: 1px;\n"
"}"));
        flirtTreeView->setFrameShape(QFrame::NoFrame);
        flirtTreeView->setLineWidth(0);
        flirtTreeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        flirtTreeView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        flirtTreeView->setAutoScroll(true);
        flirtTreeView->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        flirtTreeView->setIndentation(8);
        flirtTreeView->setSortingEnabled(true);

        verticalLayout->addWidget(flirtTreeView);

        FlirtWidget->setWidget(dockWidgetContents);

        retranslateUi(FlirtWidget);

        QMetaObject::connectSlotsByName(FlirtWidget);
    } // setupUi

    void retranslateUi(QDockWidget *FlirtWidget)
    {
        (void)FlirtWidget;
    } // retranslateUi

};

namespace Ui {
    class FlirtWidget: public Ui_FlirtWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIRTWIDGET_H
