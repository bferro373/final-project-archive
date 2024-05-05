# Install script for directory: /Users/rohansagar/Documents/GitHub/ECE49595-OSS/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Library/Developer/CommandLineTools/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rizin/cutter/translations" TYPE FILE FILES
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_ar.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_bn.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_ca.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_de.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_es.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_fa.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_fr.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_he.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_hi.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_it.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_ko.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_ja.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_nl.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_pt.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_ro.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_ru.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_tr.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_uk.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_ur.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_zh.qm"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/translations/cutter_vi.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/cutter")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutter" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutter")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/Rizin-prefix/lib"
      -delete_rpath "/Users/rohansagar/miniconda3/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutter")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/cutter")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Cutter/CutterTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Cutter/CutterTargets.cmake"
         "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/CMakeFiles/Export/ace45d24330607ec2740096266858cab/CutterTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Cutter/CutterTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Cutter/CutterTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Cutter" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/CMakeFiles/Export/ace45d24330607ec2740096266858cab/CutterTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Cutter" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/CMakeFiles/Export/ace45d24330607ec2740096266858cab/CutterTargets-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Cutter" TYPE FILE FILES
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/CutterConfig.cmake"
    "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/build/src/CutterConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/core" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/core/Cutter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/core" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/core/CutterCommon.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/core" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/core/CutterDescriptions.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/core" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/core/CutterJson.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/core" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/core/RizinCpp.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/core" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/core/Basefind.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/EditStringDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/WriteCommandsDialogs.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/DisassemblerGraphView.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/OverviewView.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/RichTextPainter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/CachedFontMetrics.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/AboutDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs/preferences" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/preferences/AsmOptionsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/CommentsDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/EditInstructionDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/FlagDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/GlobalVariableDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/RemoteDebugDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/NativeDebugDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/XrefsDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/Helpers.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/core" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/core/MainWindow.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/Highlighter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/MdHighlighter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/DirectionalComboBox.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/InitialOptionsDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/NewFileDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/AnalysisTask.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/CommentsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/ConsoleWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/Dashboard.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/EntrypointWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/ExportsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/FlagsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/FunctionsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/ImportsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/Omnibar.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/RelocsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/SectionsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/SegmentsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/StringsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/SymbolsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/menus" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/menus/DisassemblyContextMenu.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/menus" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/menus/DecompilerContextMenu.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/menus" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/menus/FlirtContextMenu.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/DisassemblyWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/HexdumpWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/Configuration.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/Colors.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/TempConfig.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/SvgIconEngine.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/SyntaxHighlighter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/DecompilerWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/VisualNavbar.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/GraphView.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs/preferences" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/preferences/PreferencesDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs/preferences" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/preferences/AppearanceOptionsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs/preferences" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/preferences/PreferenceCategory.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs/preferences" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/preferences/GraphOptionsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs/preferences" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/preferences/InitializationFileEditor.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/QuickFilterView.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/ClassesWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/ResourcesWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/CutterApplication.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/VTablesWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/TypesWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/HeadersWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/SearchWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/RizinPluginsDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/CutterDockWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/CutterTreeWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/GraphWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/OverviewWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/JsonModel.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/VersionInfoDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/FlirtWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/AsyncTask.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/AsyncTaskDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/StackWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/RegistersWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/ThreadsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/ProcessesWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/BacktraceWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/MapFileDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/StringsTask.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/FunctionsTask.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/CommandTask.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/ProgressIndicator.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/plugins" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/plugins/CutterPlugin.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/RizinTask.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/RizinTaskDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/DebugActions.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/MemoryMapWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs/preferences" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/preferences/DebugOptionsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs/preferences" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/preferences/PluginsOptionsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/BreakpointWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/BreakpointsDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/AttachProcDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/RegisterRefsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/SetToDataDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/InitialOptions.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/EditVariablesDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/EditFunctionDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/CutterTreeView.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/ComboQuickFilterView.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/HexdumpRangeDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/CutterSeekable.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/RefreshDeferrer.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/WelcomeDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/RunScriptTask.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/Json.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/EditMethodDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/TypesInteractionDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/SdbWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/plugins" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/plugins/PluginManager.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/BasicBlockHighlighter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/BasicInstructionHighlighter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/UpdateWorker.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/ColorPicker.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/ColorThemeWorker.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/ColorThemeComboBox.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/MemoryDockWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/ColorThemeListView.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs/preferences" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/preferences/ColorThemeEditDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/BugReporting.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/HighDpiPixmap.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/GraphLayout.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/GraphGridLayout.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/HexWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/SelectionHighlight.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/Decompiler.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/menus" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/menus/AddressableItemContextMenu.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/AddressableItemModel.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/ListDockWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/AddressableItemList.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/MultitypeFileSaveDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/BoolToggleDelegate.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/IOModesController.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/SettingsUpgrade.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/LayoutManager.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/CutterLayout.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/BinaryTrees.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/LinkedListPool.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/GraphHorizontalAdapter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/ResourcePaths.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/CutterGraphView.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/SimpleTextGraphView.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/RizinGraphWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/CallGraph.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/AddressableDockWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs/preferences" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/preferences/AnalysisOptionsWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/common" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/common/DecompilerHighlighter.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/GlibcHeapInfoDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/HeapDockWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/GlibcHeapWidget.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/GlibcHeapBinsDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/widgets" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/widgets/HeapBinsGraphView.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/dialogs" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/dialogs/ArenaInfoDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/tools/basefind" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/tools/basefind/BaseFindDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/tools/basefind" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/tools/basefind/BaseFindSearchDialog.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cutter/tools/basefind" TYPE FILE FILES "/Users/rohansagar/Documents/GitHub/ECE49595-OSS/src/tools/basefind/BaseFindResultsDialog.h")
endif()

