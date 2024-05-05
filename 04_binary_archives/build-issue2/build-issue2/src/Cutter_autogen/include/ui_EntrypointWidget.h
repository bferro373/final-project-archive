/********************************************************************************
** Form generated from reading UI file 'EntrypointWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRYPOINTWIDGET_H
#define UI_ENTRYPOINTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EntrypointWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QTreeWidget *entrypointTreeWidget;

    void setupUi(QDockWidget *EntrypointWidget)
    {
        if (EntrypointWidget->objectName().isEmpty())
            EntrypointWidget->setObjectName(QString::fromUtf8("EntrypointWidget"));
        EntrypointWidget->resize(400, 300);
        EntrypointWidget->setWindowTitle(QString::fromUtf8("Entry Points"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        entrypointTreeWidget = new QTreeWidget(dockWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("Type"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("Address"));
        entrypointTreeWidget->setHeaderItem(__qtreewidgetitem);
        entrypointTreeWidget->setObjectName(QString::fromUtf8("entrypointTreeWidget"));
        entrypointTreeWidget->setStyleSheet(QString::fromUtf8("QTreeWidget::item\n"
"{\n"
"    padding-top: 1px;\n"
"    padding-bottom: 1px;\n"
"}"));
        entrypointTreeWidget->setFrameShape(QFrame::NoFrame);
        entrypointTreeWidget->setLineWidth(0);
        entrypointTreeWidget->setIndentation(8);
        entrypointTreeWidget->setSortingEnabled(true);
        entrypointTreeWidget->setColumnCount(2);

        verticalLayout->addWidget(entrypointTreeWidget);

        EntrypointWidget->setWidget(dockWidgetContents);

        retranslateUi(EntrypointWidget);

        QMetaObject::connectSlotsByName(EntrypointWidget);
    } // setupUi

    void retranslateUi(QDockWidget *EntrypointWidget)
    {
        (void)EntrypointWidget;
    } // retranslateUi

};

namespace Ui {
    class EntrypointWidget: public Ui_EntrypointWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRYPOINTWIDGET_H
