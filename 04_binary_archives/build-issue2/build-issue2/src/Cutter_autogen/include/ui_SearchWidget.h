/********************************************************************************
** Form generated from reading UI file 'SearchWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWIDGET_H
#define UI_SEARCHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/AddressableItemList.h"

QT_BEGIN_NAMESPACE

class Ui_SearchWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    AddressableItemList<> *searchTreeView;
    QHBoxLayout *horizontalLayout_17;
    QLineEdit *filterLineEdit;
    QPushButton *searchButton;
    QLabel *searchspaceLabel;
    QComboBox *searchspaceCombo;
    QLabel *searchInLabel;
    QComboBox *searchInCombo;

    void setupUi(QDockWidget *SearchWidget)
    {
        if (SearchWidget->objectName().isEmpty())
            SearchWidget->setObjectName(QString::fromUtf8("SearchWidget"));
        SearchWidget->resize(548, 300);
        SearchWidget->setWindowTitle(QString::fromUtf8("Search"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        searchTreeView = new AddressableItemList<>(dockWidgetContents);
        searchTreeView->setObjectName(QString::fromUtf8("searchTreeView"));
        searchTreeView->setStyleSheet(QString::fromUtf8("CutterTreeView::item\n"
"{\n"
"    padding-top: 1px;\n"
"    padding-bottom: 1px;\n"
"}"));
        searchTreeView->setFrameShape(QFrame::NoFrame);
        searchTreeView->setDragEnabled(true);
        searchTreeView->setIndentation(8);
        searchTreeView->setSortingEnabled(true);
        searchTreeView->setAnimated(true);

        verticalLayout->addWidget(searchTreeView);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(10);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, -1);
        filterLineEdit = new QLineEdit(dockWidgetContents);
        filterLineEdit->setObjectName(QString::fromUtf8("filterLineEdit"));

        horizontalLayout_17->addWidget(filterLineEdit);

        searchButton = new QPushButton(dockWidgetContents);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        horizontalLayout_17->addWidget(searchButton);

        searchspaceLabel = new QLabel(dockWidgetContents);
        searchspaceLabel->setObjectName(QString::fromUtf8("searchspaceLabel"));

        horizontalLayout_17->addWidget(searchspaceLabel);

        searchspaceCombo = new QComboBox(dockWidgetContents);
        searchspaceCombo->setObjectName(QString::fromUtf8("searchspaceCombo"));

        horizontalLayout_17->addWidget(searchspaceCombo);

        searchInLabel = new QLabel(dockWidgetContents);
        searchInLabel->setObjectName(QString::fromUtf8("searchInLabel"));

        horizontalLayout_17->addWidget(searchInLabel);

        searchInCombo = new QComboBox(dockWidgetContents);
        searchInCombo->setObjectName(QString::fromUtf8("searchInCombo"));
        searchInCombo->setMaximumSize(QSize(16777215, 300));

        horizontalLayout_17->addWidget(searchInCombo);


        verticalLayout->addLayout(horizontalLayout_17);

        SearchWidget->setWidget(dockWidgetContents);

        retranslateUi(SearchWidget);

        QMetaObject::connectSlotsByName(SearchWidget);
    } // setupUi

    void retranslateUi(QDockWidget *SearchWidget)
    {
        filterLineEdit->setText(QString());
        searchButton->setText(QCoreApplication::translate("SearchWidget", "Search", nullptr));
        searchspaceLabel->setText(QCoreApplication::translate("SearchWidget", "Search for:", nullptr));
        searchInLabel->setText(QCoreApplication::translate("SearchWidget", "Search in:", nullptr));
        (void)SearchWidget;
    } // retranslateUi

};

namespace Ui {
    class SearchWidget: public Ui_SearchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWIDGET_H
