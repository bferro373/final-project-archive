/********************************************************************************
** Form generated from reading UI file 'WelcomeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEDIALOG_H
#define UI_WELCOMEDIALOG_H

#include <QtCore/QVariant>
#include <QtSvg/QSvgWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WelcomeDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSvgWidget *logoSvgWidget;
    QLabel *cutterLabel;
    QLabel *versionLabel;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *checkUpdateButton;
    QComboBox *themeComboBox;
    QComboBox *languageComboBox;
    QCheckBox *updatesCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QGridLayout *textGridLayout;
    QLabel *communityTitleLabel;
    QLabel *communityRichTextLAbel;
    QLabel *contributingTextLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *contributingLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *continueButton;

    void setupUi(QDialog *WelcomeDialog)
    {
        if (WelcomeDialog->objectName().isEmpty())
            WelcomeDialog->setObjectName(QString::fromUtf8("WelcomeDialog"));
        WelcomeDialog->resize(806, 620);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WelcomeDialog->sizePolicy().hasHeightForWidth());
        WelcomeDialog->setSizePolicy(sizePolicy);
        WelcomeDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(WelcomeDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        logoSvgWidget = new QSvgWidget(WelcomeDialog);
        logoSvgWidget->setObjectName(QString::fromUtf8("logoSvgWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(logoSvgWidget->sizePolicy().hasHeightForWidth());
        logoSvgWidget->setSizePolicy(sizePolicy1);
        logoSvgWidget->setMinimumSize(QSize(88, 88));
        logoSvgWidget->setMaximumSize(QSize(88, 88));

        verticalLayout->addWidget(logoSvgWidget, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        cutterLabel = new QLabel(WelcomeDialog);
        cutterLabel->setObjectName(QString::fromUtf8("cutterLabel"));
        cutterLabel->setEnabled(true);
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        font.setPointSize(20);
        cutterLabel->setFont(font);
        cutterLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(cutterLabel);

        versionLabel = new QLabel(WelcomeDialog);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        sizePolicy1.setHeightForWidth(versionLabel->sizePolicy().hasHeightForWidth());
        versionLabel->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(11);
        versionLabel->setFont(font1);

        verticalLayout->addWidget(versionLabel, 0, Qt::AlignHCenter);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(9);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        checkUpdateButton = new QPushButton(WelcomeDialog);
        checkUpdateButton->setObjectName(QString::fromUtf8("checkUpdateButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkUpdateButton->sizePolicy().hasHeightForWidth());
        checkUpdateButton->setSizePolicy(sizePolicy2);
        checkUpdateButton->setMinimumSize(QSize(0, 0));
        checkUpdateButton->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_3->addWidget(checkUpdateButton);

        themeComboBox = new QComboBox(WelcomeDialog);
        themeComboBox->addItem(QString());
        themeComboBox->addItem(QString());
        themeComboBox->addItem(QString());
        themeComboBox->addItem(QString());
        themeComboBox->setObjectName(QString::fromUtf8("themeComboBox"));
        sizePolicy2.setHeightForWidth(themeComboBox->sizePolicy().hasHeightForWidth());
        themeComboBox->setSizePolicy(sizePolicy2);
        themeComboBox->setMinimumSize(QSize(0, 0));
        themeComboBox->setMaximumSize(QSize(16777215, 16777215));
        themeComboBox->setIconSize(QSize(16, 16));

        verticalLayout_3->addWidget(themeComboBox);

        languageComboBox = new QComboBox(WelcomeDialog);
        languageComboBox->setObjectName(QString::fromUtf8("languageComboBox"));

        verticalLayout_3->addWidget(languageComboBox);

        updatesCheckBox = new QCheckBox(WelcomeDialog);
        updatesCheckBox->setObjectName(QString::fromUtf8("updatesCheckBox"));

        verticalLayout_3->addWidget(updatesCheckBox);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        textGridLayout = new QGridLayout();
        textGridLayout->setObjectName(QString::fromUtf8("textGridLayout"));
        textGridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        textGridLayout->setContentsMargins(-1, -1, 0, 10);
        communityTitleLabel = new QLabel(WelcomeDialog);
        communityTitleLabel->setObjectName(QString::fromUtf8("communityTitleLabel"));
        communityTitleLabel->setMinimumSize(QSize(250, 0));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        communityTitleLabel->setFont(font2);
        communityTitleLabel->setLineWidth(2);

        textGridLayout->addWidget(communityTitleLabel, 0, 1, 1, 1, Qt::AlignBottom);

        communityRichTextLAbel = new QLabel(WelcomeDialog);
        communityRichTextLAbel->setObjectName(QString::fromUtf8("communityRichTextLAbel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(communityRichTextLAbel->sizePolicy().hasHeightForWidth());
        communityRichTextLAbel->setSizePolicy(sizePolicy3);
        communityRichTextLAbel->setMinimumSize(QSize(250, 0));
        communityRichTextLAbel->setLineWidth(1);
        communityRichTextLAbel->setTextFormat(Qt::RichText);
        communityRichTextLAbel->setWordWrap(true);
        communityRichTextLAbel->setOpenExternalLinks(true);
        communityRichTextLAbel->setTextInteractionFlags(Qt::TextBrowserInteraction);

        textGridLayout->addWidget(communityRichTextLAbel, 1, 1, 1, 1, Qt::AlignTop);

        contributingTextLabel = new QLabel(WelcomeDialog);
        contributingTextLabel->setObjectName(QString::fromUtf8("contributingTextLabel"));
        sizePolicy3.setHeightForWidth(contributingTextLabel->sizePolicy().hasHeightForWidth());
        contributingTextLabel->setSizePolicy(sizePolicy3);
        contributingTextLabel->setMinimumSize(QSize(250, 0));
        contributingTextLabel->setWordWrap(true);
        contributingTextLabel->setIndent(20);
        contributingTextLabel->setOpenExternalLinks(true);
        contributingTextLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);

        textGridLayout->addWidget(contributingTextLabel, 1, 2, 1, 1, Qt::AlignTop);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        textGridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        contributingLabel = new QLabel(WelcomeDialog);
        contributingLabel->setObjectName(QString::fromUtf8("contributingLabel"));
        contributingLabel->setFont(font2);
        contributingLabel->setIndent(20);

        textGridLayout->addWidget(contributingLabel, 0, 2, 1, 1, Qt::AlignBottom);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        textGridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        continueButton = new QPushButton(WelcomeDialog);
        continueButton->setObjectName(QString::fromUtf8("continueButton"));
        continueButton->setFlat(true);

        textGridLayout->addWidget(continueButton, 2, 3, 1, 1);

        textGridLayout->setColumnStretch(0, 1);
        textGridLayout->setColumnStretch(1, 6);
        textGridLayout->setColumnStretch(2, 6);
        textGridLayout->setColumnStretch(3, 1);

        verticalLayout_2->addLayout(textGridLayout);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 3);

        retranslateUi(WelcomeDialog);

        themeComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WelcomeDialog);
    } // setupUi

    void retranslateUi(QDialog *WelcomeDialog)
    {
        WelcomeDialog->setWindowTitle(QCoreApplication::translate("WelcomeDialog", "Welcome to Cutter", nullptr));
        cutterLabel->setText(QCoreApplication::translate("WelcomeDialog", "Cutter", nullptr));
        versionLabel->setText(QCoreApplication::translate("WelcomeDialog", "Version ", nullptr));
        checkUpdateButton->setText(QCoreApplication::translate("WelcomeDialog", "About", nullptr));
        themeComboBox->setItemText(0, QCoreApplication::translate("WelcomeDialog", "Native Theme", nullptr));
        themeComboBox->setItemText(1, QCoreApplication::translate("WelcomeDialog", "Dark Theme", nullptr));
        themeComboBox->setItemText(2, QCoreApplication::translate("WelcomeDialog", "Midnight Theme", nullptr));
        themeComboBox->setItemText(3, QCoreApplication::translate("WelcomeDialog", "Light Theme", nullptr));

        updatesCheckBox->setText(QCoreApplication::translate("WelcomeDialog", "Check for updates on start", nullptr));
        communityTitleLabel->setText(QCoreApplication::translate("WelcomeDialog", "Community", nullptr));
        communityRichTextLAbel->setText(QCoreApplication::translate("WelcomeDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Noto Sans'; font-size:10pt;\">Join thousands of reverse engineers in our community:<br /></span><span style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:600;\">Twitter:</span><span style=\" font-family:'Noto Sans'; font-size:10pt;\">	</span><a href=\"https://twitter.com/cutter_re\"><span style=\" font-family:'Noto Sans'; font-size:10pt; text-decoration: underline; color:#2980b9;\">@cutter_re</span></a><span style=\" font-family:'Noto Sans'; font-size:10pt;\"><br /></span><span style=\" font-family:'Noto Sans'; font-size:1"
                        "0pt; font-weight:600;\">Telegram:	</span><a href=\"https://t.me/cutter_re\"><span style=\" font-family:'Noto Sans'; font-size:10pt; text-decoration: underline; color:#2980b9;\">@cutter_re <br /></span></a><span style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:600;\">IRC:	</span><span style=\" font-family:'Noto Sans'; font-size:10pt;\">#cutter on </span><a href=\"https://web.libera.chat/\"><span style=\" font-family:'Noto Sans'; font-size:10pt; text-decoration: underline; color:#2980b9;\">https://web.libera.chat/</span></a></p></body></html>", nullptr));
        contributingTextLabel->setText(QCoreApplication::translate("WelcomeDialog", "<html><head/><body style=\" font-family:'Cantarell'; font-size:9pt; font-weight:400; font-style:normal;\"><p><span style=\" font-size:10pt;\">Want to help us make Cutter even better?<br/>Visit our </span><a href=\"https://github.com/rizinorg/cutter\"><span style=\" font-size:10pt; text-decoration: underline; color:#2980b9;\">Github page</span></a><span style=\" font-size:10pt;\"> and report bugs or contribute code.</span></p></body></html>", nullptr));
        contributingLabel->setText(QCoreApplication::translate("WelcomeDialog", "Contributing", nullptr));
        continueButton->setText(QCoreApplication::translate("WelcomeDialog", "Continue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeDialog: public Ui_WelcomeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEDIALOG_H
