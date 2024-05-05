/********************************************************************************
** Form generated from reading UI file 'StackWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STACKWIDGET_H
#define UI_STACKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StackWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;

    void setupUi(QDockWidget *StackWidget)
    {
        if (StackWidget->objectName().isEmpty())
            StackWidget->setObjectName(QString::fromUtf8("StackWidget"));
        StackWidget->resize(463, 300);
        StackWidget->setWindowTitle(QString::fromUtf8("Stack"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        StackWidget->setWidget(dockWidgetContents);

        retranslateUi(StackWidget);

        QMetaObject::connectSlotsByName(StackWidget);
    } // setupUi

    void retranslateUi(QDockWidget *StackWidget)
    {
        (void)StackWidget;
    } // retranslateUi

};

namespace Ui {
    class StackWidget: public Ui_StackWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STACKWIDGET_H
