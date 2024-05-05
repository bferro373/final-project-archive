/********************************************************************************
** Form generated from reading UI file 'Dashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *fileEdit;
    QLabel *label_10;
    QLineEdit *formatEdit;
    QLabel *label_11;
    QLineEdit *modeEdit;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *typeEdit;
    QLabel *label_15;
    QLineEdit *classEdit;
    QLabel *label_18;
    QLineEdit *langEdit;
    QLabel *label_19;
    QLineEdit *bitsEdit;
    QLineEdit *sizeEdit;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QLineEdit *fdEdit;
    QLabel *label_20;
    QLineEdit *baddrEdit;
    QLabel *label_21;
    QLineEdit *vaEdit;
    QLabel *label_22;
    QLineEdit *canaryEdit;
    QLabel *label_23;
    QLineEdit *cryptoEdit;
    QLabel *label_24;
    QLineEdit *nxEdit;
    QLabel *label_25;
    QLineEdit *picEdit;
    QLabel *label_26;
    QLabel *label_34;
    QLineEdit *relroEdit;
    QLineEdit *staticEdit;
    QFormLayout *formLayout_3;
    QLabel *label_14;
    QLineEdit *archEdit;
    QLabel *label_16;
    QLineEdit *machineEdit;
    QLabel *label_17;
    QLineEdit *osEdit;
    QLabel *label_30;
    QLineEdit *subsysEdit;
    QLabel *label_27;
    QLineEdit *strippedEdit;
    QLabel *label_29;
    QLineEdit *relocsEdit;
    QLabel *label_28;
    QLineEdit *endianEdit;
    QLabel *label_31;
    QLineEdit *compilationDateEdit;
    QLabel *label_5;
    QLineEdit *compilerEdit;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *certificateButton;
    QPushButton *versioninfoButton;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *hashesVerticalLayout;
    QLabel *label_9;
    QFormLayout *formLayout_5;
    QLabel *functionsLabel;
    QLineEdit *functionsLineEdit;
    QLabel *xRefsLabel;
    QLineEdit *xRefsLineEdit;
    QLabel *callsLabel;
    QLineEdit *callsLineEdit;
    QLabel *stringsLabel;
    QLineEdit *stringsLineEdit;
    QLabel *symbolsLabel;
    QLineEdit *symbolsLineEdit;
    QLabel *importsLabel;
    QLineEdit *importsLineEdit;
    QLabel *coverageLabel;
    QLineEdit *coverageLineEdit;
    QLabel *codeSizeLabel;
    QLineEdit *codeSizeLineEdit;
    QLabel *percentageLabel;
    QLineEdit *percentageLineEdit;
    QSpacerItem *verticalSpacer_3;
    QPlainTextEdit *libraryList;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDockWidget *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName(QString::fromUtf8("Dashboard"));
        Dashboard->resize(1055, 999);
        Dashboard->setStyleSheet(QString::fromUtf8(""));
        Dashboard->setWindowTitle(QString::fromUtf8("Dashboard"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(dockWidgetContents);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1055, 980));
        horizontalLayout_5 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(39, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        mainFrame = new QFrame(scrollAreaWidgetContents);
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        mainFrame->setMinimumSize(QSize(800, 0));
        mainFrame->setFrameShape(QFrame::NoFrame);
        mainFrame->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(mainFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(mainFrame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(label);

        line = new QFrame(mainFrame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_2 = new QLabel(mainFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setVerticalSpacing(3);
        label_3 = new QLabel(mainFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        fileEdit = new QLineEdit(mainFrame);
        fileEdit->setObjectName(QString::fromUtf8("fileEdit"));
        fileEdit->setFrame(false);
        fileEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, fileEdit);

        label_10 = new QLabel(mainFrame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font2);
        label_10->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_10);

        formatEdit = new QLineEdit(mainFrame);
        formatEdit->setObjectName(QString::fromUtf8("formatEdit"));
        formatEdit->setFrame(false);
        formatEdit->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, formatEdit);

        label_11 = new QLabel(mainFrame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font2);
        label_11->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_11);

        modeEdit = new QLineEdit(mainFrame);
        modeEdit->setObjectName(QString::fromUtf8("modeEdit"));
        modeEdit->setFrame(false);
        modeEdit->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, modeEdit);

        label_12 = new QLabel(mainFrame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font2);
        label_12->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(mainFrame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font2);
        label_13->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_13);

        typeEdit = new QLineEdit(mainFrame);
        typeEdit->setObjectName(QString::fromUtf8("typeEdit"));
        typeEdit->setFrame(false);
        typeEdit->setReadOnly(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, typeEdit);

        label_15 = new QLabel(mainFrame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font2);
        label_15->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_15);

        classEdit = new QLineEdit(mainFrame);
        classEdit->setObjectName(QString::fromUtf8("classEdit"));
        classEdit->setFrame(false);
        classEdit->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, classEdit);

        label_18 = new QLabel(mainFrame);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font2);
        label_18->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_18);

        langEdit = new QLineEdit(mainFrame);
        langEdit->setObjectName(QString::fromUtf8("langEdit"));
        langEdit->setFrame(false);
        langEdit->setReadOnly(true);

        formLayout->setWidget(7, QFormLayout::FieldRole, langEdit);

        label_19 = new QLabel(mainFrame);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font2);
        label_19->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_19);

        bitsEdit = new QLineEdit(mainFrame);
        bitsEdit->setObjectName(QString::fromUtf8("bitsEdit"));
        bitsEdit->setFrame(false);
        bitsEdit->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, bitsEdit);

        sizeEdit = new QLineEdit(mainFrame);
        sizeEdit->setObjectName(QString::fromUtf8("sizeEdit"));
        sizeEdit->setFrame(false);
        sizeEdit->setReadOnly(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, sizeEdit);


        horizontalLayout_2->addLayout(formLayout);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_4->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_4->setVerticalSpacing(3);
        formLayout_4->setContentsMargins(-1, 0, -1, -1);
        label_4 = new QLabel(mainFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        fdEdit = new QLineEdit(mainFrame);
        fdEdit->setObjectName(QString::fromUtf8("fdEdit"));
        fdEdit->setFrame(false);
        fdEdit->setReadOnly(true);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, fdEdit);

        label_20 = new QLabel(mainFrame);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font2);
        label_20->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_20);

        baddrEdit = new QLineEdit(mainFrame);
        baddrEdit->setObjectName(QString::fromUtf8("baddrEdit"));
        baddrEdit->setFrame(false);
        baddrEdit->setReadOnly(true);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, baddrEdit);

        label_21 = new QLabel(mainFrame);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font2);
        label_21->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_21);

        vaEdit = new QLineEdit(mainFrame);
        vaEdit->setObjectName(QString::fromUtf8("vaEdit"));
        vaEdit->setFrame(false);
        vaEdit->setReadOnly(true);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, vaEdit);

        label_22 = new QLabel(mainFrame);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font2);
        label_22->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_22);

        canaryEdit = new QLineEdit(mainFrame);
        canaryEdit->setObjectName(QString::fromUtf8("canaryEdit"));
        canaryEdit->setFrame(false);
        canaryEdit->setReadOnly(true);

        formLayout_4->setWidget(3, QFormLayout::FieldRole, canaryEdit);

        label_23 = new QLabel(mainFrame);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font2);
        label_23->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_23);

        cryptoEdit = new QLineEdit(mainFrame);
        cryptoEdit->setObjectName(QString::fromUtf8("cryptoEdit"));
        cryptoEdit->setFrame(false);
        cryptoEdit->setReadOnly(true);

        formLayout_4->setWidget(4, QFormLayout::FieldRole, cryptoEdit);

        label_24 = new QLabel(mainFrame);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font2);
        label_24->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_4->setWidget(5, QFormLayout::LabelRole, label_24);

        nxEdit = new QLineEdit(mainFrame);
        nxEdit->setObjectName(QString::fromUtf8("nxEdit"));
        nxEdit->setFrame(false);
        nxEdit->setReadOnly(true);

        formLayout_4->setWidget(5, QFormLayout::FieldRole, nxEdit);

        label_25 = new QLabel(mainFrame);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font2);
        label_25->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_4->setWidget(6, QFormLayout::LabelRole, label_25);

        picEdit = new QLineEdit(mainFrame);
        picEdit->setObjectName(QString::fromUtf8("picEdit"));
        picEdit->setFrame(false);
        picEdit->setReadOnly(true);

        formLayout_4->setWidget(6, QFormLayout::FieldRole, picEdit);

        label_26 = new QLabel(mainFrame);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font2);
        label_26->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_4->setWidget(7, QFormLayout::LabelRole, label_26);

        label_34 = new QLabel(mainFrame);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFont(font2);
        label_34->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_4->setWidget(8, QFormLayout::LabelRole, label_34);

        relroEdit = new QLineEdit(mainFrame);
        relroEdit->setObjectName(QString::fromUtf8("relroEdit"));
        relroEdit->setFrame(false);
        relroEdit->setReadOnly(true);

        formLayout_4->setWidget(8, QFormLayout::FieldRole, relroEdit);

        staticEdit = new QLineEdit(mainFrame);
        staticEdit->setObjectName(QString::fromUtf8("staticEdit"));
        staticEdit->setFrame(false);
        staticEdit->setReadOnly(true);

        formLayout_4->setWidget(7, QFormLayout::FieldRole, staticEdit);


        horizontalLayout_2->addLayout(formLayout_4);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_3->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_3->setVerticalSpacing(3);
        label_14 = new QLabel(mainFrame);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font2);
        label_14->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_14);

        archEdit = new QLineEdit(mainFrame);
        archEdit->setObjectName(QString::fromUtf8("archEdit"));
        archEdit->setFrame(false);
        archEdit->setReadOnly(true);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, archEdit);

        label_16 = new QLabel(mainFrame);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font2);
        label_16->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_16);

        machineEdit = new QLineEdit(mainFrame);
        machineEdit->setObjectName(QString::fromUtf8("machineEdit"));
        machineEdit->setFrame(false);
        machineEdit->setReadOnly(true);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, machineEdit);

        label_17 = new QLabel(mainFrame);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font2);
        label_17->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_17);

        osEdit = new QLineEdit(mainFrame);
        osEdit->setObjectName(QString::fromUtf8("osEdit"));
        osEdit->setFrame(false);
        osEdit->setReadOnly(true);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, osEdit);

        label_30 = new QLabel(mainFrame);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setFont(font2);
        label_30->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_30);

        subsysEdit = new QLineEdit(mainFrame);
        subsysEdit->setObjectName(QString::fromUtf8("subsysEdit"));
        subsysEdit->setFrame(false);
        subsysEdit->setReadOnly(true);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, subsysEdit);

        label_27 = new QLabel(mainFrame);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFont(font2);
        label_27->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_27);

        strippedEdit = new QLineEdit(mainFrame);
        strippedEdit->setObjectName(QString::fromUtf8("strippedEdit"));
        strippedEdit->setFrame(false);
        strippedEdit->setReadOnly(true);

        formLayout_3->setWidget(5, QFormLayout::FieldRole, strippedEdit);

        label_29 = new QLabel(mainFrame);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setFont(font2);
        label_29->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_3->setWidget(6, QFormLayout::LabelRole, label_29);

        relocsEdit = new QLineEdit(mainFrame);
        relocsEdit->setObjectName(QString::fromUtf8("relocsEdit"));
        relocsEdit->setFrame(false);
        relocsEdit->setReadOnly(true);

        formLayout_3->setWidget(6, QFormLayout::FieldRole, relocsEdit);

        label_28 = new QLabel(mainFrame);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setFont(font2);
        label_28->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_3->setWidget(7, QFormLayout::LabelRole, label_28);

        endianEdit = new QLineEdit(mainFrame);
        endianEdit->setObjectName(QString::fromUtf8("endianEdit"));
        endianEdit->setFrame(false);
        endianEdit->setReadOnly(true);

        formLayout_3->setWidget(7, QFormLayout::FieldRole, endianEdit);

        label_31 = new QLabel(mainFrame);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setFont(font2);
        label_31->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_3->setWidget(8, QFormLayout::LabelRole, label_31);

        compilationDateEdit = new QLineEdit(mainFrame);
        compilationDateEdit->setObjectName(QString::fromUtf8("compilationDateEdit"));
        compilationDateEdit->setFrame(false);
        compilationDateEdit->setReadOnly(true);

        formLayout_3->setWidget(8, QFormLayout::FieldRole, compilationDateEdit);

        label_5 = new QLabel(mainFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_3->setWidget(9, QFormLayout::LabelRole, label_5);

        compilerEdit = new QLineEdit(mainFrame);
        compilerEdit->setObjectName(QString::fromUtf8("compilerEdit"));
        compilerEdit->setFrame(false);
        compilerEdit->setReadOnly(true);

        formLayout_3->setWidget(9, QFormLayout::FieldRole, compilerEdit);


        horizontalLayout_2->addLayout(formLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        line_3 = new QFrame(mainFrame);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        certificateButton = new QPushButton(mainFrame);
        certificateButton->setObjectName(QString::fromUtf8("certificateButton"));
        certificateButton->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(certificateButton->sizePolicy().hasHeightForWidth());
        certificateButton->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(certificateButton);

        versioninfoButton = new QPushButton(mainFrame);
        versioninfoButton->setObjectName(QString::fromUtf8("versioninfoButton"));
        sizePolicy.setHeightForWidth(versioninfoButton->sizePolicy().hasHeightForWidth());
        versioninfoButton->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(versioninfoButton);


        verticalLayout->addLayout(horizontalLayout_7);

        line_2 = new QFrame(mainFrame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        label_7 = new QLabel(mainFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_3->addWidget(label_7);

        label_6 = new QLabel(mainFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_3->addWidget(label_6);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, 5, -1);
        hashesVerticalLayout = new QVBoxLayout();
        hashesVerticalLayout->setObjectName(QString::fromUtf8("hashesVerticalLayout"));

        verticalLayout_4->addLayout(hashesVerticalLayout);

        label_9 = new QLabel(mainFrame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);
        label_9->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_4->addWidget(label_9);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_5->setVerticalSpacing(3);
        functionsLabel = new QLabel(mainFrame);
        functionsLabel->setObjectName(QString::fromUtf8("functionsLabel"));
        functionsLabel->setFont(font2);
        functionsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, functionsLabel);

        functionsLineEdit = new QLineEdit(mainFrame);
        functionsLineEdit->setObjectName(QString::fromUtf8("functionsLineEdit"));
        functionsLineEdit->setFrame(false);
        functionsLineEdit->setReadOnly(true);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, functionsLineEdit);

        xRefsLabel = new QLabel(mainFrame);
        xRefsLabel->setObjectName(QString::fromUtf8("xRefsLabel"));
        xRefsLabel->setFont(font2);
        xRefsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_5->setWidget(1, QFormLayout::LabelRole, xRefsLabel);

        xRefsLineEdit = new QLineEdit(mainFrame);
        xRefsLineEdit->setObjectName(QString::fromUtf8("xRefsLineEdit"));
        xRefsLineEdit->setFrame(false);
        xRefsLineEdit->setReadOnly(true);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, xRefsLineEdit);

        callsLabel = new QLabel(mainFrame);
        callsLabel->setObjectName(QString::fromUtf8("callsLabel"));
        callsLabel->setFont(font2);
        callsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_5->setWidget(2, QFormLayout::LabelRole, callsLabel);

        callsLineEdit = new QLineEdit(mainFrame);
        callsLineEdit->setObjectName(QString::fromUtf8("callsLineEdit"));
        callsLineEdit->setFrame(false);
        callsLineEdit->setReadOnly(true);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, callsLineEdit);

        stringsLabel = new QLabel(mainFrame);
        stringsLabel->setObjectName(QString::fromUtf8("stringsLabel"));
        stringsLabel->setFont(font2);
        stringsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_5->setWidget(3, QFormLayout::LabelRole, stringsLabel);

        stringsLineEdit = new QLineEdit(mainFrame);
        stringsLineEdit->setObjectName(QString::fromUtf8("stringsLineEdit"));
        stringsLineEdit->setFrame(false);
        stringsLineEdit->setReadOnly(true);

        formLayout_5->setWidget(3, QFormLayout::FieldRole, stringsLineEdit);

        symbolsLabel = new QLabel(mainFrame);
        symbolsLabel->setObjectName(QString::fromUtf8("symbolsLabel"));
        symbolsLabel->setFont(font2);
        symbolsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_5->setWidget(4, QFormLayout::LabelRole, symbolsLabel);

        symbolsLineEdit = new QLineEdit(mainFrame);
        symbolsLineEdit->setObjectName(QString::fromUtf8("symbolsLineEdit"));
        symbolsLineEdit->setFrame(false);
        symbolsLineEdit->setReadOnly(true);

        formLayout_5->setWidget(4, QFormLayout::FieldRole, symbolsLineEdit);

        importsLabel = new QLabel(mainFrame);
        importsLabel->setObjectName(QString::fromUtf8("importsLabel"));
        importsLabel->setFont(font2);
        importsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_5->setWidget(5, QFormLayout::LabelRole, importsLabel);

        importsLineEdit = new QLineEdit(mainFrame);
        importsLineEdit->setObjectName(QString::fromUtf8("importsLineEdit"));
        importsLineEdit->setFrame(false);
        importsLineEdit->setReadOnly(true);

        formLayout_5->setWidget(5, QFormLayout::FieldRole, importsLineEdit);

        coverageLabel = new QLabel(mainFrame);
        coverageLabel->setObjectName(QString::fromUtf8("coverageLabel"));
        coverageLabel->setFont(font2);
        coverageLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_5->setWidget(6, QFormLayout::LabelRole, coverageLabel);

        coverageLineEdit = new QLineEdit(mainFrame);
        coverageLineEdit->setObjectName(QString::fromUtf8("coverageLineEdit"));
        coverageLineEdit->setFrame(false);
        coverageLineEdit->setReadOnly(true);

        formLayout_5->setWidget(6, QFormLayout::FieldRole, coverageLineEdit);

        codeSizeLabel = new QLabel(mainFrame);
        codeSizeLabel->setObjectName(QString::fromUtf8("codeSizeLabel"));
        codeSizeLabel->setFont(font2);
        codeSizeLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_5->setWidget(7, QFormLayout::LabelRole, codeSizeLabel);

        codeSizeLineEdit = new QLineEdit(mainFrame);
        codeSizeLineEdit->setObjectName(QString::fromUtf8("codeSizeLineEdit"));
        codeSizeLineEdit->setFrame(false);
        codeSizeLineEdit->setReadOnly(true);

        formLayout_5->setWidget(7, QFormLayout::FieldRole, codeSizeLineEdit);

        percentageLabel = new QLabel(mainFrame);
        percentageLabel->setObjectName(QString::fromUtf8("percentageLabel"));
        percentageLabel->setFont(font2);
        percentageLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_5->setWidget(8, QFormLayout::LabelRole, percentageLabel);

        percentageLineEdit = new QLineEdit(mainFrame);
        percentageLineEdit->setObjectName(QString::fromUtf8("percentageLineEdit"));
        percentageLineEdit->setFrame(false);
        percentageLineEdit->setReadOnly(true);

        formLayout_5->setWidget(8, QFormLayout::FieldRole, percentageLineEdit);


        verticalLayout_4->addLayout(formLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        horizontalLayout_4->addLayout(verticalLayout_4);

        libraryList = new QPlainTextEdit(mainFrame);
        libraryList->setObjectName(QString::fromUtf8("libraryList"));
        libraryList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        libraryList->setLineWrapMode(QPlainTextEdit::NoWrap);
        libraryList->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(libraryList);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_5->addWidget(mainFrame);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);

        Dashboard->setWidget(dockWidgetContents);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QDockWidget *Dashboard)
    {
        label->setText(QCoreApplication::translate("Dashboard", "OVERVIEW", nullptr));
        label_2->setText(QCoreApplication::translate("Dashboard", "Info", nullptr));
        label_3->setText(QCoreApplication::translate("Dashboard", "File:", nullptr));
        fileEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_10->setText(QCoreApplication::translate("Dashboard", "Format:", nullptr));
        formatEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_11->setText(QCoreApplication::translate("Dashboard", "Mode:", nullptr));
        modeEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_12->setText(QCoreApplication::translate("Dashboard", "Size:", nullptr));
        label_13->setText(QCoreApplication::translate("Dashboard", "Type:", nullptr));
        typeEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_15->setText(QCoreApplication::translate("Dashboard", "Class:", nullptr));
        classEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_18->setText(QCoreApplication::translate("Dashboard", "Language:", nullptr));
        langEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_19->setText(QCoreApplication::translate("Dashboard", "Bits:", nullptr));
        bitsEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        sizeEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_4->setText(QCoreApplication::translate("Dashboard", "FD:", nullptr));
        fdEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_20->setText(QCoreApplication::translate("Dashboard", "Base addr:", nullptr));
        baddrEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_21->setText(QCoreApplication::translate("Dashboard", "Virtual addr:", nullptr));
        vaEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_22->setText(QCoreApplication::translate("Dashboard", "Canary:", nullptr));
        canaryEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_23->setText(QCoreApplication::translate("Dashboard", "Crypto:", nullptr));
        cryptoEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_24->setText(QCoreApplication::translate("Dashboard", "NX bit:", nullptr));
        nxEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_25->setText(QCoreApplication::translate("Dashboard", "PIC:", nullptr));
        picEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_26->setText(QCoreApplication::translate("Dashboard", "Static:", nullptr));
        label_34->setText(QCoreApplication::translate("Dashboard", "Relro:", nullptr));
        relroEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        staticEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_14->setText(QCoreApplication::translate("Dashboard", "Architecture:", nullptr));
        archEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_16->setText(QCoreApplication::translate("Dashboard", "Machine:", nullptr));
        machineEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_17->setText(QCoreApplication::translate("Dashboard", "OS:", nullptr));
        osEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_30->setText(QCoreApplication::translate("Dashboard", "Subsystem:", nullptr));
        subsysEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_27->setText(QCoreApplication::translate("Dashboard", "Stripped:", nullptr));
        strippedEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_29->setText(QCoreApplication::translate("Dashboard", "Relocs:", nullptr));
        relocsEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_28->setText(QCoreApplication::translate("Dashboard", "Endianness:", nullptr));
        endianEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_31->setText(QCoreApplication::translate("Dashboard", "Compiled:", nullptr));
        compilationDateEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        label_5->setText(QCoreApplication::translate("Dashboard", "Compiler:", nullptr));
        compilerEdit->setText(QCoreApplication::translate("Dashboard", "--", nullptr));
        certificateButton->setText(QCoreApplication::translate("Dashboard", "Certificates", nullptr));
        versioninfoButton->setText(QCoreApplication::translate("Dashboard", "Version info", nullptr));
        label_7->setText(QCoreApplication::translate("Dashboard", "Hashes", nullptr));
        label_6->setText(QCoreApplication::translate("Dashboard", "Libraries", nullptr));
        label_9->setText(QCoreApplication::translate("Dashboard", "Analysis info", nullptr));
        functionsLabel->setText(QCoreApplication::translate("Dashboard", "Functions:", nullptr));
        xRefsLabel->setText(QCoreApplication::translate("Dashboard", "X-Refs:", nullptr));
        callsLabel->setText(QCoreApplication::translate("Dashboard", "Calls:", nullptr));
        stringsLabel->setText(QCoreApplication::translate("Dashboard", "Strings:", nullptr));
        symbolsLabel->setText(QCoreApplication::translate("Dashboard", "Symbols:", nullptr));
        importsLabel->setText(QCoreApplication::translate("Dashboard", "Imports:", nullptr));
        coverageLabel->setText(QCoreApplication::translate("Dashboard", "Analysis coverage:", nullptr));
        codeSizeLabel->setText(QCoreApplication::translate("Dashboard", "Code size:", nullptr));
        percentageLabel->setText(QCoreApplication::translate("Dashboard", "Coverage percent:", nullptr));
        (void)Dashboard;
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
