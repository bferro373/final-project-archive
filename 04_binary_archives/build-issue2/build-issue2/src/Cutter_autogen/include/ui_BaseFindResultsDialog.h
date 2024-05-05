/********************************************************************************
** Form generated from reading UI file 'BaseFindResultsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASEFINDRESULTSDIALOG_H
#define UI_BASEFINDRESULTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BaseFindResultsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *mainVerticalLayout;
    QTableView *tableView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BaseFindResultsDialog)
    {
        if (BaseFindResultsDialog->objectName().isEmpty())
            BaseFindResultsDialog->setObjectName(QString::fromUtf8("BaseFindResultsDialog"));
        BaseFindResultsDialog->setWindowModality(Qt::NonModal);
        BaseFindResultsDialog->resize(582, 382);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BaseFindResultsDialog->sizePolicy().hasHeightForWidth());
        BaseFindResultsDialog->setSizePolicy(sizePolicy);
        BaseFindResultsDialog->setWindowTitle(QString::fromUtf8("BaseFind Results"));
        verticalLayout_2 = new QVBoxLayout(BaseFindResultsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        mainVerticalLayout = new QVBoxLayout();
        mainVerticalLayout->setObjectName(QString::fromUtf8("mainVerticalLayout"));
        mainVerticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        tableView = new QTableView(BaseFindResultsDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        mainVerticalLayout->addWidget(tableView);

        buttonBox = new QDialogButtonBox(BaseFindResultsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        mainVerticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(mainVerticalLayout);


        retranslateUi(BaseFindResultsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), BaseFindResultsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BaseFindResultsDialog);
    } // setupUi

    void retranslateUi(QDialog *BaseFindResultsDialog)
    {
        (void)BaseFindResultsDialog;
    } // retranslateUi

};

namespace Ui {
    class BaseFindResultsDialog: public Ui_BaseFindResultsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASEFINDRESULTSDIALOG_H
