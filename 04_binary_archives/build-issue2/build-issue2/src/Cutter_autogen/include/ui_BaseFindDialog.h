/********************************************************************************
** Form generated from reading UI file 'BaseFindDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASEFINDDIALOG_H
#define UI_BASEFINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BaseFindDialog
{
public:
    QAction *actionRemoveItem;
    QAction *actionRemoveAll;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *nCoresLabel;
    QComboBox *nCoresCombo;
    QLabel *pointerSizeLabel;
    QComboBox *pointerSizeCombo;
    QLabel *startAddressLabel;
    QLineEdit *startAddressEdit;
    QLabel *endAddressLabel;
    QLineEdit *endAddressEdit;
    QLabel *alignmentLabel;
    QLineEdit *alignmentEdit;
    QLabel *minStrLenLabel;
    QSpinBox *minStrLenEdit;
    QLabel *minScoreLabel;
    QSpinBox *minScoreEdit;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BaseFindDialog)
    {
        if (BaseFindDialog->objectName().isEmpty())
            BaseFindDialog->setObjectName(QString::fromUtf8("BaseFindDialog"));
        BaseFindDialog->setWindowModality(Qt::NonModal);
        BaseFindDialog->resize(373, 348);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BaseFindDialog->sizePolicy().hasHeightForWidth());
        BaseFindDialog->setSizePolicy(sizePolicy);
        BaseFindDialog->setWindowTitle(QString::fromUtf8("BaseFind"));
        actionRemoveItem = new QAction(BaseFindDialog);
        actionRemoveItem->setObjectName(QString::fromUtf8("actionRemoveItem"));
        actionRemoveAll = new QAction(BaseFindDialog);
        actionRemoveAll->setObjectName(QString::fromUtf8("actionRemoveAll"));
        verticalLayout_2 = new QVBoxLayout(BaseFindDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        nCoresLabel = new QLabel(BaseFindDialog);
        nCoresLabel->setObjectName(QString::fromUtf8("nCoresLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nCoresLabel->sizePolicy().hasHeightForWidth());
        nCoresLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(nCoresLabel, 0, 0, 1, 1);

        nCoresCombo = new QComboBox(BaseFindDialog);
        nCoresCombo->setObjectName(QString::fromUtf8("nCoresCombo"));

        gridLayout->addWidget(nCoresCombo, 0, 1, 1, 1);

        pointerSizeLabel = new QLabel(BaseFindDialog);
        pointerSizeLabel->setObjectName(QString::fromUtf8("pointerSizeLabel"));
        sizePolicy1.setHeightForWidth(pointerSizeLabel->sizePolicy().hasHeightForWidth());
        pointerSizeLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pointerSizeLabel, 1, 0, 1, 1);

        pointerSizeCombo = new QComboBox(BaseFindDialog);
        pointerSizeCombo->addItem(QString());
        pointerSizeCombo->addItem(QString());
        pointerSizeCombo->setObjectName(QString::fromUtf8("pointerSizeCombo"));

        gridLayout->addWidget(pointerSizeCombo, 1, 1, 1, 1);

        startAddressLabel = new QLabel(BaseFindDialog);
        startAddressLabel->setObjectName(QString::fromUtf8("startAddressLabel"));

        gridLayout->addWidget(startAddressLabel, 2, 0, 1, 1);

        startAddressEdit = new QLineEdit(BaseFindDialog);
        startAddressEdit->setObjectName(QString::fromUtf8("startAddressEdit"));
        startAddressEdit->setMaximumSize(QSize(382, 16777215));

        gridLayout->addWidget(startAddressEdit, 2, 1, 1, 1);

        endAddressLabel = new QLabel(BaseFindDialog);
        endAddressLabel->setObjectName(QString::fromUtf8("endAddressLabel"));

        gridLayout->addWidget(endAddressLabel, 3, 0, 1, 1);

        endAddressEdit = new QLineEdit(BaseFindDialog);
        endAddressEdit->setObjectName(QString::fromUtf8("endAddressEdit"));
        endAddressEdit->setMaximumSize(QSize(382, 16777215));

        gridLayout->addWidget(endAddressEdit, 3, 1, 1, 1);

        alignmentLabel = new QLabel(BaseFindDialog);
        alignmentLabel->setObjectName(QString::fromUtf8("alignmentLabel"));

        gridLayout->addWidget(alignmentLabel, 4, 0, 1, 1);

        alignmentEdit = new QLineEdit(BaseFindDialog);
        alignmentEdit->setObjectName(QString::fromUtf8("alignmentEdit"));
        alignmentEdit->setMaximumSize(QSize(382, 16777215));

        gridLayout->addWidget(alignmentEdit, 4, 1, 1, 1);

        minStrLenLabel = new QLabel(BaseFindDialog);
        minStrLenLabel->setObjectName(QString::fromUtf8("minStrLenLabel"));

        gridLayout->addWidget(minStrLenLabel, 5, 0, 1, 1);

        minStrLenEdit = new QSpinBox(BaseFindDialog);
        minStrLenEdit->setObjectName(QString::fromUtf8("minStrLenEdit"));
        minStrLenEdit->setMaximumSize(QSize(382, 16777215));
        minStrLenEdit->setMinimum(4);
        minStrLenEdit->setMaximum(999999999);

        gridLayout->addWidget(minStrLenEdit, 5, 1, 1, 1);

        minScoreLabel = new QLabel(BaseFindDialog);
        minScoreLabel->setObjectName(QString::fromUtf8("minScoreLabel"));

        gridLayout->addWidget(minScoreLabel, 6, 0, 1, 1);

        minScoreEdit = new QSpinBox(BaseFindDialog);
        minScoreEdit->setObjectName(QString::fromUtf8("minScoreEdit"));
        minScoreEdit->setMaximumSize(QSize(382, 16777215));
        minScoreEdit->setMinimum(1);
        minScoreEdit->setMaximum(999999999);

        gridLayout->addWidget(minScoreEdit, 6, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        buttonBox = new QDialogButtonBox(BaseFindDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(BaseFindDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BaseFindDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BaseFindDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BaseFindDialog);
    } // setupUi

    void retranslateUi(QDialog *BaseFindDialog)
    {
        actionRemoveItem->setText(QCoreApplication::translate("BaseFindDialog", "Remove item", nullptr));
        actionRemoveAll->setText(QCoreApplication::translate("BaseFindDialog", "Remove all", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveAll->setToolTip(QCoreApplication::translate("BaseFindDialog", "Remove all", nullptr));
#endif // QT_CONFIG(tooltip)
        nCoresLabel->setText(QCoreApplication::translate("BaseFindDialog", "Cores:", nullptr));
        pointerSizeLabel->setText(QCoreApplication::translate("BaseFindDialog", "Pointer Size:", nullptr));
        pointerSizeCombo->setItemText(0, QCoreApplication::translate("BaseFindDialog", "32", nullptr));
        pointerSizeCombo->setItemText(1, QCoreApplication::translate("BaseFindDialog", "64", nullptr));

        startAddressLabel->setText(QCoreApplication::translate("BaseFindDialog", "Start Address:", nullptr));
        startAddressEdit->setText(QString());
        endAddressLabel->setText(QCoreApplication::translate("BaseFindDialog", "End Address:", nullptr));
        alignmentLabel->setText(QCoreApplication::translate("BaseFindDialog", "Alignment:", nullptr));
        minStrLenLabel->setText(QCoreApplication::translate("BaseFindDialog", "Min String Length:", nullptr));
        minScoreLabel->setText(QCoreApplication::translate("BaseFindDialog", "Min Score:", nullptr));
        (void)BaseFindDialog;
    } // retranslateUi

};

namespace Ui {
    class BaseFindDialog: public Ui_BaseFindDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASEFINDDIALOG_H
