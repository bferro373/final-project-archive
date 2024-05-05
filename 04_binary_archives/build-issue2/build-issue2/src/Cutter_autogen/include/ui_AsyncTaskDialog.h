/********************************************************************************
** Form generated from reading UI file 'AsyncTaskDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASYNCTASKDIALOG_H
#define UI_ASYNCTASKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AsyncTaskDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *timeLabel;
    QProgressBar *progressBar;
    QPlainTextEdit *logTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AsyncTaskDialog)
    {
        if (AsyncTaskDialog->objectName().isEmpty())
            AsyncTaskDialog->setObjectName(QString::fromUtf8("AsyncTaskDialog"));
        AsyncTaskDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(AsyncTaskDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        timeLabel = new QLabel(AsyncTaskDialog);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        verticalLayout->addWidget(timeLabel);

        progressBar = new QProgressBar(AsyncTaskDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximum(0);
        progressBar->setTextVisible(false);
        progressBar->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(progressBar);

        logTextEdit = new QPlainTextEdit(AsyncTaskDialog);
        logTextEdit->setObjectName(QString::fromUtf8("logTextEdit"));
        logTextEdit->setReadOnly(true);

        verticalLayout->addWidget(logTextEdit);

        buttonBox = new QDialogButtonBox(AsyncTaskDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AsyncTaskDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AsyncTaskDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AsyncTaskDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AsyncTaskDialog);
    } // setupUi

    void retranslateUi(QDialog *AsyncTaskDialog)
    {
        AsyncTaskDialog->setWindowTitle(QCoreApplication::translate("AsyncTaskDialog", "Cutter", nullptr));
        timeLabel->setText(QCoreApplication::translate("AsyncTaskDialog", "Time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AsyncTaskDialog: public Ui_AsyncTaskDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASYNCTASKDIALOG_H
