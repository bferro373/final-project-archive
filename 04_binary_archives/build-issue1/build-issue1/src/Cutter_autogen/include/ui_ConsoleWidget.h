/********************************************************************************
** Form generated from reading UI file 'ConsoleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLEWIDGET_H
#define UI_CONSOLEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "common/DirectionalComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_ConsoleWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *outputTextEdit;
    QGridLayout *gridLayout;
    DirectionalComboBox *inputCombo;
    QLineEdit *rzInputLineEdit;
    QLineEdit *debugeeInputLineEdit;
    QToolButton *execButton;

    void setupUi(QDockWidget *ConsoleWidget)
    {
        if (ConsoleWidget->objectName().isEmpty())
            ConsoleWidget->setObjectName(QString::fromUtf8("ConsoleWidget"));
        ConsoleWidget->resize(400, 300);
        ConsoleWidget->setWindowTitle(QString::fromUtf8("Console"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        outputTextEdit = new QPlainTextEdit(dockWidgetContents);
        outputTextEdit->setObjectName(QString::fromUtf8("outputTextEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(outputTextEdit->sizePolicy().hasHeightForWidth());
        outputTextEdit->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        outputTextEdit->setFont(font);
        outputTextEdit->setFrameShape(QFrame::NoFrame);
        outputTextEdit->setLineWidth(0);
        outputTextEdit->setUndoRedoEnabled(false);
        outputTextEdit->setReadOnly(true);
        outputTextEdit->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(outputTextEdit);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(4, 2, 2, 2);
        inputCombo = new DirectionalComboBox(dockWidgetContents);
        inputCombo->addItem(QString());
        inputCombo->addItem(QString());
        inputCombo->setObjectName(QString::fromUtf8("inputCombo"));
        inputCombo->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        inputCombo->setVisible(false);

        gridLayout->addWidget(inputCombo, 0, 0, 1, 1);

        rzInputLineEdit = new QLineEdit(dockWidgetContents);
        rzInputLineEdit->setObjectName(QString::fromUtf8("rzInputLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rzInputLineEdit->sizePolicy().hasHeightForWidth());
        rzInputLineEdit->setSizePolicy(sizePolicy1);
        rzInputLineEdit->setFrame(false);
        rzInputLineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(rzInputLineEdit, 0, 1, 1, 1);

        debugeeInputLineEdit = new QLineEdit(dockWidgetContents);
        debugeeInputLineEdit->setObjectName(QString::fromUtf8("debugeeInputLineEdit"));
        debugeeInputLineEdit->setVisible(false);
        sizePolicy1.setHeightForWidth(debugeeInputLineEdit->sizePolicy().hasHeightForWidth());
        debugeeInputLineEdit->setSizePolicy(sizePolicy1);
        debugeeInputLineEdit->setFrame(false);
        debugeeInputLineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(debugeeInputLineEdit, 0, 1, 1, 1);

        execButton = new QToolButton(dockWidgetContents);
        execButton->setObjectName(QString::fromUtf8("execButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(execButton->sizePolicy().hasHeightForWidth());
        execButton->setSizePolicy(sizePolicy2);
        execButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icons/arrow_right.svg"), QSize(), QIcon::Normal, QIcon::Off);
        execButton->setIcon(icon);
        execButton->setIconSize(QSize(24, 16));

        gridLayout->addWidget(execButton, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        ConsoleWidget->setWidget(dockWidgetContents);

        retranslateUi(ConsoleWidget);

        QMetaObject::connectSlotsByName(ConsoleWidget);
    } // setupUi

    void retranslateUi(QDockWidget *ConsoleWidget)
    {
        outputTextEdit->setPlainText(QString());
        inputCombo->setItemText(0, QCoreApplication::translate("ConsoleWidget", "Rizin Console", nullptr));
        inputCombo->setItemText(1, QCoreApplication::translate("ConsoleWidget", "Debugee Input", nullptr));

        rzInputLineEdit->setPlaceholderText(QCoreApplication::translate("ConsoleWidget", " Type \"?\" for help", nullptr));
        debugeeInputLineEdit->setPlaceholderText(QCoreApplication::translate("ConsoleWidget", " Enter input for the debugee", nullptr));
#if QT_CONFIG(tooltip)
        execButton->setToolTip(QCoreApplication::translate("ConsoleWidget", "Execute command", nullptr));
#endif // QT_CONFIG(tooltip)
        execButton->setText(QCoreApplication::translate("ConsoleWidget", "...", nullptr));
        (void)ConsoleWidget;
    } // retranslateUi

};

namespace Ui {
    class ConsoleWidget: public Ui_ConsoleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLEWIDGET_H
