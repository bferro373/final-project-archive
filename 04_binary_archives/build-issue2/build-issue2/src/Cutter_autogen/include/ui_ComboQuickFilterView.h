/********************************************************************************
** Form generated from reading UI file 'ComboQuickFilterView.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBOQUICKFILTERVIEW_H
#define UI_COMBOQUICKFILTERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComboQuickFilterView
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QWidget *ComboQuickFilterView)
    {
        if (ComboQuickFilterView->objectName().isEmpty())
            ComboQuickFilterView->setObjectName(QString::fromUtf8("ComboQuickFilterView"));
        ComboQuickFilterView->resize(378, 20);
        horizontalLayout = new QHBoxLayout(ComboQuickFilterView);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(ComboQuickFilterView);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label = new QLabel(ComboQuickFilterView);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(ComboQuickFilterView);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        retranslateUi(ComboQuickFilterView);

        QMetaObject::connectSlotsByName(ComboQuickFilterView);
    } // setupUi

    void retranslateUi(QWidget *ComboQuickFilterView)
    {
        ComboQuickFilterView->setWindowTitle(QCoreApplication::translate("ComboQuickFilterView", "Form", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("ComboQuickFilterView", "Quick Filter", nullptr));
        label->setText(QCoreApplication::translate("ComboQuickFilterView", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComboQuickFilterView: public Ui_ComboQuickFilterView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBOQUICKFILTERVIEW_H
