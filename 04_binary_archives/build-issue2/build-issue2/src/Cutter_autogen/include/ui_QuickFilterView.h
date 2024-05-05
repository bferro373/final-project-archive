/********************************************************************************
** Form generated from reading UI file 'QuickFilterView.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUICKFILTERVIEW_H
#define UI_QUICKFILTERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuickFilterView
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *filterLineEdit;
    QToolButton *closeFilterButton;

    void setupUi(QWidget *QuickFilterView)
    {
        if (QuickFilterView->objectName().isEmpty())
            QuickFilterView->setObjectName(QString::fromUtf8("QuickFilterView"));
        QuickFilterView->resize(327, 25);
        horizontalLayout = new QHBoxLayout(QuickFilterView);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        filterLineEdit = new QLineEdit(QuickFilterView);
        filterLineEdit->setObjectName(QString::fromUtf8("filterLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(filterLineEdit->sizePolicy().hasHeightForWidth());
        filterLineEdit->setSizePolicy(sizePolicy);
        filterLineEdit->setClearButtonEnabled(true);

        horizontalLayout->addWidget(filterLineEdit);

        closeFilterButton = new QToolButton(QuickFilterView);
        closeFilterButton->setObjectName(QString::fromUtf8("closeFilterButton"));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        closeFilterButton->setFont(font);
        closeFilterButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(closeFilterButton);


        retranslateUi(QuickFilterView);

        QMetaObject::connectSlotsByName(QuickFilterView);
    } // setupUi

    void retranslateUi(QWidget *QuickFilterView)
    {
        QuickFilterView->setWindowTitle(QCoreApplication::translate("QuickFilterView", "Form", nullptr));
        filterLineEdit->setPlaceholderText(QCoreApplication::translate("QuickFilterView", "Quick Filter", nullptr));
        closeFilterButton->setText(QCoreApplication::translate("QuickFilterView", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuickFilterView: public Ui_QuickFilterView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUICKFILTERVIEW_H
