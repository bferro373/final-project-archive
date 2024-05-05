/********************************************************************************
** Form generated from reading UI file 'HeapDockWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEAPDOCKWIDGET_H
#define UI_HEAPDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HeapDockWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QComboBox *allocatorSelector;

    void setupUi(QDockWidget *HeapDockWidget)
    {
        if (HeapDockWidget->objectName().isEmpty())
            HeapDockWidget->setObjectName(QString::fromUtf8("HeapDockWidget"));
        HeapDockWidget->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        allocatorSelector = new QComboBox(dockWidgetContents);
        allocatorSelector->setObjectName(QString::fromUtf8("allocatorSelector"));

        verticalLayout->addWidget(allocatorSelector);

        HeapDockWidget->setWidget(dockWidgetContents);

        retranslateUi(HeapDockWidget);

        QMetaObject::connectSlotsByName(HeapDockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *HeapDockWidget)
    {
        HeapDockWidget->setWindowTitle(QCoreApplication::translate("HeapDockWidget", "Heap", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HeapDockWidget: public Ui_HeapDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEAPDOCKWIDGET_H
