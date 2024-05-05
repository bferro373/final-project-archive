/********************************************************************************
** Form generated from reading UI file 'RegistersWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERSWIDGET_H
#define UI_REGISTERSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistersWidget
{
public:
    QScrollArea *scrollArea;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;

    void setupUi(QDockWidget *RegistersWidget)
    {
        if (RegistersWidget->objectName().isEmpty())
            RegistersWidget->setObjectName(QString::fromUtf8("RegistersWidget"));
        RegistersWidget->resize(463, 300);
        RegistersWidget->setWindowTitle(QString::fromUtf8("Registers"));
        scrollArea = new QScrollArea();
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, -1);
        scrollArea->setWidget(dockWidgetContents);
        RegistersWidget->setWidget(scrollArea);

        retranslateUi(RegistersWidget);

        QMetaObject::connectSlotsByName(RegistersWidget);
    } // setupUi

    void retranslateUi(QDockWidget *RegistersWidget)
    {
        (void)RegistersWidget;
    } // retranslateUi

};

namespace Ui {
    class RegistersWidget: public Ui_RegistersWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERSWIDGET_H
