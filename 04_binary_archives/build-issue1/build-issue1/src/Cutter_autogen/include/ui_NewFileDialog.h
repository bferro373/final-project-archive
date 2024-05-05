/********************************************************************************
** Form generated from reading UI file 'NewFileDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFILEDIALOG_H
#define UI_NEWFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtSvg/QSvgWidget>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewFileDialog
{
public:
    QAction *actionRemove_item;
    QAction *actionClear_all;
    QAction *actionRemove_project;
    QAction *actionClearProjects;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_6;
    QSvgWidget *logoSvgWidget;
    QHBoxLayout *buttonBar;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *aboutButton;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *filesTab;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QLabel *newFileLabel;
    QPushButton *selectFileButton;
    QLineEdit *newFileEdit;
    QComboBox *ioPlugin;
    QLabel *ioLabel;
    QFrame *line;
    QListWidget *recentsListWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBox_FilelessOpen;
    QPushButton *loadFileButton;
    QWidget *shellcodeTab;
    QVBoxLayout *shellcodeLayout;
    QLabel *shellcodeLabel;
    QPlainTextEdit *shellcodeText;
    QHBoxLayout *shellcodeLayout_1;
    QSpacerItem *shellcodeSpacer;
    QPushButton *shellcodeButton;
    QWidget *projectsTab;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_2;
    QPushButton *selectProjectFileButton;
    QLineEdit *projectFileEdit;
    QLabel *projectFileLabel;
    QFrame *line_2;
    QListWidget *projectsListWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *loadProjectButton;

    void setupUi(QDialog *NewFileDialog)
    {
        if (NewFileDialog->objectName().isEmpty())
            NewFileDialog->setObjectName(QString::fromUtf8("NewFileDialog"));
        NewFileDialog->resize(451, 599);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewFileDialog->sizePolicy().hasHeightForWidth());
        NewFileDialog->setSizePolicy(sizePolicy);
        actionRemove_item = new QAction(NewFileDialog);
        actionRemove_item->setObjectName(QString::fromUtf8("actionRemove_item"));
        actionClear_all = new QAction(NewFileDialog);
        actionClear_all->setObjectName(QString::fromUtf8("actionClear_all"));
        actionRemove_project = new QAction(NewFileDialog);
        actionRemove_project->setObjectName(QString::fromUtf8("actionRemove_project"));
        actionClearProjects = new QAction(NewFileDialog);
        actionClearProjects->setObjectName(QString::fromUtf8("actionClearProjects"));
        verticalLayout = new QVBoxLayout(NewFileDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(2, 2, 2, 2);
        logoSvgWidget = new QSvgWidget(NewFileDialog);
        logoSvgWidget->setObjectName(QString::fromUtf8("logoSvgWidget"));
        logoSvgWidget->setMinimumSize(QSize(88, 88));
        logoSvgWidget->setMaximumSize(QSize(88, 88));

        verticalLayout_6->addWidget(logoSvgWidget, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(verticalLayout_6);

        buttonBar = new QHBoxLayout();
        buttonBar->setSpacing(10);
        buttonBar->setObjectName(QString::fromUtf8("buttonBar"));
        buttonBar->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_4 = new QSpacerItem(500, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonBar->addItem(horizontalSpacer_4);

        aboutButton = new QPushButton(NewFileDialog);
        aboutButton->setObjectName(QString::fromUtf8("aboutButton"));

        buttonBar->addWidget(aboutButton);

        horizontalSpacer = new QSpacerItem(500, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonBar->addItem(horizontalSpacer);


        verticalLayout->addLayout(buttonBar);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, 0, -1);
        frame = new QFrame(NewFileDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(0, 0));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        filesTab = new QWidget();
        filesTab->setObjectName(QString::fromUtf8("filesTab"));
        verticalLayout_4 = new QVBoxLayout(filesTab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(5);
        newFileLabel = new QLabel(filesTab);
        newFileLabel->setObjectName(QString::fromUtf8("newFileLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(newFileLabel->sizePolicy().hasHeightForWidth());
        newFileLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(newFileLabel, 0, 1, 1, 1);

        selectFileButton = new QPushButton(filesTab);
        selectFileButton->setObjectName(QString::fromUtf8("selectFileButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(selectFileButton->sizePolicy().hasHeightForWidth());
        selectFileButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(selectFileButton, 1, 2, 1, 1);

        newFileEdit = new QLineEdit(filesTab);
        newFileEdit->setObjectName(QString::fromUtf8("newFileEdit"));
        newFileEdit->setFrame(false);
        newFileEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(newFileEdit, 1, 1, 1, 1);

        ioPlugin = new QComboBox(filesTab);
        ioPlugin->setObjectName(QString::fromUtf8("ioPlugin"));

        gridLayout->addWidget(ioPlugin, 1, 0, 1, 1);

        ioLabel = new QLabel(filesTab);
        ioLabel->setObjectName(QString::fromUtf8("ioLabel"));

        gridLayout->addWidget(ioLabel, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        line = new QFrame(filesTab);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy3);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        recentsListWidget = new QListWidget(filesTab);
        recentsListWidget->setObjectName(QString::fromUtf8("recentsListWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(recentsListWidget->sizePolicy().hasHeightForWidth());
        recentsListWidget->setSizePolicy(sizePolicy4);
        QFont font;
        font.setPointSize(11);
        recentsListWidget->setFont(font);
        recentsListWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
        recentsListWidget->setFrameShape(QFrame::NoFrame);
        recentsListWidget->setFrameShadow(QFrame::Plain);
        recentsListWidget->setLineWidth(0);
        recentsListWidget->setIconSize(QSize(48, 48));
        recentsListWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        recentsListWidget->setResizeMode(QListView::Adjust);
        recentsListWidget->setSpacing(5);
        recentsListWidget->setViewMode(QListView::ListMode);
        recentsListWidget->setUniformItemSizes(false);
        recentsListWidget->setWordWrap(false);
        recentsListWidget->setSelectionRectVisible(true);
        recentsListWidget->setSortingEnabled(false);

        verticalLayout_4->addWidget(recentsListWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        checkBox_FilelessOpen = new QCheckBox(filesTab);
        checkBox_FilelessOpen->setObjectName(QString::fromUtf8("checkBox_FilelessOpen"));

        horizontalLayout->addWidget(checkBox_FilelessOpen);

        loadFileButton = new QPushButton(filesTab);
        loadFileButton->setObjectName(QString::fromUtf8("loadFileButton"));

        horizontalLayout->addWidget(loadFileButton);


        verticalLayout_4->addLayout(horizontalLayout);

        tabWidget->addTab(filesTab, QString());
        shellcodeTab = new QWidget();
        shellcodeTab->setObjectName(QString::fromUtf8("shellcodeTab"));
        shellcodeLayout = new QVBoxLayout(shellcodeTab);
        shellcodeLayout->setObjectName(QString::fromUtf8("shellcodeLayout"));
        shellcodeLabel = new QLabel(shellcodeTab);
        shellcodeLabel->setObjectName(QString::fromUtf8("shellcodeLabel"));
        sizePolicy1.setHeightForWidth(shellcodeLabel->sizePolicy().hasHeightForWidth());
        shellcodeLabel->setSizePolicy(sizePolicy1);

        shellcodeLayout->addWidget(shellcodeLabel);

        shellcodeText = new QPlainTextEdit(shellcodeTab);
        shellcodeText->setObjectName(QString::fromUtf8("shellcodeText"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(1);
        sizePolicy5.setHeightForWidth(shellcodeText->sizePolicy().hasHeightForWidth());
        shellcodeText->setSizePolicy(sizePolicy5);

        shellcodeLayout->addWidget(shellcodeText);

        shellcodeLayout_1 = new QHBoxLayout();
        shellcodeLayout_1->setObjectName(QString::fromUtf8("shellcodeLayout_1"));
        shellcodeSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        shellcodeLayout_1->addItem(shellcodeSpacer);

        shellcodeButton = new QPushButton(shellcodeTab);
        shellcodeButton->setObjectName(QString::fromUtf8("shellcodeButton"));

        shellcodeLayout_1->addWidget(shellcodeButton);


        shellcodeLayout->addLayout(shellcodeLayout_1);

        tabWidget->addTab(shellcodeTab, QString());
        projectsTab = new QWidget();
        projectsTab->setObjectName(QString::fromUtf8("projectsTab"));
        verticalLayout_5 = new QVBoxLayout(projectsTab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setHorizontalSpacing(5);
        selectProjectFileButton = new QPushButton(projectsTab);
        selectProjectFileButton->setObjectName(QString::fromUtf8("selectProjectFileButton"));
        sizePolicy2.setHeightForWidth(selectProjectFileButton->sizePolicy().hasHeightForWidth());
        selectProjectFileButton->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(selectProjectFileButton, 1, 1, 1, 1);

        projectFileEdit = new QLineEdit(projectsTab);
        projectFileEdit->setObjectName(QString::fromUtf8("projectFileEdit"));
        projectFileEdit->setFrame(false);

        gridLayout_2->addWidget(projectFileEdit, 1, 0, 1, 1);

        projectFileLabel = new QLabel(projectsTab);
        projectFileLabel->setObjectName(QString::fromUtf8("projectFileLabel"));
        sizePolicy1.setHeightForWidth(projectFileLabel->sizePolicy().hasHeightForWidth());
        projectFileLabel->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(projectFileLabel, 0, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_2);

        line_2 = new QFrame(projectsTab);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        sizePolicy3.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy3);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        projectsListWidget = new QListWidget(projectsTab);
        projectsListWidget->setObjectName(QString::fromUtf8("projectsListWidget"));
        sizePolicy4.setHeightForWidth(projectsListWidget->sizePolicy().hasHeightForWidth());
        projectsListWidget->setSizePolicy(sizePolicy4);
        projectsListWidget->setFont(font);
        projectsListWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
        projectsListWidget->setFrameShape(QFrame::NoFrame);
        projectsListWidget->setFrameShadow(QFrame::Plain);
        projectsListWidget->setLineWidth(0);
        projectsListWidget->setIconSize(QSize(48, 48));
        projectsListWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        projectsListWidget->setResizeMode(QListView::Adjust);
        projectsListWidget->setSpacing(5);
        projectsListWidget->setViewMode(QListView::ListMode);
        projectsListWidget->setUniformItemSizes(false);
        projectsListWidget->setWordWrap(false);
        projectsListWidget->setSelectionRectVisible(true);

        verticalLayout_5->addWidget(projectsListWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        loadProjectButton = new QPushButton(projectsTab);
        loadProjectButton->setObjectName(QString::fromUtf8("loadProjectButton"));

        horizontalLayout_2->addWidget(loadProjectButton);


        verticalLayout_5->addLayout(horizontalLayout_2);

        tabWidget->addTab(projectsTab, QString());

        verticalLayout_2->addWidget(tabWidget);


        verticalLayout_3->addWidget(frame);


        verticalLayout->addLayout(verticalLayout_3);


        retranslateUi(NewFileDialog);

        tabWidget->setCurrentIndex(2);
        loadFileButton->setDefault(true);


        QMetaObject::connectSlotsByName(NewFileDialog);
    } // setupUi

    void retranslateUi(QDialog *NewFileDialog)
    {
        NewFileDialog->setWindowTitle(QCoreApplication::translate("NewFileDialog", "Open File", nullptr));
        actionRemove_item->setText(QCoreApplication::translate("NewFileDialog", "Remove item", nullptr));
        actionClear_all->setText(QCoreApplication::translate("NewFileDialog", "Clear all", nullptr));
        actionRemove_project->setText(QCoreApplication::translate("NewFileDialog", "Delete project", nullptr));
        actionClearProjects->setText(QCoreApplication::translate("NewFileDialog", "Clear all projects", nullptr));
        aboutButton->setText(QCoreApplication::translate("NewFileDialog", "About", nullptr));
        newFileLabel->setText(QCoreApplication::translate("NewFileDialog", "<b>Select new file<b>", nullptr));
        selectFileButton->setText(QCoreApplication::translate("NewFileDialog", "Select", nullptr));
        ioLabel->setText(QCoreApplication::translate("NewFileDialog", "<b>IO</b>", nullptr));
        checkBox_FilelessOpen->setText(QCoreApplication::translate("NewFileDialog", "Don't open any file", nullptr));
        loadFileButton->setText(QCoreApplication::translate("NewFileDialog", "Open", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(filesTab), QCoreApplication::translate("NewFileDialog", "Open File", nullptr));
        shellcodeLabel->setText(QCoreApplication::translate("NewFileDialog", "<b>Paste Shellcode<b>", nullptr));
        shellcodeButton->setText(QCoreApplication::translate("NewFileDialog", "Open", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(shellcodeTab), QCoreApplication::translate("NewFileDialog", "Open Shellcode", nullptr));
        selectProjectFileButton->setText(QCoreApplication::translate("NewFileDialog", "Select", nullptr));
        projectFileLabel->setText(QCoreApplication::translate("NewFileDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Open Project</span></p></body></html>", nullptr));
        loadProjectButton->setText(QCoreApplication::translate("NewFileDialog", "Open", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(projectsTab), QCoreApplication::translate("NewFileDialog", "Projects", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewFileDialog: public Ui_NewFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFILEDIALOG_H
