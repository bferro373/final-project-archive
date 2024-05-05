/********************************************************************************
** Form generated from reading UI file 'MapFileDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPFILEDIALOG_H
#define UI_MAPFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MapFileDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *filenameLabel;
    QLineEdit *filenameLineEdit;
    QPushButton *selectFileButton;
    QLabel *mapAddressLabel;
    QLineEdit *mapAddressLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MapFileDialog)
    {
        if (MapFileDialog->objectName().isEmpty())
            MapFileDialog->setObjectName(QString::fromUtf8("MapFileDialog"));
        MapFileDialog->resize(400, 171);
        gridLayout = new QGridLayout(MapFileDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        filenameLabel = new QLabel(MapFileDialog);
        filenameLabel->setObjectName(QString::fromUtf8("filenameLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(filenameLabel->sizePolicy().hasHeightForWidth());
        filenameLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(filenameLabel, 0, 0, 1, 1);

        filenameLineEdit = new QLineEdit(MapFileDialog);
        filenameLineEdit->setObjectName(QString::fromUtf8("filenameLineEdit"));
        filenameLineEdit->setFocusPolicy(Qt::ClickFocus);
        filenameLineEdit->setText(QString::fromUtf8(""));
        filenameLineEdit->setFrame(false);
        filenameLineEdit->setReadOnly(true);
        filenameLineEdit->setClearButtonEnabled(false);

        gridLayout->addWidget(filenameLineEdit, 0, 1, 1, 1);

        selectFileButton = new QPushButton(MapFileDialog);
        selectFileButton->setObjectName(QString::fromUtf8("selectFileButton"));

        gridLayout->addWidget(selectFileButton, 0, 2, 1, 1);

        mapAddressLabel = new QLabel(MapFileDialog);
        mapAddressLabel->setObjectName(QString::fromUtf8("mapAddressLabel"));

        gridLayout->addWidget(mapAddressLabel, 1, 0, 1, 1);

        mapAddressLineEdit = new QLineEdit(MapFileDialog);
        mapAddressLineEdit->setObjectName(QString::fromUtf8("mapAddressLineEdit"));
        mapAddressLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mapAddressLineEdit, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(MapFileDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 3);


        retranslateUi(MapFileDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), MapFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MapFileDialog);
    } // setupUi

    void retranslateUi(QDialog *MapFileDialog)
    {
        MapFileDialog->setWindowTitle(QCoreApplication::translate("MapFileDialog", "Map New File", nullptr));
        filenameLabel->setText(QCoreApplication::translate("MapFileDialog", "File:", nullptr));
        selectFileButton->setText(QCoreApplication::translate("MapFileDialog", "Select file", nullptr));
        mapAddressLabel->setText(QCoreApplication::translate("MapFileDialog", "Map address:", nullptr));
#if QT_CONFIG(tooltip)
        mapAddressLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        mapAddressLineEdit->setPlaceholderText(QCoreApplication::translate("MapFileDialog", "0x40000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MapFileDialog: public Ui_MapFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPFILEDIALOG_H
