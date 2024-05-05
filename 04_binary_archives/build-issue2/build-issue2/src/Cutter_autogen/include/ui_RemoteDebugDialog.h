/********************************************************************************
** Form generated from reading UI file 'RemoteDebugDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTEDEBUGDIALOG_H
#define UI_REMOTEDEBUGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RemoteDebugDialog
{
public:
    QAction *actionRemoveItem;
    QAction *actionRemoveAll;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *debugText;
    QLineEdit *ipEdit;
    QComboBox *debuggerCombo;
    QLabel *portText;
    QLabel *ipText;
    QLineEdit *portEdit;
    QVBoxLayout *verticalLayout;
    QFrame *line;
    QListWidget *recentsIpListWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RemoteDebugDialog)
    {
        if (RemoteDebugDialog->objectName().isEmpty())
            RemoteDebugDialog->setObjectName(QString::fromUtf8("RemoteDebugDialog"));
        RemoteDebugDialog->setWindowModality(Qt::NonModal);
        RemoteDebugDialog->resize(373, 204);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RemoteDebugDialog->sizePolicy().hasHeightForWidth());
        RemoteDebugDialog->setSizePolicy(sizePolicy);
        RemoteDebugDialog->setWindowTitle(QString::fromUtf8("Remote debugging configuration"));
        actionRemoveItem = new QAction(RemoteDebugDialog);
        actionRemoveItem->setObjectName(QString::fromUtf8("actionRemoveItem"));
        actionRemoveAll = new QAction(RemoteDebugDialog);
        actionRemoveAll->setObjectName(QString::fromUtf8("actionRemoveAll"));
        verticalLayout_2 = new QVBoxLayout(RemoteDebugDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        debugText = new QLabel(RemoteDebugDialog);
        debugText->setObjectName(QString::fromUtf8("debugText"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(debugText->sizePolicy().hasHeightForWidth());
        debugText->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(debugText, 0, 0, 1, 1);

        ipEdit = new QLineEdit(RemoteDebugDialog);
        ipEdit->setObjectName(QString::fromUtf8("ipEdit"));
        ipEdit->setMaximumSize(QSize(382, 16777215));
        ipEdit->setInputMask(QString::fromUtf8(""));
        ipEdit->setText(QString::fromUtf8(""));
        ipEdit->setFrame(false);
        ipEdit->setPlaceholderText(QString::fromUtf8("127.0.0.1 or /tmp/win.sock"));

        gridLayout->addWidget(ipEdit, 1, 1, 1, 1);

        debuggerCombo = new QComboBox(RemoteDebugDialog);
        debuggerCombo->setObjectName(QString::fromUtf8("debuggerCombo"));

        gridLayout->addWidget(debuggerCombo, 0, 1, 1, 1);

        portText = new QLabel(RemoteDebugDialog);
        portText->setObjectName(QString::fromUtf8("portText"));

        gridLayout->addWidget(portText, 2, 0, 1, 1);

        ipText = new QLabel(RemoteDebugDialog);
        ipText->setObjectName(QString::fromUtf8("ipText"));

        gridLayout->addWidget(ipText, 1, 0, 1, 1);

        portEdit = new QLineEdit(RemoteDebugDialog);
        portEdit->setObjectName(QString::fromUtf8("portEdit"));
        portEdit->setMaximumSize(QSize(382, 16777215));
        portEdit->setInputMask(QString::fromUtf8(""));
        portEdit->setText(QString::fromUtf8(""));
        portEdit->setFrame(false);
        portEdit->setPlaceholderText(QString::fromUtf8("Enter Port"));

        gridLayout->addWidget(portEdit, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        line = new QFrame(RemoteDebugDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        recentsIpListWidget = new QListWidget(RemoteDebugDialog);
        recentsIpListWidget->setObjectName(QString::fromUtf8("recentsIpListWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(recentsIpListWidget->sizePolicy().hasHeightForWidth());
        recentsIpListWidget->setSizePolicy(sizePolicy2);
        recentsIpListWidget->setMinimumSize(QSize(0, 60));
        recentsIpListWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
        recentsIpListWidget->setSelectionRectVisible(true);

        verticalLayout->addWidget(recentsIpListWidget);

        buttonBox = new QDialogButtonBox(RemoteDebugDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);

        QWidget::setTabOrder(debuggerCombo, ipEdit);
        QWidget::setTabOrder(ipEdit, portEdit);
        QWidget::setTabOrder(portEdit, recentsIpListWidget);

        retranslateUi(RemoteDebugDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RemoteDebugDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RemoteDebugDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RemoteDebugDialog);
    } // setupUi

    void retranslateUi(QDialog *RemoteDebugDialog)
    {
        actionRemoveItem->setText(QCoreApplication::translate("RemoteDebugDialog", "Remove item", nullptr));
        actionRemoveAll->setText(QCoreApplication::translate("RemoteDebugDialog", "Remove all", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveAll->setToolTip(QCoreApplication::translate("RemoteDebugDialog", "Remove all", nullptr));
#endif // QT_CONFIG(tooltip)
        debugText->setText(QCoreApplication::translate("RemoteDebugDialog", "Debugger:", nullptr));
        portText->setText(QCoreApplication::translate("RemoteDebugDialog", "Port:", nullptr));
        ipText->setText(QCoreApplication::translate("RemoteDebugDialog", "IP or Path:", nullptr));
        (void)RemoteDebugDialog;
    } // retranslateUi

};

namespace Ui {
    class RemoteDebugDialog: public Ui_RemoteDebugDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTEDEBUGDIALOG_H
