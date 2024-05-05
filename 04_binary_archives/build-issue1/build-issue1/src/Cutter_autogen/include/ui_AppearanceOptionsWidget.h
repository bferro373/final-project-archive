/********************************************************************************
** Form generated from reading UI file 'AppearanceOptionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPEARANCEOPTIONSWIDGET_H
#define UI_APPEARANCEOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/ColorThemeComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_AppearanceOptionsWidget
{
public:
    QAction *actionSaveAsDefault;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *fontLabel;
    QHBoxLayout *fontSelectionLayout;
    QLabel *fontSelectionLabel;
    QPushButton *fontSelectionButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpinBox *fontZoomBox;
    QLabel *languageLabel;
    QComboBox *languageComboBox;
    QLabel *themeLabel;
    QComboBox *themeComboBox;
    QLabel *colorLabel;
    QHBoxLayout *horizontalLayout_3;
    ColorThemeComboBox *colorComboBox;
    QPushButton *editButton;
    QPushButton *renameButton;
    QPushButton *copyButton;
    QPushButton *deleteButton;
    QPushButton *exportButton;
    QPushButton *importButton;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *horizontalSpacer;
    QCheckBox *useDecompilerHighlighter;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AppearanceOptionsWidget)
    {
        if (AppearanceOptionsWidget->objectName().isEmpty())
            AppearanceOptionsWidget->setObjectName(QString::fromUtf8("AppearanceOptionsWidget"));
        AppearanceOptionsWidget->resize(619, 225);
        actionSaveAsDefault = new QAction(AppearanceOptionsWidget);
        actionSaveAsDefault->setObjectName(QString::fromUtf8("actionSaveAsDefault"));
        verticalLayout = new QVBoxLayout(AppearanceOptionsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignCenter);
        fontLabel = new QLabel(AppearanceOptionsWidget);
        fontLabel->setObjectName(QString::fromUtf8("fontLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, fontLabel);

        fontSelectionLayout = new QHBoxLayout();
        fontSelectionLayout->setObjectName(QString::fromUtf8("fontSelectionLayout"));
        fontSelectionLabel = new QLabel(AppearanceOptionsWidget);
        fontSelectionLabel->setObjectName(QString::fromUtf8("fontSelectionLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fontSelectionLabel->sizePolicy().hasHeightForWidth());
        fontSelectionLabel->setSizePolicy(sizePolicy);
        fontSelectionLabel->setText(QString::fromUtf8(""));

        fontSelectionLayout->addWidget(fontSelectionLabel);

        fontSelectionButton = new QPushButton(AppearanceOptionsWidget);
        fontSelectionButton->setObjectName(QString::fromUtf8("fontSelectionButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fontSelectionButton->sizePolicy().hasHeightForWidth());
        fontSelectionButton->setSizePolicy(sizePolicy1);

        fontSelectionLayout->addWidget(fontSelectionButton);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        fontSelectionLayout->addItem(horizontalSpacer_2);

        label = new QLabel(AppearanceOptionsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        fontSelectionLayout->addWidget(label);

        fontZoomBox = new QSpinBox(AppearanceOptionsWidget);
        fontZoomBox->setObjectName(QString::fromUtf8("fontZoomBox"));
        fontZoomBox->setWrapping(false);
        fontZoomBox->setFrame(true);
        fontZoomBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        fontZoomBox->setProperty("showGroupSeparator", QVariant(false));
        fontZoomBox->setMinimum(10);
        fontZoomBox->setMaximum(3000);
        fontZoomBox->setSingleStep(10);
        fontZoomBox->setValue(100);

        fontSelectionLayout->addWidget(fontZoomBox);


        formLayout->setLayout(0, QFormLayout::FieldRole, fontSelectionLayout);

        languageLabel = new QLabel(AppearanceOptionsWidget);
        languageLabel->setObjectName(QString::fromUtf8("languageLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, languageLabel);

        languageComboBox = new QComboBox(AppearanceOptionsWidget);
        languageComboBox->setObjectName(QString::fromUtf8("languageComboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(languageComboBox->sizePolicy().hasHeightForWidth());
        languageComboBox->setSizePolicy(sizePolicy2);

        formLayout->setWidget(1, QFormLayout::FieldRole, languageComboBox);

        themeLabel = new QLabel(AppearanceOptionsWidget);
        themeLabel->setObjectName(QString::fromUtf8("themeLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, themeLabel);

        themeComboBox = new QComboBox(AppearanceOptionsWidget);
        themeComboBox->addItem(QString());
        themeComboBox->addItem(QString());
        themeComboBox->setObjectName(QString::fromUtf8("themeComboBox"));
        sizePolicy2.setHeightForWidth(themeComboBox->sizePolicy().hasHeightForWidth());
        themeComboBox->setSizePolicy(sizePolicy2);

        formLayout->setWidget(2, QFormLayout::FieldRole, themeComboBox);

        colorLabel = new QLabel(AppearanceOptionsWidget);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, colorLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        colorComboBox = new ColorThemeComboBox(AppearanceOptionsWidget);
        colorComboBox->setObjectName(QString::fromUtf8("colorComboBox"));
        sizePolicy2.setHeightForWidth(colorComboBox->sizePolicy().hasHeightForWidth());
        colorComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(colorComboBox);

        editButton = new QPushButton(AppearanceOptionsWidget);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icons/pencil_thin.svg"), QSize(), QIcon::Normal, QIcon::Off);
        editButton->setIcon(icon);

        horizontalLayout_3->addWidget(editButton);

        renameButton = new QPushButton(AppearanceOptionsWidget);
        renameButton->setObjectName(QString::fromUtf8("renameButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/icons/rename.svg"), QSize(), QIcon::Normal, QIcon::Off);
        renameButton->setIcon(icon1);

        horizontalLayout_3->addWidget(renameButton);

        copyButton = new QPushButton(AppearanceOptionsWidget);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));
        sizePolicy2.setHeightForWidth(copyButton->sizePolicy().hasHeightForWidth());
        copyButton->setSizePolicy(sizePolicy2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/icons/copy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        copyButton->setIcon(icon2);

        horizontalLayout_3->addWidget(copyButton);

        deleteButton = new QPushButton(AppearanceOptionsWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/icons/trash_bin.svg"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon3);

        horizontalLayout_3->addWidget(deleteButton);

        exportButton = new QPushButton(AppearanceOptionsWidget);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/icons/upload_black.svg"), QSize(), QIcon::Normal, QIcon::Off);
        exportButton->setIcon(icon4);

        horizontalLayout_3->addWidget(exportButton);

        importButton = new QPushButton(AppearanceOptionsWidget);
        importButton->setObjectName(QString::fromUtf8("importButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/icons/download_black.svg"), QSize(), QIcon::Normal, QIcon::Off);
        importButton->setIcon(icon5);

        horizontalLayout_3->addWidget(importButton);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);


        verticalLayout->addLayout(formLayout);

        useDecompilerHighlighter = new QCheckBox(AppearanceOptionsWidget);
        useDecompilerHighlighter->setObjectName(QString::fromUtf8("useDecompilerHighlighter"));

        verticalLayout->addWidget(useDecompilerHighlighter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(AppearanceOptionsWidget);

        QMetaObject::connectSlotsByName(AppearanceOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *AppearanceOptionsWidget)
    {
        AppearanceOptionsWidget->setWindowTitle(QCoreApplication::translate("AppearanceOptionsWidget", "Appearance", nullptr));
        actionSaveAsDefault->setText(QCoreApplication::translate("AppearanceOptionsWidget", "Save as Default", nullptr));
        fontLabel->setText(QCoreApplication::translate("AppearanceOptionsWidget", "Font:", nullptr));
        fontSelectionButton->setText(QCoreApplication::translate("AppearanceOptionsWidget", "Select font", nullptr));
        label->setText(QCoreApplication::translate("AppearanceOptionsWidget", "Zoom", nullptr));
        fontZoomBox->setSuffix(QCoreApplication::translate("AppearanceOptionsWidget", "%", nullptr));
        languageLabel->setText(QCoreApplication::translate("AppearanceOptionsWidget", "Language:", nullptr));
        themeLabel->setText(QCoreApplication::translate("AppearanceOptionsWidget", "Interface Theme:", nullptr));
        themeComboBox->setItemText(0, QCoreApplication::translate("AppearanceOptionsWidget", "Default", nullptr));
        themeComboBox->setItemText(1, QCoreApplication::translate("AppearanceOptionsWidget", "Dark", nullptr));

        colorLabel->setText(QCoreApplication::translate("AppearanceOptionsWidget", "Color Theme:", nullptr));
#if QT_CONFIG(tooltip)
        editButton->setToolTip(QCoreApplication::translate("AppearanceOptionsWidget", "Edit Theme", nullptr));
#endif // QT_CONFIG(tooltip)
        editButton->setText(QString());
#if QT_CONFIG(tooltip)
        renameButton->setToolTip(QCoreApplication::translate("AppearanceOptionsWidget", "Rename", nullptr));
#endif // QT_CONFIG(tooltip)
        renameButton->setText(QString());
#if QT_CONFIG(tooltip)
        copyButton->setToolTip(QCoreApplication::translate("AppearanceOptionsWidget", "Copy", nullptr));
#endif // QT_CONFIG(tooltip)
        copyButton->setText(QString());
#if QT_CONFIG(tooltip)
        deleteButton->setToolTip(QCoreApplication::translate("AppearanceOptionsWidget", "Delete", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteButton->setText(QString());
#if QT_CONFIG(tooltip)
        exportButton->setToolTip(QCoreApplication::translate("AppearanceOptionsWidget", "Export", nullptr));
#endif // QT_CONFIG(tooltip)
        exportButton->setText(QString());
#if QT_CONFIG(tooltip)
        importButton->setToolTip(QCoreApplication::translate("AppearanceOptionsWidget", "Import", nullptr));
#endif // QT_CONFIG(tooltip)
        importButton->setText(QString());
#if QT_CONFIG(tooltip)
        useDecompilerHighlighter->setToolTip(QCoreApplication::translate("AppearanceOptionsWidget", "Use information provided by decompiler when highlighting code.", nullptr));
#endif // QT_CONFIG(tooltip)
        useDecompilerHighlighter->setText(QCoreApplication::translate("AppearanceOptionsWidget", "Decompiler based highlighting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppearanceOptionsWidget: public Ui_AppearanceOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPEARANCEOPTIONSWIDGET_H
