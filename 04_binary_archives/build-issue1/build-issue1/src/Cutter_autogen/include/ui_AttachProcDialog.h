/********************************************************************************
** Form generated from reading UI file 'AttachProcDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTACHPROCDIALOG_H
#define UI_ATTACHPROCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AttachProcDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QTreeView *procBeingAnalyzedView;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QTreeView *allProcView;
    QLineEdit *filterLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AttachProcDialog)
    {
        if (AttachProcDialog->objectName().isEmpty())
            AttachProcDialog->setObjectName(QString::fromUtf8("AttachProcDialog"));
        AttachProcDialog->resize(800, 600);
        verticalLayout_2 = new QVBoxLayout(AttachProcDialog);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 5, 2, 2);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        groupBox_2 = new QGroupBox(AttachProcDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 150));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        procBeingAnalyzedView = new QTreeView(groupBox_2);
        procBeingAnalyzedView->setObjectName(QString::fromUtf8("procBeingAnalyzedView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(procBeingAnalyzedView->sizePolicy().hasHeightForWidth());
        procBeingAnalyzedView->setSizePolicy(sizePolicy);
        procBeingAnalyzedView->setMaximumSize(QSize(16777215, 16777215));
        procBeingAnalyzedView->setStyleSheet(QString::fromUtf8("QTreeView::item\n"
"{\n"
"    padding-top: 1px;\n"
"    padding-bottom: 1px;\n"
"}"));
        procBeingAnalyzedView->setFrameShape(QFrame::NoFrame);
        procBeingAnalyzedView->setLineWidth(0);
        procBeingAnalyzedView->setIndentation(8);
        procBeingAnalyzedView->setSortingEnabled(true);

        verticalLayout_3->addWidget(procBeingAnalyzedView);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(AttachProcDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        allProcView = new QTreeView(groupBox);
        allProcView->setObjectName(QString::fromUtf8("allProcView"));
        allProcView->setMaximumSize(QSize(16777215, 16777215));
        allProcView->setStyleSheet(QString::fromUtf8("QTreeView::item\n"
"{\n"
"    padding-top: 1px;\n"
"    padding-bottom: 1px;\n"
"}"));
        allProcView->setFrameShape(QFrame::NoFrame);
        allProcView->setLineWidth(0);
        allProcView->setIndentation(8);
        allProcView->setSortingEnabled(true);

        verticalLayout_4->addWidget(allProcView);


        verticalLayout->addWidget(groupBox);


        verticalLayout_2->addLayout(verticalLayout);

        filterLineEdit = new QLineEdit(AttachProcDialog);
        filterLineEdit->setObjectName(QString::fromUtf8("filterLineEdit"));

        verticalLayout_2->addWidget(filterLineEdit);

        buttonBox = new QDialogButtonBox(AttachProcDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(AttachProcDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AttachProcDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AttachProcDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AttachProcDialog);
    } // setupUi

    void retranslateUi(QDialog *AttachProcDialog)
    {
        AttachProcDialog->setWindowTitle(QCoreApplication::translate("AttachProcDialog", "Select process to attach...", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AttachProcDialog", "Processes with same name as currently open file:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AttachProcDialog", "All processes:", nullptr));
        filterLineEdit->setPlaceholderText(QCoreApplication::translate("AttachProcDialog", "Quick Filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AttachProcDialog: public Ui_AttachProcDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTACHPROCDIALOG_H
