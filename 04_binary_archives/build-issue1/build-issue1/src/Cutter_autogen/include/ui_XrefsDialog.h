/********************************************************************************
** Form generated from reading UI file 'XrefsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XREFSDIALOG_H
#define UI_XREFSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/AddressableItemList.h"

QT_BEGIN_NAMESPACE

class Ui_XrefsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *xrefLayout;
    QLabel *label_xTo;
    AddressableItemList<> *toTreeWidget;
    QLabel *label_xFrom;
    AddressableItemList<> *fromTreeWidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *previewLayout;
    QLabel *label;
    QPlainTextEdit *previewTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *XrefsDialog)
    {
        if (XrefsDialog->objectName().isEmpty())
            XrefsDialog->setObjectName(QString::fromUtf8("XrefsDialog"));
        XrefsDialog->resize(1131, 567);
        XrefsDialog->setWindowTitle(QString::fromUtf8("XRefs for "));
        verticalLayout_2 = new QVBoxLayout(XrefsDialog);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        splitter = new QSplitter(XrefsDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(5);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        xrefLayout = new QVBoxLayout(verticalLayoutWidget);
        xrefLayout->setSpacing(5);
        xrefLayout->setObjectName(QString::fromUtf8("xrefLayout"));
        xrefLayout->setContentsMargins(0, 0, 0, 0);
        label_xTo = new QLabel(verticalLayoutWidget);
        label_xTo->setObjectName(QString::fromUtf8("label_xTo"));
        label_xTo->setText(QString::fromUtf8("X-Refs to: "));

        xrefLayout->addWidget(label_xTo);

        toTreeWidget = new AddressableItemList<>(verticalLayoutWidget);
        toTreeWidget->setObjectName(QString::fromUtf8("toTreeWidget"));
        toTreeWidget->setFrameShape(QFrame::Box);
        toTreeWidget->setFrameShadow(QFrame::Plain);
        toTreeWidget->setIndentation(5);
        toTreeWidget->setSortingEnabled(true);

        xrefLayout->addWidget(toTreeWidget);

        label_xFrom = new QLabel(verticalLayoutWidget);
        label_xFrom->setObjectName(QString::fromUtf8("label_xFrom"));
        label_xFrom->setText(QString::fromUtf8("X-Refs from: "));

        xrefLayout->addWidget(label_xFrom);

        fromTreeWidget = new AddressableItemList<>(verticalLayoutWidget);
        fromTreeWidget->setObjectName(QString::fromUtf8("fromTreeWidget"));
        fromTreeWidget->setFrameShape(QFrame::Box);
        fromTreeWidget->setFrameShadow(QFrame::Plain);
        fromTreeWidget->setIndentation(5);
        fromTreeWidget->setSortingEnabled(true);

        xrefLayout->addWidget(fromTreeWidget);

        splitter->addWidget(verticalLayoutWidget);
        verticalLayoutWidget_2 = new QWidget(splitter);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        previewLayout = new QVBoxLayout(verticalLayoutWidget_2);
        previewLayout->setObjectName(QString::fromUtf8("previewLayout"));
        previewLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setText(QString::fromUtf8("Code preview"));

        previewLayout->addWidget(label);

        previewTextEdit = new QPlainTextEdit(verticalLayoutWidget_2);
        previewTextEdit->setObjectName(QString::fromUtf8("previewTextEdit"));
        previewTextEdit->setFrameShape(QFrame::NoFrame);
        previewTextEdit->setFrameShadow(QFrame::Plain);
        previewTextEdit->setLineWidth(0);
        previewTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);
        previewTextEdit->setReadOnly(true);
        previewTextEdit->setPlainText(QString::fromUtf8(""));
        previewTextEdit->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        previewLayout->addWidget(previewTextEdit);

        splitter->addWidget(verticalLayoutWidget_2);

        verticalLayout_2->addWidget(splitter);

        buttonBox = new QDialogButtonBox(XrefsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(XrefsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), XrefsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), XrefsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(XrefsDialog);
    } // setupUi

    void retranslateUi(QDialog *XrefsDialog)
    {
        (void)XrefsDialog;
    } // retranslateUi

};

namespace Ui {
    class XrefsDialog: public Ui_XrefsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XREFSDIALOG_H
