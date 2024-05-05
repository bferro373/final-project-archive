/********************************************************************************
** Form generated from reading UI file 'CommentsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTSDIALOG_H
#define UI_COMMENTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CommentsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CommentsDialog)
    {
        if (CommentsDialog->objectName().isEmpty())
            CommentsDialog->setObjectName(QString::fromUtf8("CommentsDialog"));
        CommentsDialog->resize(400, 118);
        verticalLayout_2 = new QVBoxLayout(CommentsDialog);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 5, 2, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        textEdit = new QPlainTextEdit(CommentsDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(CommentsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(CommentsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CommentsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CommentsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CommentsDialog);
    } // setupUi

    void retranslateUi(QDialog *CommentsDialog)
    {
        CommentsDialog->setWindowTitle(QCoreApplication::translate("CommentsDialog", "Comment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommentsDialog: public Ui_CommentsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTSDIALOG_H
