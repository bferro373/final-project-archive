/********************************************************************************
** Form generated from reading UI file 'ColorThemeEditDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORTHEMEEDITDIALOG_H
#define UI_COLORTHEMEEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "widgets/ColorPicker.h"
#include "widgets/ColorThemeComboBox.h"
#include "widgets/ColorThemeListView.h"

QT_BEGIN_NAMESPACE

class Ui_ColorThemeEditDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    ColorThemeComboBox *colorComboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *filterLineEdit;
    ColorThemeListView *colorThemeListView;
    QVBoxLayout *colorPickerAndPreviewLayout;
    ColorPicker *colorPicker;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColorThemeEditDialog)
    {
        if (ColorThemeEditDialog->objectName().isEmpty())
            ColorThemeEditDialog->setObjectName(QString::fromUtf8("ColorThemeEditDialog"));
        ColorThemeEditDialog->resize(1437, 617);
        horizontalLayout_3 = new QHBoxLayout(ColorThemeEditDialog);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(ColorThemeEditDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        colorComboBox = new ColorThemeComboBox(ColorThemeEditDialog);
        colorComboBox->setObjectName(QString::fromUtf8("colorComboBox"));

        horizontalLayout_2->addWidget(colorComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        filterLineEdit = new QLineEdit(ColorThemeEditDialog);
        filterLineEdit->setObjectName(QString::fromUtf8("filterLineEdit"));

        verticalLayout_5->addWidget(filterLineEdit);

        colorThemeListView = new ColorThemeListView(ColorThemeEditDialog);
        colorThemeListView->setObjectName(QString::fromUtf8("colorThemeListView"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(colorThemeListView->sizePolicy().hasHeightForWidth());
        colorThemeListView->setSizePolicy(sizePolicy);
        colorThemeListView->setMinimumSize(QSize(400, 400));

        verticalLayout_5->addWidget(colorThemeListView);


        horizontalLayout->addLayout(verticalLayout_5);

        colorPickerAndPreviewLayout = new QVBoxLayout();
        colorPickerAndPreviewLayout->setObjectName(QString::fromUtf8("colorPickerAndPreviewLayout"));
        colorPicker = new ColorPicker(ColorThemeEditDialog);
        colorPicker->setObjectName(QString::fromUtf8("colorPicker"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(colorPicker->sizePolicy().hasHeightForWidth());
        colorPicker->setSizePolicy(sizePolicy1);
        colorPicker->setMinimumSize(QSize(0, 0));

        colorPickerAndPreviewLayout->addWidget(colorPicker);


        horizontalLayout->addLayout(colorPickerAndPreviewLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(ColorThemeEditDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        horizontalLayout_3->addLayout(verticalLayout_3);


        retranslateUi(ColorThemeEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ColorThemeEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ColorThemeEditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ColorThemeEditDialog);
    } // setupUi

    void retranslateUi(QDialog *ColorThemeEditDialog)
    {
        ColorThemeEditDialog->setWindowTitle(QCoreApplication::translate("ColorThemeEditDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ColorThemeEditDialog", "Color Theme:", nullptr));
        filterLineEdit->setPlaceholderText(QCoreApplication::translate("ColorThemeEditDialog", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorThemeEditDialog: public Ui_ColorThemeEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORTHEMEEDITDIALOG_H
