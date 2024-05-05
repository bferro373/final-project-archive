/********************************************************************************
** Form generated from reading UI file 'RegisterRefsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERREFSWIDGET_H
#define UI_REGISTERREFSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/CutterTreeView.h"
#include "widgets/QuickFilterView.h"

QT_BEGIN_NAMESPACE

class Ui_RegisterRefsWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    CutterTreeView *registerRefTreeView;
    QuickFilterView *quickFilterView;

    void setupUi(QDockWidget *RegisterRefsWidget)
    {
        if (RegisterRefsWidget->objectName().isEmpty())
            RegisterRefsWidget->setObjectName(QString::fromUtf8("RegisterRefsWidget"));
        RegisterRefsWidget->resize(400, 300);
        RegisterRefsWidget->setWindowTitle(QString::fromUtf8("Register References"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        registerRefTreeView = new CutterTreeView(dockWidgetContents);
        registerRefTreeView->setObjectName(QString::fromUtf8("registerRefTreeView"));
        registerRefTreeView->setStyleSheet(QString::fromUtf8("CutterTreeView::item\n"
"{\n"
"    padding-top: 1px;\n"
"    padding-bottom: 1px;\n"
"}"));
        registerRefTreeView->setFrameShape(QFrame::NoFrame);
        registerRefTreeView->setLineWidth(0);
        registerRefTreeView->setIndentation(8);
        registerRefTreeView->setSortingEnabled(true);

        verticalLayout->addWidget(registerRefTreeView);

        quickFilterView = new QuickFilterView(dockWidgetContents);
        quickFilterView->setObjectName(QString::fromUtf8("quickFilterView"));

        verticalLayout->addWidget(quickFilterView);

        RegisterRefsWidget->setWidget(dockWidgetContents);

        retranslateUi(RegisterRefsWidget);

        QMetaObject::connectSlotsByName(RegisterRefsWidget);
    } // setupUi

    void retranslateUi(QDockWidget *RegisterRefsWidget)
    {
        (void)RegisterRefsWidget;
    } // retranslateUi

};

namespace Ui {
    class RegisterRefsWidget: public Ui_RegisterRefsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERREFSWIDGET_H
