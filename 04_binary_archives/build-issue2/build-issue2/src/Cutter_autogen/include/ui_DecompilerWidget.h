/********************************************************************************
** Form generated from reading UI file 'DecompilerWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECOMPILERWIDGET_H
#define UI_DECOMPILERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DecompilerWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *progressLayout;
    QLabel *progressLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *decompilerLabel;
    QComboBox *decompilerComboBox;

    void setupUi(QDockWidget *DecompilerWidget)
    {
        if (DecompilerWidget->objectName().isEmpty())
            DecompilerWidget->setObjectName(QString::fromUtf8("DecompilerWidget"));
        DecompilerWidget->resize(555, 393);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QPlainTextEdit(dockWidgetContents);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setLineWrapMode(QPlainTextEdit::NoWrap);
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        progressLayout = new QHBoxLayout();
        progressLayout->setObjectName(QString::fromUtf8("progressLayout"));
        progressLayout->setContentsMargins(8, -1, -1, -1);
        progressLabel = new QLabel(dockWidgetContents);
        progressLabel->setObjectName(QString::fromUtf8("progressLabel"));

        progressLayout->addWidget(progressLabel);


        horizontalLayout->addLayout(progressLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        decompilerLabel = new QLabel(dockWidgetContents);
        decompilerLabel->setObjectName(QString::fromUtf8("decompilerLabel"));

        horizontalLayout->addWidget(decompilerLabel);

        decompilerComboBox = new QComboBox(dockWidgetContents);
        decompilerComboBox->setObjectName(QString::fromUtf8("decompilerComboBox"));

        horizontalLayout->addWidget(decompilerComboBox);


        verticalLayout->addLayout(horizontalLayout);

        DecompilerWidget->setWidget(dockWidgetContents);

        retranslateUi(DecompilerWidget);

        QMetaObject::connectSlotsByName(DecompilerWidget);
    } // setupUi

    void retranslateUi(QDockWidget *DecompilerWidget)
    {
        DecompilerWidget->setWindowTitle(QCoreApplication::translate("DecompilerWidget", "Decompiler", nullptr));
        progressLabel->setText(QCoreApplication::translate("DecompilerWidget", "Decompiling...", nullptr));
        decompilerLabel->setText(QCoreApplication::translate("DecompilerWidget", "Decompiler:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DecompilerWidget: public Ui_DecompilerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECOMPILERWIDGET_H
