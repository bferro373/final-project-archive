/********************************************************************************
** Form generated from reading UI file 'VersionInfoDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERSIONINFODIALOG_H
#define UI_VERSIONINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VersionInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *leftLabel;
    QLabel *rightLabel;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *leftTreeWidget;
    QTreeWidget *rightTreeWidget;

    void setupUi(QDialog *VersionInfoDialog)
    {
        if (VersionInfoDialog->objectName().isEmpty())
            VersionInfoDialog->setObjectName(QString::fromUtf8("VersionInfoDialog"));
        VersionInfoDialog->setWindowModality(Qt::NonModal);
        VersionInfoDialog->setEnabled(true);
        VersionInfoDialog->resize(1127, 390);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VersionInfoDialog->sizePolicy().hasHeightForWidth());
        VersionInfoDialog->setSizePolicy(sizePolicy);
        VersionInfoDialog->setWindowTitle(QString::fromUtf8("Version Info"));
        verticalLayout = new QVBoxLayout(VersionInfoDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        leftLabel = new QLabel(VersionInfoDialog);
        leftLabel->setObjectName(QString::fromUtf8("leftLabel"));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        leftLabel->setFont(font);

        horizontalLayout_2->addWidget(leftLabel);

        rightLabel = new QLabel(VersionInfoDialog);
        rightLabel->setObjectName(QString::fromUtf8("rightLabel"));
        rightLabel->setFont(font);

        horizontalLayout_2->addWidget(rightLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftTreeWidget = new QTreeWidget(VersionInfoDialog);
        leftTreeWidget->setObjectName(QString::fromUtf8("leftTreeWidget"));
        leftTreeWidget->setFrameShape(QFrame::StyledPanel);
        leftTreeWidget->setFrameShadow(QFrame::Sunken);
        leftTreeWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        leftTreeWidget->setAutoExpandDelay(-1);
        leftTreeWidget->setIndentation(20);
        leftTreeWidget->header()->setDefaultSectionSize(200);

        horizontalLayout->addWidget(leftTreeWidget);

        rightTreeWidget = new QTreeWidget(VersionInfoDialog);
        rightTreeWidget->setObjectName(QString::fromUtf8("rightTreeWidget"));
        rightTreeWidget->setFrameShape(QFrame::StyledPanel);
        rightTreeWidget->setFrameShadow(QFrame::Sunken);
        rightTreeWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        rightTreeWidget->setAutoExpandDelay(-1);
        rightTreeWidget->setIndentation(20);
        rightTreeWidget->header()->setDefaultSectionSize(200);

        horizontalLayout->addWidget(rightTreeWidget);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VersionInfoDialog);

        QMetaObject::connectSlotsByName(VersionInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *VersionInfoDialog)
    {
#if QT_CONFIG(tooltip)
        VersionInfoDialog->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        VersionInfoDialog->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        VersionInfoDialog->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        leftLabel->setText(QCoreApplication::translate("VersionInfoDialog", "TextLabel", nullptr));
        rightLabel->setText(QCoreApplication::translate("VersionInfoDialog", "TextLabel", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = leftTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("VersionInfoDialog", "Value", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("VersionInfoDialog", "Key", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = rightTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("VersionInfoDialog", "Value", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("VersionInfoDialog", "Key", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VersionInfoDialog: public Ui_VersionInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERSIONINFODIALOG_H
