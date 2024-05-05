/********************************************************************************
** Form generated from reading UI file 'CutterTreeView.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUTTERTREEVIEW_H
#define UI_CUTTERTREEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_CutterTreeView
{
public:

    void setupUi(QTreeView *CutterTreeView)
    {
        if (CutterTreeView->objectName().isEmpty())
            CutterTreeView->setObjectName(QString::fromUtf8("CutterTreeView"));
        if (CutterTreeView->header()->objectName().isEmpty())

        retranslateUi(CutterTreeView);

        QMetaObject::connectSlotsByName(CutterTreeView);
    } // setupUi

    void retranslateUi(QTreeView *CutterTreeView)
    {
        (void)CutterTreeView;
    } // retranslateUi

};

namespace Ui {
    class CutterTreeView: public Ui_CutterTreeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUTTERTREEVIEW_H
