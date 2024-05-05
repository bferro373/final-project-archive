/********************************************************************************
** Form generated from reading UI file 'GlibcHeapWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLIBCHEAPWIDGET_H
#define UI_GLIBCHEAPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GlibcHeapWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QComboBox *arenaSelector;
    QPushButton *arenaButton;
    QPushButton *binsButton;

    void setupUi(QWidget *GlibcHeapWidget)
    {
        if (GlibcHeapWidget->objectName().isEmpty())
            GlibcHeapWidget->setObjectName(QString::fromUtf8("GlibcHeapWidget"));
        GlibcHeapWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(GlibcHeapWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(GlibcHeapWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        arenaSelector = new QComboBox(GlibcHeapWidget);
        arenaSelector->setObjectName(QString::fromUtf8("arenaSelector"));

        horizontalLayout->addWidget(arenaSelector);

        arenaButton = new QPushButton(GlibcHeapWidget);
        arenaButton->setObjectName(QString::fromUtf8("arenaButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(arenaButton->sizePolicy().hasHeightForWidth());
        arenaButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(arenaButton);

        binsButton = new QPushButton(GlibcHeapWidget);
        binsButton->setObjectName(QString::fromUtf8("binsButton"));
        sizePolicy.setHeightForWidth(binsButton->sizePolicy().hasHeightForWidth());
        binsButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(binsButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(GlibcHeapWidget);

        QMetaObject::connectSlotsByName(GlibcHeapWidget);
    } // setupUi

    void retranslateUi(QWidget *GlibcHeapWidget)
    {
        GlibcHeapWidget->setWindowTitle(QCoreApplication::translate("GlibcHeapWidget", "Form", nullptr));
        arenaButton->setText(QCoreApplication::translate("GlibcHeapWidget", "Arena", nullptr));
#if QT_CONFIG(tooltip)
        binsButton->setToolTip(QCoreApplication::translate("GlibcHeapWidget", "View bins info for an arena", nullptr));
#endif // QT_CONFIG(tooltip)
        binsButton->setText(QCoreApplication::translate("GlibcHeapWidget", "Bins", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GlibcHeapWidget: public Ui_GlibcHeapWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLIBCHEAPWIDGET_H
