/********************************************************************************
** Form generated from reading UI file 'InitializationFileEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIALIZATIONFILEEDITOR_H
#define UI_INITIALIZATIONFILEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InitializationFileEditor
{
public:
    QGridLayout *gridLayout;
    QLabel *cutterRCLoaded;
    QDialogButtonBox *saveRC;
    QPlainTextEdit *ConfigFileEdit;
    QDialogButtonBox *executeNow;

    void setupUi(QWidget *InitializationFileEditor)
    {
        if (InitializationFileEditor->objectName().isEmpty())
            InitializationFileEditor->setObjectName(QString::fromUtf8("InitializationFileEditor"));
        InitializationFileEditor->resize(667, 486);
        gridLayout = new QGridLayout(InitializationFileEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cutterRCLoaded = new QLabel(InitializationFileEditor);
        cutterRCLoaded->setObjectName(QString::fromUtf8("cutterRCLoaded"));

        gridLayout->addWidget(cutterRCLoaded, 1, 0, 1, 1);

        saveRC = new QDialogButtonBox(InitializationFileEditor);
        saveRC->setObjectName(QString::fromUtf8("saveRC"));
        saveRC->setMaximumSize(QSize(649, 16777215));
        saveRC->setStandardButtons(QDialogButtonBox::Save);

        gridLayout->addWidget(saveRC, 1, 2, 1, 1);

        ConfigFileEdit = new QPlainTextEdit(InitializationFileEditor);
        ConfigFileEdit->setObjectName(QString::fromUtf8("ConfigFileEdit"));

        gridLayout->addWidget(ConfigFileEdit, 0, 0, 1, 3);

        executeNow = new QDialogButtonBox(InitializationFileEditor);
        executeNow->setObjectName(QString::fromUtf8("executeNow"));
        executeNow->setStandardButtons(QDialogButtonBox::Retry);
        executeNow->setCenterButtons(false);

        gridLayout->addWidget(executeNow, 1, 1, 1, 1);


        retranslateUi(InitializationFileEditor);

        QMetaObject::connectSlotsByName(InitializationFileEditor);
    } // setupUi

    void retranslateUi(QWidget *InitializationFileEditor)
    {
        InitializationFileEditor->setWindowTitle(QCoreApplication::translate("InitializationFileEditor", "CutterRC Editor", nullptr));
        cutterRCLoaded->setText(QCoreApplication::translate("InitializationFileEditor", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InitializationFileEditor: public Ui_InitializationFileEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIALIZATIONFILEEDITOR_H
