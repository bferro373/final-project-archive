/********************************************************************************
** Form generated from reading UI file 'SdbWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SDBWIDGET_H
#define UI_SDBWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SdbWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QToolButton *searchButton;
    QFrame *line;
    QToolButton *lockButton;
    QTreeWidget *treeWidget;

    void setupUi(QDockWidget *SdbWidget)
    {
        if (SdbWidget->objectName().isEmpty())
            SdbWidget->setObjectName(QString::fromUtf8("SdbWidget"));
        SdbWidget->resize(575, 350);
        SdbWidget->setFloating(false);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(dockWidgetContents);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFrame(false);
        lineEdit->setPlaceholderText(QString::fromUtf8(""));
        lineEdit->setClearButtonEnabled(true);

        horizontalLayout->addWidget(lineEdit);

        searchButton = new QToolButton(dockWidgetContents);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setText(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icons/arrow_right.svg"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon);

        horizontalLayout->addWidget(searchButton);

        line = new QFrame(dockWidgetContents);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        lockButton = new QToolButton(dockWidgetContents);
        lockButton->setObjectName(QString::fromUtf8("lockButton"));
        lockButton->setText(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/icons/unlock_white.svg"), QSize(), QIcon::Normal, QIcon::Off);
        lockButton->setIcon(icon1);
        lockButton->setCheckable(true);
        lockButton->setChecked(false);

        horizontalLayout->addWidget(lockButton);


        verticalLayout->addLayout(horizontalLayout);

        treeWidget = new QTreeWidget(dockWidgetContents);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setStyleSheet(QString::fromUtf8("QTreeWidget::item\n"
"{\n"
"    padding-top: 1px;\n"
"    padding-bottom: 1px;\n"
"}"));
        treeWidget->setFrameShape(QFrame::NoFrame);
        treeWidget->setFrameShadow(QFrame::Plain);
        treeWidget->setLineWidth(0);
        treeWidget->setIndentation(8);
        treeWidget->setSortingEnabled(false);

        verticalLayout->addWidget(treeWidget);

        SdbWidget->setWidget(dockWidgetContents);

        retranslateUi(SdbWidget);

        QMetaObject::connectSlotsByName(SdbWidget);
    } // setupUi

    void retranslateUi(QDockWidget *SdbWidget)
    {
        SdbWidget->setWindowTitle(QCoreApplication::translate("SdbWidget", "SDB Browser", nullptr));
        lineEdit->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("SdbWidget", "Value", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("SdbWidget", "Key", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SdbWidget: public Ui_SdbWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SDBWIDGET_H
