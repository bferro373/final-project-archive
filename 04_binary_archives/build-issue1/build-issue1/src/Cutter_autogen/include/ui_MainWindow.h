/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDefault;
    QAction *actionZen;
    QAction *actionBaseFind;
    QAction *actionAbout;
    QAction *actionIssue;
    QAction *actionNew;
    QAction *actionClose;
    QAction *actionSave_workspace;
    QAction *actionDocumentation;
    QAction *actionMap;
    QAction *actionSave;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionSelect_all;
    QAction *actionFind;
    QAction *actionFind_next;
    QAction *actionFind_previous;
    QAction *actionBackward;
    QAction *actionForward;
    QAction *actionUnlock;
    QAction *actionTheme;
    QAction *actionTabs;
    QAction *actionRefresh_Panels;
    QAction *actionTabs_on_Top;
    QAction *actionDark_Theme;
    QAction *actionLoad_workspace;
    QAction *actionWhite_Theme;
    QAction *actionBindiff;
    QAction *actionAnalysis;
    QAction *actionTest_menu;
    QAction *actionHexCopy_Hexpair;
    QAction *actionHexCopy_Text;
    QAction *actionHexCopy_ASCII;
    QAction *actionHexInsert_String;
    QAction *actionHexInsert_Hex;
    QAction *actionHexEdit;
    QAction *actionHexPaste;
    QAction *actionDisas_ShowHideBytes;
    QAction *actionDisasSwitch_case;
    QAction *actionDisasCopy_All;
    QAction *actionDisasCopy_Bytes;
    QAction *actionDisasCopy_Disasm;
    QAction *actionDisplayOptions;
    QAction *actionStart_Web_Server;
    QAction *action1column;
    QAction *action2columns;
    QAction *action4columns;
    QAction *action8columns;
    QAction *action16columns;
    QAction *action32columns;
    QAction *action64columns;
    QAction *actionSyntax_AT_T_Intel;
    QAction *actionFunctionsRename;
    QAction *actionFunctionsUndefine;
    QAction *actionDisasRename;
    QAction *actionDisasmUndefine;
    QAction *actionDisasAdd_comment;
    QAction *actionhide_bottomPannel;
    QAction *actionRun_Script;
    QAction *actionReset_settings;
    QAction *actionQuit;
    QAction *actionExports;
    QAction *actionRefresh_contents;
    QAction *actionDisplay_Esil;
    QAction *actionDisplay_Decompiler;
    QAction *actionDisplay_Offsets;
    QAction *actionPreferences;
    QAction *actionSaveAs;
    QAction *actionGraph;
    QAction *actionImportPDB;
    QAction *actionAnalyze;
    QAction *actionExport_as_code;
    QAction *actionApplySigFromFile;
    QAction *actionCreateNewSig;
    QAction *actionExtraHexdump;
    QAction *actionExtraDecompiler;
    QAction *actionExtraDisassembly;
    QAction *actionExtraGraph;
    QAction *actionGrouped_dock_dragging;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionZoomReset;
    QAction *actionCommitChanges;
    QAction *actionWriteMode;
    QAction *actionCacheMode;
    QAction *actionReadOnly;
    QAction *actionSaveLayout;
    QAction *actionManageLayouts;
    QMenu *addExtraWidgets;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSetMode;
    QMenu *menuView;
    QMenu *menuZoom;
    QMenu *menuLayouts;
    QMenu *menuTools;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QMenu *menuWindows;
    QMenu *menuPlugins;
    QMenu *menuAddInfoWidgets;
    QMenu *menuAddDebugWidgets;
    QMenu *menuDebug;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1013, 606);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setWindowTitle(QString::fromUtf8("Cutter"));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setDocumentMode(true);
        MainWindow->setDockNestingEnabled(true);
        actionDefault = new QAction(MainWindow);
        actionDefault->setObjectName(QString::fromUtf8("actionDefault"));
        actionZen = new QAction(MainWindow);
        actionZen->setObjectName(QString::fromUtf8("actionZen"));
        actionBaseFind = new QAction(MainWindow);
        actionBaseFind->setObjectName(QString::fromUtf8("actionBaseFind"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionIssue = new QAction(MainWindow);
        actionIssue->setObjectName(QString::fromUtf8("actionIssue"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionSave_workspace = new QAction(MainWindow);
        actionSave_workspace->setObjectName(QString::fromUtf8("actionSave_workspace"));
        actionDocumentation = new QAction(MainWindow);
        actionDocumentation->setObjectName(QString::fromUtf8("actionDocumentation"));
        actionMap = new QAction(MainWindow);
        actionMap->setObjectName(QString::fromUtf8("actionMap"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionSelect_all = new QAction(MainWindow);
        actionSelect_all->setObjectName(QString::fromUtf8("actionSelect_all"));
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        actionFind_next = new QAction(MainWindow);
        actionFind_next->setObjectName(QString::fromUtf8("actionFind_next"));
        actionFind_previous = new QAction(MainWindow);
        actionFind_previous->setObjectName(QString::fromUtf8("actionFind_previous"));
        actionBackward = new QAction(MainWindow);
        actionBackward->setObjectName(QString::fromUtf8("actionBackward"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icons/arrow_left.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackward->setIcon(icon);
        actionForward = new QAction(MainWindow);
        actionForward->setObjectName(QString::fromUtf8("actionForward"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/icons/arrow_right.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionForward->setIcon(icon1);
        actionUnlock = new QAction(MainWindow);
        actionUnlock->setObjectName(QString::fromUtf8("actionUnlock"));
        actionUnlock->setCheckable(true);
        actionUnlock->setChecked(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/lock"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/unlock"), QSize(), QIcon::Normal, QIcon::On);
        actionUnlock->setIcon(icon2);
        actionUnlock->setIconVisibleInMenu(false);
        actionTheme = new QAction(MainWindow);
        actionTheme->setObjectName(QString::fromUtf8("actionTheme"));
        actionTheme->setCheckable(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/icons/themes.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionTheme->setIcon(icon3);
        actionTheme->setAutoRepeat(false);
        actionTheme->setMenuRole(QAction::PreferencesRole);
        actionTabs = new QAction(MainWindow);
        actionTabs->setObjectName(QString::fromUtf8("actionTabs"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/icons/tabs.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionTabs->setIcon(icon4);
        actionRefresh_Panels = new QAction(MainWindow);
        actionRefresh_Panels->setObjectName(QString::fromUtf8("actionRefresh_Panels"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/icons/spin.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefresh_Panels->setIcon(icon5);
        actionTabs_on_Top = new QAction(MainWindow);
        actionTabs_on_Top->setObjectName(QString::fromUtf8("actionTabs_on_Top"));
        actionTabs_on_Top->setCheckable(true);
        actionDark_Theme = new QAction(MainWindow);
        actionDark_Theme->setObjectName(QString::fromUtf8("actionDark_Theme"));
        actionLoad_workspace = new QAction(MainWindow);
        actionLoad_workspace->setObjectName(QString::fromUtf8("actionLoad_workspace"));
        actionWhite_Theme = new QAction(MainWindow);
        actionWhite_Theme->setObjectName(QString::fromUtf8("actionWhite_Theme"));
        actionBindiff = new QAction(MainWindow);
        actionBindiff->setObjectName(QString::fromUtf8("actionBindiff"));
        actionAnalysis = new QAction(MainWindow);
        actionAnalysis->setObjectName(QString::fromUtf8("actionAnalysis"));
        actionTest_menu = new QAction(MainWindow);
        actionTest_menu->setObjectName(QString::fromUtf8("actionTest_menu"));
        actionHexCopy_Hexpair = new QAction(MainWindow);
        actionHexCopy_Hexpair->setObjectName(QString::fromUtf8("actionHexCopy_Hexpair"));
        actionHexCopy_Text = new QAction(MainWindow);
        actionHexCopy_Text->setObjectName(QString::fromUtf8("actionHexCopy_Text"));
        actionHexCopy_ASCII = new QAction(MainWindow);
        actionHexCopy_ASCII->setObjectName(QString::fromUtf8("actionHexCopy_ASCII"));
        actionHexInsert_String = new QAction(MainWindow);
        actionHexInsert_String->setObjectName(QString::fromUtf8("actionHexInsert_String"));
        actionHexInsert_Hex = new QAction(MainWindow);
        actionHexInsert_Hex->setObjectName(QString::fromUtf8("actionHexInsert_Hex"));
        actionHexEdit = new QAction(MainWindow);
        actionHexEdit->setObjectName(QString::fromUtf8("actionHexEdit"));
        actionHexPaste = new QAction(MainWindow);
        actionHexPaste->setObjectName(QString::fromUtf8("actionHexPaste"));
        actionDisas_ShowHideBytes = new QAction(MainWindow);
        actionDisas_ShowHideBytes->setObjectName(QString::fromUtf8("actionDisas_ShowHideBytes"));
        actionDisasSwitch_case = new QAction(MainWindow);
        actionDisasSwitch_case->setObjectName(QString::fromUtf8("actionDisasSwitch_case"));
        actionDisasCopy_All = new QAction(MainWindow);
        actionDisasCopy_All->setObjectName(QString::fromUtf8("actionDisasCopy_All"));
        actionDisasCopy_Bytes = new QAction(MainWindow);
        actionDisasCopy_Bytes->setObjectName(QString::fromUtf8("actionDisasCopy_Bytes"));
        actionDisasCopy_Disasm = new QAction(MainWindow);
        actionDisasCopy_Disasm->setObjectName(QString::fromUtf8("actionDisasCopy_Disasm"));
        actionDisplayOptions = new QAction(MainWindow);
        actionDisplayOptions->setObjectName(QString::fromUtf8("actionDisplayOptions"));
        actionStart_Web_Server = new QAction(MainWindow);
        actionStart_Web_Server->setObjectName(QString::fromUtf8("actionStart_Web_Server"));
        actionStart_Web_Server->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/icons/cloud.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart_Web_Server->setIcon(icon6);
        action1column = new QAction(MainWindow);
        action1column->setObjectName(QString::fromUtf8("action1column"));
        action2columns = new QAction(MainWindow);
        action2columns->setObjectName(QString::fromUtf8("action2columns"));
        action4columns = new QAction(MainWindow);
        action4columns->setObjectName(QString::fromUtf8("action4columns"));
        action8columns = new QAction(MainWindow);
        action8columns->setObjectName(QString::fromUtf8("action8columns"));
        action16columns = new QAction(MainWindow);
        action16columns->setObjectName(QString::fromUtf8("action16columns"));
        action32columns = new QAction(MainWindow);
        action32columns->setObjectName(QString::fromUtf8("action32columns"));
        action64columns = new QAction(MainWindow);
        action64columns->setObjectName(QString::fromUtf8("action64columns"));
        actionSyntax_AT_T_Intel = new QAction(MainWindow);
        actionSyntax_AT_T_Intel->setObjectName(QString::fromUtf8("actionSyntax_AT_T_Intel"));
        actionFunctionsRename = new QAction(MainWindow);
        actionFunctionsRename->setObjectName(QString::fromUtf8("actionFunctionsRename"));
        actionFunctionsUndefine = new QAction(MainWindow);
        actionFunctionsUndefine->setObjectName(QString::fromUtf8("actionFunctionsUndefine"));
        actionDisasRename = new QAction(MainWindow);
        actionDisasRename->setObjectName(QString::fromUtf8("actionDisasRename"));
        actionDisasmUndefine = new QAction(MainWindow);
        actionDisasmUndefine->setObjectName(QString::fromUtf8("actionDisasmUndefine"));
        actionDisasAdd_comment = new QAction(MainWindow);
        actionDisasAdd_comment->setObjectName(QString::fromUtf8("actionDisasAdd_comment"));
        actionhide_bottomPannel = new QAction(MainWindow);
        actionhide_bottomPannel->setObjectName(QString::fromUtf8("actionhide_bottomPannel"));
        actionhide_bottomPannel->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/icons/down.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionhide_bottomPannel->setIcon(icon7);
        actionRun_Script = new QAction(MainWindow);
        actionRun_Script->setObjectName(QString::fromUtf8("actionRun_Script"));
        actionReset_settings = new QAction(MainWindow);
        actionReset_settings->setObjectName(QString::fromUtf8("actionReset_settings"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionExports = new QAction(MainWindow);
        actionExports->setObjectName(QString::fromUtf8("actionExports"));
        actionExports->setCheckable(true);
        actionRefresh_contents = new QAction(MainWindow);
        actionRefresh_contents->setObjectName(QString::fromUtf8("actionRefresh_contents"));
        actionDisplay_Esil = new QAction(MainWindow);
        actionDisplay_Esil->setObjectName(QString::fromUtf8("actionDisplay_Esil"));
        actionDisplay_Esil->setCheckable(true);
        actionDisplay_Decompiler = new QAction(MainWindow);
        actionDisplay_Decompiler->setObjectName(QString::fromUtf8("actionDisplay_Decompiler"));
        actionDisplay_Decompiler->setCheckable(true);
        actionDisplay_Offsets = new QAction(MainWindow);
        actionDisplay_Offsets->setObjectName(QString::fromUtf8("actionDisplay_Offsets"));
        actionDisplay_Offsets->setCheckable(true);
        actionDisplay_Offsets->setChecked(true);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        actionGraph = new QAction(MainWindow);
        actionGraph->setObjectName(QString::fromUtf8("actionGraph"));
        actionGraph->setCheckable(true);
        actionImportPDB = new QAction(MainWindow);
        actionImportPDB->setObjectName(QString::fromUtf8("actionImportPDB"));
        actionAnalyze = new QAction(MainWindow);
        actionAnalyze->setObjectName(QString::fromUtf8("actionAnalyze"));
        actionExport_as_code = new QAction(MainWindow);
        actionExport_as_code->setObjectName(QString::fromUtf8("actionExport_as_code"));
        actionApplySigFromFile = new QAction(MainWindow);
        actionApplySigFromFile->setObjectName(QString::fromUtf8("actionApplySigFromFile"));
        actionCreateNewSig = new QAction(MainWindow);
        actionCreateNewSig->setObjectName(QString::fromUtf8("actionCreateNewSig"));
        actionExtraHexdump = new QAction(MainWindow);
        actionExtraHexdump->setObjectName(QString::fromUtf8("actionExtraHexdump"));
        actionExtraDecompiler = new QAction(MainWindow);
        actionExtraDecompiler->setObjectName(QString::fromUtf8("actionExtraDecompiler"));
        actionExtraDisassembly = new QAction(MainWindow);
        actionExtraDisassembly->setObjectName(QString::fromUtf8("actionExtraDisassembly"));
        actionExtraGraph = new QAction(MainWindow);
        actionExtraGraph->setObjectName(QString::fromUtf8("actionExtraGraph"));
        actionGrouped_dock_dragging = new QAction(MainWindow);
        actionGrouped_dock_dragging->setObjectName(QString::fromUtf8("actionGrouped_dock_dragging"));
        actionGrouped_dock_dragging->setCheckable(true);
        actionGrouped_dock_dragging->setChecked(true);
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        actionZoomIn->setShortcutContext(Qt::ApplicationShortcut);
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        actionZoomOut->setShortcutContext(Qt::ApplicationShortcut);
        actionZoomReset = new QAction(MainWindow);
        actionZoomReset->setObjectName(QString::fromUtf8("actionZoomReset"));
        actionZoomReset->setShortcutContext(Qt::ApplicationShortcut);
        actionCommitChanges = new QAction(MainWindow);
        actionCommitChanges->setObjectName(QString::fromUtf8("actionCommitChanges"));
        actionWriteMode = new QAction(MainWindow);
        actionWriteMode->setObjectName(QString::fromUtf8("actionWriteMode"));
        actionWriteMode->setCheckable(true);
        actionCacheMode = new QAction(MainWindow);
        actionCacheMode->setObjectName(QString::fromUtf8("actionCacheMode"));
        actionCacheMode->setCheckable(true);
        actionReadOnly = new QAction(MainWindow);
        actionReadOnly->setObjectName(QString::fromUtf8("actionReadOnly"));
        actionReadOnly->setCheckable(true);
        actionReadOnly->setChecked(true);
        actionSaveLayout = new QAction(MainWindow);
        actionSaveLayout->setObjectName(QString::fromUtf8("actionSaveLayout"));
        actionManageLayouts = new QAction(MainWindow);
        actionManageLayouts->setObjectName(QString::fromUtf8("actionManageLayouts"));
        addExtraWidgets = new QMenu(MainWindow);
        addExtraWidgets->setObjectName(QString::fromUtf8("addExtraWidgets"));
        MainWindow->setCentralWidget(addExtraWidgets);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1013, 22));
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(true);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFile->setGeometry(QRect(2024, 127, 151, 312));
        menuSetMode = new QMenu(menuFile);
        menuSetMode->setObjectName(QString::fromUtf8("menuSetMode"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuView->setProperty("tabsOnTop", QVariant(false));
        menuZoom = new QMenu(menuView);
        menuZoom->setObjectName(QString::fromUtf8("menuZoom"));
        menuLayouts = new QMenu(menuView);
        menuLayouts->setObjectName(QString::fromUtf8("menuLayouts"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuWindows = new QMenu(menuBar);
        menuWindows->setObjectName(QString::fromUtf8("menuWindows"));
        menuPlugins = new QMenu(menuWindows);
        menuPlugins->setObjectName(QString::fromUtf8("menuPlugins"));
        menuAddInfoWidgets = new QMenu(menuWindows);
        menuAddInfoWidgets->setObjectName(QString::fromUtf8("menuAddInfoWidgets"));
        menuAddDebugWidgets = new QMenu(menuWindows);
        menuAddDebugWidgets->setObjectName(QString::fromUtf8("menuAddDebugWidgets"));
        menuDebug = new QMenu(menuBar);
        menuDebug->setObjectName(QString::fromUtf8("menuDebug"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy1);
        mainToolBar->setContextMenuPolicy(Qt::DefaultContextMenu);
        mainToolBar->setWindowTitle(QString::fromUtf8("Main toolbar"));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(16, 16));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuWindows->menuAction());
        menuBar->addAction(menuDebug->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionMap);
        menuFile->addSeparator();
        menuFile->addAction(actionImportPDB);
        menuFile->addAction(actionAnalyze);
        menuFile->addSeparator();
        menuFile->addAction(actionApplySigFromFile);
        menuFile->addAction(actionCreateNewSig);
        menuFile->addSeparator();
        menuFile->addAction(menuSetMode->menuAction());
        menuFile->addAction(actionCommitChanges);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionExport_as_code);
        menuFile->addSeparator();
        menuFile->addAction(actionRun_Script);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuFile->addSeparator();
        menuSetMode->addAction(actionWriteMode);
        menuSetMode->addAction(actionCacheMode);
        menuSetMode->addAction(actionReadOnly);
        menuView->addAction(actionRefresh_contents);
        menuView->addSeparator();
        menuView->addAction(actionDefault);
        menuView->addAction(actionReset_settings);
        menuView->addSeparator();
        menuView->addAction(actionUnlock);
        menuView->addAction(actionTabs_on_Top);
        menuView->addAction(actionGrouped_dock_dragging);
        menuView->addSeparator();
        menuView->addAction(menuZoom->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionManageLayouts);
        menuView->addAction(actionSaveLayout);
        menuView->addAction(menuLayouts->menuAction());
        menuZoom->addAction(actionZoomIn);
        menuZoom->addAction(actionZoomOut);
        menuZoom->addSeparator();
        menuZoom->addAction(actionZoomReset);
        menuTools->addAction(actionBaseFind);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionIssue);
        menuHelp->addAction(actionDocumentation);
        menuEdit->addAction(actionBackward);
        menuEdit->addAction(actionForward);
        menuEdit->addSeparator();
        menuEdit->addAction(actionPreferences);
        menuWindows->addAction(actionExtraDecompiler);
        menuWindows->addAction(actionExtraDisassembly);
        menuWindows->addAction(actionExtraGraph);
        menuWindows->addAction(actionExtraHexdump);
        menuWindows->addSeparator();
        menuWindows->addAction(menuAddInfoWidgets->menuAction());
        menuWindows->addAction(menuAddDebugWidgets->menuAction());
        menuWindows->addAction(menuPlugins->menuAction());
        menuWindows->addSeparator();
        mainToolBar->addAction(actionBackward);
        mainToolBar->addAction(actionForward);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionDefault->setText(QCoreApplication::translate("MainWindow", "Reset to default layout", nullptr));
        actionZen->setText(QCoreApplication::translate("MainWindow", "Zen Mode", nullptr));
#if QT_CONFIG(tooltip)
        actionZen->setToolTip(QCoreApplication::translate("MainWindow", "Zen mode", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBaseFind->setText(QCoreApplication::translate("MainWindow", "BaseFind", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionIssue->setText(QCoreApplication::translate("MainWindow", "Report an issue", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New Window", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        actionSave_workspace->setText(QCoreApplication::translate("MainWindow", "Save layout", nullptr));
#if QT_CONFIG(tooltip)
        actionSave_workspace->setToolTip(QCoreApplication::translate("MainWindow", "Save layout", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDocumentation->setText(QCoreApplication::translate("MainWindow", "Documentation", nullptr));
        actionMap->setText(QCoreApplication::translate("MainWindow", "Map File", nullptr));
#if QT_CONFIG(shortcut)
        actionMap->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save Project", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        actionSelect_all->setText(QCoreApplication::translate("MainWindow", "Select all", nullptr));
#if QT_CONFIG(tooltip)
        actionSelect_all->setToolTip(QCoreApplication::translate("MainWindow", "Select all", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFind->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
        actionFind_next->setText(QCoreApplication::translate("MainWindow", "Find next", nullptr));
#if QT_CONFIG(tooltip)
        actionFind_next->setToolTip(QCoreApplication::translate("MainWindow", "Find next", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFind_previous->setText(QCoreApplication::translate("MainWindow", "Find previous", nullptr));
#if QT_CONFIG(tooltip)
        actionFind_previous->setToolTip(QCoreApplication::translate("MainWindow", "Find previous", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBackward->setText(QCoreApplication::translate("MainWindow", "Undo Seek", nullptr));
#if QT_CONFIG(tooltip)
        actionBackward->setToolTip(QCoreApplication::translate("MainWindow", "Go back", nullptr));
#endif // QT_CONFIG(tooltip)
        actionForward->setText(QCoreApplication::translate("MainWindow", "Redo Seek", nullptr));
        actionUnlock->setText(QCoreApplication::translate("MainWindow", "Unlock Panels", nullptr));
#if QT_CONFIG(tooltip)
        actionUnlock->setToolTip(QCoreApplication::translate("MainWindow", "Toggle panel locks", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTheme->setText(QCoreApplication::translate("MainWindow", "Theme", nullptr));
        actionTabs->setText(QCoreApplication::translate("MainWindow", "Tabs up/down", nullptr));
#if QT_CONFIG(tooltip)
        actionTabs->setToolTip(QCoreApplication::translate("MainWindow", "Tabs up/down", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRefresh_Panels->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        actionTabs_on_Top->setText(QCoreApplication::translate("MainWindow", "Show Tabs at the Top", nullptr));
#if QT_CONFIG(tooltip)
        actionTabs_on_Top->setToolTip(QCoreApplication::translate("MainWindow", "Toggle tab position", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDark_Theme->setText(QCoreApplication::translate("MainWindow", "Dark Theme", nullptr));
        actionLoad_workspace->setText(QCoreApplication::translate("MainWindow", "Load layout", nullptr));
#if QT_CONFIG(tooltip)
        actionLoad_workspace->setToolTip(QCoreApplication::translate("MainWindow", "Load layout", nullptr));
#endif // QT_CONFIG(tooltip)
        actionWhite_Theme->setText(QCoreApplication::translate("MainWindow", "Default Theme", nullptr));
        actionBindiff->setText(QCoreApplication::translate("MainWindow", "Bindiff", nullptr));
        actionAnalysis->setText(QCoreApplication::translate("MainWindow", "Analysis", nullptr));
        actionTest_menu->setText(QCoreApplication::translate("MainWindow", "Test menu", nullptr));
        actionHexCopy_Hexpair->setText(QCoreApplication::translate("MainWindow", "Copy hexpair", nullptr));
#if QT_CONFIG(tooltip)
        actionHexCopy_Hexpair->setToolTip(QCoreApplication::translate("MainWindow", "Copy hexpair", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHexCopy_Text->setText(QCoreApplication::translate("MainWindow", "Copy text", nullptr));
#if QT_CONFIG(tooltip)
        actionHexCopy_Text->setToolTip(QCoreApplication::translate("MainWindow", "Copy text", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHexCopy_ASCII->setText(QCoreApplication::translate("MainWindow", "Copy ASCII", nullptr));
        actionHexInsert_String->setText(QCoreApplication::translate("MainWindow", "Insert string", nullptr));
#if QT_CONFIG(tooltip)
        actionHexInsert_String->setToolTip(QCoreApplication::translate("MainWindow", "Insert string", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHexInsert_Hex->setText(QCoreApplication::translate("MainWindow", "Insert hex", nullptr));
#if QT_CONFIG(tooltip)
        actionHexInsert_Hex->setToolTip(QCoreApplication::translate("MainWindow", "Insert hex", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHexEdit->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        actionHexPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionDisas_ShowHideBytes->setText(QCoreApplication::translate("MainWindow", "Show/Hide bytes", nullptr));
        actionDisasSwitch_case->setText(QCoreApplication::translate("MainWindow", "Switch case", nullptr));
        actionDisasCopy_All->setText(QCoreApplication::translate("MainWindow", "Copy all", nullptr));
#if QT_CONFIG(tooltip)
        actionDisasCopy_All->setToolTip(QCoreApplication::translate("MainWindow", "Copy all", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDisasCopy_Bytes->setText(QCoreApplication::translate("MainWindow", "Copy bytes", nullptr));
#if QT_CONFIG(tooltip)
        actionDisasCopy_Bytes->setToolTip(QCoreApplication::translate("MainWindow", "Copy bytes", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDisasCopy_Disasm->setText(QCoreApplication::translate("MainWindow", "Copy disasm", nullptr));
#if QT_CONFIG(tooltip)
        actionDisasCopy_Disasm->setToolTip(QCoreApplication::translate("MainWindow", "Copy disasm", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDisplayOptions->setText(QCoreApplication::translate("MainWindow", "Copy disasm", nullptr));
#if QT_CONFIG(tooltip)
        actionDisplayOptions->setToolTip(QCoreApplication::translate("MainWindow", "Copy disasm", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStart_Web_Server->setText(QCoreApplication::translate("MainWindow", "Start web server", nullptr));
#if QT_CONFIG(tooltip)
        actionStart_Web_Server->setToolTip(QCoreApplication::translate("MainWindow", "Start web server", nullptr));
#endif // QT_CONFIG(tooltip)
        action1column->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        action2columns->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        action4columns->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        action8columns->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        action16columns->setText(QCoreApplication::translate("MainWindow", "16", nullptr));
        action32columns->setText(QCoreApplication::translate("MainWindow", "32", nullptr));
        action64columns->setText(QCoreApplication::translate("MainWindow", "64", nullptr));
        actionSyntax_AT_T_Intel->setText(QCoreApplication::translate("MainWindow", "Syntax AT&T/Intel", nullptr));
        actionFunctionsRename->setText(QCoreApplication::translate("MainWindow", "Rename", nullptr));
        actionFunctionsUndefine->setText(QCoreApplication::translate("MainWindow", "Undefine", nullptr));
        actionDisasRename->setText(QCoreApplication::translate("MainWindow", "Rename", nullptr));
        actionDisasmUndefine->setText(QCoreApplication::translate("MainWindow", "Undefine", nullptr));
        actionDisasAdd_comment->setText(QCoreApplication::translate("MainWindow", "Add comment", nullptr));
        actionhide_bottomPannel->setText(QCoreApplication::translate("MainWindow", "Show/Hide bottom pannel", nullptr));
#if QT_CONFIG(tooltip)
        actionhide_bottomPannel->setToolTip(QCoreApplication::translate("MainWindow", "Show/Hide bottom pannel", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRun_Script->setText(QCoreApplication::translate("MainWindow", "Run Rizin script", nullptr));
        actionReset_settings->setText(QCoreApplication::translate("MainWindow", "Reset Settings", nullptr));
#if QT_CONFIG(tooltip)
        actionReset_settings->setToolTip(QCoreApplication::translate("MainWindow", "Reset settings", nullptr));
#endif // QT_CONFIG(tooltip)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExports->setText(QCoreApplication::translate("MainWindow", "Exports", nullptr));
#if QT_CONFIG(tooltip)
        actionExports->setToolTip(QCoreApplication::translate("MainWindow", "Show/Hide Exports panel", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRefresh_contents->setText(QCoreApplication::translate("MainWindow", "Refresh Contents", nullptr));
#if QT_CONFIG(tooltip)
        actionRefresh_contents->setToolTip(QCoreApplication::translate("MainWindow", "Refresh contents", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDisplay_Esil->setText(QCoreApplication::translate("MainWindow", "Show ESIL rather than assembly", nullptr));
        actionDisplay_Decompiler->setText(QCoreApplication::translate("MainWindow", "Show pseudocode rather than assembly", nullptr));
        actionDisplay_Offsets->setText(QCoreApplication::translate("MainWindow", "Display offsets", nullptr));
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "Preferences", nullptr));
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "Save Project As...", nullptr));
        actionGraph->setText(QCoreApplication::translate("MainWindow", "Graph", nullptr));
        actionImportPDB->setText(QCoreApplication::translate("MainWindow", "Import PDB", nullptr));
        actionAnalyze->setText(QCoreApplication::translate("MainWindow", "Analyze Program", nullptr));
        actionExport_as_code->setText(QCoreApplication::translate("MainWindow", "Export as code", nullptr));
        actionApplySigFromFile->setText(QCoreApplication::translate("MainWindow", "Apply Signature From File", nullptr));
        actionCreateNewSig->setText(QCoreApplication::translate("MainWindow", "Create New Signature File", nullptr));
        actionExtraHexdump->setText(QCoreApplication::translate("MainWindow", "Add Hexdump", nullptr));
        actionExtraDecompiler->setText(QCoreApplication::translate("MainWindow", "Add Decompiler", nullptr));
        actionExtraDisassembly->setText(QCoreApplication::translate("MainWindow", "Add Disassembly", nullptr));
        actionExtraGraph->setText(QCoreApplication::translate("MainWindow", "Add Graph", nullptr));
        actionGrouped_dock_dragging->setText(QCoreApplication::translate("MainWindow", "Grouped dock dragging", nullptr));
        actionZoomIn->setText(QCoreApplication::translate("MainWindow", "Zoom In", nullptr));
#if QT_CONFIG(shortcut)
        actionZoomIn->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOut->setText(QCoreApplication::translate("MainWindow", "Zoom Out", nullptr));
#if QT_CONFIG(shortcut)
        actionZoomOut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
#if QT_CONFIG(shortcut)
        actionZoomReset->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+=", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCommitChanges->setText(QCoreApplication::translate("MainWindow", "Commit changes", nullptr));
        actionWriteMode->setText(QCoreApplication::translate("MainWindow", "Write mode", nullptr));
#if QT_CONFIG(tooltip)
        actionWriteMode->setToolTip(QCoreApplication::translate("MainWindow", "Open the file in write mode. Every change to the file will change the original file on disk.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCacheMode->setText(QCoreApplication::translate("MainWindow", "Cache mode", nullptr));
#if QT_CONFIG(tooltip)
        actionCacheMode->setToolTip(QCoreApplication::translate("MainWindow", "Enable cache mode. Changes to the file would not be applied to disk unless you specifically commit them. This is a safer option.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReadOnly->setText(QCoreApplication::translate("MainWindow", "Read-Only mode", nullptr));
        actionSaveLayout->setText(QCoreApplication::translate("MainWindow", "Save layout", nullptr));
        actionManageLayouts->setText(QCoreApplication::translate("MainWindow", "Manage layouts", nullptr));
        addExtraWidgets->setTitle(QCoreApplication::translate("MainWindow", "Add extra...", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
#if QT_CONFIG(tooltip)
        menuSetMode->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        menuSetMode->setTitle(QCoreApplication::translate("MainWindow", "Set mode", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuZoom->setTitle(QCoreApplication::translate("MainWindow", "Zoom", nullptr));
        menuLayouts->setTitle(QCoreApplication::translate("MainWindow", "Layouts", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuWindows->setTitle(QCoreApplication::translate("MainWindow", "Windows", nullptr));
        menuPlugins->setTitle(QCoreApplication::translate("MainWindow", "Plugins", nullptr));
        menuAddInfoWidgets->setTitle(QCoreApplication::translate("MainWindow", "Info...", nullptr));
        menuAddDebugWidgets->setTitle(QCoreApplication::translate("MainWindow", "Debug...", nullptr));
        menuDebug->setTitle(QCoreApplication::translate("MainWindow", "Debug", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
