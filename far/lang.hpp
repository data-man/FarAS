#ifndef __FARLANG_HPP__
#define __FARLANG_HPP__
/*
lang.hpp

�����䨪���� �஢᪨� ��ப

�������� - �� �⠢�� �������ਨ ����� enum!
           � lngedit ᮡ���� ⮫쪮 � ���ਨ ���������

           ⠪�� � lng ����� �� �⠢�� ����� 2� �������ਥ�
           �����.
*/

/* Revision: 1.33 21.12.2000 $ */

/*
Modify:
  21.12.2000 SVS
    + MMacroSettingsFilePanels, MMacroSettingsPluginPanels
  14.12.2000 SVS
    + MChangeVolumeInUse, MChangeVolumeInUse2,
      MChangeCouldNotUnlockMedia, MChangeCouldNotEjectMedia
  13.12.2000
    + MEditInputSize
  04.12.2000 SVS
    + MSetColorDialog*Disabled, MSetColorWarning*Disabled, MCheckBox2State
  29.11.2000 SVS
    + MEditROOpen, MEditRSH, MEditFileLong
  29.11.2000 SVS
    + MViewF9: � lng 䠩�� ��祬� � ��� ���� ��� F9 �� ���� -
      ����ᬮ�� ������ :))
  27.11.2000 SVS
    + MExcDebugger
  22.11.2000 SVS
    + MSetColorDialogMenuScrollBar - ����� �ப��⪨ ��� ᯨ᪠
  02.11.2000 OT
    + MBuffSizeTooSmall_1, MBuffSizeTooSmall_2
 23.10.2000 SVS
    + MExcCheckOnLousys :-)
  20.10.2000 SVS
    + MHighlightEncrypted, MSetAttrEncrypted, MSetAttrEncryptedCannotFor,
    ! 㤠��� MSetAttrNTFSOnly �� �������������
  17.10.2000 SVS
    + �� ��᪮�쪮 MExc*
  16.10.2000 SVS
    + MExc* - ��� �᪫�祭��
  27.09.2000 SVS
    + MHelpActivatorFormat
    + MHelpActivatorURL
    + MHelpActivatorQ
  24.09.2000 SVS
    + MViewConfigSaveShortPos
    + MEditConfigSaveShortPos
  20.09.2000 SVS
    + MConfigSubstPluginPrefix
  15.09.2000 IS
    + MDistributionTableWasNotFound, MAutoDetectWillNotWork
  13.09.2000 tran 1.16
    + MSetColorCommandLinePrefix
  12.09.2000 SVS
    ! MViewF2WWrap 㤠���� � ��६�饭� �� MViewShiftF2
  04.08.2000 SVS
    + MCopyOnlyNewerFiles
    - MEditConfigWordDiv
  03.08.2000 tran
    + ���� ����⠭�� ��� "���ᨨ" MPlgBadVers, MPlgRequired
  03.08.2000 KM 1.12
    + ���� ����⠭�� MFindFileWholeWords,MViewSearchWholeWords,
      MEditSearchWholeWords ��� ���᪠ �� 楫� ᫮��� � Find file (Alt-F7),
      ���᪥ �� ��� � ।����.
  03.08.2000 SVS
    + MEditConfigWordDiv - ࠧ����⥫� ᫮� � ����ன��� ।����
  02.08.2000 SVS
    + CtrlAlt*, AltShift*, CtrlShift*
  26.07.2000 SVS
    + ����⠭� MConfigAutoComplete
  24.07.2000 VVM
    + ���� ����⠭�� � �裡 � ���������m usermenu.cpp
      MMainMenuFAR � MMainMenuREG.
  18.07.2000 tran
    + ���� ����⠭�� � �裡 � ScrollBar in Viewer
  15.07.2000 SVS
    + ����⠭� MConfigPersonalPath
  12.07.2000 SVS
    + ����⠭� MViewF2WWrap
  07.07.2000 IS
    + �㭪�� ��� ᮮ�饭�� � ���⢥ত���� ����⠭������� ���᪨ 䠩��� ��
      㬮�砭��: MHighlightWarning, MHighlightAskRestore,
    ! � lng-䠩��� ���������� ��ப� MHighlightBottom - ������� ���ଠ�� �
      "Ctrl+R"
  06.07.2000 tran
    ! ��ࠢ�� ���� 䠩���
  06.07.2000 SVS
    + �������
      MSetColorDialogMenuHighLight,
      MSetColorDialogMenuSelectedHighLight,
  04.07.2000 SVS
    ! Scroll bar � ���� ��॥堫 �� Options|Panel settings
      � Options|Interface settings
  29.06.2000 tran
    + �����誨 ��� ��� �㭪樮������ ������ � viewer & editor
  29.06.2000 SVS
    + ���� �㭪� ��� Options|Panel settings
      [ ] Show scrollbar into Menus
    + ���� �㭪� ��� ����ன�� 梥⮢ Menu ��� Menu Scrollbar
  25.06.2000 SVS
    ! �����⮢�� Master Copy
    ! �뤥����� � ����⢥ ᠬ����⥫쭮�� �����
*/

enum
{

  MShareware=0,
  MRegistered,
  MYes,
  MNo,
  MOk,


  MCancel,
  MRetry,
  MSkip,
  MDelete,
  MSplit,

  MWarning,
  MError,

  MQuit,
  MAskQuit,

  MF1,
  MF2,
  MF3,
  MF4,
  MF5,
  MF6,
  MF7,
  MF8,
  MF9,
  MF10,
  MF11,
  MF12,

  MAltF1,
  MAltF2,
  MAltF3,
  MAltF4,
  MAltF5,
  MAltF6,
  MAltF7,
  MAltF8,
  MAltF9,
  MAltF10,
  MAltF11,
  MAltF12,

  MCtrlF1,
  MCtrlF2,
  MCtrlF3,
  MCtrlF4,
  MCtrlF5,
  MCtrlF6,
  MCtrlF7,
  MCtrlF8,
  MCtrlF9,
  MCtrlF10,
  MCtrlF11,
  MCtrlF12,

  MShiftF1,
  MShiftF2,
  MShiftF3,
  MShiftF4,
  MShiftF5,
  MShiftF6,
  MShiftF7,
  MShiftF8,
  MShiftF9,
  MShiftF10,
  MShiftF11,
  MShiftF12,

  MAltShiftF1,
  MAltShiftF2,
  MAltShiftF3,
  MAltShiftF4,
  MAltShiftF5,
  MAltShiftF6,
  MAltShiftF7,
  MAltShiftF8,
  MAltShiftF9,
  MAltShiftF10,
  MAltShiftF11,
  MAltShiftF12,

  MCtrlShiftF1,
  MCtrlShiftF2,
  MCtrlShiftF3,
  MCtrlShiftF4,
  MCtrlShiftF5,
  MCtrlShiftF6,
  MCtrlShiftF7,
  MCtrlShiftF8,
  MCtrlShiftF9,
  MCtrlShiftF10,
  MCtrlShiftF11,
  MCtrlShiftF12,

  MCtrlAltF1,
  MCtrlAltF2,
  MCtrlAltF3,
  MCtrlAltF4,
  MCtrlAltF5,
  MCtrlAltF6,
  MCtrlAltF7,
  MCtrlAltF8,
  MCtrlAltF9,
  MCtrlAltF10,
  MCtrlAltF11,
  MCtrlAltF12,

  MHistoryTitle,
  MFolderHistoryTitle,
  MViewHistoryTitle,

  MHistoryView,
  MHistoryEdit,
  MHistoryExt,

  MConfigSystemTitle,
  MConfigRO,
  MConfigRecycleBin,
  MConfigSystemCopy,
  MConfigCopySharing,
  MConfigCreateUppercaseFolders,
  MConfigInactivity,
  MConfigInactivityMinutes,
  MConfigSaveHistory,
  MConfigSaveFoldersHistory,
  MConfigSaveViewHistory,
  MConfigRegisteredTypes,
  MConfigSubstPluginPrefix,
  MConfigAutoSave,
  MConfigPersonalPath,

  MConfigPanelTitle,
  MConfigHidden,
  MConfigHighlight,
  MConfigAutoChange,
  MConfigSelectFolders,
  MConfigReverseSort,
  MConfigShowColumns,
  MConfigShowStatus,
  MConfigShowTotal,
  MConfigShowFree,
  MConfigShowScrollbar,
  MConfigShowScreensNumber,
  MConfigShowSortMode,

  MConfigInterfaceTitle,
  MConfigClock,
  MConfigViewerEditorClock,
  MConfigMouse,
  MConfigKeyBar,
  MConfigMenuBar,
  MConfigSaver,
  MConfigSaverMinutes,
  MConfigDialogsEditHistory,
  MConfigUsePromptFormat,
  MConfigAltGr,
  MConfigCopyTotal,
  MConfigShowMenuScrollbar,
  MConfigAutoComplete,

  MViewConfigTitle,
  MViewConfigExternal,
  MViewConfigExternalF3,
  MViewConfigExternalAltF3,
  MViewConfigExternalCommand,
  MViewConfigInternal,
  MViewConfigSavePos,
  MViewConfigSaveShortPos,
  MViewAutoDetectTable,
  MViewConfigTabSize,
  MViewConfigScrollbar,
  MViewConfigArrows,

  MEditConfigTitle,
  MEditConfigExternal,
  MEditConfigEditorF4,
  MEditConfigEditorAltF4,
  MEditConfigEditorCommand,
  MEditConfigInternal,
  MEditConfigTabsToSpaces,
  MEditConfigPersistentBlocks,
  MEditConfigDelRemovesBlocks,
  MEditConfigAutoIndent,
  MEditConfigSavePos,
  MEditConfigSaveShortPos,
  MEditAutoDetectTable,
  MEditConfigTabSize,
  MEditCursorBeyondEnd,

  MDistributionTableWasNotFound,
  MAutoDetectWillNotWork,

  MSaveSetupTitle,
  MSaveSetupAsk1,
  MSaveSetupAsk2,
  MSaveSetup,

  MCopyDlgTitle,
  MMoveDlgTitle,
  MLinkDlgTitle,
  MCopySecurity,
  MCopyOnlyNewerFiles,
  MCopyDlgCopy,
  MCopyDlgTree,
  MCopyDlgCancel,
  MCopyDlgRename,
  MCopyDlgLink,
  MCopyDlgTotal,
  MCopyScanning,

  MCopyFile,
  MMoveFile,
  MLinkFile,
  MCopyFiles,
  MMoveFiles,
  MLinkFiles,

  MCopyCopyingTitle,
  MCopyMovingTitle,

  MCopyCannotFind,

  MCannotCopyFolderToItself1,
  MCannotCopyFolderToItself2,

  MCopyCannotCreateFolder,
  MCopyRetry,
  MCopySkip,
  MCopyCancel,

  MCannotCopyFileToItself1,
  MCannotCopyFileToItself2,

  MCopyFileExist,
  MCopySource,
  MCopyDest,
  MCopyOverwrite,
  MCopyOverwriteAll,
  MCopySkipOvr,
  MCopySkipAllOvr,
  MCopyAppend,
  MCopyResume,
  MCopyCancelOvr,

  MCopyFileRO,
  MCopyAskDelete,
  MCopyDeleteRO,
  MCopyDeleteAllRO,
  MCopySkipRO,
  MCopySkipAllRO,
  MCopyCancelRO,

  MCannotCopy,
  MCannotMove,
  MCannotLink,
  MCannotCopyTo,

  MCopyReadError,
  MCopyWriteError,

  MCopyProcessed,
  MCopyMoving,
  MCopyCopying,
  MCopyTo,

  MCopyErrorDiskFull,

  MDeleteTitle,
  MAskDeleteFolder,
  MAskDelete,
  MAskDeleteRecycleFolder,
  MAskDeleteRecycle,
  MAskWipeFolder,
  MAskWipe,
  MAskDeleteFiles,

  MDeleteFolderTitle,
  MDeleteFilesTitle,
  MDeleteFolderConfirm,
  MDeleteFileDelete,
  MDeleteFileAll,
  MDeleteFileSkip,
  MDeleteFileSkipAll,
  MDeleteFileCancel,

  MDeletingTitle,

  MDeleting,

  MDeleteRO,
  MAskDeleteRO,

  MCannotDeleteFile,
  MCannotDeleteFolder,
  MDeleteRetry,
  MDeleteSkip,
  MDeleteCancel,

  MCannotGetSecurity,
  MCannotSetSecurity,

  MEditTitle,
  MAskReload,
  MCurrent,
  MReload,
  MEditCannotOpen,
  MEditReading,
  MEditAskSave,

  MEditSave,
  MEditNotSave,
  MEditContinue,

  MEditRO,
  MEditExists,
  MEditOvr,
  MEditSaving,
  MEditStatusLine,
  MEditStatusCol,

  MEditRSH,
  MEditFileLong,
  MEditROOpen,

  MEditSearchTitle,
  MEditSearchFor,
  MEditSearchCase,
  MEditSearchWholeWords,
  MEditSearchReverse,
  MEditSearchSearch,
  MEditSearchCancel,

  MEditReplaceTitle,
  MEditReplaceWith,
  MEditReplaceReplace,

  MEditSearchingFor,
  MEditNotFound,

  MEditAskReplace,
  MEditAskReplaceWith,
  MEditReplace,
  MEditReplaceAll,
  MEditSkip,
  MEditCancel,

  MEditGoToLine,

  MFolderShortcutsTitle,
  MFolderShortcutBottom,
  MShortcutNone,
  MEnterShortcut,

  MEditF1,
  MEditF2,
  MEditF3,
  MEditF4,
  MEditF5,
  MEditF6,
  MEditF7,
  MEditF8,
  MEditF8DOS,
  MEditF9,
  MEditF10,
  MEditF11,
  MEditF12,

  MEditShiftF1,
  MEditShiftF2,
  MEditShiftF3,
  MEditShiftF4,
  MEditShiftF5,
  MEditShiftF6,
  MEditShiftF7,
  MEditShiftF8,
  MEditShiftF9,
  MEditShiftF10,
  MEditShiftF11,
  MEditShiftF12,

  MEditAltF1,
  MEditAltF2,
  MEditAltF3,
  MEditAltF4,
  MEditAltF5,
  MEditAltF6,
  MEditAltF7,
  MEditAltF8,
  MEditAltF9,
  MEditAltF10,
  MEditAltF11,
  MEditAltF12,

  MEditCtrlF1,
  MEditCtrlF2,
  MEditCtrlF3,
  MEditCtrlF4,
  MEditCtrlF5,
  MEditCtrlF6,
  MEditCtrlF7,
  MEditCtrlF8,
  MEditCtrlF9,
  MEditCtrlF10,
  MEditCtrlF11,
  MEditCtrlF12,

  MEditAltShiftF1,
  MEditAltShiftF2,
  MEditAltShiftF3,
  MEditAltShiftF4,
  MEditAltShiftF5,
  MEditAltShiftF6,
  MEditAltShiftF7,
  MEditAltShiftF8,
  MEditAltShiftF9,
  MEditAltShiftF10,
  MEditAltShiftF11,
  MEditAltShiftF12,

  MEditCtrlShiftF1,
  MEditCtrlShiftF2,
  MEditCtrlShiftF3,
  MEditCtrlShiftF4,
  MEditCtrlShiftF5,
  MEditCtrlShiftF6,
  MEditCtrlShiftF7,
  MEditCtrlShiftF8,
  MEditCtrlShiftF9,
  MEditCtrlShiftF10,
  MEditCtrlShiftF11,
  MEditCtrlShiftF12,

  MEditCtrlAltF1,
  MEditCtrlAltF2,
  MEditCtrlAltF3,
  MEditCtrlAltF4,
  MEditCtrlAltF5,
  MEditCtrlAltF6,
  MEditCtrlAltF7,
  MEditCtrlAltF8,
  MEditCtrlAltF9,
  MEditCtrlAltF10,
  MEditCtrlAltF11,
  MEditCtrlAltF12,

  MEditSaveAs,
  MEditSaveOriginal,
  MEditSaveDOS,
  MEditSaveUnix,
  MEditCannotSave,

  MColumnName,
  MColumnSize,
  MColumnPacked,
  MColumnDate,
  MColumnTime,
  MColumnModified,
  MColumnCreated,
  MColumnAccessed,
  MColumnAttr,
  MColumnDescription,
  MColumnOwner,
  MColumnMumLinks,

  MListUp,
  MListFolder,
  MListMb,
  MListKb,
  MListFileSize,
  MListFilesSize,
  MListFreeSize,

  MDirInfoViewTitle,
  MFileToEdit,

  MUnselectTitle,
  MSelectTitle,

  MCompareTitle,
  MCompareFilePanelsRequired1,
  MCompareFilePanelsRequired2,
  MCompareSameFolders1,
  MCompareSameFolders2,

  MSelectAssocTitle,

  MAssocTitle,
  MAssocBottom,
  MAskDelAssoc,

  MFileAssocTitle,
  MFileAssocMasks,
  MFileAssocDescr,
  MFileAssocExec,
  MFileAssocView,
  MFileAssocEdit,

  MViewF1,
  MViewF2,
  MViewF2Unwrap,
  MViewF3,
  MViewF4,
  MViewF4Text,
  MViewF5,
  MViewF6,
  MViewF7,
  MViewF8,
  MViewF8DOS,
  MViewF9,
  MViewF10,
  MViewF11,
  MViewF12,

  MViewShiftF1,
  MViewShiftF2,
  MViewShiftF3,
  MViewShiftF4,
  MViewShiftF5,
  MViewShiftF6,
  MViewShiftF7,
  MViewShiftF8,
  MViewShiftF9,
  MViewShiftF10,
  MViewShiftF11,
  MViewShiftF12,

  MViewAltF1,
  MViewAltF2,
  MViewAltF3,
  MViewAltF4,
  MViewAltF5,
  MViewAltF6,
  MViewAltF7,
  MViewAltF8,
  MViewAltF9,
  MViewAltF10,
  MViewAltF11,
  MViewAltF12,

  MViewCtrlF1,
  MViewCtrlF2,
  MViewCtrlF3,
  MViewCtrlF4,
  MViewCtrlF5,
  MViewCtrlF6,
  MViewCtrlF7,
  MViewCtrlF8,
  MViewCtrlF9,
  MViewCtrlF10,
  MViewCtrlF11,
  MViewCtrlF12,

  MViewAltShiftF1,
  MViewAltShiftF2,
  MViewAltShiftF3,
  MViewAltShiftF4,
  MViewAltShiftF5,
  MViewAltShiftF6,
  MViewAltShiftF7,
  MViewAltShiftF8,
  MViewAltShiftF9,
  MViewAltShiftF10,
  MViewAltShiftF11,
  MViewAltShiftF12,

  MViewCtrlShiftF1,
  MViewCtrlShiftF2,
  MViewCtrlShiftF3,
  MViewCtrlShiftF4,
  MViewCtrlShiftF5,
  MViewCtrlShiftF6,
  MViewCtrlShiftF7,
  MViewCtrlShiftF8,
  MViewCtrlShiftF9,
  MViewCtrlShiftF10,
  MViewCtrlShiftF11,
  MViewCtrlShiftF12,

  MViewCtrlAltF1,
  MViewCtrlAltF2,
  MViewCtrlAltF3,
  MViewCtrlAltF4,
  MViewCtrlAltF5,
  MViewCtrlAltF6,
  MViewCtrlAltF7,
  MViewCtrlAltF8,
  MViewCtrlAltF9,
  MViewCtrlAltF10,
  MViewCtrlAltF11,
  MViewCtrlAltF12,

  MInViewer,
  MInEditor,

  MFilterTitle,
  MFilterBottom,
  MNoCustomFilters,
  MPanelFileType,
  MCanEditCustomFilterOnly,
  MAskDeleteFilter,
  MCanDeleteCustomFilterOnly,

  MEnterFilterTitle,
  MFilterMasks,

  MFindFileTitle,
  MFindFileMasks,
  MFindFileText,
  MFindFileCase,
  MFindFileWholeWords,
  MFindFileAllTables,
  MFindArchives,
  MSearchAllDisks,
  MSearchFromRoot,
  MSearchFromCurrent,
  MSearchInCurrent,
  MSearchInSelected,
  MFindFileFind,
  MFindFileTable,
  MFindSearchingIn,
  MFindNewSearch,
  MFindGoTo,
  MFindView,
  MFindPanel,
  MFindStop,

  MFindDone,
  MFindCancel,

  MFindFound,

  MFindFileFolder,

  MFoldTreeSearch,

  MGetTableTitle,
  MGetTableNormalText,

  MHelpTitle,
  MHelpActivatorURL,
  MHelpActivatorFormat,
  MHelpActivatorQ,
  MCannotOpenHelp,
  MHelpTopicNotFound,

  MHighlightTitle,
  MHighlightBottom,
  MHighlightAskDel,
  MHighlightWarning,
  MHighlightAskRestore,

  MHighlightEditTitle,
  MHighlightMasks,
  MHighlightIncludeAttr,
  MHighlightRO,
  MHighlightHidden,
  MHighlightSystem,
  MHighlightArchive,
  MHighlightCompressed,
  MHighlightEncrypted,
  MHighlightFolder,
  MHighlightExcludeAttr,
  MHighlightColors,
  MHighlightNormal,
  MHighlightSelected,
  MHighlightCursor,
  MHighlightSelectedCursor,
  MHighlightMarkChar,

  MInfoTitle,
  MInfoCompName,
  MInfoUserName,
  MInfoRemovable,
  MInfoFixed,
  MInfoNetwork,
  MInfoCDROM,
  MInfoRAM,
  MInfoDisk,
  MInfoDiskTotal,
  MInfoDiskFree,
  MInfoDiskLabel,
  MInfoDiskNumber,
  MInfoMemory,
  MInfoMemoryLoad,
  MInfoMemoryTotal,
  MInfoMemoryFree,
  MInfoVirtualTotal,
  MInfoVirtualFree,
  MInfoDizAbsent,

  MErrorInvalidFunction,
  MErrorBadCommand,
  MErrorFileNotFound,
  MErrorPathNotFound,
  MErrorTooManyOpenFiles,
  MErrorAccessDenied,
  MErrorNotEnoughMemory,
  MErrorDiskRO,
  MErrorDeviceNotReady,
  MErrorCannotAccessDisk,
  MErrorSectorNotFound,
  MErrorOutOfPaper,
  MErrorWrite,
  MErrorRead,
  MErrorDeviceGeneral,
  MErrorFileSharing,
  MErrorNetworkPathNotFound,
  MErrorNetworkBusy,
  MErrorNetworkAccessDenied,
  MErrorNetworkWrite,
  MErrorDiskLocked,
  MErrorFileExists,
  MErrorInvalidName,
  MErrorInsufficientDiskSpace,
  MErrorFolderNotEmpty,
  MErrorIncorrectUserName,
  MErrorIncorrectPassword,
  MErrorLoginFailure,
  MErrorConnectionAborted,
  MErrorCancelled,
  MErrorNetAbsent,
  MErrorNetDeviceInUse,
  MErrorNetOpenFiles,
  MErrorAlreadyAssigned,
  MErrorAlreadyRemebered,
  MErrorNotLoggedOn,
  MErrorInvalidPassword,

  MCannotExecute,
  MScanningFolder,

  MMakeFolderTitle,
  MCreateFolder,
  MCannotCreateFolder,

  MMenuBriefView,
  MMenuMediumView,
  MMenuFullView,
  MMenuWideView,
  MMenuDetailedView,
  MMenuDizView,
  MMenuLongDizView,
  MMenuOwnersView,
  MMenuLinksView,
  MMenuAlternativeView,

  MMenuInfoPanel,
  MMenuTreePanel,
  MMenuQuickView,
  MMenuSortModes,
  MMenuLongNames,
  MMenuTogglePanel,
  MMenuReread,
  MMenuChangeDrive,

  MMenuView,
  MMenuEdit,
  MMenuCopy,
  MMenuMove,
  MMenuCreateFolder,
  MMenuDelete,
  MMenuAdd,
  MMenuExtract,
  MMenuArchiveCommands,
  MMenuAttributes,
  MMenuApplyCommand,
  MMenuDescribe,
  MMenuSelectGroup,
  MMenuUnselectGroup,
  MMenuInvertSelection,
  MMenuRestoreSelection,

  MMenuFindFile,
  MMenuHistory,
  MMenuVideoMode,
  MMenuFindFolder,
  MMenuViewHistory,
  MMenuFoldersHistory,
  MMenuSwapPanels,
  MMenuTogglePanels,
  MMenuCompareFolders,
  MMenuUserMenu,
  MMenuFileAssociations,
  MMenuFolderShortcuts,
  MMenuEditSortGroups,
  MMenuFilter,
  MMenuPluginCommands,
  MMenuWindowsList,
  MMenuProcessList,

  MMenuSystemSettings,
  MMenuPanelSettings,
  MMenuInterface,
  MMenuLanguages,
  MMenuPluginsConfig,
  MMenuConfirmation,
  MMenuFilePanelModes,
  MMenuFileDescriptions,
  MMenuFolderInfoFiles,
  MMenuViewer,
  MMenuEditor,
  MMenuColors,
  MMenuFilesHighlighting,
  MMenuSaveSetup,

  MMenuTogglePanelRight,
  MMenuChangeDriveRight,

  MMenuLeftTitle,
  MMenuFilesTitle,
  MMenuCommandsTitle,
  MMenuOptionsTitle,
  MMenuRightTitle,

  MMenuSortTitle,
  MMenuSortByName,
  MMenuSortByExt,
  MMenuSortByModification,
  MMenuSortBySize,
  MMenuUnsorted,
  MMenuSortByCreation,
  MMenuSortByAccess,
  MMenuSortByDiz,
  MMenuSortByOwner,
  MMenuSortByCompressedSize,
  MMenuSortByNumLinks,
  MMenuSortUseGroups,
  MMenuSortSelectedFirst,

  MChangeDriveTitle,
  MChangeDriveRemovable,
  MChangeDriveFixed,
  MChangeDriveNetwork,
  MChangeDriveCDROM,
  MChangeDriveRAM,
  MChangeDriveLabelAbsent,
  MChangeDriveMb,
  MChangeDriveCannotReadDisk,
  MChangeDriveCannotDisconnect,
  MChangeDriveOpenFiles,
  MChangeDriveAskDisconnect,
  MChangeVolumeInUse,
  MChangeVolumeInUse2,
  MChangeCouldNotUnlockMedia,
  MChangeCouldNotEjectMedia,

  MSearchFileTitle,
  MCannotCreateListFile,

  MDragFiles,
  MDragMove,
  MDragCopy,

  MProcessListTitle,
  MKillProcessTitle,
  MAskKillProcess,
  MKillProcessWarning,
  MKillProcessKill,
  MCannotKillProcess,

  MQuickViewTitle,
  MQuickViewFolder,
  MQuickViewContains,
  MQuickViewFolders,
  MQuickViewFiles,
  MQuickViewBytes,
  MQuickViewCompressed,
  MQuickViewCluster,
  MQuickViewRealSize,
  MQuickViewSlack,

  MSetAttrTitle,
  MSetAttrFor,
  MSetAttrRO,
  MSetAttrArchive,
  MSetAttrHidden,
  MSetAttrSystem,
  MSetAttrCompressed,
  MSetAttrEncrypted,
  MSetAttrSubfolders,
  MSetAttrFileTime,
  MSetAttrModification,
  MSetAttrCreation,
  MSetAttrLastAccess,
  MSetAttrCurrent,
  MSetAttrSet,

  MSetAttrChange,
  MSetAttrSetClear,

  MSetAttrTimeTitle1,
  MSetAttrTimeTitle2,
  MSetAttrTimeTitle3,

  MSetAttrSetting,
  MSetAttrCannotFor,
  MSetAttrCompressedCannotFor,
  MSetAttrEncryptedCannotFor,
  MSetAttrTimeCannotFor,

  MSetColorPanel,
  MSetColorDialog,
  MSetColorWarning,
  MSetColorMenu,
  MSetColorHMenu,
  MSetColorKeyBar,
  MSetColorCommandLine,
  MSetColorClock,
  MSetColorViewer,
  MSetColorEditor,
  MSetColorHelp,
  MSetDefaultColors,
  MSetBW,

  MSetColorPanelNormal,
  MSetColorPanelSelected,
  MSetColorPanelHighlightedInfo,
  MSetColorPanelDragging,
  MSetColorPanelBox,
  MSetColorPanelNormalCursor,
  MSetColorPanelSelectedCursor,
  MSetColorPanelNormalTitle,
  MSetColorPanelSelectedTitle,
  MSetColorPanelColumnTitle,
  MSetColorPanelTotalInfo,
  MSetColorPanelSelectedInfo,
  MSetColorPanelScrollbar,
  MSetColorPanelScreensNumber,

  MSetColorDialogNormal,
  MSetColorDialogHighlighted,
  MSetColorDialogBox,
  MSetColorDialogBoxTitle,
  MSetColorDialogHighlightedBoxTitle,
  MSetColorDialogTextInput,
  MSetColorDialogUnchangedTextInput,
  MSetColorDialogSelectedTextInput,
  MSetColorDialogButtons,
  MSetColorDialogSelectedButtons,
  MSetColorDialogHighlightedButtons,
  MSetColorDialogSelectedHighlightedButtons,
  MSetColorDialogListText,
  MSetColorDialogSelectedListText,
  MSetColorDialogMenuHighLight,
  MSetColorDialogMenuSelectedHighLight,
  MSetColorDialogMenuScrollBar,
  MSetColorDialogDisabled,
  MSetColorDialogEditDisabled,
  MSetColorDialogListDisabled,

  MSetColorWarningNormal,
  MSetColorWarningHighlighted,
  MSetColorWarningBox,
  MSetColorWarningBoxTitle,
  MSetColorWarningHighlightedBoxTitle,
  MSetColorWarningTextInput,
  MSetColorWarningButtons,
  MSetColorWarningSelectedButtons,
  MSetColorWarningHighlightedButtons,
  MSetColorWarningSelectedHighlightedButtons,
  MSetColorWarningDisabled,
  MSetColorWarningEditDisabled,
  MSetColorWarningListDisabled,

  MSetColorMenuNormal,
  MSetColorMenuSelected,
  MSetColorMenuHighlighted,
  MSetColorMenuSelectedHighlighted,
  MSetColorMenuBox,
  MSetColorMenuTitle,
  MSetColorMenuScrollBar,

  MSetColorHMenuNormal,
  MSetColorHMenuSelected,
  MSetColorHMenuHighlighted,
  MSetColorHMenuSelectedHighlighted,

  MSetColorKeyBarNumbers,
  MSetColorKeyBarNames,
  MSetColorKeyBarBackground,

  MSetColorCommandLineNormal,
  MSetColorCommandLineSelected,
  MSetColorCommandLinePrefix,

  MSetColorClockNormal,

  MSetColorViewerNormal,
  MSetColorViewerSelected,
  MSetColorViewerStatus,
  MSetColorViewerArrows,
  MSetColorViewerScrollbar,

  MSetColorEditorNormal,
  MSetColorEditorSelected,
  MSetColorEditorStatus,

  MSetColorHelpNormal,
  MSetColorHelpHighlighted,
  MSetColorHelpReference,
  MSetColorHelpSelectedReference,
  MSetColorHelpBox,
  MSetColorHelpBoxTitle,
  MSetColorHelpScrollbar,

  MSetColorGroupsTitle,
  MSetColorItemsTitle,

  MSetColorTitle,
  MSetColorForeground,
  MSetColorBackground,
  MSetColorSample,
  MSetColorSet,
  MSetColorCancel,

  MSetConfirmTitle,
  MSetConfirmCopy,
  MSetConfirmMove,
  MSetConfirmDrag,
  MSetConfirmDelete,
  MSetConfirmDeleteFolders,
  MSetConfirmExit,

  MFindFolderTitle,
  MTreeTitle,
  MCannotSaveTree,
  MReadingTree,

  MUserMenuTitle,
  MChooseMenuType,
  MChooseMenuMain,
  MChooseMenuLocal,
  MMainMenuTitle,
  MMainMenuFAR,
  MMainMenuREG,
  MLocalMenuTitle,
  MAskDeleteMenuItem,

  MEditMenuTitle,
  MEditMenuHotKey,
  MEditMenuLabel,
  MEditMenuCommands,

  MAskInsertMenuOrCommand,
  MMenuInsertCommand,
  MMenuInsertMenu,

  MEditSubmenuTitle,
  MEditSubmenuHotKey,
  MEditSubmenuLabel,

  MViewerTitle,
  MViewerCannotOpenFile,
  MViewerStatusCol,

  MViewSearchTitle,
  MViewSearchFor,
  MViewSearchForText,
  MViewSearchForHex,
  MViewSearchCase,
  MViewSearchWholeWords,
  MViewSearchReverse,
  MViewSearchSearch,
  MViewSearchCancel,

  MViewSearchingFor,
  MViewSearchCannotFind,

  MPrintTitle,
  MPrintTo,
  MPrintFilesTo,
  MPreparingForPrinting,
  MJobs,
  MCannotOpenPrinter,
  MCannotPrint,

  MSortGroupsTitle,
  MSortGroupsBottom,

  MSortGroupsAskDel,
  MSortGroupsEnter,

  MDescribeFiles,
  MEnterDescription,

  MReadingDiz,
  MCannotUpdateDiz,

  MCfgDizTitle,
  MCfgDizListNames,
  MCfgDizSetHidden,
  MCfgDizStartPos,
  MCfgDizNotUpdate,
  MCfgDizUpdateIfDisplayed,
  MCfgDizAlwaysUpdate,

  MReadingFiles,

  MUserBreakTitle,
  MOperationNotCompleted,

  MEditPanelModes,

  MEditPanelModesBrief,
  MEditPanelModesMedium,
  MEditPanelModesFull,
  MEditPanelModesWide,
  MEditPanelModesDetailed,
  MEditPanelModesDiz,
  MEditPanelModesLongDiz,
  MEditPanelModesOwners,
  MEditPanelModesLinks,
  MEditPanelModesAlternative,

  MEditPanelModeTypes,
  MEditPanelModeWidths,
  MEditPanelModeStatusTypes,
  MEditPanelModeStatusWidths,
  MEditPanelModeFullscreen,
  MEditPanelModeAlignExtensions,
  MEditPanelModeFoldersUpperCase,
  MEditPanelModeFilesLowerCase,
  MEditPanelModeUpperToLowerCase,
  MEditPanelModeCaseSensitiveSort,
  MEditPanelReadHelp,

  MSetFolderInfoTitle,
  MSetFolderInfoNames,

  MScreensTitle,
  MScreensPanels,
  MScreensView,
  MScreensEdit,

  MAskApplyCommandTitle,
  MAskApplyCommand,

  MPluginConfigTitle,
  MPluginCommandsMenuTitle,

  MPreparingList,

  MLangTitle,
  MHelpLangTitle,

  MDefineMacroTitle,
  MDefineMacro,

  MMacroSettingsTitle,
  MMacroSettingsDisableOutput,
  MMacroSettingsRunAfterStart,
  MMacroSettingsIgnoreCommandLine,
  MMacroSettingsEmptyCommandLine,
  MMacroSettingsNotEmptyCommandLine,
  MMacroSettingsFilePanels,
  MMacroSettingsPluginPanels,

  MPluginsHelpTitle,

  MCannotSaveFile,
  MTextSavedToTemp,

  MRegTitle,
  MRegUser,
  MRegCode,
  MRegFailed,
  MRegThanks,
  MRegOnly,
  MRegOnlyShort,
  MListEval,

  MMonthJan,
  MMonthFeb,
  MMonthMar,
  MMonthApr,
  MMonthMay,
  MMonthJun,
  MMonthJul,
  MMonthAug,
  MMonthSep,
  MMonthOct,
  MMonthNov,
  MMonthDec,

  MPluginHotKeyTitle,
  MPluginHotKey,
  MPluginHotKeyBottom,

  MRightCtrl,

  MViewerGoTo,
  MGoToPercent,
  MGoToHex,
  MGoToDecimal,

  MExceptTitleLoad,
  MExceptTitle,
  MExcTrappedException,
  MExcCheckOnLousys,
  MExcAddress,
  MExcUnload,
  MExcUnloadYes,
  MExcRAccess,
  MExcWAccess,
  MExcOutOfBounds,
  MExcDivideByZero,
  MExcStackOverflow,
  MExcDebugger,

  MReadFolderError,
  MPlgBadVers,
  MPlgRequired,

  MBuffSizeTooSmall_1,
  MBuffSizeTooSmall_2,

  MCheckBox2State,
  MEditInputSize,
};

#endif	// __FARLANG_HPP__
