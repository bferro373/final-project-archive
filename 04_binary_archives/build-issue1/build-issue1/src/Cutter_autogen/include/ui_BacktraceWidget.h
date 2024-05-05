/********************************************************************************
** Form generated from reading UI file 'BacktraceWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKTRACEWIDGET_H
#define UI_BACKTRACEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BacktraceWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;

    void setupUi(QDockWidget *BacktraceWidget)
    {
        if (BacktraceWidget->objectName().isEmpty())
            BacktraceWidget->setObjectName(QString::fromUtf8("BacktraceWidget"));
        BacktraceWidget->resize(463, 300);
        BacktraceWidget->setWindowTitle(QString::fromUtf8("Backtrace"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        BacktraceWidget->setWidget(dockWidgetContents);

        retranslateUi(BacktraceWidget);

        QMetaObject::connectSlotsByName(BacktraceWidget);
    } // setupUi

    void retranslateUi(QDockWidget *BacktraceWidget)
    {
        (void)BacktraceWidget;
    } // retranslateUi

};

namespace Ui {
    class BacktraceWidget: public Ui_BacktraceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKTRACEWIDGET_H
