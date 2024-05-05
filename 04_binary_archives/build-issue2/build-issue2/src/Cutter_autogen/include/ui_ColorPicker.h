/********************************************************************************
** Form generated from reading UI file 'ColorPicker.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORPICKER_H
#define UI_COLORPICKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/ColorPicker.h"

QT_BEGIN_NAMESPACE

class Ui_ColorPicker
{
public:
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    ColorPickerHelpers::ColorPickArea *colorPickArea;
    ColorPickerHelpers::ColorValueBar *valuePickBar;
    ColorPickerHelpers::ColorShowWidget *colorShow;
    ColorPickerHelpers::AlphaChannelBar *alphaChannelBar;
    QVBoxLayout *colorEditLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *hsvLayout;
    QHBoxLayout *valLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *valLabel;
    QSpinBox *valSpinBox;
    QHBoxLayout *satLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *satLabel;
    QSpinBox *satSpinBox;
    QHBoxLayout *hueLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *hueLabel;
    QSpinBox *hueSpinBox;
    QVBoxLayout *rgbLayout;
    QHBoxLayout *redLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *redLabel;
    QSpinBox *redSpinBox;
    QHBoxLayout *greenLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *greenLabel;
    QSpinBox *greenSpinBox;
    QHBoxLayout *blueLayout;
    QSpacerItem *horizontalSpacer_6;
    QLabel *blueLabel;
    QSpinBox *blueSpinBox;
    QHBoxLayout *hexLayout;
    QSpacerItem *horizontalSpacer_7;
    QLabel *hexLabel;
    QLineEdit *hexLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pickColorFromScreenButton;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *ColorPicker)
    {
        if (ColorPicker->objectName().isEmpty())
            ColorPicker->setObjectName(QString::fromUtf8("ColorPicker"));
        ColorPicker->resize(1027, 232);
        horizontalLayout_4 = new QHBoxLayout(ColorPicker);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        colorPickArea = new ColorPickerHelpers::ColorPickArea(ColorPicker);
        colorPickArea->setObjectName(QString::fromUtf8("colorPickArea"));
        colorPickArea->setMinimumSize(QSize(200, 200));

        horizontalLayout->addWidget(colorPickArea);

        valuePickBar = new ColorPickerHelpers::ColorValueBar(ColorPicker);
        valuePickBar->setObjectName(QString::fromUtf8("valuePickBar"));
        valuePickBar->setMinimumSize(QSize(30, 0));

        horizontalLayout->addWidget(valuePickBar);

        colorShow = new ColorPickerHelpers::ColorShowWidget(ColorPicker);
        colorShow->setObjectName(QString::fromUtf8("colorShow"));
        colorShow->setMinimumSize(QSize(30, 40));

        horizontalLayout->addWidget(colorShow);

        alphaChannelBar = new ColorPickerHelpers::AlphaChannelBar(ColorPicker);
        alphaChannelBar->setObjectName(QString::fromUtf8("alphaChannelBar"));
        alphaChannelBar->setMinimumSize(QSize(30, 0));

        horizontalLayout->addWidget(alphaChannelBar);


        horizontalLayout_3->addLayout(horizontalLayout);

        colorEditLayout = new QVBoxLayout();
        colorEditLayout->setObjectName(QString::fromUtf8("colorEditLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        hsvLayout = new QVBoxLayout();
        hsvLayout->setObjectName(QString::fromUtf8("hsvLayout"));
        valLayout = new QHBoxLayout();
        valLayout->setObjectName(QString::fromUtf8("valLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        valLayout->addItem(horizontalSpacer);

        valLabel = new QLabel(ColorPicker);
        valLabel->setObjectName(QString::fromUtf8("valLabel"));

        valLayout->addWidget(valLabel);

        valSpinBox = new QSpinBox(ColorPicker);
        valSpinBox->setObjectName(QString::fromUtf8("valSpinBox"));
        valSpinBox->setMaximum(255);

        valLayout->addWidget(valSpinBox);


        hsvLayout->addLayout(valLayout);

        satLayout = new QHBoxLayout();
        satLayout->setObjectName(QString::fromUtf8("satLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        satLayout->addItem(horizontalSpacer_2);

        satLabel = new QLabel(ColorPicker);
        satLabel->setObjectName(QString::fromUtf8("satLabel"));

        satLayout->addWidget(satLabel);

        satSpinBox = new QSpinBox(ColorPicker);
        satSpinBox->setObjectName(QString::fromUtf8("satSpinBox"));
        satSpinBox->setMaximum(255);

        satLayout->addWidget(satSpinBox);


        hsvLayout->addLayout(satLayout);

        hueLayout = new QHBoxLayout();
        hueLayout->setObjectName(QString::fromUtf8("hueLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hueLayout->addItem(horizontalSpacer_3);

        hueLabel = new QLabel(ColorPicker);
        hueLabel->setObjectName(QString::fromUtf8("hueLabel"));

        hueLayout->addWidget(hueLabel);

        hueSpinBox = new QSpinBox(ColorPicker);
        hueSpinBox->setObjectName(QString::fromUtf8("hueSpinBox"));
        hueSpinBox->setMaximum(359);

        hueLayout->addWidget(hueSpinBox);


        hsvLayout->addLayout(hueLayout);


        horizontalLayout_2->addLayout(hsvLayout);

        rgbLayout = new QVBoxLayout();
        rgbLayout->setObjectName(QString::fromUtf8("rgbLayout"));
        redLayout = new QHBoxLayout();
        redLayout->setObjectName(QString::fromUtf8("redLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        redLayout->addItem(horizontalSpacer_4);

        redLabel = new QLabel(ColorPicker);
        redLabel->setObjectName(QString::fromUtf8("redLabel"));

        redLayout->addWidget(redLabel);

        redSpinBox = new QSpinBox(ColorPicker);
        redSpinBox->setObjectName(QString::fromUtf8("redSpinBox"));
        redSpinBox->setMaximum(255);

        redLayout->addWidget(redSpinBox);


        rgbLayout->addLayout(redLayout);

        greenLayout = new QHBoxLayout();
        greenLayout->setObjectName(QString::fromUtf8("greenLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        greenLayout->addItem(horizontalSpacer_5);

        greenLabel = new QLabel(ColorPicker);
        greenLabel->setObjectName(QString::fromUtf8("greenLabel"));

        greenLayout->addWidget(greenLabel);

        greenSpinBox = new QSpinBox(ColorPicker);
        greenSpinBox->setObjectName(QString::fromUtf8("greenSpinBox"));
        greenSpinBox->setMaximum(255);

        greenLayout->addWidget(greenSpinBox);


        rgbLayout->addLayout(greenLayout);

        blueLayout = new QHBoxLayout();
        blueLayout->setObjectName(QString::fromUtf8("blueLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        blueLayout->addItem(horizontalSpacer_6);

        blueLabel = new QLabel(ColorPicker);
        blueLabel->setObjectName(QString::fromUtf8("blueLabel"));

        blueLayout->addWidget(blueLabel);

        blueSpinBox = new QSpinBox(ColorPicker);
        blueSpinBox->setObjectName(QString::fromUtf8("blueSpinBox"));
        blueSpinBox->setMaximum(255);

        blueLayout->addWidget(blueSpinBox);


        rgbLayout->addLayout(blueLayout);


        horizontalLayout_2->addLayout(rgbLayout);


        colorEditLayout->addLayout(horizontalLayout_2);

        hexLayout = new QHBoxLayout();
        hexLayout->setObjectName(QString::fromUtf8("hexLayout"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hexLayout->addItem(horizontalSpacer_7);

        hexLabel = new QLabel(ColorPicker);
        hexLabel->setObjectName(QString::fromUtf8("hexLabel"));

        hexLayout->addWidget(hexLabel);

        hexLineEdit = new QLineEdit(ColorPicker);
        hexLineEdit->setObjectName(QString::fromUtf8("hexLineEdit"));

        hexLayout->addWidget(hexLineEdit);


        colorEditLayout->addLayout(hexLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        pickColorFromScreenButton = new QPushButton(ColorPicker);
        pickColorFromScreenButton->setObjectName(QString::fromUtf8("pickColorFromScreenButton"));

        horizontalLayout_5->addWidget(pickColorFromScreenButton);


        colorEditLayout->addLayout(horizontalLayout_5);


        horizontalLayout_3->addLayout(colorEditLayout);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        retranslateUi(ColorPicker);

        QMetaObject::connectSlotsByName(ColorPicker);
    } // setupUi

    void retranslateUi(QWidget *ColorPicker)
    {
        ColorPicker->setWindowTitle(QCoreApplication::translate("ColorPicker", "Color Picker", nullptr));
        valLabel->setText(QCoreApplication::translate("ColorPicker", "Val:", nullptr));
        satLabel->setText(QCoreApplication::translate("ColorPicker", "Sat:", nullptr));
        hueLabel->setText(QCoreApplication::translate("ColorPicker", "Hue:", nullptr));
        redLabel->setText(QCoreApplication::translate("ColorPicker", "Red:", nullptr));
        greenLabel->setText(QCoreApplication::translate("ColorPicker", "Green:", nullptr));
        blueLabel->setText(QCoreApplication::translate("ColorPicker", "Blue:", nullptr));
        hexLabel->setText(QCoreApplication::translate("ColorPicker", "Hex:", nullptr));
        hexLineEdit->setInputMask(QCoreApplication::translate("ColorPicker", "\\#HHHHHH", nullptr));
        pickColorFromScreenButton->setText(QCoreApplication::translate("ColorPicker", "Pick color from screen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorPicker: public Ui_ColorPicker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORPICKER_H
