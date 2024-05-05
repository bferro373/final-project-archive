/********************************************************************************
** Form generated from reading UI file 'DuplicateFromOffsetDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUPLICATEFROMOFFSETDIALOG_H
#define UI_DUPLICATEFROMOFFSETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DuplicateFromOffsetDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *offsetLE;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *nBytesSB;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_3;
    QLabel *bytesLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DuplicateFromOffsetDialog)
    {
        if (DuplicateFromOffsetDialog->objectName().isEmpty())
            DuplicateFromOffsetDialog->setObjectName(QString::fromUtf8("DuplicateFromOffsetDialog"));
        DuplicateFromOffsetDialog->resize(289, 323);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DuplicateFromOffsetDialog->sizePolicy().hasHeightForWidth());
        DuplicateFromOffsetDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(DuplicateFromOffsetDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(DuplicateFromOffsetDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        offsetLE = new QLineEdit(DuplicateFromOffsetDialog);
        offsetLE->setObjectName(QString::fromUtf8("offsetLE"));
        offsetLE->setInputMask(QString::fromUtf8(""));
        offsetLE->setMaxLength(16);

        horizontalLayout->addWidget(offsetLE);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(DuplicateFromOffsetDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        nBytesSB = new QSpinBox(DuplicateFromOffsetDialog);
        nBytesSB->setObjectName(QString::fromUtf8("nBytesSB"));
        nBytesSB->setMinimum(1);
        nBytesSB->setMaximum(999999999);

        horizontalLayout_2->addWidget(nBytesSB);


        verticalLayout->addLayout(horizontalLayout_2);

        scrollArea = new QScrollArea(DuplicateFromOffsetDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 269, 208));
        horizontalLayout_3 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        bytesLabel = new QLabel(scrollAreaWidgetContents);
        bytesLabel->setObjectName(QString::fromUtf8("bytesLabel"));
        bytesLabel->setScaledContents(true);
        bytesLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        bytesLabel->setWordWrap(true);
        bytesLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_3->addWidget(bytesLabel);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(DuplicateFromOffsetDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DuplicateFromOffsetDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DuplicateFromOffsetDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DuplicateFromOffsetDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DuplicateFromOffsetDialog);
    } // setupUi

    void retranslateUi(QDialog *DuplicateFromOffsetDialog)
    {
        DuplicateFromOffsetDialog->setWindowTitle(QCoreApplication::translate("DuplicateFromOffsetDialog", "Duplicate from offset", nullptr));
        label->setText(QCoreApplication::translate("DuplicateFromOffsetDialog", "Offset:", nullptr));
        label_2->setText(QCoreApplication::translate("DuplicateFromOffsetDialog", "N bytes:", nullptr));
        bytesLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DuplicateFromOffsetDialog: public Ui_DuplicateFromOffsetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUPLICATEFROMOFFSETDIALOG_H
