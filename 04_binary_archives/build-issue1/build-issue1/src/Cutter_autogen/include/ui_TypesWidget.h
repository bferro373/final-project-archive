/********************************************************************************
** Form generated from reading UI file 'TypesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPESWIDGET_H
#define UI_TYPESWIDGET_H

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

class Ui_TypesWidget
{
public:
    QAction *actionExport_Types;
    QAction *actionLoad_New_Types;
    QAction *actionDelete_Type;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    CutterTreeView *typesTreeView;
    ComboQuickFilterView *quickFilterView;

    void setupUi(QDockWidget *TypesWidget)
    {
        if (TypesWidget->objectName().isEmpty())
            TypesWidget->setObjectName(QString::fromUtf8("TypesWidget"));
        TypesWidget->resize(400, 300);
        TypesWidget->setWindowTitle(QString::fromUtf8("Types"));
        actionExport_Types = new QAction(TypesWidget);
        actionExport_Types->setObjectName(QString::fromUtf8("actionExport_Types"));
        actionLoad_New_Types = new QAction(TypesWidget);
        actionLoad_New_Types->setObjectName(QString::fromUtf8("actionLoad_New_Types"));
        actionDelete_Type = new QAction(TypesWidget);
        actionDelete_Type->setObjectName(QString::fromUtf8("actionDelete_Type"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        typesTreeView = new CutterTreeView(dockWidgetContents);
        typesTreeView->setObjectName(QString::fromUtf8("typesTreeView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(typesTreeView->sizePolicy().hasHeightForWidth());
        typesTreeView->setSizePolicy(sizePolicy);
        typesTreeView->setStyleSheet(QString::fromUtf8("CutterTreeView::item\n"
"{\n"
"    padding-top: 1px;\n"
"    padding-bottom: 1px;\n"
"}"));
        typesTreeView->setFrameShape(QFrame::NoFrame);
        typesTreeView->setLineWidth(0);
        typesTreeView->setIndentation(8);
        typesTreeView->setSortingEnabled(true);

        verticalLayout->addWidget(typesTreeView);

        quickFilterView = new ComboQuickFilterView(dockWidgetContents);
        quickFilterView->setObjectName(QString::fromUtf8("quickFilterView"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(quickFilterView->sizePolicy().hasHeightForWidth());
        quickFilterView->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(quickFilterView);

        TypesWidget->setWidget(dockWidgetContents);

        retranslateUi(TypesWidget);

        QMetaObject::connectSlotsByName(TypesWidget);
    } // setupUi

    void retranslateUi(QDockWidget *TypesWidget)
    {
        actionExport_Types->setText(QCoreApplication::translate("TypesWidget", "Export Types", nullptr));
#if QT_CONFIG(tooltip)
        actionExport_Types->setToolTip(QCoreApplication::translate("TypesWidget", "Export Types", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLoad_New_Types->setText(QCoreApplication::translate("TypesWidget", "Load New Types", nullptr));
#if QT_CONFIG(tooltip)
        actionLoad_New_Types->setToolTip(QCoreApplication::translate("TypesWidget", "Load New Types", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDelete_Type->setText(QCoreApplication::translate("TypesWidget", "Delete Type", nullptr));
#if QT_CONFIG(tooltip)
        actionDelete_Type->setToolTip(QCoreApplication::translate("TypesWidget", "Delete Type", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)TypesWidget;
    } // retranslateUi

};

namespace Ui {
    class TypesWidget: public Ui_TypesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPESWIDGET_H
