/********************************************************************************
** Form generated from reading UI file 'StringsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRINGSWIDGET_H
#define UI_STRINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/AddressableItemList.h"
#include "widgets/ComboQuickFilterView.h"

QT_BEGIN_NAMESPACE

class Ui_StringsWidget
{
public:
    QAction *actionCopy_String;
    QAction *actionFilter;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    AddressableItemList<> *stringsTreeView;
    ComboQuickFilterView *quickFilterView;

    void setupUi(QDockWidget *StringsWidget)
    {
        if (StringsWidget->objectName().isEmpty())
            StringsWidget->setObjectName(QString::fromUtf8("StringsWidget"));
        StringsWidget->resize(400, 300);
        StringsWidget->setWindowTitle(QString::fromUtf8("Strings"));
        actionCopy_String = new QAction(StringsWidget);
        actionCopy_String->setObjectName(QString::fromUtf8("actionCopy_String"));
        actionFilter = new QAction(StringsWidget);
        actionFilter->setObjectName(QString::fromUtf8("actionFilter"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stringsTreeView = new AddressableItemList<>(dockWidgetContents);
        stringsTreeView->setObjectName(QString::fromUtf8("stringsTreeView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stringsTreeView->sizePolicy().hasHeightForWidth());
        stringsTreeView->setSizePolicy(sizePolicy);
        stringsTreeView->setStyleSheet(QString::fromUtf8("QTreeWidget::item\n"
"{\n"
"    padding-top: 1px;\n"
"    padding-bottom: 1px;\n"
"}"));
        stringsTreeView->setFrameShape(QFrame::NoFrame);
        stringsTreeView->setLineWidth(0);
        stringsTreeView->setIndentation(8);
        stringsTreeView->setSortingEnabled(true);

        verticalLayout->addWidget(stringsTreeView);

        quickFilterView = new ComboQuickFilterView(dockWidgetContents);
        quickFilterView->setObjectName(QString::fromUtf8("quickFilterView"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(quickFilterView->sizePolicy().hasHeightForWidth());
        quickFilterView->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(quickFilterView);

        StringsWidget->setWidget(dockWidgetContents);

        retranslateUi(StringsWidget);

        QMetaObject::connectSlotsByName(StringsWidget);
    } // setupUi

    void retranslateUi(QDockWidget *StringsWidget)
    {
        actionCopy_String->setText(QCoreApplication::translate("StringsWidget", "Copy String", nullptr));
        actionFilter->setText(QCoreApplication::translate("StringsWidget", "Filter", nullptr));
        (void)StringsWidget;
    } // retranslateUi

};

namespace Ui {
    class StringsWidget: public Ui_StringsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRINGSWIDGET_H
