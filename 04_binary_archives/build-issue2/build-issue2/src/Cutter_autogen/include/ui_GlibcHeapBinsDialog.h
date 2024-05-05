/********************************************************************************
** Form generated from reading UI file 'GlibcHeapBinsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLIBCHEAPBINSDIALOG_H
#define UI_GLIBCHEAPBINSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GlibcHeapBinsDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QTableView *viewBins;
    QLabel *label;
    QPlainTextEdit *chainInfoEdit;
    QHBoxLayout *horizontalLayout3;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *GlibcHeapBinsDialog)
    {
        if (GlibcHeapBinsDialog->objectName().isEmpty())
            GlibcHeapBinsDialog->setObjectName(QString::fromUtf8("GlibcHeapBinsDialog"));
        GlibcHeapBinsDialog->resize(883, 544);
        horizontalLayout = new QHBoxLayout(GlibcHeapBinsDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        viewBins = new QTableView(GlibcHeapBinsDialog);
        viewBins->setObjectName(QString::fromUtf8("viewBins"));

        verticalLayout_2->addWidget(viewBins);

        label = new QLabel(GlibcHeapBinsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        chainInfoEdit = new QPlainTextEdit(GlibcHeapBinsDialog);
        chainInfoEdit->setObjectName(QString::fromUtf8("chainInfoEdit"));
        chainInfoEdit->setReadOnly(true);

        verticalLayout_2->addWidget(chainInfoEdit);

        horizontalLayout3 = new QHBoxLayout();
        horizontalLayout3->setObjectName(QString::fromUtf8("horizontalLayout3"));
        label_2 = new QLabel(GlibcHeapBinsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout3->addWidget(label_2);

        lineEdit = new QLineEdit(GlibcHeapBinsDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout3->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout3);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(GlibcHeapBinsDialog);

        QMetaObject::connectSlotsByName(GlibcHeapBinsDialog);
    } // setupUi

    void retranslateUi(QDialog *GlibcHeapBinsDialog)
    {
        GlibcHeapBinsDialog->setWindowTitle(QCoreApplication::translate("GlibcHeapBinsDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("GlibcHeapBinsDialog", "Chain info:", nullptr));
        label_2->setText(QCoreApplication::translate("GlibcHeapBinsDialog", "Detailed chunk info:", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("GlibcHeapBinsDialog", "Enter chunk base address and press enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GlibcHeapBinsDialog: public Ui_GlibcHeapBinsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLIBCHEAPBINSDIALOG_H
