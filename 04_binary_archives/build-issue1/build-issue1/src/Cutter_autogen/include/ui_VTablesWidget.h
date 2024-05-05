/********************************************************************************
** Form generated from reading UI file 'VTablesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VTABLESWIDGET_H
#define UI_VTABLESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/CutterTreeView.h"
#include "widgets/QuickFilterView.h"

QT_BEGIN_NAMESPACE

class Ui_VTablesWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    CutterTreeView *vTableTreeView;
    QuickFilterView *quickFilterView;

    void setupUi(QDockWidget *VTablesWidget)
    {
        if (VTablesWidget->objectName().isEmpty())
            VTablesWidget->setObjectName(QString::fromUtf8("VTablesWidget"));
        VTablesWidget->setStyleSheet(QString::fromUtf8(""));
        VTablesWidget->setWindowTitle(QString::fromUtf8("&VTable"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy);
        dockWidgetContents->setMinimumSize(QSize(200, 0));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        vTableTreeView = new CutterTreeView(dockWidgetContents);
        vTableTreeView->setObjectName(QString::fromUtf8("vTableTreeView"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(vTableTreeView->sizePolicy().hasHeightForWidth());
        vTableTreeView->setSizePolicy(sizePolicy1);
        vTableTreeView->setContextMenuPolicy(Qt::CustomContextMenu);
        vTableTreeView->setStyleSheet(QString::fromUtf8("\n"
"CutterTreeView::item\n"
"{\n"
"   padding-top: 1px;\n"
"   padding-bottom: 1px;\n"
"}\n"
"       "));
        vTableTreeView->setFrameShape(QFrame::NoFrame);
        vTableTreeView->setLineWidth(0);
        vTableTreeView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        vTableTreeView->setIndentation(8);
        vTableTreeView->setSortingEnabled(true);

        verticalLayout->addWidget(vTableTreeView);

        quickFilterView = new QuickFilterView(dockWidgetContents);
        quickFilterView->setObjectName(QString::fromUtf8("quickFilterView"));

        verticalLayout->addWidget(quickFilterView);

        VTablesWidget->setWidget(dockWidgetContents);

        retranslateUi(VTablesWidget);

        QMetaObject::connectSlotsByName(VTablesWidget);
    } // setupUi

    void retranslateUi(QDockWidget *VTablesWidget)
    {
        (void)VTablesWidget;
    } // retranslateUi

};

namespace Ui {
    class VTablesWidget: public Ui_VTablesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VTABLESWIDGET_H
