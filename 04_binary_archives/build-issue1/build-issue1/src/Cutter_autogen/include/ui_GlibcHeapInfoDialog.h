/********************************************************************************
** Form generated from reading UI file 'GlibcHeapInfoDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLIBCHEAPINFODIALOG_H
#define UI_GLIBCHEAPINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GlibcHeapInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *baseEdit;
    QLabel *label_4;
    QLineEdit *sizeEdit;
    QLabel *label_2;
    QLineEdit *fdEdit;
    QLabel *label_5;
    QLineEdit *bkEdit;
    QLineEdit *fdnsEdit;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *bknsEdit;
    QLineEdit *prevSizeEdit;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbNMA;
    QRadioButton *rbIM;
    QRadioButton *rbPI;
    QPushButton *saveButton;

    void setupUi(QDialog *GlibcHeapInfoDialog)
    {
        if (GlibcHeapInfoDialog->objectName().isEmpty())
            GlibcHeapInfoDialog->setObjectName(QString::fromUtf8("GlibcHeapInfoDialog"));
        GlibcHeapInfoDialog->resize(453, 263);
        verticalLayout = new QVBoxLayout(GlibcHeapInfoDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(GlibcHeapInfoDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        baseEdit = new QLineEdit(GlibcHeapInfoDialog);
        baseEdit->setObjectName(QString::fromUtf8("baseEdit"));
        baseEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, baseEdit);

        label_4 = new QLabel(GlibcHeapInfoDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        sizeEdit = new QLineEdit(GlibcHeapInfoDialog);
        sizeEdit->setObjectName(QString::fromUtf8("sizeEdit"));
        sizeEdit->setReadOnly(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, sizeEdit);

        label_2 = new QLabel(GlibcHeapInfoDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        fdEdit = new QLineEdit(GlibcHeapInfoDialog);
        fdEdit->setObjectName(QString::fromUtf8("fdEdit"));
        fdEdit->setReadOnly(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, fdEdit);

        label_5 = new QLabel(GlibcHeapInfoDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        bkEdit = new QLineEdit(GlibcHeapInfoDialog);
        bkEdit->setObjectName(QString::fromUtf8("bkEdit"));
        bkEdit->setReadOnly(false);

        formLayout->setWidget(4, QFormLayout::FieldRole, bkEdit);

        fdnsEdit = new QLineEdit(GlibcHeapInfoDialog);
        fdnsEdit->setObjectName(QString::fromUtf8("fdnsEdit"));
        fdnsEdit->setReadOnly(false);

        formLayout->setWidget(5, QFormLayout::FieldRole, fdnsEdit);

        label_3 = new QLabel(GlibcHeapInfoDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_3);

        label_6 = new QLabel(GlibcHeapInfoDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        bknsEdit = new QLineEdit(GlibcHeapInfoDialog);
        bknsEdit->setObjectName(QString::fromUtf8("bknsEdit"));
        bknsEdit->setReadOnly(false);

        formLayout->setWidget(6, QFormLayout::FieldRole, bknsEdit);

        prevSizeEdit = new QLineEdit(GlibcHeapInfoDialog);
        prevSizeEdit->setObjectName(QString::fromUtf8("prevSizeEdit"));
        prevSizeEdit->setReadOnly(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, prevSizeEdit);

        label_7 = new QLabel(GlibcHeapInfoDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rbNMA = new QRadioButton(GlibcHeapInfoDialog);
        rbNMA->setObjectName(QString::fromUtf8("rbNMA"));
        rbNMA->setCheckable(true);
        rbNMA->setAutoExclusive(false);

        horizontalLayout_2->addWidget(rbNMA);

        rbIM = new QRadioButton(GlibcHeapInfoDialog);
        rbIM->setObjectName(QString::fromUtf8("rbIM"));
        rbIM->setCheckable(true);
        rbIM->setAutoExclusive(false);

        horizontalLayout_2->addWidget(rbIM);

        rbPI = new QRadioButton(GlibcHeapInfoDialog);
        rbPI->setObjectName(QString::fromUtf8("rbPI"));
        rbPI->setCheckable(true);
        rbPI->setAutoExclusive(false);

        horizontalLayout_2->addWidget(rbPI);


        verticalLayout->addLayout(horizontalLayout_2);

        saveButton = new QPushButton(GlibcHeapInfoDialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        verticalLayout->addWidget(saveButton);


        retranslateUi(GlibcHeapInfoDialog);

        QMetaObject::connectSlotsByName(GlibcHeapInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *GlibcHeapInfoDialog)
    {
        GlibcHeapInfoDialog->setWindowTitle(QCoreApplication::translate("GlibcHeapInfoDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("GlibcHeapInfoDialog", "Base", nullptr));
#if QT_CONFIG(tooltip)
        baseEdit->setToolTip(QCoreApplication::translate("GlibcHeapInfoDialog", "Base address of the chunk", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("GlibcHeapInfoDialog", "Size", nullptr));
#if QT_CONFIG(tooltip)
        sizeEdit->setToolTip(QCoreApplication::translate("GlibcHeapInfoDialog", "Size of the heap chunk including metadata", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("GlibcHeapInfoDialog", "Fd", nullptr));
#if QT_CONFIG(tooltip)
        fdEdit->setToolTip(QCoreApplication::translate("GlibcHeapInfoDialog", "Link to next free chunk in bin's linked list", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("GlibcHeapInfoDialog", "Bk", nullptr));
#if QT_CONFIG(tooltip)
        bkEdit->setToolTip(QCoreApplication::translate("GlibcHeapInfoDialog", "Link to previous free chunk in bin's linked list", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        fdnsEdit->setToolTip(QCoreApplication::translate("GlibcHeapInfoDialog", "Link to next larger free chunk (only for large chunks)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("GlibcHeapInfoDialog", "<html><head/><body><p>Fd-nextsize</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("GlibcHeapInfoDialog", "Bk-nextsize", nullptr));
#if QT_CONFIG(tooltip)
        bknsEdit->setToolTip(QCoreApplication::translate("GlibcHeapInfoDialog", "Link to next smaller free chunk (for large chunks)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        prevSizeEdit->setToolTip(QCoreApplication::translate("GlibcHeapInfoDialog", "Size of previous chunk (if free)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("GlibcHeapInfoDialog", "PrevSize", nullptr));
#if QT_CONFIG(tooltip)
        rbNMA->setToolTip(QCoreApplication::translate("GlibcHeapInfoDialog", "If the chunk was obtained from a non-main arena", nullptr));
#endif // QT_CONFIG(tooltip)
        rbNMA->setText(QCoreApplication::translate("GlibcHeapInfoDialog", "NON_MAIN_ARENA", nullptr));
#if QT_CONFIG(tooltip)
        rbIM->setToolTip(QCoreApplication::translate("GlibcHeapInfoDialog", "The chunk was obtained with mmap()", nullptr));
#endif // QT_CONFIG(tooltip)
        rbIM->setText(QCoreApplication::translate("GlibcHeapInfoDialog", "IS_MMAPED", nullptr));
#if QT_CONFIG(tooltip)
        rbPI->setToolTip(QCoreApplication::translate("GlibcHeapInfoDialog", "Previous adjacent chunk is in use", nullptr));
#endif // QT_CONFIG(tooltip)
        rbPI->setText(QCoreApplication::translate("GlibcHeapInfoDialog", "PREV_INUSE", nullptr));
        saveButton->setText(QCoreApplication::translate("GlibcHeapInfoDialog", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GlibcHeapInfoDialog: public Ui_GlibcHeapInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLIBCHEAPINFODIALOG_H
