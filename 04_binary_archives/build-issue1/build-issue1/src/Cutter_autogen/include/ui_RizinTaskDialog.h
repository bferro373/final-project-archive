/********************************************************************************
** Form generated from reading UI file 'RizinTaskDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIZINTASKDIALOG_H
#define UI_RIZINTASKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RizinTaskDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *descLabel;
    QLabel *timeLabel;
    QProgressBar *progressBar;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RizinTaskDialog)
    {
        if (RizinTaskDialog->objectName().isEmpty())
            RizinTaskDialog->setObjectName(QString::fromUtf8("RizinTaskDialog"));
        RizinTaskDialog->resize(400, 87);
        verticalLayout = new QVBoxLayout(RizinTaskDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        descLabel = new QLabel(RizinTaskDialog);
        descLabel->setObjectName(QString::fromUtf8("descLabel"));

        verticalLayout->addWidget(descLabel);

        timeLabel = new QLabel(RizinTaskDialog);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        verticalLayout->addWidget(timeLabel);

        progressBar = new QProgressBar(RizinTaskDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximum(0);
        progressBar->setTextVisible(false);
        progressBar->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(progressBar);

        buttonBox = new QDialogButtonBox(RizinTaskDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RizinTaskDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RizinTaskDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RizinTaskDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RizinTaskDialog);
    } // setupUi

    void retranslateUi(QDialog *RizinTaskDialog)
    {
        RizinTaskDialog->setWindowTitle(QCoreApplication::translate("RizinTaskDialog", "Rizin Task", nullptr));
        descLabel->setText(QCoreApplication::translate("RizinTaskDialog", "Rizin task in progress..", nullptr));
        timeLabel->setText(QCoreApplication::translate("RizinTaskDialog", "Time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RizinTaskDialog: public Ui_RizinTaskDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIZINTASKDIALOG_H
