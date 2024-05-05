/********************************************************************************
** Form generated from reading UI file 'GraphOptionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHOPTIONSWIDGET_H
#define UI_GRAPHOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphOptionsWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *GraphBlockOptions;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *blockEntryCheckBox;
    QCheckBox *graphOffsetCheckBox;
    QCheckBox *graphPreviewCheckBox;
    QFormLayout *formLayout;
    QLabel *maxColsLabel;
    QSpinBox *maxColsSpinBox;
    QLabel *minFontSizeLabel;
    QSpinBox *minFontSizeSpinBox;
    QGroupBox *LayoutBlock;
    QGridLayout *gridLayout_2;
    QSpinBox *horizontalBlockSpacing;
    QLabel *label_4;
    QSpinBox *horizontalEdgeSpacing;
    QLabel *label_3;
    QSpinBox *verticalEdgeSpacing;
    QSpinBox *verticalBlockSpacing;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *BitmapExportBlock;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *checkTransparent;
    QHBoxLayout *horizontalLayout_2;
    QLabel *bitmapGraphScaleLabel;
    QDoubleSpinBox *bitmapGraphScale;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GraphOptionsWidget)
    {
        if (GraphOptionsWidget->objectName().isEmpty())
            GraphOptionsWidget->setObjectName(QString::fromUtf8("GraphOptionsWidget"));
        GraphOptionsWidget->resize(742, 698);
        verticalLayout_3 = new QVBoxLayout(GraphOptionsWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        GraphBlockOptions = new QGroupBox(GraphOptionsWidget);
        GraphBlockOptions->setObjectName(QString::fromUtf8("GraphBlockOptions"));
        verticalLayout_9 = new QVBoxLayout(GraphBlockOptions);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, 24, -1, -1);
        blockEntryCheckBox = new QCheckBox(GraphBlockOptions);
        blockEntryCheckBox->setObjectName(QString::fromUtf8("blockEntryCheckBox"));

        verticalLayout_9->addWidget(blockEntryCheckBox);

        graphOffsetCheckBox = new QCheckBox(GraphBlockOptions);
        graphOffsetCheckBox->setObjectName(QString::fromUtf8("graphOffsetCheckBox"));

        verticalLayout_9->addWidget(graphOffsetCheckBox);

        graphPreviewCheckBox = new QCheckBox(GraphBlockOptions);
        graphPreviewCheckBox->setObjectName(QString::fromUtf8("graphPreviewCheckBox"));

        verticalLayout_9->addWidget(graphPreviewCheckBox);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        maxColsLabel = new QLabel(GraphBlockOptions);
        maxColsLabel->setObjectName(QString::fromUtf8("maxColsLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, maxColsLabel);

        maxColsSpinBox = new QSpinBox(GraphBlockOptions);
        maxColsSpinBox->setObjectName(QString::fromUtf8("maxColsSpinBox"));
        maxColsSpinBox->setMinimum(25);
        maxColsSpinBox->setMaximum(256);
        maxColsSpinBox->setValue(100);

        formLayout->setWidget(0, QFormLayout::FieldRole, maxColsSpinBox);

        minFontSizeLabel = new QLabel(GraphBlockOptions);
        minFontSizeLabel->setObjectName(QString::fromUtf8("minFontSizeLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, minFontSizeLabel);

        minFontSizeSpinBox = new QSpinBox(GraphBlockOptions);
        minFontSizeSpinBox->setObjectName(QString::fromUtf8("minFontSizeSpinBox"));
        minFontSizeSpinBox->setMaximum(8);
        minFontSizeSpinBox->setValue(4);

        formLayout->setWidget(1, QFormLayout::FieldRole, minFontSizeSpinBox);


        verticalLayout_9->addLayout(formLayout);


        verticalLayout_8->addWidget(GraphBlockOptions);

        LayoutBlock = new QGroupBox(GraphOptionsWidget);
        LayoutBlock->setObjectName(QString::fromUtf8("LayoutBlock"));
        gridLayout_2 = new QGridLayout(LayoutBlock);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalBlockSpacing = new QSpinBox(LayoutBlock);
        horizontalBlockSpacing->setObjectName(QString::fromUtf8("horizontalBlockSpacing"));
        horizontalBlockSpacing->setMaximum(400);
        horizontalBlockSpacing->setSingleStep(10);
        horizontalBlockSpacing->setValue(10);

        gridLayout_2->addWidget(horizontalBlockSpacing, 1, 1, 1, 1);

        label_4 = new QLabel(LayoutBlock);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 2, 1, 1);

        horizontalEdgeSpacing = new QSpinBox(LayoutBlock);
        horizontalEdgeSpacing->setObjectName(QString::fromUtf8("horizontalEdgeSpacing"));
        horizontalEdgeSpacing->setMinimum(1);
        horizontalEdgeSpacing->setMaximum(400);
        horizontalEdgeSpacing->setSingleStep(5);
        horizontalEdgeSpacing->setValue(10);

        gridLayout_2->addWidget(horizontalEdgeSpacing, 2, 1, 1, 1);

        label_3 = new QLabel(LayoutBlock);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 1, 1, 1);

        verticalEdgeSpacing = new QSpinBox(LayoutBlock);
        verticalEdgeSpacing->setObjectName(QString::fromUtf8("verticalEdgeSpacing"));
        verticalEdgeSpacing->setMinimum(1);
        verticalEdgeSpacing->setMaximum(400);
        verticalEdgeSpacing->setSingleStep(5);
        verticalEdgeSpacing->setValue(10);

        gridLayout_2->addWidget(verticalEdgeSpacing, 2, 2, 1, 1);

        verticalBlockSpacing = new QSpinBox(LayoutBlock);
        verticalBlockSpacing->setObjectName(QString::fromUtf8("verticalBlockSpacing"));
        verticalBlockSpacing->setMaximum(400);
        verticalBlockSpacing->setSingleStep(10);
        verticalBlockSpacing->setValue(40);

        gridLayout_2->addWidget(verticalBlockSpacing, 1, 2, 1, 1);

        label = new QLabel(LayoutBlock);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(LayoutBlock);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);


        verticalLayout_8->addWidget(LayoutBlock);

        BitmapExportBlock = new QGroupBox(GraphOptionsWidget);
        BitmapExportBlock->setObjectName(QString::fromUtf8("BitmapExportBlock"));
        verticalLayout_10 = new QVBoxLayout(BitmapExportBlock);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, 24, -1, -1);
        checkTransparent = new QCheckBox(BitmapExportBlock);
        checkTransparent->setObjectName(QString::fromUtf8("checkTransparent"));

        verticalLayout_10->addWidget(checkTransparent);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        bitmapGraphScaleLabel = new QLabel(BitmapExportBlock);
        bitmapGraphScaleLabel->setObjectName(QString::fromUtf8("bitmapGraphScaleLabel"));

        horizontalLayout_2->addWidget(bitmapGraphScaleLabel);

        bitmapGraphScale = new QDoubleSpinBox(BitmapExportBlock);
        bitmapGraphScale->setObjectName(QString::fromUtf8("bitmapGraphScale"));
        bitmapGraphScale->setDecimals(0);
        bitmapGraphScale->setMinimum(100.000000000000000);
        bitmapGraphScale->setMaximum(30000.000000000000000);
        bitmapGraphScale->setSingleStep(50.000000000000000);

        horizontalLayout_2->addWidget(bitmapGraphScale);


        verticalLayout_10->addLayout(horizontalLayout_2);


        verticalLayout_8->addWidget(BitmapExportBlock);


        verticalLayout_3->addLayout(verticalLayout_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        QWidget::setTabOrder(blockEntryCheckBox, graphOffsetCheckBox);
        QWidget::setTabOrder(graphOffsetCheckBox, maxColsSpinBox);
        QWidget::setTabOrder(maxColsSpinBox, horizontalBlockSpacing);
        QWidget::setTabOrder(horizontalBlockSpacing, verticalBlockSpacing);
        QWidget::setTabOrder(verticalBlockSpacing, horizontalEdgeSpacing);
        QWidget::setTabOrder(horizontalEdgeSpacing, verticalEdgeSpacing);
        QWidget::setTabOrder(verticalEdgeSpacing, checkTransparent);
        QWidget::setTabOrder(checkTransparent, bitmapGraphScale);

        retranslateUi(GraphOptionsWidget);

        QMetaObject::connectSlotsByName(GraphOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *GraphOptionsWidget)
    {
        GraphOptionsWidget->setWindowTitle(QCoreApplication::translate("GraphOptionsWidget", "Graph", nullptr));
        GraphBlockOptions->setTitle(QCoreApplication::translate("GraphOptionsWidget", "Graph Block Options ", nullptr));
#if QT_CONFIG(tooltip)
        blockEntryCheckBox->setToolTip(QCoreApplication::translate("GraphOptionsWidget", "The offset of the first instruction of a graph block is shown in the header of the respective graph block", nullptr));
#endif // QT_CONFIG(tooltip)
        blockEntryCheckBox->setText(QCoreApplication::translate("GraphOptionsWidget", "Show offset of the first instruction in each graph block", nullptr));
        graphOffsetCheckBox->setText(QCoreApplication::translate("GraphOptionsWidget", "Show offset for each instruction (graph.offset)", nullptr));
        graphPreviewCheckBox->setText(QCoreApplication::translate("GraphOptionsWidget", "Show preview when hovering (graph.preview)", nullptr));
        maxColsLabel->setText(QCoreApplication::translate("GraphOptionsWidget", "Maximum Line Length:", nullptr));
#if QT_CONFIG(tooltip)
        minFontSizeLabel->setToolTip(QCoreApplication::translate("GraphOptionsWidget", "Hide text when zooming out and it is smaller than the given value. Higher values can increase Performance.", nullptr));
#endif // QT_CONFIG(tooltip)
        minFontSizeLabel->setText(QCoreApplication::translate("GraphOptionsWidget", "Minimum Font Size", nullptr));
#if QT_CONFIG(tooltip)
        minFontSizeSpinBox->setToolTip(QCoreApplication::translate("GraphOptionsWidget", "Hide text when zooming out and it is smaller than the given value. Higher values can increase Performance.", nullptr));
#endif // QT_CONFIG(tooltip)
        LayoutBlock->setTitle(QCoreApplication::translate("GraphOptionsWidget", "Graph Layout Options", nullptr));
        label_4->setText(QCoreApplication::translate("GraphOptionsWidget", "Vertical", nullptr));
        label_3->setText(QCoreApplication::translate("GraphOptionsWidget", "Horizontal", nullptr));
        label->setText(QCoreApplication::translate("GraphOptionsWidget", "Block spacing:", nullptr));
        label_2->setText(QCoreApplication::translate("GraphOptionsWidget", "Edge spacing", nullptr));
        BitmapExportBlock->setTitle(QCoreApplication::translate("GraphOptionsWidget", "Bitmap Export Options", nullptr));
        checkTransparent->setText(QCoreApplication::translate("GraphOptionsWidget", "Export Transparent Bitmap Graphs", nullptr));
        bitmapGraphScaleLabel->setText(QCoreApplication::translate("GraphOptionsWidget", "Graph Bitmap Export Scale: ", nullptr));
        bitmapGraphScale->setSuffix(QCoreApplication::translate("GraphOptionsWidget", "%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphOptionsWidget: public Ui_GraphOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHOPTIONSWIDGET_H
