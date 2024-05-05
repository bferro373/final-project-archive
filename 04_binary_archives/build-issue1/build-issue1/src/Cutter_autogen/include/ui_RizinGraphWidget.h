/********************************************************************************
** Form generated from reading UI file 'RizinGraphWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIZINGRAPHWIDGET_H
#define UI_RIZINGRAPHWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RizinGraphWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *graphType;
    QLineEdit *customCommand;
    QPushButton *refreshButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDockWidget *RizinGraphWidget)
    {
        if (RizinGraphWidget->objectName().isEmpty())
            RizinGraphWidget->setObjectName(QString::fromUtf8("RizinGraphWidget"));
        RizinGraphWidget->resize(439, 162);
        RizinGraphWidget->setWindowTitle(QString::fromUtf8("Rizin graphs"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        graphType = new QComboBox(dockWidgetContents);
        graphType->setObjectName(QString::fromUtf8("graphType"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphType->sizePolicy().hasHeightForWidth());
        graphType->setSizePolicy(sizePolicy);
        graphType->setEditable(false);

        horizontalLayout_2->addWidget(graphType);

        customCommand = new QLineEdit(dockWidgetContents);
        customCommand->setObjectName(QString::fromUtf8("customCommand"));
        customCommand->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(customCommand->sizePolicy().hasHeightForWidth());
        customCommand->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(customCommand);

        refreshButton = new QPushButton(dockWidgetContents);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icons/arrow_right.svg"), QSize(), QIcon::Normal, QIcon::Off);
        refreshButton->setIcon(icon);

        horizontalLayout_2->addWidget(refreshButton);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        RizinGraphWidget->setWidget(dockWidgetContents);

        retranslateUi(RizinGraphWidget);

        QMetaObject::connectSlotsByName(RizinGraphWidget);
    } // setupUi

    void retranslateUi(QDockWidget *RizinGraphWidget)
    {
        customCommand->setPlaceholderText(QCoreApplication::translate("RizinGraphWidget", "ag...", nullptr));
        refreshButton->setText(QString());
        (void)RizinGraphWidget;
    } // retranslateUi

};

namespace Ui {
    class RizinGraphWidget: public Ui_RizinGraphWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIZINGRAPHWIDGET_H
