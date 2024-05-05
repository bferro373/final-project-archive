/********************************************************************************
** Form generated from reading UI file 'HexdumpWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEXDUMPWIDGET_H
#define UI_HEXDUMPWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "HexWidget.h"

QT_BEGIN_NAMESPACE

class Ui_HexdumpWidget
{
public:
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    HexWidget *hexTextView;
    QTabWidget *hexSideTab_2;
    QWidget *tabDIsasm_2;
    QVBoxLayout *verticalLayout_23;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_17;
    QComboBox *parseTypeComboBox;
    QLabel *label_6;
    QComboBox *parseEndianComboBox;
    QFrame *hexSideFrame_2;
    QHBoxLayout *horizontalLayout_21;
    QLabel *hexArchLabel_2;
    QComboBox *parseArchComboBox;
    QLabel *hexBitsLabel_2;
    QComboBox *parseBitsComboBox;
    QPlainTextEdit *hexDisasTextEdit;
    QWidget *tabHistogram_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelSHA256;
    QLineEdit *bytesMD5;
    QLabel *labelSHA1;
    QToolButton *copySHA256;
    QToolButton *copySHA1;
    QLineEdit *bytesCRC32;
    QToolButton *copyCRC32;
    QLineEdit *bytesEntropy;
    QLabel *labelEntropy;
    QLineEdit *bytesSHA1;
    QLabel *labelMD5;
    QLabel *labelCRC32;
    QToolButton *copyMD5;
    QLineEdit *bytesSHA256;
    QSpacerItem *verticalSpacer;
    QToolButton *openSideViewB;

    void setupUi(QDockWidget *HexdumpWidget)
    {
        if (HexdumpWidget->objectName().isEmpty())
            HexdumpWidget->setObjectName(QString::fromUtf8("HexdumpWidget"));
        HexdumpWidget->resize(959, 807);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HexdumpWidget->sizePolicy().hasHeightForWidth());
        HexdumpWidget->setSizePolicy(sizePolicy);
        HexdumpWidget->setWindowTitle(QString::fromUtf8("Hexdump"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        splitter = new QSplitter(dockWidgetContents);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        hexTextView = new HexWidget(splitter);
        hexTextView->setObjectName(QString::fromUtf8("hexTextView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(hexTextView->sizePolicy().hasHeightForWidth());
        hexTextView->setSizePolicy(sizePolicy1);
        hexTextView->setFrameShape(QFrame::NoFrame);
        hexTextView->setWidgetResizable(true);
        splitter->addWidget(hexTextView);
        hexSideTab_2 = new QTabWidget(splitter);
        hexSideTab_2->setObjectName(QString::fromUtf8("hexSideTab_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(hexSideTab_2->sizePolicy().hasHeightForWidth());
        hexSideTab_2->setSizePolicy(sizePolicy2);
        hexSideTab_2->setTabPosition(QTabWidget::North);
        hexSideTab_2->setUsesScrollButtons(true);
        hexSideTab_2->setDocumentMode(false);
        tabDIsasm_2 = new QWidget();
        tabDIsasm_2->setObjectName(QString::fromUtf8("tabDIsasm_2"));
        verticalLayout_23 = new QVBoxLayout(tabDIsasm_2);
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(5);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(-1, -1, 0, -1);
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(-1, 0, -1, -1);
        parseTypeComboBox = new QComboBox(tabDIsasm_2);
        parseTypeComboBox->setObjectName(QString::fromUtf8("parseTypeComboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(parseTypeComboBox->sizePolicy().hasHeightForWidth());
        parseTypeComboBox->setSizePolicy(sizePolicy3);

        horizontalLayout_17->addWidget(parseTypeComboBox);

        label_6 = new QLabel(tabDIsasm_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy4);

        horizontalLayout_17->addWidget(label_6);

        parseEndianComboBox = new QComboBox(tabDIsasm_2);
        parseEndianComboBox->addItem(QString());
        parseEndianComboBox->addItem(QString());
        parseEndianComboBox->setObjectName(QString::fromUtf8("parseEndianComboBox"));
        parseEndianComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_17->addWidget(parseEndianComboBox);


        verticalLayout_16->addLayout(horizontalLayout_17);

        hexSideFrame_2 = new QFrame(tabDIsasm_2);
        hexSideFrame_2->setObjectName(QString::fromUtf8("hexSideFrame_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(hexSideFrame_2->sizePolicy().hasHeightForWidth());
        hexSideFrame_2->setSizePolicy(sizePolicy5);
        hexSideFrame_2->setMinimumSize(QSize(0, 0));
        hexSideFrame_2->setFrameShape(QFrame::NoFrame);
        hexSideFrame_2->setFrameShadow(QFrame::Plain);
        hexSideFrame_2->setLineWidth(0);
        horizontalLayout_21 = new QHBoxLayout(hexSideFrame_2);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_21->setContentsMargins(5, 0, 5, 5);
        hexArchLabel_2 = new QLabel(hexSideFrame_2);
        hexArchLabel_2->setObjectName(QString::fromUtf8("hexArchLabel_2"));
        sizePolicy4.setHeightForWidth(hexArchLabel_2->sizePolicy().hasHeightForWidth());
        hexArchLabel_2->setSizePolicy(sizePolicy4);

        horizontalLayout_21->addWidget(hexArchLabel_2);

        parseArchComboBox = new QComboBox(hexSideFrame_2);
        parseArchComboBox->setObjectName(QString::fromUtf8("parseArchComboBox"));
        sizePolicy3.setHeightForWidth(parseArchComboBox->sizePolicy().hasHeightForWidth());
        parseArchComboBox->setSizePolicy(sizePolicy3);
        parseArchComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        parseArchComboBox->setFrame(false);

        horizontalLayout_21->addWidget(parseArchComboBox);

        hexBitsLabel_2 = new QLabel(hexSideFrame_2);
        hexBitsLabel_2->setObjectName(QString::fromUtf8("hexBitsLabel_2"));
        sizePolicy4.setHeightForWidth(hexBitsLabel_2->sizePolicy().hasHeightForWidth());
        hexBitsLabel_2->setSizePolicy(sizePolicy4);

        horizontalLayout_21->addWidget(hexBitsLabel_2);

        parseBitsComboBox = new QComboBox(hexSideFrame_2);
        parseBitsComboBox->addItem(QString());
        parseBitsComboBox->addItem(QString());
        parseBitsComboBox->addItem(QString());
        parseBitsComboBox->setObjectName(QString::fromUtf8("parseBitsComboBox"));
        parseBitsComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_21->addWidget(parseBitsComboBox);


        verticalLayout_16->addWidget(hexSideFrame_2);

        hexDisasTextEdit = new QPlainTextEdit(tabDIsasm_2);
        hexDisasTextEdit->setObjectName(QString::fromUtf8("hexDisasTextEdit"));
        sizePolicy2.setHeightForWidth(hexDisasTextEdit->sizePolicy().hasHeightForWidth());
        hexDisasTextEdit->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("Anonymous Pro"));
        font.setPointSize(13);
        hexDisasTextEdit->setFont(font);
        hexDisasTextEdit->setFrameShape(QFrame::NoFrame);
        hexDisasTextEdit->setLineWidth(0);
        hexDisasTextEdit->setReadOnly(true);

        verticalLayout_16->addWidget(hexDisasTextEdit);


        verticalLayout_23->addLayout(verticalLayout_16);

        hexSideTab_2->addTab(tabDIsasm_2, QString());
        tabHistogram_2 = new QWidget();
        tabHistogram_2->setObjectName(QString::fromUtf8("tabHistogram_2"));
        sizePolicy.setHeightForWidth(tabHistogram_2->sizePolicy().hasHeightForWidth());
        tabHistogram_2->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(tabHistogram_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(8);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(-1, -1, 0, -1);
        labelSHA256 = new QLabel(tabHistogram_2);
        labelSHA256->setObjectName(QString::fromUtf8("labelSHA256"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(labelSHA256->sizePolicy().hasHeightForWidth());
        labelSHA256->setSizePolicy(sizePolicy6);
        labelSHA256->setMidLineWidth(4);

        gridLayout->addWidget(labelSHA256, 3, 0, 1, 1);

        bytesMD5 = new QLineEdit(tabHistogram_2);
        bytesMD5->setObjectName(QString::fromUtf8("bytesMD5"));
        sizePolicy5.setHeightForWidth(bytesMD5->sizePolicy().hasHeightForWidth());
        bytesMD5->setSizePolicy(sizePolicy5);
        bytesMD5->setFrame(true);
        bytesMD5->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        bytesMD5->setReadOnly(true);

        gridLayout->addWidget(bytesMD5, 1, 1, 1, 1);

        labelSHA1 = new QLabel(tabHistogram_2);
        labelSHA1->setObjectName(QString::fromUtf8("labelSHA1"));
        sizePolicy6.setHeightForWidth(labelSHA1->sizePolicy().hasHeightForWidth());
        labelSHA1->setSizePolicy(sizePolicy6);

        gridLayout->addWidget(labelSHA1, 2, 0, 1, 1);

        copySHA256 = new QToolButton(tabHistogram_2);
        copySHA256->setObjectName(QString::fromUtf8("copySHA256"));
        copySHA256->setLayoutDirection(Qt::RightToLeft);
        copySHA256->setText(QString::fromUtf8(""));

        gridLayout->addWidget(copySHA256, 3, 2, 1, 1, Qt::AlignRight);

        copySHA1 = new QToolButton(tabHistogram_2);
        copySHA1->setObjectName(QString::fromUtf8("copySHA1"));
#if QT_CONFIG(tooltip)
        copySHA1->setToolTip(QString::fromUtf8("Copy SHA1"));
#endif // QT_CONFIG(tooltip)
        copySHA1->setLayoutDirection(Qt::RightToLeft);
        copySHA1->setText(QString::fromUtf8(""));

        gridLayout->addWidget(copySHA1, 2, 2, 1, 1);

        bytesCRC32 = new QLineEdit(tabHistogram_2);
        bytesCRC32->setObjectName(QString::fromUtf8("bytesCRC32"));
        bytesCRC32->setFrame(true);
        bytesCRC32->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        bytesCRC32->setReadOnly(true);

        gridLayout->addWidget(bytesCRC32, 4, 1, 1, 1);

        copyCRC32 = new QToolButton(tabHistogram_2);
        copyCRC32->setObjectName(QString::fromUtf8("copyCRC32"));
        copyCRC32->setLayoutDirection(Qt::RightToLeft);
        copyCRC32->setText(QString::fromUtf8(""));

        gridLayout->addWidget(copyCRC32, 4, 2, 1, 1, Qt::AlignRight);

        bytesEntropy = new QLineEdit(tabHistogram_2);
        bytesEntropy->setObjectName(QString::fromUtf8("bytesEntropy"));
        sizePolicy5.setHeightForWidth(bytesEntropy->sizePolicy().hasHeightForWidth());
        bytesEntropy->setSizePolicy(sizePolicy5);
        bytesEntropy->setFrame(true);
        bytesEntropy->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        bytesEntropy->setReadOnly(true);

        gridLayout->addWidget(bytesEntropy, 5, 1, 1, 2);

        labelEntropy = new QLabel(tabHistogram_2);
        labelEntropy->setObjectName(QString::fromUtf8("labelEntropy"));
        sizePolicy6.setHeightForWidth(labelEntropy->sizePolicy().hasHeightForWidth());
        labelEntropy->setSizePolicy(sizePolicy6);

        gridLayout->addWidget(labelEntropy, 5, 0, 1, 1, Qt::AlignLeft);

        bytesSHA1 = new QLineEdit(tabHistogram_2);
        bytesSHA1->setObjectName(QString::fromUtf8("bytesSHA1"));
        sizePolicy5.setHeightForWidth(bytesSHA1->sizePolicy().hasHeightForWidth());
        bytesSHA1->setSizePolicy(sizePolicy5);
        bytesSHA1->setFrame(true);
        bytesSHA1->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        bytesSHA1->setReadOnly(true);

        gridLayout->addWidget(bytesSHA1, 2, 1, 1, 1);

        labelMD5 = new QLabel(tabHistogram_2);
        labelMD5->setObjectName(QString::fromUtf8("labelMD5"));
        sizePolicy6.setHeightForWidth(labelMD5->sizePolicy().hasHeightForWidth());
        labelMD5->setSizePolicy(sizePolicy6);

        gridLayout->addWidget(labelMD5, 1, 0, 1, 1);

        labelCRC32 = new QLabel(tabHistogram_2);
        labelCRC32->setObjectName(QString::fromUtf8("labelCRC32"));
        sizePolicy6.setHeightForWidth(labelCRC32->sizePolicy().hasHeightForWidth());
        labelCRC32->setSizePolicy(sizePolicy6);

        gridLayout->addWidget(labelCRC32, 4, 0, 1, 1);

        copyMD5 = new QToolButton(tabHistogram_2);
        copyMD5->setObjectName(QString::fromUtf8("copyMD5"));
#if QT_CONFIG(tooltip)
        copyMD5->setToolTip(QString::fromUtf8("Copy MD5"));
#endif // QT_CONFIG(tooltip)
        copyMD5->setLayoutDirection(Qt::RightToLeft);
        copyMD5->setText(QString::fromUtf8(""));

        gridLayout->addWidget(copyMD5, 1, 2, 1, 1);

        bytesSHA256 = new QLineEdit(tabHistogram_2);
        bytesSHA256->setObjectName(QString::fromUtf8("bytesSHA256"));
        bytesSHA256->setFrame(true);
        bytesSHA256->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        bytesSHA256->setReadOnly(true);

        gridLayout->addWidget(bytesSHA256, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        hexSideTab_2->addTab(tabHistogram_2, QString());
        hexSideTab_2->setTabText(hexSideTab_2->indexOf(tabHistogram_2), QString::fromUtf8("Information"));
        splitter->addWidget(hexSideTab_2);

        horizontalLayout->addWidget(splitter);

        openSideViewB = new QToolButton(dockWidgetContents);
        openSideViewB->setObjectName(QString::fromUtf8("openSideViewB"));
        sizePolicy4.setHeightForWidth(openSideViewB->sizePolicy().hasHeightForWidth());
        openSideViewB->setSizePolicy(sizePolicy4);
        openSideViewB->setMaximumSize(QSize(24, 16777215));
        openSideViewB->setStyleSheet(QString::fromUtf8(""));
        openSideViewB->setText(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icons/previous.svg"), QSize(), QIcon::Normal, QIcon::Off);
        openSideViewB->setIcon(icon);
        openSideViewB->setIconSize(QSize(16, 12));
        openSideViewB->setAutoRaise(true);
        openSideViewB->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(openSideViewB);

        HexdumpWidget->setWidget(dockWidgetContents);

        retranslateUi(HexdumpWidget);

        hexSideTab_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(HexdumpWidget);
    } // setupUi

    void retranslateUi(QDockWidget *HexdumpWidget)
    {
        label_6->setText(QCoreApplication::translate("HexdumpWidget", "Endian", nullptr));
        parseEndianComboBox->setItemText(0, QCoreApplication::translate("HexdumpWidget", "Little", nullptr));
        parseEndianComboBox->setItemText(1, QCoreApplication::translate("HexdumpWidget", "Big", nullptr));

        hexArchLabel_2->setText(QCoreApplication::translate("HexdumpWidget", "Arch", nullptr));
        hexBitsLabel_2->setText(QCoreApplication::translate("HexdumpWidget", "Bits", nullptr));
        parseBitsComboBox->setItemText(0, QCoreApplication::translate("HexdumpWidget", "16", nullptr));
        parseBitsComboBox->setItemText(1, QCoreApplication::translate("HexdumpWidget", "32", nullptr));
        parseBitsComboBox->setItemText(2, QCoreApplication::translate("HexdumpWidget", "64", nullptr));

        hexDisasTextEdit->setPlainText(QString());
        hexSideTab_2->setTabText(hexSideTab_2->indexOf(tabDIsasm_2), QCoreApplication::translate("HexdumpWidget", "Parsing", nullptr));
        labelSHA256->setText(QCoreApplication::translate("HexdumpWidget", "SHA256:", nullptr));
        labelSHA1->setText(QCoreApplication::translate("HexdumpWidget", "SHA1:", nullptr));
#if QT_CONFIG(tooltip)
        copySHA256->setToolTip(QCoreApplication::translate("HexdumpWidget", "Copy SHA256", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        copyCRC32->setToolTip(QCoreApplication::translate("HexdumpWidget", "Copy CRC32", nullptr));
#endif // QT_CONFIG(tooltip)
        labelEntropy->setText(QCoreApplication::translate("HexdumpWidget", "Entropy:", nullptr));
        labelMD5->setText(QCoreApplication::translate("HexdumpWidget", "MD5:", nullptr));
        labelCRC32->setText(QCoreApplication::translate("HexdumpWidget", "CRC32:", nullptr));
        (void)HexdumpWidget;
    } // retranslateUi

};

namespace Ui {
    class HexdumpWidget: public Ui_HexdumpWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXDUMPWIDGET_H
