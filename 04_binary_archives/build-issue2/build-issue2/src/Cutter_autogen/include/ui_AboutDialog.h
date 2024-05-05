/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtSvg/QSvgWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QGridLayout *gridLayout;
    QCheckBox *updatesCheckBox;
    QPushButton *checkForUpdatesButton;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *Issue;
    QPushButton *showPluginsButton;
    QPushButton *showVersionButton;
    QLabel *label;
    QSvgWidget *logoSvgWidget;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(935, 554);
        gridLayout_2 = new QGridLayout(AboutDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout_2->addWidget(buttonBox, 4, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(15);
        updatesCheckBox = new QCheckBox(AboutDialog);
        updatesCheckBox->setObjectName(QString::fromUtf8("updatesCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(updatesCheckBox->sizePolicy().hasHeightForWidth());
        updatesCheckBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(updatesCheckBox, 4, 1, 1, 2);

        checkForUpdatesButton = new QPushButton(AboutDialog);
        checkForUpdatesButton->setObjectName(QString::fromUtf8("checkForUpdatesButton"));
        sizePolicy.setHeightForWidth(checkForUpdatesButton->sizePolicy().hasHeightForWidth());
        checkForUpdatesButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(checkForUpdatesButton, 3, 1, 1, 1);

        label_3 = new QLabel(AboutDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_3, 2, 1, 1, 4, Qt::AlignHCenter);

        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 2, 1, 2, Qt::AlignHCenter);

        Issue = new QPushButton(AboutDialog);
        Issue->setObjectName(QString::fromUtf8("Issue"));
        sizePolicy.setHeightForWidth(Issue->sizePolicy().hasHeightForWidth());
        Issue->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Issue, 3, 4, 1, 1);

        showPluginsButton = new QPushButton(AboutDialog);
        showPluginsButton->setObjectName(QString::fromUtf8("showPluginsButton"));
        sizePolicy.setHeightForWidth(showPluginsButton->sizePolicy().hasHeightForWidth());
        showPluginsButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(showPluginsButton, 3, 2, 1, 1);

        showVersionButton = new QPushButton(AboutDialog);
        showVersionButton->setObjectName(QString::fromUtf8("showVersionButton"));
        sizePolicy.setHeightForWidth(showVersionButton->sizePolicy().hasHeightForWidth());
        showVersionButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(showVersionButton, 3, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);

        label = new QLabel(AboutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setStyleSheet(QString::fromUtf8("s"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setMargin(5);
        label->setOpenExternalLinks(true);
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        logoSvgWidget = new QSvgWidget(AboutDialog);
        logoSvgWidget->setObjectName(QString::fromUtf8("logoSvgWidget"));
        logoSvgWidget->setEnabled(true);
        sizePolicy1.setHeightForWidth(logoSvgWidget->sizePolicy().hasHeightForWidth());
        logoSvgWidget->setSizePolicy(sizePolicy1);
        logoSvgWidget->setMinimumSize(QSize(96, 96));
        logoSvgWidget->setMaximumSize(QSize(96, 96));
        logoSvgWidget->setFocusPolicy(Qt::NoFocus);
        logoSvgWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        logoSvgWidget->setToolTipDuration(0);

        gridLayout_2->addWidget(logoSvgWidget, 0, 0, 1, 1, Qt::AlignHCenter);


        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About Cutter", nullptr));
        updatesCheckBox->setText(QCoreApplication::translate("AboutDialog", "Check for updates on start", nullptr));
        checkForUpdatesButton->setText(QCoreApplication::translate("AboutDialog", "Check for updates", nullptr));
        label_3->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:600;\">Cutter is a free and open-source reverse engineering platform powered by Rizin</span></p><p align=\"center\"><span style=\" font-size:11pt;\">Read more on </span><a href=\"https://cutter.re\"><span style=\" text-decoration: underline; color:#2980b9;\">cutter.re</span></a></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:600;\">Cutter</span></p></body></html>", nullptr));
        Issue->setText(QCoreApplication::translate("AboutDialog", "Report an issue", nullptr));
        showPluginsButton->setText(QCoreApplication::translate("AboutDialog", "Show Rizin plugin information", nullptr));
        showVersionButton->setText(QCoreApplication::translate("AboutDialog", "Show version information", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
