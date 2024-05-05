/********************************************************************************
** Form generated from reading UI file 'BaseFindSearchDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASEFINDSEARCHDIALOG_H
#define UI_BASEFINDSEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BaseFindSearchDialog
{
public:
    QAction *actionRemoveItem;
    QAction *actionRemoveAll;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *mainVerticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BaseFindSearchDialog)
    {
        if (BaseFindSearchDialog->objectName().isEmpty())
            BaseFindSearchDialog->setObjectName(QString::fromUtf8("BaseFindSearchDialog"));
        BaseFindSearchDialog->setWindowModality(Qt::NonModal);
        BaseFindSearchDialog->resize(582, 382);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BaseFindSearchDialog->sizePolicy().hasHeightForWidth());
        BaseFindSearchDialog->setSizePolicy(sizePolicy);
        BaseFindSearchDialog->setWindowTitle(QString::fromUtf8("Searching for base address"));
        actionRemoveItem = new QAction(BaseFindSearchDialog);
        actionRemoveItem->setObjectName(QString::fromUtf8("actionRemoveItem"));
        actionRemoveAll = new QAction(BaseFindSearchDialog);
        actionRemoveAll->setObjectName(QString::fromUtf8("actionRemoveAll"));
        verticalLayout_2 = new QVBoxLayout(BaseFindSearchDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        mainVerticalLayout = new QVBoxLayout();
        mainVerticalLayout->setObjectName(QString::fromUtf8("mainVerticalLayout"));
        mainVerticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        scrollArea = new QScrollArea(BaseFindSearchDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 564, 320));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        scrollArea->setWidget(scrollAreaWidgetContents);

        mainVerticalLayout->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(BaseFindSearchDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        mainVerticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(mainVerticalLayout);


        retranslateUi(BaseFindSearchDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), BaseFindSearchDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BaseFindSearchDialog);
    } // setupUi

    void retranslateUi(QDialog *BaseFindSearchDialog)
    {
        actionRemoveItem->setText(QCoreApplication::translate("BaseFindSearchDialog", "Remove item", nullptr));
        actionRemoveAll->setText(QCoreApplication::translate("BaseFindSearchDialog", "Remove all", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveAll->setToolTip(QCoreApplication::translate("BaseFindSearchDialog", "Remove all", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)BaseFindSearchDialog;
    } // retranslateUi

};

namespace Ui {
    class BaseFindSearchDialog: public Ui_BaseFindSearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASEFINDSEARCHDIALOG_H
