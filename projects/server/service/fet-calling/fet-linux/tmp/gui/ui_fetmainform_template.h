/********************************************************************************
** Form generated from reading UI file 'fetmainform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FETMAINFORM_TEMPLATE_H
#define UI_FETMAINFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FetMainForm_template
{
public:
    QAction *fileNewAction;
    QAction *fileOpenAction;
    QAction *fileSaveAction;
    QAction *fileSaveAsAction;
    QAction *fileExitAction;
    QAction *helpFAQAction;
    QAction *helpAboutAction;
    QAction *dataTeachersAction;
    QAction *dataSubjectsAction;
    QAction *dataYearsAction;
    QAction *dataGroupsAction;
    QAction *dataSubgroupsAction;
    QAction *dataActivitiesAction;
    QAction *timetableGenerateAction;
    QAction *timetableViewStudentsAction;
    QAction *timetableViewTeachersAction;
    QAction *timetableShowConflictsAction;
    QAction *dataDaysAction;
    QAction *dataHoursAction;
    QAction *dataRoomsAction;
    QAction *timetableViewRoomsAction;
    QAction *dataTimeConstraintsActivitiesPreferredTimeSlotsAction;
    QAction *dataTimeConstraintsActivitiesSameStartingTimeAction;
    QAction *dataTimeConstraintsActivitiesOccupyMaxTimeSlotsFromSelectionAction;
    QAction *dataTimeConstraintsActivitiesMaxSimultaneousInSelectedTimeSlotsAction;
    QAction *dataAllTimeConstraintsAction;
    QAction *dataTimeConstraintsTeacherNotAvailableTimesAction;
    QAction *dataTimeConstraintsBasicCompulsoryTimeAction;
    QAction *dataTimeConstraintsStudentsSetNotAvailableTimesAction;
    QAction *dataTimeConstraintsBreakTimesAction;
    QAction *dataTimeConstraintsTeacherMaxDaysPerWeekAction;
    QAction *dataTimeConstraintsTeachersMaxHoursDailyAction;
    QAction *dataTimeConstraintsActivityPreferredStartingTimeAction;
    QAction *dataTimeConstraintsStudentsSetMaxGapsPerWeekAction;
    QAction *dataTimeConstraintsStudentsMaxGapsPerWeekAction;
    QAction *dataTimeConstraintsStudentsEarlyMaxBeginningsAtSecondHourAction;
    QAction *dataTimeConstraintsActivitiesNotOverlappingAction;
    QAction *dataTimeConstraintsMinDaysBetweenActivitiesAction;
    QAction *dataAllSpaceConstraintsAction;
    QAction *dataSpaceConstraintsBasicCompulsorySpaceAction;
    QAction *dataSpaceConstraintsRoomNotAvailableTimesAction;
    QAction *dataSpaceConstraintsActivityPreferredRoomAction;
    QAction *dataTimeConstraintsActivitiesSameStartingHourAction;
    QAction *dataActivityTagsAction;
    QAction *dataInstitutionNameAction;
    QAction *dataCommentsAction;
    QAction *dataSpaceConstraintsActivityPreferredRoomsAction;
    QAction *dataSpaceConstraintsStudentsSetHomeRoomAction;
    QAction *dataSpaceConstraintsStudentsSetHomeRoomsAction;
    QAction *dataTeachersStatisticsAction;
    QAction *dataStudentsStatisticsAction;
    QAction *dataSubjectsStatisticsAction;
    QAction *dataTimeConstraintsTeachersMaxGapsPerWeekAction;
    QAction *dataTimeConstraintsTeacherMaxGapsPerWeekAction;
    QAction *dataTimeConstraintsStudentsSetEarlyMaxBeginningsAtSecondHourAction;
    QAction *dataTimeConstraintsTeacherMaxHoursDailyAction;
    QAction *dataTimeConstraintsStudentsSetMaxHoursDailyAction;
    QAction *dataTimeConstraintsStudentsMaxHoursDailyAction;
    QAction *helpInstructionsAction;
    QAction *checkForUpdatesAction;
    QAction *dataTimeConstraintsStudentsMinHoursDailyAction;
    QAction *dataTimeConstraintsStudentsSetMinHoursDailyAction;
    QAction *timetableGenerateMultipleAction;
    QAction *dataTimeConstraintsTwoActivitiesConsecutiveAction;
    QAction *dataTimeConstraintsActivityEndsStudentsDayAction;
    QAction *settingsRestoreDefaultsAction;
    QAction *settingsTimetableHtmlLevelAction;
    QAction *dataTimeConstraintsTeachersMinHoursDailyAction;
    QAction *dataTimeConstraintsTeacherMinHoursDailyAction;
    QAction *dataHelpOnStatisticsAction;
    QAction *dataTimeConstraintsTeachersMaxGapsPerDayAction;
    QAction *dataTimeConstraintsTeacherMaxGapsPerDayAction;
    QAction *dataTimeConstraintsTeacherMaxSpanPerDayAction;
    QAction *dataTimeConstraintsTeachersMaxSpanPerDayAction;
    QAction *dataTimeConstraintsStudentsSetMaxSpanPerDayAction;
    QAction *dataTimeConstraintsStudentsMaxSpanPerDayAction;
    QAction *dataTimeConstraintsTeacherMinRestingHoursAction;
    QAction *dataTimeConstraintsTeachersMinRestingHoursAction;
    QAction *dataTimeConstraintsStudentsSetMinRestingHoursAction;
    QAction *dataTimeConstraintsStudentsMinRestingHoursAction;
    QAction *dataBuildingsAction;
    QAction *dataSpaceConstraintsSubjectPreferredRoomAction;
    QAction *dataSpaceConstraintsSubjectPreferredRoomsAction;
    QAction *dataSpaceConstraintsSubjectActivityTagPreferredRoomAction;
    QAction *dataSpaceConstraintsSubjectActivityTagPreferredRoomsAction;
    QAction *dataSpaceConstraintsTeacherHomeRoomAction;
    QAction *dataSpaceConstraintsTeacherHomeRoomsAction;
    QAction *dataSpaceConstraintsStudentsSetMaxBuildingChangesPerDayAction;
    QAction *dataSpaceConstraintsStudentsMaxBuildingChangesPerDayAction;
    QAction *dataSpaceConstraintsStudentsSetMaxBuildingChangesPerWeekAction;
    QAction *dataSpaceConstraintsStudentsMaxBuildingChangesPerWeekAction;
    QAction *dataSpaceConstraintsStudentsSetMinGapsBetweenBuildingChangesAction;
    QAction *dataSpaceConstraintsStudentsMinGapsBetweenBuildingChangesAction;
    QAction *dataSpaceConstraintsTeacherMaxBuildingChangesPerDayAction;
    QAction *dataSpaceConstraintsTeachersMaxBuildingChangesPerDayAction;
    QAction *dataSpaceConstraintsTeacherMaxBuildingChangesPerWeekAction;
    QAction *dataSpaceConstraintsTeachersMaxBuildingChangesPerWeekAction;
    QAction *dataSpaceConstraintsTeacherMinGapsBetweenBuildingChangesAction;
    QAction *dataSpaceConstraintsTeachersMinGapsBetweenBuildingChangesAction;
    QAction *dataTimeConstraintsActivitiesSameStartingDayAction;
    QAction *timetableSaveTimetableAsAction;
    QAction *dataTimeConstraintsTwoActivitiesOrderedAction;
    QAction *dataTimeConstraintsTeachersMaxHoursContinuouslyAction;
    QAction *dataTimeConstraintsTeacherMaxHoursContinuouslyAction;
    QAction *dataTimeConstraintsStudentsSetMaxHoursContinuouslyAction;
    QAction *dataTimeConstraintsStudentsMaxHoursContinuouslyAction;
    QAction *helpTipsAction;
    QAction *dataTimeConstraintsActivitiesPreferredStartingTimesAction;
    QAction *dataTimeConstraintsActivityPreferredTimeSlotsAction;
    QAction *dataTimeConstraintsActivityPreferredStartingTimesAction;
    QAction *dataTimeConstraintsMinGapsBetweenActivitiesAction;
    QAction *fileExportCSVAction;
    QAction *fileImportCSVActivitiesAction;
    QAction *fileImportCSVActivityTagsAction;
    QAction *fileImportCSVRoomsBuildingsAction;
    QAction *fileImportCSVSubjectsAction;
    QAction *fileImportCSVTeachersAction;
    QAction *fileImportCSVYearsGroupsSubgroupsAction;
    QAction *dataTimeConstraintsSubactivitiesPreferredTimeSlotsAction;
    QAction *dataTimeConstraintsSubactivitiesPreferredStartingTimesAction;
    QAction *dataTimeConstraintsTeacherIntervalMaxDaysPerWeekAction;
    QAction *dataTimeConstraintsTeachersIntervalMaxDaysPerWeekAction;
    QAction *dataTimeConstraintsStudentsSetIntervalMaxDaysPerWeekAction;
    QAction *dataTimeConstraintsStudentsIntervalMaxDaysPerWeekAction;
    QAction *dataTimeConstraintsActivitiesEndStudentsDayAction;
    QAction *settingsPrintNotAvailableSlotsAction;
    QAction *spreadActivitiesAction;
    QAction *statisticsExportToDiskAction;
    QAction *removeRedundantConstraintsAction;
    QAction *dataTimeConstraintsTwoActivitiesGroupedAction;
    QAction *timetableLockActivitiesDayAction;
    QAction *timetableUnlockActivitiesDayAction;
    QAction *timetableLockActivitiesEndStudentsDayAction;
    QAction *timetableUnlockActivitiesEndStudentsDayAction;
    QAction *timetableLockAllActivitiesAction;
    QAction *timetableUnlockAllActivitiesAction;
    QAction *dataTimeConstraintsStudentsSetActivityTagMaxHoursContinuouslyAction;
    QAction *dataTimeConstraintsStudentsActivityTagMaxHoursContinuouslyAction;
    QAction *dataTimeConstraintsTeacherActivityTagMaxHoursContinuouslyAction;
    QAction *dataTimeConstraintsTeachersActivityTagMaxHoursContinuouslyAction;
    QAction *dataSubactivitiesAction;
    QAction *languageAction;
    QAction *settingsDivideTimetablesByDaysAction;
    QAction *helpSettingsAction;
    QAction *dataSpaceConstraintsActivityTagPreferredRoomAction;
    QAction *dataSpaceConstraintsActivityTagPreferredRoomsAction;
    QAction *selectOutputDirAction;
    QAction *dataTimeConstraintsTeachersMaxDaysPerWeekAction;
    QAction *settingsPrintActivitiesWithSameStartingTimeAction;
    QAction *dataTimeConstraintsThreeActivitiesGroupedAction;
    QAction *dataTimeConstraintsMaxDaysBetweenActivitiesAction;
    QAction *dataTimeConstraintsTeacherMinDaysPerWeekAction;
    QAction *dataTimeConstraintsTeachersMinDaysPerWeekAction;
    QAction *randomSeedAction;
    QAction *settingsUseColorsAction;
    QAction *dataTimeConstraintsTeacherActivityTagMaxHoursDailyAction;
    QAction *dataTimeConstraintsTeachersActivityTagMaxHoursDailyAction;
    QAction *dataTimeConstraintsStudentsSetActivityTagMaxHoursDailyAction;
    QAction *dataTimeConstraintsStudentsActivityTagMaxHoursDailyAction;
    QAction *dataTimeConstraintsStudentsSetMaxGapsPerDayAction;
    QAction *dataTimeConstraintsStudentsMaxGapsPerDayAction;
    QAction *enableStudentsMaxGapsPerDayAction;
    QAction *enableActivityTagMaxHoursDailyAction;
    QAction *showWarningForNotPerfectConstraintsAction;
    QAction *helpContentsAction;
    QAction *helpForumAction;
    QAction *helpAddressesAction;
    QAction *helpHomepageAction;
    QAction *settingsShowShortcutsOnMainWindowAction;
    QAction *settingsPrintBreakSlotsAction;
    QAction *enableStudentsMinHoursDailyWithAllowEmptyDaysAction;
    QAction *showWarningForStudentsMinHoursDailyWithAllowEmptyDaysAction;
    QAction *activityPlanningAction;
    QAction *settingsConfirmActivityPlanningAction;
    QAction *settingsConfirmSpreadActivitiesAction;
    QAction *settingsConfirmRemoveRedundantAction;
    QAction *settingsConfirmSaveTimetableAction;
    QAction *fileClearRecentFilesListAction;
    QAction *dataActivitiesRoomsStatisticsAction;
    QAction *timetablePrintAction;
    QAction *dataSpaceConstraintsActivitiesOccupyMaxDifferentRoomsAction;
    QAction *dataSpaceConstraintsActivitiesSameRoomIfConsecutiveAction;
    QAction *dataTimeConstraintsStudentsSetMaxDaysPerWeekAction;
    QAction *dataTimeConstraintsStudentsMaxDaysPerWeekAction;
    QAction *settingsPrintActivityTagsAction;
    QAction *statisticsPrintAction;
    QAction *settingsDuplicateVerticalNamesAction;
    QAction *groupActivitiesInInitialOrderAction;
    QAction *enableGroupActivitiesInInitialOrderAction;
    QAction *showWarningForGroupActivitiesInInitialOrderAction;
    QAction *settingsShowSubgroupsInComboBoxesAction;
    QAction *settingsShowSubgroupsInActivityPlanningAction;
    QAction *settingsShowToolTipsForConstraintsWithTablesAction;
    QAction *showWarningForSubgroupsWithTheSameActivitiesAction;
    QAction *timetablesToWriteOnDiskAction;
    QAction *settingsPrintDetailedTimetablesAction;
    QAction *settingsPrintDetailedTeachersFreePeriodsTimetablesAction;
    QAction *dataTeachersSubjectsQualificationsStatisticsAction;
    QWidget *mainwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *horizontalSpacer_11;
    QTabWidget *tabWidget;
    QWidget *fileTab;
    QGridLayout *gridLayout_11;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *horizontalSpacer_9;
    QFrame *frameFile;
    QGridLayout *gridLayout_16;
    QGridLayout *gridLayout_10;
    QFrame *line_7;
    QFrame *line_8;
    QPushButton *shortcutSaveAsPushButton;
    QPushButton *shortcutOpenRecentPushButton;
    QPushButton *shortcutSavePushButton;
    QPushButton *shortcutOpenPushButton;
    QPushButton *shortcutNewPushButton;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_9;
    QWidget *dataTab;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_7;
    QFrame *frameData;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_5;
    QPushButton *shortcutBasicPushButton;
    QPushButton *shortcutActivitiesPushButton;
    QPushButton *shortcutSubjectsPushButton;
    QPushButton *shortcutTeachersPushButton;
    QPushButton *shortcutActivityTagsPushButton;
    QPushButton *shortcutStudentsPushButton;
    QPushButton *shortcutDataSpacePushButton;
    QPushButton *shortcutSubactivitiesPushButton;
    QPushButton *shortcutDataAdvancedPushButton;
    QFrame *line;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_8;
    QWidget *timeConstraintsTab;
    QGridLayout *gridLayout_14;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frameTime;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_3;
    QPushButton *shortcutAllTimeConstraintsPushButton;
    QPushButton *shortcutBreakTimeConstraintsPushButton;
    QPushButton *shortcutTeachersTimeConstraintsPushButton;
    QPushButton *shortcutStudentsTimeConstraintsPushButton;
    QPushButton *shortcutActivitiesTimeConstraintsPushButton;
    QPushButton *shortcutAdvancedTimeConstraintsPushButton;
    QFrame *line_9;
    QFrame *line_10;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QWidget *spaceConstraintsTab;
    QGridLayout *gridLayout_12;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QFrame *frameSpace;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_2;
    QPushButton *shortcutAllSpaceConstraintsPushButton;
    QPushButton *shortcutActivitiesSpaceConstraintsPushButton;
    QPushButton *shortcutRoomsSpaceConstraintsPushButton;
    QPushButton *shortcutTeachersSpaceConstraintsPushButton;
    QPushButton *shortcutStudentsSpaceConstraintsPushButton;
    QPushButton *shortcutSubjectsSpaceConstraintsPushButton;
    QPushButton *shortcutActivityTagsSpaceConstraintsPushButton;
    QPushButton *shortcutSubjectsAndActivityTagsSpaceConstraintsPushButton;
    QFrame *line_4;
    QFrame *line_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *timetableTab;
    QGridLayout *gridLayout_13;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_5;
    QFrame *frameTimetable;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_4;
    QPushButton *shortcutGeneratePushButton;
    QPushButton *shortcutGenerateMultiplePushButton;
    QPushButton *shortcutViewTeachersPushButton;
    QPushButton *shortcutViewStudentsPushButton;
    QPushButton *shortcutShowSoftConflictsPushButton;
    QPushButton *shortcutsTimetableAdvancedPushButton;
    QPushButton *shortcutViewRoomsPushButton;
    QPushButton *shortcutsTimetablePrintPushButton;
    QPushButton *shortcutsTimetableLockingPushButton;
    QFrame *line_5;
    QFrame *line_6;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_11;
    QMenuBar *mainmenubar;
    QMenu *helpMenu;
    QMenu *menu_help_On_line;
    QMenu *fileMenu;
    QMenu *menuExport;
    QMenu *menuImport;
    QMenu *menuImport_CSV;
    QMenu *fileOpenRecentMenu;
    QMenu *timetableMenu;
    QMenu *menuAdvancedLockUnlock;
    QMenu *menuStatistics;
    QMenu *dataMenu;
    QMenu *menuTime_constraints;
    QMenu *menuMisc_time_constraints;
    QMenu *menuTeachers_time_constraints;
    QMenu *menuStudents_time_constraints;
    QMenu *menuActivities_time_constraints;
    QMenu *menuSpace_constraints;
    QMenu *menuMisc_space_constraints;
    QMenu *menuRooms_space_constraints;
    QMenu *menuActivities_space_constraints;
    QMenu *menuSubjects_space_constraints;
    QMenu *menuSubjects_and_activity_tags_space_constraints;
    QMenu *menuStudents_space_constraints;
    QMenu *menuTeachers_space_constraints;
    QMenu *menuActivity_tags_space_constraints;
    QMenu *menuStudents;
    QMenu *menuInstitution_information;
    QMenu *menuDays_and_hours;
    QMenu *menuSettings;
    QMenu *menuSettingsAdvanced;
    QMenu *menuFET_interface;
    QMenu *menuTimetables;
    QMenu *menuConfirmations;
    QMenu *menuAdvanced;
    QStatusBar *defaultStatusBar;

    void setupUi(QMainWindow *FetMainForm_template)
    {
        if (FetMainForm_template->objectName().isEmpty())
            FetMainForm_template->setObjectName(QStringLiteral("FetMainForm_template"));
        FetMainForm_template->resize(560, 338);
        fileNewAction = new QAction(FetMainForm_template);
        fileNewAction->setObjectName(QStringLiteral("fileNewAction"));
        fileOpenAction = new QAction(FetMainForm_template);
        fileOpenAction->setObjectName(QStringLiteral("fileOpenAction"));
        fileSaveAction = new QAction(FetMainForm_template);
        fileSaveAction->setObjectName(QStringLiteral("fileSaveAction"));
        fileSaveAsAction = new QAction(FetMainForm_template);
        fileSaveAsAction->setObjectName(QStringLiteral("fileSaveAsAction"));
        fileExitAction = new QAction(FetMainForm_template);
        fileExitAction->setObjectName(QStringLiteral("fileExitAction"));
        helpFAQAction = new QAction(FetMainForm_template);
        helpFAQAction->setObjectName(QStringLiteral("helpFAQAction"));
        helpAboutAction = new QAction(FetMainForm_template);
        helpAboutAction->setObjectName(QStringLiteral("helpAboutAction"));
        dataTeachersAction = new QAction(FetMainForm_template);
        dataTeachersAction->setObjectName(QStringLiteral("dataTeachersAction"));
        dataSubjectsAction = new QAction(FetMainForm_template);
        dataSubjectsAction->setObjectName(QStringLiteral("dataSubjectsAction"));
        dataYearsAction = new QAction(FetMainForm_template);
        dataYearsAction->setObjectName(QStringLiteral("dataYearsAction"));
        dataGroupsAction = new QAction(FetMainForm_template);
        dataGroupsAction->setObjectName(QStringLiteral("dataGroupsAction"));
        dataSubgroupsAction = new QAction(FetMainForm_template);
        dataSubgroupsAction->setObjectName(QStringLiteral("dataSubgroupsAction"));
        dataActivitiesAction = new QAction(FetMainForm_template);
        dataActivitiesAction->setObjectName(QStringLiteral("dataActivitiesAction"));
        timetableGenerateAction = new QAction(FetMainForm_template);
        timetableGenerateAction->setObjectName(QStringLiteral("timetableGenerateAction"));
        timetableViewStudentsAction = new QAction(FetMainForm_template);
        timetableViewStudentsAction->setObjectName(QStringLiteral("timetableViewStudentsAction"));
        timetableViewTeachersAction = new QAction(FetMainForm_template);
        timetableViewTeachersAction->setObjectName(QStringLiteral("timetableViewTeachersAction"));
        timetableShowConflictsAction = new QAction(FetMainForm_template);
        timetableShowConflictsAction->setObjectName(QStringLiteral("timetableShowConflictsAction"));
        dataDaysAction = new QAction(FetMainForm_template);
        dataDaysAction->setObjectName(QStringLiteral("dataDaysAction"));
        dataHoursAction = new QAction(FetMainForm_template);
        dataHoursAction->setObjectName(QStringLiteral("dataHoursAction"));
        dataRoomsAction = new QAction(FetMainForm_template);
        dataRoomsAction->setObjectName(QStringLiteral("dataRoomsAction"));
        dataRoomsAction->setEnabled(true);
        timetableViewRoomsAction = new QAction(FetMainForm_template);
        timetableViewRoomsAction->setObjectName(QStringLiteral("timetableViewRoomsAction"));
        timetableViewRoomsAction->setEnabled(true);
        dataTimeConstraintsActivitiesPreferredTimeSlotsAction = new QAction(FetMainForm_template);
        dataTimeConstraintsActivitiesPreferredTimeSlotsAction->setObjectName(QStringLiteral("dataTimeConstraintsActivitiesPreferredTimeSlotsAction"));
        dataTimeConstraintsActivitiesSameStartingTimeAction = new QAction(FetMainForm_template);
        dataTimeConstraintsActivitiesSameStartingTimeAction->setObjectName(QStringLiteral("dataTimeConstraintsActivitiesSameStartingTimeAction"));
        dataTimeConstraintsActivitiesOccupyMaxTimeSlotsFromSelectionAction = new QAction(FetMainForm_template);
        dataTimeConstraintsActivitiesOccupyMaxTimeSlotsFromSelectionAction->setObjectName(QStringLiteral("dataTimeConstraintsActivitiesOccupyMaxTimeSlotsFromSelectionAction"));
        dataTimeConstraintsActivitiesMaxSimultaneousInSelectedTimeSlotsAction = new QAction(FetMainForm_template);
        dataTimeConstraintsActivitiesMaxSimultaneousInSelectedTimeSlotsAction->setObjectName(QStringLiteral("dataTimeConstraintsActivitiesMaxSimultaneousInSelectedTimeSlotsAction"));
        dataAllTimeConstraintsAction = new QAction(FetMainForm_template);
        dataAllTimeConstraintsAction->setObjectName(QStringLiteral("dataAllTimeConstraintsAction"));
        dataTimeConstraintsTeacherNotAvailableTimesAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeacherNotAvailableTimesAction->setObjectName(QStringLiteral("dataTimeConstraintsTeacherNotAvailableTimesAction"));
        dataTimeConstraintsBasicCompulsoryTimeAction = new QAction(FetMainForm_template);
        dataTimeConstraintsBasicCompulsoryTimeAction->setObjectName(QStringLiteral("dataTimeConstraintsBasicCompulsoryTimeAction"));
        dataTimeConstraintsStudentsSetNotAvailableTimesAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsSetNotAvailableTimesAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsSetNotAvailableTimesAction"));
        dataTimeConstraintsBreakTimesAction = new QAction(FetMainForm_template);
        dataTimeConstraintsBreakTimesAction->setObjectName(QStringLiteral("dataTimeConstraintsBreakTimesAction"));
        dataTimeConstraintsTeacherMaxDaysPerWeekAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeacherMaxDaysPerWeekAction->setObjectName(QStringLiteral("dataTimeConstraintsTeacherMaxDaysPerWeekAction"));
        dataTimeConstraintsTeachersMaxHoursDailyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeachersMaxHoursDailyAction->setObjectName(QStringLiteral("dataTimeConstraintsTeachersMaxHoursDailyAction"));
        dataTimeConstraintsActivityPreferredStartingTimeAction = new QAction(FetMainForm_template);
        dataTimeConstraintsActivityPreferredStartingTimeAction->setObjectName(QStringLiteral("dataTimeConstraintsActivityPreferredStartingTimeAction"));
        dataTimeConstraintsStudentsSetMaxGapsPerWeekAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsSetMaxGapsPerWeekAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsSetMaxGapsPerWeekAction"));
        dataTimeConstraintsStudentsMaxGapsPerWeekAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsMaxGapsPerWeekAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsMaxGapsPerWeekAction"));
        dataTimeConstraintsStudentsEarlyMaxBeginningsAtSecondHourAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsEarlyMaxBeginningsAtSecondHourAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsEarlyMaxBeginningsAtSecondHourAction"));
        dataTimeConstraintsActivitiesNotOverlappingAction = new QAction(FetMainForm_template);
        dataTimeConstraintsActivitiesNotOverlappingAction->setObjectName(QStringLiteral("dataTimeConstraintsActivitiesNotOverlappingAction"));
        dataTimeConstraintsMinDaysBetweenActivitiesAction = new QAction(FetMainForm_template);
        dataTimeConstraintsMinDaysBetweenActivitiesAction->setObjectName(QStringLiteral("dataTimeConstraintsMinDaysBetweenActivitiesAction"));
        dataAllSpaceConstraintsAction = new QAction(FetMainForm_template);
        dataAllSpaceConstraintsAction->setObjectName(QStringLiteral("dataAllSpaceConstraintsAction"));
        dataAllSpaceConstraintsAction->setEnabled(true);
        dataSpaceConstraintsBasicCompulsorySpaceAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsBasicCompulsorySpaceAction->setObjectName(QStringLiteral("dataSpaceConstraintsBasicCompulsorySpaceAction"));
        dataSpaceConstraintsRoomNotAvailableTimesAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsRoomNotAvailableTimesAction->setObjectName(QStringLiteral("dataSpaceConstraintsRoomNotAvailableTimesAction"));
        dataSpaceConstraintsActivityPreferredRoomAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsActivityPreferredRoomAction->setObjectName(QStringLiteral("dataSpaceConstraintsActivityPreferredRoomAction"));
        dataTimeConstraintsActivitiesSameStartingHourAction = new QAction(FetMainForm_template);
        dataTimeConstraintsActivitiesSameStartingHourAction->setObjectName(QStringLiteral("dataTimeConstraintsActivitiesSameStartingHourAction"));
        dataActivityTagsAction = new QAction(FetMainForm_template);
        dataActivityTagsAction->setObjectName(QStringLiteral("dataActivityTagsAction"));
        dataInstitutionNameAction = new QAction(FetMainForm_template);
        dataInstitutionNameAction->setObjectName(QStringLiteral("dataInstitutionNameAction"));
        dataCommentsAction = new QAction(FetMainForm_template);
        dataCommentsAction->setObjectName(QStringLiteral("dataCommentsAction"));
        dataSpaceConstraintsActivityPreferredRoomsAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsActivityPreferredRoomsAction->setObjectName(QStringLiteral("dataSpaceConstraintsActivityPreferredRoomsAction"));
        dataSpaceConstraintsStudentsSetHomeRoomAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsStudentsSetHomeRoomAction->setObjectName(QStringLiteral("dataSpaceConstraintsStudentsSetHomeRoomAction"));
        dataSpaceConstraintsStudentsSetHomeRoomsAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsStudentsSetHomeRoomsAction->setObjectName(QStringLiteral("dataSpaceConstraintsStudentsSetHomeRoomsAction"));
        dataTeachersStatisticsAction = new QAction(FetMainForm_template);
        dataTeachersStatisticsAction->setObjectName(QStringLiteral("dataTeachersStatisticsAction"));
        dataStudentsStatisticsAction = new QAction(FetMainForm_template);
        dataStudentsStatisticsAction->setObjectName(QStringLiteral("dataStudentsStatisticsAction"));
        dataSubjectsStatisticsAction = new QAction(FetMainForm_template);
        dataSubjectsStatisticsAction->setObjectName(QStringLiteral("dataSubjectsStatisticsAction"));
        dataTimeConstraintsTeachersMaxGapsPerWeekAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeachersMaxGapsPerWeekAction->setObjectName(QStringLiteral("dataTimeConstraintsTeachersMaxGapsPerWeekAction"));
        dataTimeConstraintsTeacherMaxGapsPerWeekAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeacherMaxGapsPerWeekAction->setObjectName(QStringLiteral("dataTimeConstraintsTeacherMaxGapsPerWeekAction"));
        dataTimeConstraintsStudentsSetEarlyMaxBeginningsAtSecondHourAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsSetEarlyMaxBeginningsAtSecondHourAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsSetEarlyMaxBeginningsAtSecondHourAction"));
        dataTimeConstraintsTeacherMaxHoursDailyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeacherMaxHoursDailyAction->setObjectName(QStringLiteral("dataTimeConstraintsTeacherMaxHoursDailyAction"));
        dataTimeConstraintsStudentsSetMaxHoursDailyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsSetMaxHoursDailyAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsSetMaxHoursDailyAction"));
        dataTimeConstraintsStudentsMaxHoursDailyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsMaxHoursDailyAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsMaxHoursDailyAction"));
        helpInstructionsAction = new QAction(FetMainForm_template);
        helpInstructionsAction->setObjectName(QStringLiteral("helpInstructionsAction"));
        checkForUpdatesAction = new QAction(FetMainForm_template);
        checkForUpdatesAction->setObjectName(QStringLiteral("checkForUpdatesAction"));
        checkForUpdatesAction->setCheckable(true);
        checkForUpdatesAction->setChecked(true);
        dataTimeConstraintsStudentsMinHoursDailyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsMinHoursDailyAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsMinHoursDailyAction"));
        dataTimeConstraintsStudentsSetMinHoursDailyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsSetMinHoursDailyAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsSetMinHoursDailyAction"));
        timetableGenerateMultipleAction = new QAction(FetMainForm_template);
        timetableGenerateMultipleAction->setObjectName(QStringLiteral("timetableGenerateMultipleAction"));
        dataTimeConstraintsTwoActivitiesConsecutiveAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTwoActivitiesConsecutiveAction->setObjectName(QStringLiteral("dataTimeConstraintsTwoActivitiesConsecutiveAction"));
        dataTimeConstraintsActivityEndsStudentsDayAction = new QAction(FetMainForm_template);
        dataTimeConstraintsActivityEndsStudentsDayAction->setObjectName(QStringLiteral("dataTimeConstraintsActivityEndsStudentsDayAction"));
        settingsRestoreDefaultsAction = new QAction(FetMainForm_template);
        settingsRestoreDefaultsAction->setObjectName(QStringLiteral("settingsRestoreDefaultsAction"));
        settingsTimetableHtmlLevelAction = new QAction(FetMainForm_template);
        settingsTimetableHtmlLevelAction->setObjectName(QStringLiteral("settingsTimetableHtmlLevelAction"));
        dataTimeConstraintsTeachersMinHoursDailyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeachersMinHoursDailyAction->setObjectName(QStringLiteral("dataTimeConstraintsTeachersMinHoursDailyAction"));
        dataTimeConstraintsTeacherMinHoursDailyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeacherMinHoursDailyAction->setObjectName(QStringLiteral("dataTimeConstraintsTeacherMinHoursDailyAction"));
        dataHelpOnStatisticsAction = new QAction(FetMainForm_template);
        dataHelpOnStatisticsAction->setObjectName(QStringLiteral("dataHelpOnStatisticsAction"));
        dataTimeConstraintsTeachersMaxGapsPerDayAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeachersMaxGapsPerDayAction->setObjectName(QStringLiteral("dataTimeConstraintsTeachersMaxGapsPerDayAction"));
        dataTimeConstraintsTeacherMaxGapsPerDayAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeacherMaxGapsPerDayAction->setObjectName(QStringLiteral("dataTimeConstraintsTeacherMaxGapsPerDayAction"));
        dataTimeConstraintsTeacherMaxSpanPerDayAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeacherMaxSpanPerDayAction->setObjectName(QStringLiteral("dataTimeConstraintsTeacherMaxSpanPerDayAction"));
        dataTimeConstraintsTeachersMaxSpanPerDayAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeachersMaxSpanPerDayAction->setObjectName(QStringLiteral("dataTimeConstraintsTeachersMaxSpanPerDayAction"));
        dataTimeConstraintsStudentsSetMaxSpanPerDayAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsSetMaxSpanPerDayAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsSetMaxSpanPerDayAction"));
        dataTimeConstraintsStudentsMaxSpanPerDayAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsMaxSpanPerDayAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsMaxSpanPerDayAction"));
        dataTimeConstraintsTeacherMinRestingHoursAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeacherMinRestingHoursAction->setObjectName(QStringLiteral("dataTimeConstraintsTeacherMinRestingHoursAction"));
        dataTimeConstraintsTeachersMinRestingHoursAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeachersMinRestingHoursAction->setObjectName(QStringLiteral("dataTimeConstraintsTeachersMinRestingHoursAction"));
        dataTimeConstraintsStudentsSetMinRestingHoursAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsSetMinRestingHoursAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsSetMinRestingHoursAction"));
        dataTimeConstraintsStudentsMinRestingHoursAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsMinRestingHoursAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsMinRestingHoursAction"));
        dataBuildingsAction = new QAction(FetMainForm_template);
        dataBuildingsAction->setObjectName(QStringLiteral("dataBuildingsAction"));
        dataSpaceConstraintsSubjectPreferredRoomAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsSubjectPreferredRoomAction->setObjectName(QStringLiteral("dataSpaceConstraintsSubjectPreferredRoomAction"));
        dataSpaceConstraintsSubjectPreferredRoomsAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsSubjectPreferredRoomsAction->setObjectName(QStringLiteral("dataSpaceConstraintsSubjectPreferredRoomsAction"));
        dataSpaceConstraintsSubjectActivityTagPreferredRoomAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsSubjectActivityTagPreferredRoomAction->setObjectName(QStringLiteral("dataSpaceConstraintsSubjectActivityTagPreferredRoomAction"));
        dataSpaceConstraintsSubjectActivityTagPreferredRoomsAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsSubjectActivityTagPreferredRoomsAction->setObjectName(QStringLiteral("dataSpaceConstraintsSubjectActivityTagPreferredRoomsAction"));
        dataSpaceConstraintsTeacherHomeRoomAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsTeacherHomeRoomAction->setObjectName(QStringLiteral("dataSpaceConstraintsTeacherHomeRoomAction"));
        dataSpaceConstraintsTeacherHomeRoomsAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsTeacherHomeRoomsAction->setObjectName(QStringLiteral("dataSpaceConstraintsTeacherHomeRoomsAction"));
        dataSpaceConstraintsStudentsSetMaxBuildingChangesPerDayAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsStudentsSetMaxBuildingChangesPerDayAction->setObjectName(QStringLiteral("dataSpaceConstraintsStudentsSetMaxBuildingChangesPerDayAction"));
        dataSpaceConstraintsStudentsMaxBuildingChangesPerDayAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsStudentsMaxBuildingChangesPerDayAction->setObjectName(QStringLiteral("dataSpaceConstraintsStudentsMaxBuildingChangesPerDayAction"));
        dataSpaceConstraintsStudentsSetMaxBuildingChangesPerWeekAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsStudentsSetMaxBuildingChangesPerWeekAction->setObjectName(QStringLiteral("dataSpaceConstraintsStudentsSetMaxBuildingChangesPerWeekAction"));
        dataSpaceConstraintsStudentsMaxBuildingChangesPerWeekAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsStudentsMaxBuildingChangesPerWeekAction->setObjectName(QStringLiteral("dataSpaceConstraintsStudentsMaxBuildingChangesPerWeekAction"));
        dataSpaceConstraintsStudentsSetMinGapsBetweenBuildingChangesAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsStudentsSetMinGapsBetweenBuildingChangesAction->setObjectName(QStringLiteral("dataSpaceConstraintsStudentsSetMinGapsBetweenBuildingChangesAction"));
        dataSpaceConstraintsStudentsMinGapsBetweenBuildingChangesAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsStudentsMinGapsBetweenBuildingChangesAction->setObjectName(QStringLiteral("dataSpaceConstraintsStudentsMinGapsBetweenBuildingChangesAction"));
        dataSpaceConstraintsTeacherMaxBuildingChangesPerDayAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsTeacherMaxBuildingChangesPerDayAction->setObjectName(QStringLiteral("dataSpaceConstraintsTeacherMaxBuildingChangesPerDayAction"));
        dataSpaceConstraintsTeachersMaxBuildingChangesPerDayAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsTeachersMaxBuildingChangesPerDayAction->setObjectName(QStringLiteral("dataSpaceConstraintsTeachersMaxBuildingChangesPerDayAction"));
        dataSpaceConstraintsTeacherMaxBuildingChangesPerWeekAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsTeacherMaxBuildingChangesPerWeekAction->setObjectName(QStringLiteral("dataSpaceConstraintsTeacherMaxBuildingChangesPerWeekAction"));
        dataSpaceConstraintsTeachersMaxBuildingChangesPerWeekAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsTeachersMaxBuildingChangesPerWeekAction->setObjectName(QStringLiteral("dataSpaceConstraintsTeachersMaxBuildingChangesPerWeekAction"));
        dataSpaceConstraintsTeacherMinGapsBetweenBuildingChangesAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsTeacherMinGapsBetweenBuildingChangesAction->setObjectName(QStringLiteral("dataSpaceConstraintsTeacherMinGapsBetweenBuildingChangesAction"));
        dataSpaceConstraintsTeachersMinGapsBetweenBuildingChangesAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsTeachersMinGapsBetweenBuildingChangesAction->setObjectName(QStringLiteral("dataSpaceConstraintsTeachersMinGapsBetweenBuildingChangesAction"));
        dataTimeConstraintsActivitiesSameStartingDayAction = new QAction(FetMainForm_template);
        dataTimeConstraintsActivitiesSameStartingDayAction->setObjectName(QStringLiteral("dataTimeConstraintsActivitiesSameStartingDayAction"));
        timetableSaveTimetableAsAction = new QAction(FetMainForm_template);
        timetableSaveTimetableAsAction->setObjectName(QStringLiteral("timetableSaveTimetableAsAction"));
        dataTimeConstraintsTwoActivitiesOrderedAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTwoActivitiesOrderedAction->setObjectName(QStringLiteral("dataTimeConstraintsTwoActivitiesOrderedAction"));
        dataTimeConstraintsTeachersMaxHoursContinuouslyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeachersMaxHoursContinuouslyAction->setObjectName(QStringLiteral("dataTimeConstraintsTeachersMaxHoursContinuouslyAction"));
        dataTimeConstraintsTeacherMaxHoursContinuouslyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeacherMaxHoursContinuouslyAction->setObjectName(QStringLiteral("dataTimeConstraintsTeacherMaxHoursContinuouslyAction"));
        dataTimeConstraintsStudentsSetMaxHoursContinuouslyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsSetMaxHoursContinuouslyAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsSetMaxHoursContinuouslyAction"));
        dataTimeConstraintsStudentsMaxHoursContinuouslyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsMaxHoursContinuouslyAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsMaxHoursContinuouslyAction"));
        helpTipsAction = new QAction(FetMainForm_template);
        helpTipsAction->setObjectName(QStringLiteral("helpTipsAction"));
        dataTimeConstraintsActivitiesPreferredStartingTimesAction = new QAction(FetMainForm_template);
        dataTimeConstraintsActivitiesPreferredStartingTimesAction->setObjectName(QStringLiteral("dataTimeConstraintsActivitiesPreferredStartingTimesAction"));
        dataTimeConstraintsActivityPreferredTimeSlotsAction = new QAction(FetMainForm_template);
        dataTimeConstraintsActivityPreferredTimeSlotsAction->setObjectName(QStringLiteral("dataTimeConstraintsActivityPreferredTimeSlotsAction"));
        dataTimeConstraintsActivityPreferredStartingTimesAction = new QAction(FetMainForm_template);
        dataTimeConstraintsActivityPreferredStartingTimesAction->setObjectName(QStringLiteral("dataTimeConstraintsActivityPreferredStartingTimesAction"));
        dataTimeConstraintsMinGapsBetweenActivitiesAction = new QAction(FetMainForm_template);
        dataTimeConstraintsMinGapsBetweenActivitiesAction->setObjectName(QStringLiteral("dataTimeConstraintsMinGapsBetweenActivitiesAction"));
        fileExportCSVAction = new QAction(FetMainForm_template);
        fileExportCSVAction->setObjectName(QStringLiteral("fileExportCSVAction"));
        fileImportCSVActivitiesAction = new QAction(FetMainForm_template);
        fileImportCSVActivitiesAction->setObjectName(QStringLiteral("fileImportCSVActivitiesAction"));
        fileImportCSVActivityTagsAction = new QAction(FetMainForm_template);
        fileImportCSVActivityTagsAction->setObjectName(QStringLiteral("fileImportCSVActivityTagsAction"));
        fileImportCSVRoomsBuildingsAction = new QAction(FetMainForm_template);
        fileImportCSVRoomsBuildingsAction->setObjectName(QStringLiteral("fileImportCSVRoomsBuildingsAction"));
        fileImportCSVSubjectsAction = new QAction(FetMainForm_template);
        fileImportCSVSubjectsAction->setObjectName(QStringLiteral("fileImportCSVSubjectsAction"));
        fileImportCSVTeachersAction = new QAction(FetMainForm_template);
        fileImportCSVTeachersAction->setObjectName(QStringLiteral("fileImportCSVTeachersAction"));
        fileImportCSVYearsGroupsSubgroupsAction = new QAction(FetMainForm_template);
        fileImportCSVYearsGroupsSubgroupsAction->setObjectName(QStringLiteral("fileImportCSVYearsGroupsSubgroupsAction"));
        dataTimeConstraintsSubactivitiesPreferredTimeSlotsAction = new QAction(FetMainForm_template);
        dataTimeConstraintsSubactivitiesPreferredTimeSlotsAction->setObjectName(QStringLiteral("dataTimeConstraintsSubactivitiesPreferredTimeSlotsAction"));
        dataTimeConstraintsSubactivitiesPreferredStartingTimesAction = new QAction(FetMainForm_template);
        dataTimeConstraintsSubactivitiesPreferredStartingTimesAction->setObjectName(QStringLiteral("dataTimeConstraintsSubactivitiesPreferredStartingTimesAction"));
        dataTimeConstraintsTeacherIntervalMaxDaysPerWeekAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeacherIntervalMaxDaysPerWeekAction->setObjectName(QStringLiteral("dataTimeConstraintsTeacherIntervalMaxDaysPerWeekAction"));
        dataTimeConstraintsTeachersIntervalMaxDaysPerWeekAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeachersIntervalMaxDaysPerWeekAction->setObjectName(QStringLiteral("dataTimeConstraintsTeachersIntervalMaxDaysPerWeekAction"));
        dataTimeConstraintsStudentsSetIntervalMaxDaysPerWeekAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsSetIntervalMaxDaysPerWeekAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsSetIntervalMaxDaysPerWeekAction"));
        dataTimeConstraintsStudentsIntervalMaxDaysPerWeekAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsIntervalMaxDaysPerWeekAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsIntervalMaxDaysPerWeekAction"));
        dataTimeConstraintsActivitiesEndStudentsDayAction = new QAction(FetMainForm_template);
        dataTimeConstraintsActivitiesEndStudentsDayAction->setObjectName(QStringLiteral("dataTimeConstraintsActivitiesEndStudentsDayAction"));
        settingsPrintNotAvailableSlotsAction = new QAction(FetMainForm_template);
        settingsPrintNotAvailableSlotsAction->setObjectName(QStringLiteral("settingsPrintNotAvailableSlotsAction"));
        settingsPrintNotAvailableSlotsAction->setCheckable(true);
        settingsPrintNotAvailableSlotsAction->setChecked(true);
        spreadActivitiesAction = new QAction(FetMainForm_template);
        spreadActivitiesAction->setObjectName(QStringLiteral("spreadActivitiesAction"));
        statisticsExportToDiskAction = new QAction(FetMainForm_template);
        statisticsExportToDiskAction->setObjectName(QStringLiteral("statisticsExportToDiskAction"));
        removeRedundantConstraintsAction = new QAction(FetMainForm_template);
        removeRedundantConstraintsAction->setObjectName(QStringLiteral("removeRedundantConstraintsAction"));
        dataTimeConstraintsTwoActivitiesGroupedAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTwoActivitiesGroupedAction->setObjectName(QStringLiteral("dataTimeConstraintsTwoActivitiesGroupedAction"));
        timetableLockActivitiesDayAction = new QAction(FetMainForm_template);
        timetableLockActivitiesDayAction->setObjectName(QStringLiteral("timetableLockActivitiesDayAction"));
        timetableUnlockActivitiesDayAction = new QAction(FetMainForm_template);
        timetableUnlockActivitiesDayAction->setObjectName(QStringLiteral("timetableUnlockActivitiesDayAction"));
        timetableLockActivitiesEndStudentsDayAction = new QAction(FetMainForm_template);
        timetableLockActivitiesEndStudentsDayAction->setObjectName(QStringLiteral("timetableLockActivitiesEndStudentsDayAction"));
        timetableUnlockActivitiesEndStudentsDayAction = new QAction(FetMainForm_template);
        timetableUnlockActivitiesEndStudentsDayAction->setObjectName(QStringLiteral("timetableUnlockActivitiesEndStudentsDayAction"));
        timetableLockAllActivitiesAction = new QAction(FetMainForm_template);
        timetableLockAllActivitiesAction->setObjectName(QStringLiteral("timetableLockAllActivitiesAction"));
        timetableUnlockAllActivitiesAction = new QAction(FetMainForm_template);
        timetableUnlockAllActivitiesAction->setObjectName(QStringLiteral("timetableUnlockAllActivitiesAction"));
        dataTimeConstraintsStudentsSetActivityTagMaxHoursContinuouslyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsSetActivityTagMaxHoursContinuouslyAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsSetActivityTagMaxHoursContinuouslyAction"));
        dataTimeConstraintsStudentsActivityTagMaxHoursContinuouslyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsActivityTagMaxHoursContinuouslyAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsActivityTagMaxHoursContinuouslyAction"));
        dataTimeConstraintsTeacherActivityTagMaxHoursContinuouslyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeacherActivityTagMaxHoursContinuouslyAction->setObjectName(QStringLiteral("dataTimeConstraintsTeacherActivityTagMaxHoursContinuouslyAction"));
        dataTimeConstraintsTeachersActivityTagMaxHoursContinuouslyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeachersActivityTagMaxHoursContinuouslyAction->setObjectName(QStringLiteral("dataTimeConstraintsTeachersActivityTagMaxHoursContinuouslyAction"));
        dataSubactivitiesAction = new QAction(FetMainForm_template);
        dataSubactivitiesAction->setObjectName(QStringLiteral("dataSubactivitiesAction"));
        languageAction = new QAction(FetMainForm_template);
        languageAction->setObjectName(QStringLiteral("languageAction"));
        settingsDivideTimetablesByDaysAction = new QAction(FetMainForm_template);
        settingsDivideTimetablesByDaysAction->setObjectName(QStringLiteral("settingsDivideTimetablesByDaysAction"));
        settingsDivideTimetablesByDaysAction->setCheckable(true);
        settingsDivideTimetablesByDaysAction->setChecked(true);
        helpSettingsAction = new QAction(FetMainForm_template);
        helpSettingsAction->setObjectName(QStringLiteral("helpSettingsAction"));
        dataSpaceConstraintsActivityTagPreferredRoomAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsActivityTagPreferredRoomAction->setObjectName(QStringLiteral("dataSpaceConstraintsActivityTagPreferredRoomAction"));
        dataSpaceConstraintsActivityTagPreferredRoomsAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsActivityTagPreferredRoomsAction->setObjectName(QStringLiteral("dataSpaceConstraintsActivityTagPreferredRoomsAction"));
        selectOutputDirAction = new QAction(FetMainForm_template);
        selectOutputDirAction->setObjectName(QStringLiteral("selectOutputDirAction"));
        dataTimeConstraintsTeachersMaxDaysPerWeekAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeachersMaxDaysPerWeekAction->setObjectName(QStringLiteral("dataTimeConstraintsTeachersMaxDaysPerWeekAction"));
        settingsPrintActivitiesWithSameStartingTimeAction = new QAction(FetMainForm_template);
        settingsPrintActivitiesWithSameStartingTimeAction->setObjectName(QStringLiteral("settingsPrintActivitiesWithSameStartingTimeAction"));
        settingsPrintActivitiesWithSameStartingTimeAction->setCheckable(true);
        settingsPrintActivitiesWithSameStartingTimeAction->setChecked(true);
        dataTimeConstraintsThreeActivitiesGroupedAction = new QAction(FetMainForm_template);
        dataTimeConstraintsThreeActivitiesGroupedAction->setObjectName(QStringLiteral("dataTimeConstraintsThreeActivitiesGroupedAction"));
        dataTimeConstraintsMaxDaysBetweenActivitiesAction = new QAction(FetMainForm_template);
        dataTimeConstraintsMaxDaysBetweenActivitiesAction->setObjectName(QStringLiteral("dataTimeConstraintsMaxDaysBetweenActivitiesAction"));
        dataTimeConstraintsTeacherMinDaysPerWeekAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeacherMinDaysPerWeekAction->setObjectName(QStringLiteral("dataTimeConstraintsTeacherMinDaysPerWeekAction"));
        dataTimeConstraintsTeachersMinDaysPerWeekAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeachersMinDaysPerWeekAction->setObjectName(QStringLiteral("dataTimeConstraintsTeachersMinDaysPerWeekAction"));
        randomSeedAction = new QAction(FetMainForm_template);
        randomSeedAction->setObjectName(QStringLiteral("randomSeedAction"));
        settingsUseColorsAction = new QAction(FetMainForm_template);
        settingsUseColorsAction->setObjectName(QStringLiteral("settingsUseColorsAction"));
        settingsUseColorsAction->setCheckable(true);
        settingsUseColorsAction->setChecked(true);
        dataTimeConstraintsTeacherActivityTagMaxHoursDailyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeacherActivityTagMaxHoursDailyAction->setObjectName(QStringLiteral("dataTimeConstraintsTeacherActivityTagMaxHoursDailyAction"));
        dataTimeConstraintsTeacherActivityTagMaxHoursDailyAction->setEnabled(true);
        dataTimeConstraintsTeachersActivityTagMaxHoursDailyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsTeachersActivityTagMaxHoursDailyAction->setObjectName(QStringLiteral("dataTimeConstraintsTeachersActivityTagMaxHoursDailyAction"));
        dataTimeConstraintsTeachersActivityTagMaxHoursDailyAction->setEnabled(true);
        dataTimeConstraintsStudentsSetActivityTagMaxHoursDailyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsSetActivityTagMaxHoursDailyAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsSetActivityTagMaxHoursDailyAction"));
        dataTimeConstraintsStudentsSetActivityTagMaxHoursDailyAction->setEnabled(true);
        dataTimeConstraintsStudentsActivityTagMaxHoursDailyAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsActivityTagMaxHoursDailyAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsActivityTagMaxHoursDailyAction"));
        dataTimeConstraintsStudentsActivityTagMaxHoursDailyAction->setEnabled(true);
        dataTimeConstraintsStudentsSetMaxGapsPerDayAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsSetMaxGapsPerDayAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsSetMaxGapsPerDayAction"));
        dataTimeConstraintsStudentsSetMaxGapsPerDayAction->setEnabled(true);
        dataTimeConstraintsStudentsMaxGapsPerDayAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsMaxGapsPerDayAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsMaxGapsPerDayAction"));
        dataTimeConstraintsStudentsMaxGapsPerDayAction->setEnabled(true);
        enableStudentsMaxGapsPerDayAction = new QAction(FetMainForm_template);
        enableStudentsMaxGapsPerDayAction->setObjectName(QStringLiteral("enableStudentsMaxGapsPerDayAction"));
        enableStudentsMaxGapsPerDayAction->setCheckable(true);
        enableStudentsMaxGapsPerDayAction->setChecked(true);
        enableActivityTagMaxHoursDailyAction = new QAction(FetMainForm_template);
        enableActivityTagMaxHoursDailyAction->setObjectName(QStringLiteral("enableActivityTagMaxHoursDailyAction"));
        enableActivityTagMaxHoursDailyAction->setCheckable(true);
        enableActivityTagMaxHoursDailyAction->setChecked(true);
        showWarningForNotPerfectConstraintsAction = new QAction(FetMainForm_template);
        showWarningForNotPerfectConstraintsAction->setObjectName(QStringLiteral("showWarningForNotPerfectConstraintsAction"));
        showWarningForNotPerfectConstraintsAction->setCheckable(true);
        showWarningForNotPerfectConstraintsAction->setChecked(true);
        helpContentsAction = new QAction(FetMainForm_template);
        helpContentsAction->setObjectName(QStringLiteral("helpContentsAction"));
        helpForumAction = new QAction(FetMainForm_template);
        helpForumAction->setObjectName(QStringLiteral("helpForumAction"));
        helpAddressesAction = new QAction(FetMainForm_template);
        helpAddressesAction->setObjectName(QStringLiteral("helpAddressesAction"));
        helpHomepageAction = new QAction(FetMainForm_template);
        helpHomepageAction->setObjectName(QStringLiteral("helpHomepageAction"));
        settingsShowShortcutsOnMainWindowAction = new QAction(FetMainForm_template);
        settingsShowShortcutsOnMainWindowAction->setObjectName(QStringLiteral("settingsShowShortcutsOnMainWindowAction"));
        settingsShowShortcutsOnMainWindowAction->setCheckable(true);
        settingsShowShortcutsOnMainWindowAction->setChecked(true);
        settingsPrintBreakSlotsAction = new QAction(FetMainForm_template);
        settingsPrintBreakSlotsAction->setObjectName(QStringLiteral("settingsPrintBreakSlotsAction"));
        settingsPrintBreakSlotsAction->setCheckable(true);
        settingsPrintBreakSlotsAction->setChecked(true);
        enableStudentsMinHoursDailyWithAllowEmptyDaysAction = new QAction(FetMainForm_template);
        enableStudentsMinHoursDailyWithAllowEmptyDaysAction->setObjectName(QStringLiteral("enableStudentsMinHoursDailyWithAllowEmptyDaysAction"));
        enableStudentsMinHoursDailyWithAllowEmptyDaysAction->setCheckable(true);
        enableStudentsMinHoursDailyWithAllowEmptyDaysAction->setChecked(true);
        showWarningForStudentsMinHoursDailyWithAllowEmptyDaysAction = new QAction(FetMainForm_template);
        showWarningForStudentsMinHoursDailyWithAllowEmptyDaysAction->setObjectName(QStringLiteral("showWarningForStudentsMinHoursDailyWithAllowEmptyDaysAction"));
        showWarningForStudentsMinHoursDailyWithAllowEmptyDaysAction->setCheckable(true);
        showWarningForStudentsMinHoursDailyWithAllowEmptyDaysAction->setChecked(true);
        activityPlanningAction = new QAction(FetMainForm_template);
        activityPlanningAction->setObjectName(QStringLiteral("activityPlanningAction"));
        settingsConfirmActivityPlanningAction = new QAction(FetMainForm_template);
        settingsConfirmActivityPlanningAction->setObjectName(QStringLiteral("settingsConfirmActivityPlanningAction"));
        settingsConfirmActivityPlanningAction->setCheckable(true);
        settingsConfirmActivityPlanningAction->setChecked(true);
        settingsConfirmSpreadActivitiesAction = new QAction(FetMainForm_template);
        settingsConfirmSpreadActivitiesAction->setObjectName(QStringLiteral("settingsConfirmSpreadActivitiesAction"));
        settingsConfirmSpreadActivitiesAction->setCheckable(true);
        settingsConfirmSpreadActivitiesAction->setChecked(true);
        settingsConfirmRemoveRedundantAction = new QAction(FetMainForm_template);
        settingsConfirmRemoveRedundantAction->setObjectName(QStringLiteral("settingsConfirmRemoveRedundantAction"));
        settingsConfirmRemoveRedundantAction->setCheckable(true);
        settingsConfirmRemoveRedundantAction->setChecked(true);
        settingsConfirmSaveTimetableAction = new QAction(FetMainForm_template);
        settingsConfirmSaveTimetableAction->setObjectName(QStringLiteral("settingsConfirmSaveTimetableAction"));
        settingsConfirmSaveTimetableAction->setCheckable(true);
        settingsConfirmSaveTimetableAction->setChecked(true);
        fileClearRecentFilesListAction = new QAction(FetMainForm_template);
        fileClearRecentFilesListAction->setObjectName(QStringLiteral("fileClearRecentFilesListAction"));
        dataActivitiesRoomsStatisticsAction = new QAction(FetMainForm_template);
        dataActivitiesRoomsStatisticsAction->setObjectName(QStringLiteral("dataActivitiesRoomsStatisticsAction"));
        timetablePrintAction = new QAction(FetMainForm_template);
        timetablePrintAction->setObjectName(QStringLiteral("timetablePrintAction"));
        dataSpaceConstraintsActivitiesOccupyMaxDifferentRoomsAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsActivitiesOccupyMaxDifferentRoomsAction->setObjectName(QStringLiteral("dataSpaceConstraintsActivitiesOccupyMaxDifferentRoomsAction"));
        dataSpaceConstraintsActivitiesSameRoomIfConsecutiveAction = new QAction(FetMainForm_template);
        dataSpaceConstraintsActivitiesSameRoomIfConsecutiveAction->setObjectName(QStringLiteral("dataSpaceConstraintsActivitiesSameRoomIfConsecutiveAction"));
        dataTimeConstraintsStudentsSetMaxDaysPerWeekAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsSetMaxDaysPerWeekAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsSetMaxDaysPerWeekAction"));
        dataTimeConstraintsStudentsMaxDaysPerWeekAction = new QAction(FetMainForm_template);
        dataTimeConstraintsStudentsMaxDaysPerWeekAction->setObjectName(QStringLiteral("dataTimeConstraintsStudentsMaxDaysPerWeekAction"));
        settingsPrintActivityTagsAction = new QAction(FetMainForm_template);
        settingsPrintActivityTagsAction->setObjectName(QStringLiteral("settingsPrintActivityTagsAction"));
        settingsPrintActivityTagsAction->setCheckable(true);
        settingsPrintActivityTagsAction->setChecked(true);
        statisticsPrintAction = new QAction(FetMainForm_template);
        statisticsPrintAction->setObjectName(QStringLiteral("statisticsPrintAction"));
        settingsDuplicateVerticalNamesAction = new QAction(FetMainForm_template);
        settingsDuplicateVerticalNamesAction->setObjectName(QStringLiteral("settingsDuplicateVerticalNamesAction"));
        settingsDuplicateVerticalNamesAction->setCheckable(true);
        settingsDuplicateVerticalNamesAction->setChecked(true);
        groupActivitiesInInitialOrderAction = new QAction(FetMainForm_template);
        groupActivitiesInInitialOrderAction->setObjectName(QStringLiteral("groupActivitiesInInitialOrderAction"));
        enableGroupActivitiesInInitialOrderAction = new QAction(FetMainForm_template);
        enableGroupActivitiesInInitialOrderAction->setObjectName(QStringLiteral("enableGroupActivitiesInInitialOrderAction"));
        enableGroupActivitiesInInitialOrderAction->setCheckable(true);
        enableGroupActivitiesInInitialOrderAction->setChecked(true);
        showWarningForGroupActivitiesInInitialOrderAction = new QAction(FetMainForm_template);
        showWarningForGroupActivitiesInInitialOrderAction->setObjectName(QStringLiteral("showWarningForGroupActivitiesInInitialOrderAction"));
        showWarningForGroupActivitiesInInitialOrderAction->setCheckable(true);
        showWarningForGroupActivitiesInInitialOrderAction->setChecked(true);
        settingsShowSubgroupsInComboBoxesAction = new QAction(FetMainForm_template);
        settingsShowSubgroupsInComboBoxesAction->setObjectName(QStringLiteral("settingsShowSubgroupsInComboBoxesAction"));
        settingsShowSubgroupsInComboBoxesAction->setCheckable(true);
        settingsShowSubgroupsInComboBoxesAction->setChecked(true);
        settingsShowSubgroupsInActivityPlanningAction = new QAction(FetMainForm_template);
        settingsShowSubgroupsInActivityPlanningAction->setObjectName(QStringLiteral("settingsShowSubgroupsInActivityPlanningAction"));
        settingsShowSubgroupsInActivityPlanningAction->setCheckable(true);
        settingsShowSubgroupsInActivityPlanningAction->setChecked(true);
        settingsShowToolTipsForConstraintsWithTablesAction = new QAction(FetMainForm_template);
        settingsShowToolTipsForConstraintsWithTablesAction->setObjectName(QStringLiteral("settingsShowToolTipsForConstraintsWithTablesAction"));
        settingsShowToolTipsForConstraintsWithTablesAction->setCheckable(true);
        settingsShowToolTipsForConstraintsWithTablesAction->setChecked(true);
        showWarningForSubgroupsWithTheSameActivitiesAction = new QAction(FetMainForm_template);
        showWarningForSubgroupsWithTheSameActivitiesAction->setObjectName(QStringLiteral("showWarningForSubgroupsWithTheSameActivitiesAction"));
        showWarningForSubgroupsWithTheSameActivitiesAction->setCheckable(true);
        showWarningForSubgroupsWithTheSameActivitiesAction->setChecked(true);
        timetablesToWriteOnDiskAction = new QAction(FetMainForm_template);
        timetablesToWriteOnDiskAction->setObjectName(QStringLiteral("timetablesToWriteOnDiskAction"));
        settingsPrintDetailedTimetablesAction = new QAction(FetMainForm_template);
        settingsPrintDetailedTimetablesAction->setObjectName(QStringLiteral("settingsPrintDetailedTimetablesAction"));
        settingsPrintDetailedTimetablesAction->setCheckable(true);
        settingsPrintDetailedTimetablesAction->setChecked(true);
        settingsPrintDetailedTeachersFreePeriodsTimetablesAction = new QAction(FetMainForm_template);
        settingsPrintDetailedTeachersFreePeriodsTimetablesAction->setObjectName(QStringLiteral("settingsPrintDetailedTeachersFreePeriodsTimetablesAction"));
        settingsPrintDetailedTeachersFreePeriodsTimetablesAction->setCheckable(true);
        settingsPrintDetailedTeachersFreePeriodsTimetablesAction->setChecked(true);
        dataTeachersSubjectsQualificationsStatisticsAction = new QAction(FetMainForm_template);
        dataTeachersSubjectsQualificationsStatisticsAction->setObjectName(QStringLiteral("dataTeachersSubjectsQualificationsStatisticsAction"));
        mainwidget = new QWidget(FetMainForm_template);
        mainwidget->setObjectName(QStringLiteral("mainwidget"));
        gridLayout = new QGridLayout(mainwidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_12 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_12, 0, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(105, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 1, 0, 1, 1);

        tabWidget = new QTabWidget(mainwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setUsesScrollButtons(false);
        fileTab = new QWidget();
        fileTab->setObjectName(QStringLiteral("fileTab"));
        gridLayout_11 = new QGridLayout(fileTab);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        verticalSpacer_10 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_10, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        frameFile = new QFrame(fileTab);
        frameFile->setObjectName(QStringLiteral("frameFile"));
        frameFile->setFrameShape(QFrame::Box);
        frameFile->setFrameShadow(QFrame::Raised);
        gridLayout_16 = new QGridLayout(frameFile);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(16, 16, 16, 16);
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        line_7 = new QFrame(frameFile);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_7, 2, 0, 1, 2);

        line_8 = new QFrame(frameFile);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_8, 5, 0, 1, 2);

        shortcutSaveAsPushButton = new QPushButton(frameFile);
        shortcutSaveAsPushButton->setObjectName(QStringLiteral("shortcutSaveAsPushButton"));

        gridLayout_10->addWidget(shortcutSaveAsPushButton, 7, 1, 1, 1);

        shortcutOpenRecentPushButton = new QPushButton(frameFile);
        shortcutOpenRecentPushButton->setObjectName(QStringLiteral("shortcutOpenRecentPushButton"));

        gridLayout_10->addWidget(shortcutOpenRecentPushButton, 3, 0, 1, 2);

        shortcutSavePushButton = new QPushButton(frameFile);
        shortcutSavePushButton->setObjectName(QStringLiteral("shortcutSavePushButton"));

        gridLayout_10->addWidget(shortcutSavePushButton, 7, 0, 1, 1);

        shortcutOpenPushButton = new QPushButton(frameFile);
        shortcutOpenPushButton->setObjectName(QStringLiteral("shortcutOpenPushButton"));

        gridLayout_10->addWidget(shortcutOpenPushButton, 1, 1, 1, 1);

        shortcutNewPushButton = new QPushButton(frameFile);
        shortcutNewPushButton->setObjectName(QStringLiteral("shortcutNewPushButton"));

        gridLayout_10->addWidget(shortcutNewPushButton, 1, 0, 1, 1);


        gridLayout_16->addLayout(gridLayout_10, 0, 0, 1, 1);


        gridLayout_11->addWidget(frameFile, 1, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_10, 1, 2, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_9, 2, 1, 1, 1);

        tabWidget->addTab(fileTab, QString());
        dataTab = new QWidget();
        dataTab->setObjectName(QStringLiteral("dataTab"));
        gridLayout_6 = new QGridLayout(dataTab);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalSpacer_7 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_7, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_7, 1, 0, 1, 1);

        frameData = new QFrame(dataTab);
        frameData->setObjectName(QStringLiteral("frameData"));
        frameData->setFrameShape(QFrame::Box);
        frameData->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(frameData);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setContentsMargins(16, 16, 16, 16);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        shortcutBasicPushButton = new QPushButton(frameData);
        shortcutBasicPushButton->setObjectName(QStringLiteral("shortcutBasicPushButton"));

        gridLayout_5->addWidget(shortcutBasicPushButton, 0, 0, 1, 1);

        shortcutActivitiesPushButton = new QPushButton(frameData);
        shortcutActivitiesPushButton->setObjectName(QStringLiteral("shortcutActivitiesPushButton"));

        gridLayout_5->addWidget(shortcutActivitiesPushButton, 4, 0, 1, 1);

        shortcutSubjectsPushButton = new QPushButton(frameData);
        shortcutSubjectsPushButton->setObjectName(QStringLiteral("shortcutSubjectsPushButton"));

        gridLayout_5->addWidget(shortcutSubjectsPushButton, 0, 1, 1, 1);

        shortcutTeachersPushButton = new QPushButton(frameData);
        shortcutTeachersPushButton->setObjectName(QStringLiteral("shortcutTeachersPushButton"));

        gridLayout_5->addWidget(shortcutTeachersPushButton, 2, 0, 1, 1);

        shortcutActivityTagsPushButton = new QPushButton(frameData);
        shortcutActivityTagsPushButton->setObjectName(QStringLiteral("shortcutActivityTagsPushButton"));

        gridLayout_5->addWidget(shortcutActivityTagsPushButton, 0, 2, 1, 1);

        shortcutStudentsPushButton = new QPushButton(frameData);
        shortcutStudentsPushButton->setObjectName(QStringLiteral("shortcutStudentsPushButton"));

        gridLayout_5->addWidget(shortcutStudentsPushButton, 2, 1, 1, 1);

        shortcutDataSpacePushButton = new QPushButton(frameData);
        shortcutDataSpacePushButton->setObjectName(QStringLiteral("shortcutDataSpacePushButton"));

        gridLayout_5->addWidget(shortcutDataSpacePushButton, 2, 2, 1, 1);

        shortcutSubactivitiesPushButton = new QPushButton(frameData);
        shortcutSubactivitiesPushButton->setObjectName(QStringLiteral("shortcutSubactivitiesPushButton"));

        gridLayout_5->addWidget(shortcutSubactivitiesPushButton, 4, 1, 1, 1);

        shortcutDataAdvancedPushButton = new QPushButton(frameData);
        shortcutDataAdvancedPushButton->setObjectName(QStringLiteral("shortcutDataAdvancedPushButton"));

        gridLayout_5->addWidget(shortcutDataAdvancedPushButton, 4, 2, 1, 1);

        line = new QFrame(frameData);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line, 1, 0, 1, 3);

        line_2 = new QFrame(frameData);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_2, 3, 0, 1, 3);


        gridLayout_15->addLayout(gridLayout_5, 0, 0, 1, 1);


        gridLayout_6->addWidget(frameData, 1, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_8, 1, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_8, 2, 1, 1, 1);

        tabWidget->addTab(dataTab, QString());
        timeConstraintsTab = new QWidget();
        timeConstraintsTab->setObjectName(QStringLiteral("timeConstraintsTab"));
        gridLayout_14 = new QGridLayout(timeConstraintsTab);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_14->addItem(verticalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        frameTime = new QFrame(timeConstraintsTab);
        frameTime->setObjectName(QStringLiteral("frameTime"));
        frameTime->setFrameShape(QFrame::Box);
        frameTime->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frameTime);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(16, 16, 16, 16);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        shortcutAllTimeConstraintsPushButton = new QPushButton(frameTime);
        shortcutAllTimeConstraintsPushButton->setObjectName(QStringLiteral("shortcutAllTimeConstraintsPushButton"));

        gridLayout_3->addWidget(shortcutAllTimeConstraintsPushButton, 0, 0, 1, 1);

        shortcutBreakTimeConstraintsPushButton = new QPushButton(frameTime);
        shortcutBreakTimeConstraintsPushButton->setObjectName(QStringLiteral("shortcutBreakTimeConstraintsPushButton"));

        gridLayout_3->addWidget(shortcutBreakTimeConstraintsPushButton, 0, 1, 1, 1);

        shortcutTeachersTimeConstraintsPushButton = new QPushButton(frameTime);
        shortcutTeachersTimeConstraintsPushButton->setObjectName(QStringLiteral("shortcutTeachersTimeConstraintsPushButton"));

        gridLayout_3->addWidget(shortcutTeachersTimeConstraintsPushButton, 2, 0, 1, 1);

        shortcutStudentsTimeConstraintsPushButton = new QPushButton(frameTime);
        shortcutStudentsTimeConstraintsPushButton->setObjectName(QStringLiteral("shortcutStudentsTimeConstraintsPushButton"));

        gridLayout_3->addWidget(shortcutStudentsTimeConstraintsPushButton, 2, 1, 1, 1);

        shortcutActivitiesTimeConstraintsPushButton = new QPushButton(frameTime);
        shortcutActivitiesTimeConstraintsPushButton->setObjectName(QStringLiteral("shortcutActivitiesTimeConstraintsPushButton"));

        gridLayout_3->addWidget(shortcutActivitiesTimeConstraintsPushButton, 4, 0, 1, 1);

        shortcutAdvancedTimeConstraintsPushButton = new QPushButton(frameTime);
        shortcutAdvancedTimeConstraintsPushButton->setObjectName(QStringLiteral("shortcutAdvancedTimeConstraintsPushButton"));

        gridLayout_3->addWidget(shortcutAdvancedTimeConstraintsPushButton, 4, 1, 1, 1);

        line_9 = new QFrame(frameTime);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_9, 1, 0, 1, 2);

        line_10 = new QFrame(frameTime);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_10, 3, 0, 1, 2);


        gridLayout_7->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_14->addWidget(frameTime, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_14->addItem(verticalSpacer_3, 2, 1, 1, 1);

        tabWidget->addTab(timeConstraintsTab, QString());
        spaceConstraintsTab = new QWidget();
        spaceConstraintsTab->setObjectName(QStringLiteral("spaceConstraintsTab"));
        gridLayout_12 = new QGridLayout(spaceConstraintsTab);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer, 1, 0, 1, 1);

        frameSpace = new QFrame(spaceConstraintsTab);
        frameSpace->setObjectName(QStringLiteral("frameSpace"));
        frameSpace->setEnabled(true);
        frameSpace->setFrameShape(QFrame::Box);
        frameSpace->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frameSpace);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(16, 16, 16, 16);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        shortcutAllSpaceConstraintsPushButton = new QPushButton(frameSpace);
        shortcutAllSpaceConstraintsPushButton->setObjectName(QStringLiteral("shortcutAllSpaceConstraintsPushButton"));

        gridLayout_2->addWidget(shortcutAllSpaceConstraintsPushButton, 0, 0, 1, 1);

        shortcutActivitiesSpaceConstraintsPushButton = new QPushButton(frameSpace);
        shortcutActivitiesSpaceConstraintsPushButton->setObjectName(QStringLiteral("shortcutActivitiesSpaceConstraintsPushButton"));

        gridLayout_2->addWidget(shortcutActivitiesSpaceConstraintsPushButton, 4, 0, 1, 1);

        shortcutRoomsSpaceConstraintsPushButton = new QPushButton(frameSpace);
        shortcutRoomsSpaceConstraintsPushButton->setObjectName(QStringLiteral("shortcutRoomsSpaceConstraintsPushButton"));

        gridLayout_2->addWidget(shortcutRoomsSpaceConstraintsPushButton, 2, 2, 1, 1);

        shortcutTeachersSpaceConstraintsPushButton = new QPushButton(frameSpace);
        shortcutTeachersSpaceConstraintsPushButton->setObjectName(QStringLiteral("shortcutTeachersSpaceConstraintsPushButton"));

        gridLayout_2->addWidget(shortcutTeachersSpaceConstraintsPushButton, 2, 0, 1, 1);

        shortcutStudentsSpaceConstraintsPushButton = new QPushButton(frameSpace);
        shortcutStudentsSpaceConstraintsPushButton->setObjectName(QStringLiteral("shortcutStudentsSpaceConstraintsPushButton"));

        gridLayout_2->addWidget(shortcutStudentsSpaceConstraintsPushButton, 2, 1, 1, 1);

        shortcutSubjectsSpaceConstraintsPushButton = new QPushButton(frameSpace);
        shortcutSubjectsSpaceConstraintsPushButton->setObjectName(QStringLiteral("shortcutSubjectsSpaceConstraintsPushButton"));

        gridLayout_2->addWidget(shortcutSubjectsSpaceConstraintsPushButton, 0, 1, 1, 1);

        shortcutActivityTagsSpaceConstraintsPushButton = new QPushButton(frameSpace);
        shortcutActivityTagsSpaceConstraintsPushButton->setObjectName(QStringLiteral("shortcutActivityTagsSpaceConstraintsPushButton"));

        gridLayout_2->addWidget(shortcutActivityTagsSpaceConstraintsPushButton, 0, 2, 1, 1);

        shortcutSubjectsAndActivityTagsSpaceConstraintsPushButton = new QPushButton(frameSpace);
        shortcutSubjectsAndActivityTagsSpaceConstraintsPushButton->setObjectName(QStringLiteral("shortcutSubjectsAndActivityTagsSpaceConstraintsPushButton"));

        gridLayout_2->addWidget(shortcutSubjectsAndActivityTagsSpaceConstraintsPushButton, 4, 1, 1, 2);

        line_4 = new QFrame(frameSpace);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 3, 0, 1, 3);

        line_3 = new QFrame(frameSpace);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 1, 0, 1, 3);


        gridLayout_8->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_12->addWidget(frameSpace, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_2, 2, 1, 1, 1);

        tabWidget->addTab(spaceConstraintsTab, QString());
        timetableTab = new QWidget();
        timetableTab->setObjectName(QStringLiteral("timetableTab"));
        gridLayout_13 = new QGridLayout(timetableTab);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_5, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        frameTimetable = new QFrame(timetableTab);
        frameTimetable->setObjectName(QStringLiteral("frameTimetable"));
        frameTimetable->setFrameShape(QFrame::Box);
        frameTimetable->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frameTimetable);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(16, 16, 16, 16);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        shortcutGeneratePushButton = new QPushButton(frameTimetable);
        shortcutGeneratePushButton->setObjectName(QStringLiteral("shortcutGeneratePushButton"));

        gridLayout_4->addWidget(shortcutGeneratePushButton, 0, 0, 1, 1);

        shortcutGenerateMultiplePushButton = new QPushButton(frameTimetable);
        shortcutGenerateMultiplePushButton->setObjectName(QStringLiteral("shortcutGenerateMultiplePushButton"));

        gridLayout_4->addWidget(shortcutGenerateMultiplePushButton, 0, 1, 1, 1);

        shortcutViewTeachersPushButton = new QPushButton(frameTimetable);
        shortcutViewTeachersPushButton->setObjectName(QStringLiteral("shortcutViewTeachersPushButton"));

        gridLayout_4->addWidget(shortcutViewTeachersPushButton, 3, 0, 1, 1);

        shortcutViewStudentsPushButton = new QPushButton(frameTimetable);
        shortcutViewStudentsPushButton->setObjectName(QStringLiteral("shortcutViewStudentsPushButton"));

        gridLayout_4->addWidget(shortcutViewStudentsPushButton, 3, 1, 1, 1);

        shortcutShowSoftConflictsPushButton = new QPushButton(frameTimetable);
        shortcutShowSoftConflictsPushButton->setObjectName(QStringLiteral("shortcutShowSoftConflictsPushButton"));

        gridLayout_4->addWidget(shortcutShowSoftConflictsPushButton, 0, 2, 1, 1);

        shortcutsTimetableAdvancedPushButton = new QPushButton(frameTimetable);
        shortcutsTimetableAdvancedPushButton->setObjectName(QStringLiteral("shortcutsTimetableAdvancedPushButton"));

        gridLayout_4->addWidget(shortcutsTimetableAdvancedPushButton, 5, 2, 1, 1);

        shortcutViewRoomsPushButton = new QPushButton(frameTimetable);
        shortcutViewRoomsPushButton->setObjectName(QStringLiteral("shortcutViewRoomsPushButton"));

        gridLayout_4->addWidget(shortcutViewRoomsPushButton, 3, 2, 1, 1);

        shortcutsTimetablePrintPushButton = new QPushButton(frameTimetable);
        shortcutsTimetablePrintPushButton->setObjectName(QStringLiteral("shortcutsTimetablePrintPushButton"));

        gridLayout_4->addWidget(shortcutsTimetablePrintPushButton, 5, 0, 1, 1);

        shortcutsTimetableLockingPushButton = new QPushButton(frameTimetable);
        shortcutsTimetableLockingPushButton->setObjectName(QStringLiteral("shortcutsTimetableLockingPushButton"));

        gridLayout_4->addWidget(shortcutsTimetableLockingPushButton, 5, 1, 1, 1);

        line_5 = new QFrame(frameTimetable);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_5, 2, 0, 1, 3);

        line_6 = new QFrame(frameTimetable);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_6, 4, 0, 1, 3);


        gridLayout_9->addLayout(gridLayout_4, 0, 0, 1, 1);


        gridLayout_13->addWidget(frameTimetable, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_6, 2, 1, 1, 1);

        tabWidget->addTab(timetableTab, QString());

        gridLayout->addWidget(tabWidget, 1, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(104, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 1, 2, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_11, 2, 1, 1, 1);

        FetMainForm_template->setCentralWidget(mainwidget);
        mainmenubar = new QMenuBar(FetMainForm_template);
        mainmenubar->setObjectName(QStringLiteral("mainmenubar"));
        mainmenubar->setGeometry(QRect(0, 0, 560, 28));
        helpMenu = new QMenu(mainmenubar);
        helpMenu->setObjectName(QStringLiteral("helpMenu"));
        menu_help_On_line = new QMenu(helpMenu);
        menu_help_On_line->setObjectName(QStringLiteral("menu_help_On_line"));
        fileMenu = new QMenu(mainmenubar);
        fileMenu->setObjectName(QStringLiteral("fileMenu"));
        menuExport = new QMenu(fileMenu);
        menuExport->setObjectName(QStringLiteral("menuExport"));
        menuImport = new QMenu(fileMenu);
        menuImport->setObjectName(QStringLiteral("menuImport"));
        menuImport_CSV = new QMenu(menuImport);
        menuImport_CSV->setObjectName(QStringLiteral("menuImport_CSV"));
        fileOpenRecentMenu = new QMenu(fileMenu);
        fileOpenRecentMenu->setObjectName(QStringLiteral("fileOpenRecentMenu"));
        timetableMenu = new QMenu(mainmenubar);
        timetableMenu->setObjectName(QStringLiteral("timetableMenu"));
        menuAdvancedLockUnlock = new QMenu(timetableMenu);
        menuAdvancedLockUnlock->setObjectName(QStringLiteral("menuAdvancedLockUnlock"));
        menuStatistics = new QMenu(mainmenubar);
        menuStatistics->setObjectName(QStringLiteral("menuStatistics"));
        dataMenu = new QMenu(mainmenubar);
        dataMenu->setObjectName(QStringLiteral("dataMenu"));
        menuTime_constraints = new QMenu(dataMenu);
        menuTime_constraints->setObjectName(QStringLiteral("menuTime_constraints"));
        menuMisc_time_constraints = new QMenu(menuTime_constraints);
        menuMisc_time_constraints->setObjectName(QStringLiteral("menuMisc_time_constraints"));
        menuTeachers_time_constraints = new QMenu(menuTime_constraints);
        menuTeachers_time_constraints->setObjectName(QStringLiteral("menuTeachers_time_constraints"));
        menuStudents_time_constraints = new QMenu(menuTime_constraints);
        menuStudents_time_constraints->setObjectName(QStringLiteral("menuStudents_time_constraints"));
        menuActivities_time_constraints = new QMenu(menuTime_constraints);
        menuActivities_time_constraints->setObjectName(QStringLiteral("menuActivities_time_constraints"));
        menuSpace_constraints = new QMenu(dataMenu);
        menuSpace_constraints->setObjectName(QStringLiteral("menuSpace_constraints"));
        menuMisc_space_constraints = new QMenu(menuSpace_constraints);
        menuMisc_space_constraints->setObjectName(QStringLiteral("menuMisc_space_constraints"));
        menuRooms_space_constraints = new QMenu(menuSpace_constraints);
        menuRooms_space_constraints->setObjectName(QStringLiteral("menuRooms_space_constraints"));
        menuActivities_space_constraints = new QMenu(menuSpace_constraints);
        menuActivities_space_constraints->setObjectName(QStringLiteral("menuActivities_space_constraints"));
        menuSubjects_space_constraints = new QMenu(menuSpace_constraints);
        menuSubjects_space_constraints->setObjectName(QStringLiteral("menuSubjects_space_constraints"));
        menuSubjects_and_activity_tags_space_constraints = new QMenu(menuSpace_constraints);
        menuSubjects_and_activity_tags_space_constraints->setObjectName(QStringLiteral("menuSubjects_and_activity_tags_space_constraints"));
        menuStudents_space_constraints = new QMenu(menuSpace_constraints);
        menuStudents_space_constraints->setObjectName(QStringLiteral("menuStudents_space_constraints"));
        menuTeachers_space_constraints = new QMenu(menuSpace_constraints);
        menuTeachers_space_constraints->setObjectName(QStringLiteral("menuTeachers_space_constraints"));
        menuActivity_tags_space_constraints = new QMenu(menuSpace_constraints);
        menuActivity_tags_space_constraints->setObjectName(QStringLiteral("menuActivity_tags_space_constraints"));
        menuStudents = new QMenu(dataMenu);
        menuStudents->setObjectName(QStringLiteral("menuStudents"));
        menuInstitution_information = new QMenu(dataMenu);
        menuInstitution_information->setObjectName(QStringLiteral("menuInstitution_information"));
        menuDays_and_hours = new QMenu(dataMenu);
        menuDays_and_hours->setObjectName(QStringLiteral("menuDays_and_hours"));
        menuSettings = new QMenu(mainmenubar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        menuSettingsAdvanced = new QMenu(menuSettings);
        menuSettingsAdvanced->setObjectName(QStringLiteral("menuSettingsAdvanced"));
        menuFET_interface = new QMenu(menuSettings);
        menuFET_interface->setObjectName(QStringLiteral("menuFET_interface"));
        menuTimetables = new QMenu(menuSettings);
        menuTimetables->setObjectName(QStringLiteral("menuTimetables"));
        menuConfirmations = new QMenu(menuSettings);
        menuConfirmations->setObjectName(QStringLiteral("menuConfirmations"));
        menuAdvanced = new QMenu(mainmenubar);
        menuAdvanced->setObjectName(QStringLiteral("menuAdvanced"));
        FetMainForm_template->setMenuBar(mainmenubar);
        defaultStatusBar = new QStatusBar(FetMainForm_template);
        defaultStatusBar->setObjectName(QStringLiteral("defaultStatusBar"));
        FetMainForm_template->setStatusBar(defaultStatusBar);

        mainmenubar->addAction(fileMenu->menuAction());
        mainmenubar->addAction(dataMenu->menuAction());
        mainmenubar->addAction(menuStatistics->menuAction());
        mainmenubar->addAction(menuAdvanced->menuAction());
        mainmenubar->addAction(timetableMenu->menuAction());
        mainmenubar->addAction(menuSettings->menuAction());
        mainmenubar->addAction(helpMenu->menuAction());
        helpMenu->addAction(menu_help_On_line->menuAction());
        helpMenu->addSeparator();
        helpMenu->addAction(helpInstructionsAction);
        helpMenu->addAction(helpTipsAction);
        helpMenu->addAction(helpFAQAction);
        helpMenu->addSeparator();
        helpMenu->addAction(helpAboutAction);
        menu_help_On_line->addAction(helpHomepageAction);
        menu_help_On_line->addAction(helpContentsAction);
        menu_help_On_line->addAction(helpForumAction);
        menu_help_On_line->addSeparator();
        menu_help_On_line->addAction(helpAddressesAction);
        fileMenu->addAction(fileNewAction);
        fileMenu->addAction(fileOpenAction);
        fileMenu->addAction(fileOpenRecentMenu->menuAction());
        fileMenu->addSeparator();
        fileMenu->addAction(fileSaveAction);
        fileMenu->addAction(fileSaveAsAction);
        fileMenu->addSeparator();
        fileMenu->addAction(menuImport->menuAction());
        fileMenu->addAction(menuExport->menuAction());
        fileMenu->addSeparator();
        fileMenu->addAction(fileExitAction);
        menuExport->addAction(fileExportCSVAction);
        menuImport->addAction(menuImport_CSV->menuAction());
        menuImport_CSV->addAction(fileImportCSVSubjectsAction);
        menuImport_CSV->addAction(fileImportCSVActivityTagsAction);
        menuImport_CSV->addAction(fileImportCSVTeachersAction);
        menuImport_CSV->addAction(fileImportCSVYearsGroupsSubgroupsAction);
        menuImport_CSV->addAction(fileImportCSVRoomsBuildingsAction);
        menuImport_CSV->addAction(fileImportCSVActivitiesAction);
        fileOpenRecentMenu->addAction(fileClearRecentFilesListAction);
        timetableMenu->addAction(timetableGenerateAction);
        timetableMenu->addSeparator();
        timetableMenu->addAction(timetableViewTeachersAction);
        timetableMenu->addAction(timetableViewStudentsAction);
        timetableMenu->addAction(timetableViewRoomsAction);
        timetableMenu->addAction(timetableShowConflictsAction);
        timetableMenu->addSeparator();
        timetableMenu->addAction(timetablePrintAction);
        timetableMenu->addSeparator();
        timetableMenu->addAction(menuAdvancedLockUnlock->menuAction());
        timetableMenu->addSeparator();
        timetableMenu->addAction(timetableSaveTimetableAsAction);
        timetableMenu->addSeparator();
        timetableMenu->addAction(timetableGenerateMultipleAction);
        menuAdvancedLockUnlock->addAction(timetableLockAllActivitiesAction);
        menuAdvancedLockUnlock->addAction(timetableUnlockAllActivitiesAction);
        menuAdvancedLockUnlock->addSeparator();
        menuAdvancedLockUnlock->addAction(timetableLockActivitiesDayAction);
        menuAdvancedLockUnlock->addAction(timetableUnlockActivitiesDayAction);
        menuAdvancedLockUnlock->addSeparator();
        menuAdvancedLockUnlock->addAction(timetableLockActivitiesEndStudentsDayAction);
        menuAdvancedLockUnlock->addAction(timetableUnlockActivitiesEndStudentsDayAction);
        menuStatistics->addAction(dataTeachersStatisticsAction);
        menuStatistics->addAction(dataSubjectsStatisticsAction);
        menuStatistics->addAction(dataStudentsStatisticsAction);
        menuStatistics->addSeparator();
        menuStatistics->addAction(dataActivitiesRoomsStatisticsAction);
        menuStatistics->addSeparator();
        menuStatistics->addAction(dataTeachersSubjectsQualificationsStatisticsAction);
        menuStatistics->addSeparator();
        menuStatistics->addAction(statisticsPrintAction);
        menuStatistics->addAction(statisticsExportToDiskAction);
        menuStatistics->addSeparator();
        menuStatistics->addAction(dataHelpOnStatisticsAction);
        dataMenu->addAction(menuInstitution_information->menuAction());
        dataMenu->addSeparator();
        dataMenu->addAction(menuDays_and_hours->menuAction());
        dataMenu->addSeparator();
        dataMenu->addAction(dataSubjectsAction);
        dataMenu->addAction(dataActivityTagsAction);
        dataMenu->addAction(dataTeachersAction);
        dataMenu->addAction(menuStudents->menuAction());
        dataMenu->addSeparator();
        dataMenu->addAction(dataActivitiesAction);
        dataMenu->addAction(dataSubactivitiesAction);
        dataMenu->addSeparator();
        dataMenu->addAction(dataBuildingsAction);
        dataMenu->addAction(dataRoomsAction);
        dataMenu->addSeparator();
        dataMenu->addAction(dataAllTimeConstraintsAction);
        dataMenu->addAction(menuTime_constraints->menuAction());
        dataMenu->addSeparator();
        dataMenu->addAction(dataAllSpaceConstraintsAction);
        dataMenu->addAction(menuSpace_constraints->menuAction());
        menuTime_constraints->addAction(menuMisc_time_constraints->menuAction());
        menuTime_constraints->addAction(menuTeachers_time_constraints->menuAction());
        menuTime_constraints->addAction(menuStudents_time_constraints->menuAction());
        menuTime_constraints->addAction(menuActivities_time_constraints->menuAction());
        menuMisc_time_constraints->addAction(dataTimeConstraintsBasicCompulsoryTimeAction);
        menuMisc_time_constraints->addAction(dataTimeConstraintsBreakTimesAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeacherNotAvailableTimesAction);
        menuTeachers_time_constraints->addSeparator();
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeacherMaxDaysPerWeekAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeacherMinDaysPerWeekAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeacherMaxGapsPerDayAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeacherMaxGapsPerWeekAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeacherMaxHoursDailyAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeacherMaxSpanPerDayAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeacherActivityTagMaxHoursDailyAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeacherMinHoursDailyAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeacherMaxHoursContinuouslyAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeacherActivityTagMaxHoursContinuouslyAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeacherIntervalMaxDaysPerWeekAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeacherMinRestingHoursAction);
        menuTeachers_time_constraints->addSeparator();
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeachersMaxDaysPerWeekAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeachersMinDaysPerWeekAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeachersMaxGapsPerDayAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeachersMaxGapsPerWeekAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeachersMaxHoursDailyAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeachersMaxSpanPerDayAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeachersActivityTagMaxHoursDailyAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeachersMinHoursDailyAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeachersMaxHoursContinuouslyAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeachersActivityTagMaxHoursContinuouslyAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeachersIntervalMaxDaysPerWeekAction);
        menuTeachers_time_constraints->addAction(dataTimeConstraintsTeachersMinRestingHoursAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsSetNotAvailableTimesAction);
        menuStudents_time_constraints->addSeparator();
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsSetMaxDaysPerWeekAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsSetMaxGapsPerDayAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsSetMaxGapsPerWeekAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsSetEarlyMaxBeginningsAtSecondHourAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsSetMaxHoursDailyAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsSetMaxSpanPerDayAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsSetActivityTagMaxHoursDailyAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsSetMinHoursDailyAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsSetMaxHoursContinuouslyAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsSetActivityTagMaxHoursContinuouslyAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsSetIntervalMaxDaysPerWeekAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsSetMinRestingHoursAction);
        menuStudents_time_constraints->addSeparator();
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsMaxDaysPerWeekAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsMaxGapsPerDayAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsMaxGapsPerWeekAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsEarlyMaxBeginningsAtSecondHourAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsMaxHoursDailyAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsMaxSpanPerDayAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsActivityTagMaxHoursDailyAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsMinHoursDailyAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsMaxHoursContinuouslyAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsActivityTagMaxHoursContinuouslyAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsIntervalMaxDaysPerWeekAction);
        menuStudents_time_constraints->addAction(dataTimeConstraintsStudentsMinRestingHoursAction);
        menuActivities_time_constraints->addAction(dataTimeConstraintsActivityPreferredStartingTimeAction);
        menuActivities_time_constraints->addAction(dataTimeConstraintsActivityPreferredStartingTimesAction);
        menuActivities_time_constraints->addAction(dataTimeConstraintsActivityPreferredTimeSlotsAction);
        menuActivities_time_constraints->addSeparator();
        menuActivities_time_constraints->addAction(dataTimeConstraintsActivitiesPreferredStartingTimesAction);
        menuActivities_time_constraints->addAction(dataTimeConstraintsActivitiesPreferredTimeSlotsAction);
        menuActivities_time_constraints->addSeparator();
        menuActivities_time_constraints->addAction(dataTimeConstraintsSubactivitiesPreferredStartingTimesAction);
        menuActivities_time_constraints->addAction(dataTimeConstraintsSubactivitiesPreferredTimeSlotsAction);
        menuActivities_time_constraints->addSeparator();
        menuActivities_time_constraints->addAction(dataTimeConstraintsMinDaysBetweenActivitiesAction);
        menuActivities_time_constraints->addAction(dataTimeConstraintsMaxDaysBetweenActivitiesAction);
        menuActivities_time_constraints->addSeparator();
        menuActivities_time_constraints->addAction(dataTimeConstraintsActivityEndsStudentsDayAction);
        menuActivities_time_constraints->addAction(dataTimeConstraintsActivitiesEndStudentsDayAction);
        menuActivities_time_constraints->addSeparator();
        menuActivities_time_constraints->addAction(dataTimeConstraintsActivitiesSameStartingTimeAction);
        menuActivities_time_constraints->addAction(dataTimeConstraintsActivitiesSameStartingDayAction);
        menuActivities_time_constraints->addAction(dataTimeConstraintsActivitiesSameStartingHourAction);
        menuActivities_time_constraints->addSeparator();
        menuActivities_time_constraints->addAction(dataTimeConstraintsActivitiesOccupyMaxTimeSlotsFromSelectionAction);
        menuActivities_time_constraints->addSeparator();
        menuActivities_time_constraints->addAction(dataTimeConstraintsTwoActivitiesOrderedAction);
        menuActivities_time_constraints->addSeparator();
        menuActivities_time_constraints->addAction(dataTimeConstraintsTwoActivitiesConsecutiveAction);
        menuActivities_time_constraints->addAction(dataTimeConstraintsTwoActivitiesGroupedAction);
        menuActivities_time_constraints->addAction(dataTimeConstraintsThreeActivitiesGroupedAction);
        menuActivities_time_constraints->addSeparator();
        menuActivities_time_constraints->addAction(dataTimeConstraintsActivitiesNotOverlappingAction);
        menuActivities_time_constraints->addAction(dataTimeConstraintsActivitiesMaxSimultaneousInSelectedTimeSlotsAction);
        menuActivities_time_constraints->addSeparator();
        menuActivities_time_constraints->addAction(dataTimeConstraintsMinGapsBetweenActivitiesAction);
        menuSpace_constraints->addAction(menuMisc_space_constraints->menuAction());
        menuSpace_constraints->addAction(menuRooms_space_constraints->menuAction());
        menuSpace_constraints->addAction(menuTeachers_space_constraints->menuAction());
        menuSpace_constraints->addAction(menuStudents_space_constraints->menuAction());
        menuSpace_constraints->addAction(menuSubjects_space_constraints->menuAction());
        menuSpace_constraints->addAction(menuActivity_tags_space_constraints->menuAction());
        menuSpace_constraints->addAction(menuSubjects_and_activity_tags_space_constraints->menuAction());
        menuSpace_constraints->addAction(menuActivities_space_constraints->menuAction());
        menuMisc_space_constraints->addAction(dataSpaceConstraintsBasicCompulsorySpaceAction);
        menuRooms_space_constraints->addAction(dataSpaceConstraintsRoomNotAvailableTimesAction);
        menuActivities_space_constraints->addAction(dataSpaceConstraintsActivityPreferredRoomAction);
        menuActivities_space_constraints->addAction(dataSpaceConstraintsActivityPreferredRoomsAction);
        menuActivities_space_constraints->addSeparator();
        menuActivities_space_constraints->addAction(dataSpaceConstraintsActivitiesSameRoomIfConsecutiveAction);
        menuActivities_space_constraints->addAction(dataSpaceConstraintsActivitiesOccupyMaxDifferentRoomsAction);
        menuSubjects_space_constraints->addAction(dataSpaceConstraintsSubjectPreferredRoomAction);
        menuSubjects_space_constraints->addAction(dataSpaceConstraintsSubjectPreferredRoomsAction);
        menuSubjects_and_activity_tags_space_constraints->addAction(dataSpaceConstraintsSubjectActivityTagPreferredRoomAction);
        menuSubjects_and_activity_tags_space_constraints->addAction(dataSpaceConstraintsSubjectActivityTagPreferredRoomsAction);
        menuStudents_space_constraints->addAction(dataSpaceConstraintsStudentsSetHomeRoomAction);
        menuStudents_space_constraints->addAction(dataSpaceConstraintsStudentsSetHomeRoomsAction);
        menuStudents_space_constraints->addSeparator();
        menuStudents_space_constraints->addAction(dataSpaceConstraintsStudentsSetMaxBuildingChangesPerDayAction);
        menuStudents_space_constraints->addAction(dataSpaceConstraintsStudentsSetMaxBuildingChangesPerWeekAction);
        menuStudents_space_constraints->addAction(dataSpaceConstraintsStudentsSetMinGapsBetweenBuildingChangesAction);
        menuStudents_space_constraints->addSeparator();
        menuStudents_space_constraints->addAction(dataSpaceConstraintsStudentsMaxBuildingChangesPerDayAction);
        menuStudents_space_constraints->addAction(dataSpaceConstraintsStudentsMaxBuildingChangesPerWeekAction);
        menuStudents_space_constraints->addAction(dataSpaceConstraintsStudentsMinGapsBetweenBuildingChangesAction);
        menuTeachers_space_constraints->addAction(dataSpaceConstraintsTeacherHomeRoomAction);
        menuTeachers_space_constraints->addAction(dataSpaceConstraintsTeacherHomeRoomsAction);
        menuTeachers_space_constraints->addSeparator();
        menuTeachers_space_constraints->addAction(dataSpaceConstraintsTeacherMaxBuildingChangesPerDayAction);
        menuTeachers_space_constraints->addAction(dataSpaceConstraintsTeacherMaxBuildingChangesPerWeekAction);
        menuTeachers_space_constraints->addAction(dataSpaceConstraintsTeacherMinGapsBetweenBuildingChangesAction);
        menuTeachers_space_constraints->addSeparator();
        menuTeachers_space_constraints->addAction(dataSpaceConstraintsTeachersMaxBuildingChangesPerDayAction);
        menuTeachers_space_constraints->addAction(dataSpaceConstraintsTeachersMaxBuildingChangesPerWeekAction);
        menuTeachers_space_constraints->addAction(dataSpaceConstraintsTeachersMinGapsBetweenBuildingChangesAction);
        menuActivity_tags_space_constraints->addAction(dataSpaceConstraintsActivityTagPreferredRoomAction);
        menuActivity_tags_space_constraints->addAction(dataSpaceConstraintsActivityTagPreferredRoomsAction);
        menuStudents->addAction(dataYearsAction);
        menuStudents->addAction(dataGroupsAction);
        menuStudents->addAction(dataSubgroupsAction);
        menuInstitution_information->addAction(dataInstitutionNameAction);
        menuInstitution_information->addAction(dataCommentsAction);
        menuDays_and_hours->addAction(dataDaysAction);
        menuDays_and_hours->addAction(dataHoursAction);
        menuSettings->addAction(checkForUpdatesAction);
        menuSettings->addSeparator();
        menuSettings->addAction(languageAction);
        menuSettings->addSeparator();
        menuSettings->addAction(menuTimetables->menuAction());
        menuSettings->addAction(menuFET_interface->menuAction());
        menuSettings->addAction(menuConfirmations->menuAction());
        menuSettings->addAction(selectOutputDirAction);
        menuSettings->addSeparator();
        menuSettings->addAction(menuSettingsAdvanced->menuAction());
        menuSettings->addSeparator();
        menuSettings->addAction(settingsRestoreDefaultsAction);
        menuSettings->addSeparator();
        menuSettings->addAction(helpSettingsAction);
        menuSettingsAdvanced->addAction(randomSeedAction);
        menuSettingsAdvanced->addSeparator();
        menuSettingsAdvanced->addAction(showWarningForSubgroupsWithTheSameActivitiesAction);
        menuSettingsAdvanced->addSeparator();
        menuSettingsAdvanced->addAction(enableActivityTagMaxHoursDailyAction);
        menuSettingsAdvanced->addAction(enableStudentsMaxGapsPerDayAction);
        menuSettingsAdvanced->addAction(showWarningForNotPerfectConstraintsAction);
        menuSettingsAdvanced->addSeparator();
        menuSettingsAdvanced->addAction(enableStudentsMinHoursDailyWithAllowEmptyDaysAction);
        menuSettingsAdvanced->addAction(showWarningForStudentsMinHoursDailyWithAllowEmptyDaysAction);
        menuSettingsAdvanced->addSeparator();
        menuSettingsAdvanced->addAction(enableGroupActivitiesInInitialOrderAction);
        menuSettingsAdvanced->addAction(showWarningForGroupActivitiesInInitialOrderAction);
        menuFET_interface->addAction(settingsShowShortcutsOnMainWindowAction);
        menuFET_interface->addSeparator();
        menuFET_interface->addAction(settingsUseColorsAction);
        menuFET_interface->addSeparator();
        menuFET_interface->addAction(settingsShowToolTipsForConstraintsWithTablesAction);
        menuFET_interface->addSeparator();
        menuFET_interface->addAction(settingsShowSubgroupsInComboBoxesAction);
        menuFET_interface->addAction(settingsShowSubgroupsInActivityPlanningAction);
        menuTimetables->addAction(timetablesToWriteOnDiskAction);
        menuTimetables->addAction(settingsTimetableHtmlLevelAction);
        menuTimetables->addSeparator();
        menuTimetables->addAction(settingsPrintDetailedTimetablesAction);
        menuTimetables->addAction(settingsPrintDetailedTeachersFreePeriodsTimetablesAction);
        menuTimetables->addSeparator();
        menuTimetables->addAction(settingsPrintActivityTagsAction);
        menuTimetables->addSeparator();
        menuTimetables->addAction(settingsPrintNotAvailableSlotsAction);
        menuTimetables->addAction(settingsPrintBreakSlotsAction);
        menuTimetables->addSeparator();
        menuTimetables->addAction(settingsDivideTimetablesByDaysAction);
        menuTimetables->addAction(settingsDuplicateVerticalNamesAction);
        menuTimetables->addSeparator();
        menuTimetables->addAction(settingsPrintActivitiesWithSameStartingTimeAction);
        menuConfirmations->addAction(settingsConfirmActivityPlanningAction);
        menuConfirmations->addSeparator();
        menuConfirmations->addAction(settingsConfirmSpreadActivitiesAction);
        menuConfirmations->addSeparator();
        menuConfirmations->addAction(settingsConfirmRemoveRedundantAction);
        menuConfirmations->addSeparator();
        menuConfirmations->addAction(settingsConfirmSaveTimetableAction);
        menuAdvanced->addAction(activityPlanningAction);
        menuAdvanced->addSeparator();
        menuAdvanced->addAction(spreadActivitiesAction);
        menuAdvanced->addSeparator();
        menuAdvanced->addAction(removeRedundantConstraintsAction);
        menuAdvanced->addSeparator();
        menuAdvanced->addAction(groupActivitiesInInitialOrderAction);

        retranslateUi(FetMainForm_template);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FetMainForm_template);
    } // setupUi

    void retranslateUi(QMainWindow *FetMainForm_template)
    {
        fileNewAction->setText(QApplication::translate("FetMainForm_template", "&New", 0));
        fileNewAction->setShortcut(QApplication::translate("FetMainForm_template", "Ctrl+N", 0));
        fileOpenAction->setText(QApplication::translate("FetMainForm_template", "&Open...", 0));
        fileOpenAction->setShortcut(QApplication::translate("FetMainForm_template", "Ctrl+O", 0));
        fileSaveAction->setText(QApplication::translate("FetMainForm_template", "&Save", 0));
        fileSaveAction->setShortcut(QApplication::translate("FetMainForm_template", "Ctrl+S", 0));
        fileSaveAsAction->setText(QApplication::translate("FetMainForm_template", "Save &as...", 0));
        fileSaveAsAction->setShortcut(QString());
        fileExitAction->setText(QApplication::translate("FetMainForm_template", "&Quit", 0));
        fileExitAction->setShortcut(QApplication::translate("FetMainForm_template", "Ctrl+Q", 0));
        helpFAQAction->setText(QApplication::translate("FetMainForm_template", "Frequently asked questions", 0));
        helpFAQAction->setShortcut(QString());
        helpAboutAction->setText(QApplication::translate("FetMainForm_template", "About...", 0));
        helpAboutAction->setShortcut(QString());
        dataTeachersAction->setText(QApplication::translate("FetMainForm_template", "&Teachers", 0));
        dataSubjectsAction->setText(QApplication::translate("FetMainForm_template", "&Subjects", 0));
        dataYearsAction->setText(QApplication::translate("FetMainForm_template", "&Years (forms, classes)", 0));
        dataGroupsAction->setText(QApplication::translate("FetMainForm_template", "&Groups", 0));
        dataSubgroupsAction->setText(QApplication::translate("FetMainForm_template", "&Subgroups", 0));
        dataActivitiesAction->setText(QApplication::translate("FetMainForm_template", "&Activities", 0));
        timetableGenerateAction->setText(QApplication::translate("FetMainForm_template", "&Generate new", 0));
        timetableGenerateAction->setShortcut(QApplication::translate("FetMainForm_template", "Ctrl+G", 0));
        timetableViewStudentsAction->setText(QApplication::translate("FetMainForm_template", "View (&students)", 0));
        timetableViewTeachersAction->setText(QApplication::translate("FetMainForm_template", "View (&teachers)", 0));
        timetableShowConflictsAction->setText(QApplication::translate("FetMainForm_template", "Show soft &conflicts", 0));
        dataDaysAction->setText(QApplication::translate("FetMainForm_template", "&Days per week", 0));
        dataHoursAction->setText(QApplication::translate("FetMainForm_template", "&Hours (periods) per day", 0));
        dataRoomsAction->setText(QApplication::translate("FetMainForm_template", "&Rooms", 0));
        timetableViewRoomsAction->setText(QApplication::translate("FetMainForm_template", "View (&rooms)", 0));
        dataTimeConstraintsActivitiesPreferredTimeSlotsAction->setText(QApplication::translate("FetMainForm_template", "A set of activities has a set of preferred time slots", 0));
        dataTimeConstraintsActivitiesSameStartingTimeAction->setText(QApplication::translate("FetMainForm_template", "A set of activities has same starting time (day+hour)", 0));
        dataTimeConstraintsActivitiesOccupyMaxTimeSlotsFromSelectionAction->setText(QApplication::translate("FetMainForm_template", "A set of activities occupies max time slots from selection", 0));
        dataTimeConstraintsActivitiesMaxSimultaneousInSelectedTimeSlotsAction->setText(QApplication::translate("FetMainForm_template", "Max simultaneous activities from a set in selected time slots", 0));
        dataAllTimeConstraintsAction->setText(QApplication::translate("FetMainForm_template", "All t&ime constraints", 0));
        dataTimeConstraintsTeacherNotAvailableTimesAction->setText(QApplication::translate("FetMainForm_template", "A teacher's not available times", 0));
        dataTimeConstraintsBasicCompulsoryTimeAction->setText(QApplication::translate("FetMainForm_template", "Basic compulsory time constraints", 0));
        dataTimeConstraintsStudentsSetNotAvailableTimesAction->setText(QApplication::translate("FetMainForm_template", "A students set's not available times", 0));
        dataTimeConstraintsBreakTimesAction->setText(QApplication::translate("FetMainForm_template", "Break times (all teachers+all students not available)", 0));
        dataTimeConstraintsTeacherMaxDaysPerWeekAction->setText(QApplication::translate("FetMainForm_template", "Max days per week for a teacher", 0));
        dataTimeConstraintsTeachersMaxHoursDailyAction->setText(QApplication::translate("FetMainForm_template", "Max hours daily for all teachers", 0));
        dataTimeConstraintsActivityPreferredStartingTimeAction->setText(QApplication::translate("FetMainForm_template", "An activity has a preferred starting time", 0));
        dataTimeConstraintsStudentsSetMaxGapsPerWeekAction->setText(QApplication::translate("FetMainForm_template", "Max gaps per week for a students set", 0));
        dataTimeConstraintsStudentsMaxGapsPerWeekAction->setText(QApplication::translate("FetMainForm_template", "Max gaps per week for all students", 0));
        dataTimeConstraintsStudentsEarlyMaxBeginningsAtSecondHourAction->setText(QApplication::translate("FetMainForm_template", "All students begin early (max beginnings at second hour)", 0));
        dataTimeConstraintsActivitiesNotOverlappingAction->setText(QApplication::translate("FetMainForm_template", "A set of activities are not overlapping", 0));
        dataTimeConstraintsMinDaysBetweenActivitiesAction->setText(QApplication::translate("FetMainForm_template", "Min days between a set of activities", 0));
        dataAllSpaceConstraintsAction->setText(QApplication::translate("FetMainForm_template", "All s&pace constraints", 0));
        dataSpaceConstraintsBasicCompulsorySpaceAction->setText(QApplication::translate("FetMainForm_template", "Basic compulsory space constraints", 0));
        dataSpaceConstraintsRoomNotAvailableTimesAction->setText(QApplication::translate("FetMainForm_template", "A room's not available times", 0));
        dataSpaceConstraintsActivityPreferredRoomAction->setText(QApplication::translate("FetMainForm_template", "An activity has a preferred room", 0));
        dataTimeConstraintsActivitiesSameStartingHourAction->setText(QApplication::translate("FetMainForm_template", "A set of activities has same starting hour (any days)", 0));
        dataActivityTagsAction->setText(QApplication::translate("FetMainForm_template", "Activity ta&gs", 0));
        dataInstitutionNameAction->setText(QApplication::translate("FetMainForm_template", "I&nstitution name", 0));
        dataCommentsAction->setText(QApplication::translate("FetMainForm_template", "&Comments", 0));
        dataSpaceConstraintsActivityPreferredRoomsAction->setText(QApplication::translate("FetMainForm_template", "An activity has a set of preferred rooms", 0));
        dataSpaceConstraintsStudentsSetHomeRoomAction->setText(QApplication::translate("FetMainForm_template", "A set of students has a home room", 0));
        dataSpaceConstraintsStudentsSetHomeRoomsAction->setText(QApplication::translate("FetMainForm_template", "A set of students has a set of home rooms", 0));
        dataTeachersStatisticsAction->setText(QApplication::translate("FetMainForm_template", "Teachers statistics", 0));
        dataStudentsStatisticsAction->setText(QApplication::translate("FetMainForm_template", "Students statistics", 0));
        dataSubjectsStatisticsAction->setText(QApplication::translate("FetMainForm_template", "Subjects statistics", 0));
        dataTimeConstraintsTeachersMaxGapsPerWeekAction->setText(QApplication::translate("FetMainForm_template", "Max gaps per week for all teachers", 0));
        dataTimeConstraintsTeacherMaxGapsPerWeekAction->setText(QApplication::translate("FetMainForm_template", "Max gaps per week for a teacher", 0));
        dataTimeConstraintsStudentsSetEarlyMaxBeginningsAtSecondHourAction->setText(QApplication::translate("FetMainForm_template", "A students set begins early (max beginnings at second hour)", 0));
        dataTimeConstraintsTeacherMaxHoursDailyAction->setText(QApplication::translate("FetMainForm_template", "Max hours daily for a teacher", 0));
        dataTimeConstraintsStudentsSetMaxHoursDailyAction->setText(QApplication::translate("FetMainForm_template", "Max hours daily for a students set", 0));
        dataTimeConstraintsStudentsMaxHoursDailyAction->setText(QApplication::translate("FetMainForm_template", "Max hours daily for all students", 0));
        helpInstructionsAction->setText(QApplication::translate("FetMainForm_template", "Instructions", 0));
        checkForUpdatesAction->setText(QApplication::translate("FetMainForm_template", "Search for updates on startup", 0));
        dataTimeConstraintsStudentsMinHoursDailyAction->setText(QApplication::translate("FetMainForm_template", "Min hours daily for all students", 0));
        dataTimeConstraintsStudentsSetMinHoursDailyAction->setText(QApplication::translate("FetMainForm_template", "Min hours daily for a students set", 0));
        timetableGenerateMultipleAction->setText(QApplication::translate("FetMainForm_template", "Generate &multiple", 0));
        dataTimeConstraintsTwoActivitiesConsecutiveAction->setText(QApplication::translate("FetMainForm_template", "Two activities are consecutive", 0));
        dataTimeConstraintsActivityEndsStudentsDayAction->setText(QApplication::translate("FetMainForm_template", "An activity ends students day", 0));
        settingsRestoreDefaultsAction->setText(QApplication::translate("FetMainForm_template", "Restore default settings", 0));
        settingsTimetableHtmlLevelAction->setText(QApplication::translate("FetMainForm_template", "HTML level for generated timetables", 0));
        dataTimeConstraintsTeachersMinHoursDailyAction->setText(QApplication::translate("FetMainForm_template", "Min hours daily for all teachers", 0));
        dataTimeConstraintsTeacherMinHoursDailyAction->setText(QApplication::translate("FetMainForm_template", "Min hours daily for a teacher", 0));
        dataHelpOnStatisticsAction->setText(QApplication::translate("FetMainForm_template", "Help on statistics", 0));
        dataTimeConstraintsTeachersMaxGapsPerDayAction->setText(QApplication::translate("FetMainForm_template", "Max gaps per day for all teachers", 0));
        dataTimeConstraintsTeacherMaxGapsPerDayAction->setText(QApplication::translate("FetMainForm_template", "Max gaps per day for a teacher", 0));
        dataTimeConstraintsTeacherMaxSpanPerDayAction->setText(QApplication::translate("FetMainForm_template", "Max span per day for a teacher", 0));
        dataTimeConstraintsTeachersMaxSpanPerDayAction->setText(QApplication::translate("FetMainForm_template", "Max span per day for all teachers", 0));
        dataTimeConstraintsStudentsSetMaxSpanPerDayAction->setText(QApplication::translate("FetMainForm_template", "Max span per day for a students set", 0));
        dataTimeConstraintsStudentsMaxSpanPerDayAction->setText(QApplication::translate("FetMainForm_template", "Max span per day for all students", 0));
        dataTimeConstraintsTeacherMinRestingHoursAction->setText(QApplication::translate("FetMainForm_template", "Min resting hours for a teacher", 0));
        dataTimeConstraintsTeachersMinRestingHoursAction->setText(QApplication::translate("FetMainForm_template", "Min resting hours for all teachers", 0));
        dataTimeConstraintsStudentsSetMinRestingHoursAction->setText(QApplication::translate("FetMainForm_template", "Min resting hours for a students set", 0));
        dataTimeConstraintsStudentsMinRestingHoursAction->setText(QApplication::translate("FetMainForm_template", "Min resting hours for all students", 0));
        dataBuildingsAction->setText(QApplication::translate("FetMainForm_template", "&Buildings", 0));
        dataSpaceConstraintsSubjectPreferredRoomAction->setText(QApplication::translate("FetMainForm_template", "A subject has a preferred room", 0));
        dataSpaceConstraintsSubjectPreferredRoomsAction->setText(QApplication::translate("FetMainForm_template", "A subject has a set of preferred rooms", 0));
        dataSpaceConstraintsSubjectActivityTagPreferredRoomAction->setText(QApplication::translate("FetMainForm_template", "A subject+an activity tag have a preferred room", 0));
        dataSpaceConstraintsSubjectActivityTagPreferredRoomsAction->setText(QApplication::translate("FetMainForm_template", "A subject+an activity tag have a set of preferred rooms", 0));
        dataSpaceConstraintsTeacherHomeRoomAction->setText(QApplication::translate("FetMainForm_template", "A teacher has a home room", 0));
        dataSpaceConstraintsTeacherHomeRoomsAction->setText(QApplication::translate("FetMainForm_template", "A teacher has a set of home rooms", 0));
        dataSpaceConstraintsStudentsSetMaxBuildingChangesPerDayAction->setText(QApplication::translate("FetMainForm_template", "Max building changes per day for a students set", 0));
        dataSpaceConstraintsStudentsMaxBuildingChangesPerDayAction->setText(QApplication::translate("FetMainForm_template", "Max building changes per day for all students", 0));
        dataSpaceConstraintsStudentsSetMaxBuildingChangesPerWeekAction->setText(QApplication::translate("FetMainForm_template", "Max building changes per week for a students set", 0));
        dataSpaceConstraintsStudentsMaxBuildingChangesPerWeekAction->setText(QApplication::translate("FetMainForm_template", "Max building changes per week for all students", 0));
        dataSpaceConstraintsStudentsSetMinGapsBetweenBuildingChangesAction->setText(QApplication::translate("FetMainForm_template", "Min gaps between building changes for a students set", 0));
        dataSpaceConstraintsStudentsMinGapsBetweenBuildingChangesAction->setText(QApplication::translate("FetMainForm_template", "Min gaps between building changes for all students", 0));
        dataSpaceConstraintsTeacherMaxBuildingChangesPerDayAction->setText(QApplication::translate("FetMainForm_template", "Max building changes per day for a teacher", 0));
        dataSpaceConstraintsTeachersMaxBuildingChangesPerDayAction->setText(QApplication::translate("FetMainForm_template", "Max building changes per day for all teachers", 0));
        dataSpaceConstraintsTeacherMaxBuildingChangesPerWeekAction->setText(QApplication::translate("FetMainForm_template", "Max building changes per week for a teacher", 0));
        dataSpaceConstraintsTeachersMaxBuildingChangesPerWeekAction->setText(QApplication::translate("FetMainForm_template", "Max building changes per week for all teachers", 0));
        dataSpaceConstraintsTeacherMinGapsBetweenBuildingChangesAction->setText(QApplication::translate("FetMainForm_template", "Min gaps between building changes for a teacher", 0));
        dataSpaceConstraintsTeachersMinGapsBetweenBuildingChangesAction->setText(QApplication::translate("FetMainForm_template", "Min gaps between building changes for all teachers", 0));
        dataTimeConstraintsActivitiesSameStartingDayAction->setText(QApplication::translate("FetMainForm_template", "A set of activities has same starting day (any hours)", 0));
        timetableSaveTimetableAsAction->setText(QApplication::translate("FetMainForm_template", "Save data and timetable as...", 0));
        dataTimeConstraintsTwoActivitiesOrderedAction->setText(QApplication::translate("FetMainForm_template", "Two activities are ordered", 0));
        dataTimeConstraintsTeachersMaxHoursContinuouslyAction->setText(QApplication::translate("FetMainForm_template", "Max hours continuously for all teachers", 0));
        dataTimeConstraintsTeacherMaxHoursContinuouslyAction->setText(QApplication::translate("FetMainForm_template", "Max hours continuously for a teacher", 0));
        dataTimeConstraintsStudentsSetMaxHoursContinuouslyAction->setText(QApplication::translate("FetMainForm_template", "Max hours continuously for a students set", 0));
        dataTimeConstraintsStudentsMaxHoursContinuouslyAction->setText(QApplication::translate("FetMainForm_template", "Max hours continuously for all students", 0));
        helpTipsAction->setText(QApplication::translate("FetMainForm_template", "Important tips", 0));
        dataTimeConstraintsActivitiesPreferredStartingTimesAction->setText(QApplication::translate("FetMainForm_template", "A set of activities has a set of preferred starting times", 0));
        dataTimeConstraintsActivityPreferredTimeSlotsAction->setText(QApplication::translate("FetMainForm_template", "An activity has a set of preferred time slots", 0));
        dataTimeConstraintsActivityPreferredStartingTimesAction->setText(QApplication::translate("FetMainForm_template", "An activity has a set of preferred starting times", 0));
        dataTimeConstraintsMinGapsBetweenActivitiesAction->setText(QApplication::translate("FetMainForm_template", "Min gaps (hours) between a set of activities", 0));
        fileExportCSVAction->setText(QApplication::translate("FetMainForm_template", "Export comma separated values (text)", 0));
        fileImportCSVActivitiesAction->setText(QApplication::translate("FetMainForm_template", "Import activities from CSV file", 0));
        fileImportCSVActivityTagsAction->setText(QApplication::translate("FetMainForm_template", "Import activity tags from CSV file", 0));
        fileImportCSVRoomsBuildingsAction->setText(QApplication::translate("FetMainForm_template", "Import rooms and buildings from CSV file", 0));
        fileImportCSVSubjectsAction->setText(QApplication::translate("FetMainForm_template", "Import subjects from CSV file", 0));
        fileImportCSVTeachersAction->setText(QApplication::translate("FetMainForm_template", "Import teachers from CSV file", 0));
        fileImportCSVYearsGroupsSubgroupsAction->setText(QApplication::translate("FetMainForm_template", "Import years, groups and subgroups from CSV file", 0));
        dataTimeConstraintsSubactivitiesPreferredTimeSlotsAction->setText(QApplication::translate("FetMainForm_template", "A set of subactivities has a set of preferred time slots", 0));
        dataTimeConstraintsSubactivitiesPreferredStartingTimesAction->setText(QApplication::translate("FetMainForm_template", "A set of subactivities has a set of preferred starting times", 0));
        dataTimeConstraintsTeacherIntervalMaxDaysPerWeekAction->setText(QApplication::translate("FetMainForm_template", "A teacher works in an hourly interval max days per week", 0));
        dataTimeConstraintsTeachersIntervalMaxDaysPerWeekAction->setText(QApplication::translate("FetMainForm_template", "All teachers work in an hourly interval max days per week", 0));
        dataTimeConstraintsStudentsSetIntervalMaxDaysPerWeekAction->setText(QApplication::translate("FetMainForm_template", "A students set works in an hourly interval max days per week", 0));
        dataTimeConstraintsStudentsIntervalMaxDaysPerWeekAction->setText(QApplication::translate("FetMainForm_template", "All students work in an hourly interval max days per week", 0));
        dataTimeConstraintsActivitiesEndStudentsDayAction->setText(QApplication::translate("FetMainForm_template", "A set of activities end students day", 0));
        settingsPrintNotAvailableSlotsAction->setText(QApplication::translate("FetMainForm_template", "Mark not available slots with -x- in timetables", "It means to mark the slots which are not available in the timetable. Lowercase -x-"));
        spreadActivitiesAction->setText(QApplication::translate("FetMainForm_template", "Spread the activities evenly over the week", 0));
        statisticsExportToDiskAction->setText(QApplication::translate("FetMainForm_template", "Export advanced statistics to disk", 0));
        removeRedundantConstraintsAction->setText(QApplication::translate("FetMainForm_template", "Remove redundant constraints", 0));
        dataTimeConstraintsTwoActivitiesGroupedAction->setText(QApplication::translate("FetMainForm_template", "Two activities are grouped", 0));
        timetableLockActivitiesDayAction->setText(QApplication::translate("FetMainForm_template", "Lock all activities of a specified day", 0));
        timetableUnlockActivitiesDayAction->setText(QApplication::translate("FetMainForm_template", "Unlock all activities of a specified day", 0));
        timetableLockActivitiesEndStudentsDayAction->setText(QApplication::translate("FetMainForm_template", "Lock all activities which end students day", 0));
        timetableUnlockActivitiesEndStudentsDayAction->setText(QApplication::translate("FetMainForm_template", "Unlock all activities which end students day", 0));
        timetableLockAllActivitiesAction->setText(QApplication::translate("FetMainForm_template", "Lock all activities of the current timetable", 0));
        timetableUnlockAllActivitiesAction->setText(QApplication::translate("FetMainForm_template", "Unlock all activities of the current timetable", 0));
        dataTimeConstraintsStudentsSetActivityTagMaxHoursContinuouslyAction->setText(QApplication::translate("FetMainForm_template", "Max hours continuously with an activity tag for a students set", 0));
        dataTimeConstraintsStudentsActivityTagMaxHoursContinuouslyAction->setText(QApplication::translate("FetMainForm_template", "Max hours continuously with an activity tag for all students", 0));
        dataTimeConstraintsTeacherActivityTagMaxHoursContinuouslyAction->setText(QApplication::translate("FetMainForm_template", "Max hours continuously with an activity tag for a teacher", 0));
        dataTimeConstraintsTeachersActivityTagMaxHoursContinuouslyAction->setText(QApplication::translate("FetMainForm_template", "Max hours continuously with an activity tag for all teachers", 0));
        dataSubactivitiesAction->setText(QApplication::translate("FetMainForm_template", "&Modify subactivities", 0));
        languageAction->setText(QApplication::translate("FetMainForm_template", "Language", 0));
        settingsDivideTimetablesByDaysAction->setText(QApplication::translate("FetMainForm_template", "Divide HTML timetables with time-axis by days", 0));
        helpSettingsAction->setText(QApplication::translate("FetMainForm_template", "Help on settings", 0));
        dataSpaceConstraintsActivityTagPreferredRoomAction->setText(QApplication::translate("FetMainForm_template", "An activity tag has a preferred room", 0));
        dataSpaceConstraintsActivityTagPreferredRoomsAction->setText(QApplication::translate("FetMainForm_template", "An activity tag has a set of preferred rooms", 0));
        selectOutputDirAction->setText(QApplication::translate("FetMainForm_template", "Select output directory", 0));
        dataTimeConstraintsTeachersMaxDaysPerWeekAction->setText(QApplication::translate("FetMainForm_template", "Max days per week for all teachers", 0));
        settingsPrintActivitiesWithSameStartingTimeAction->setText(QApplication::translate("FetMainForm_template", "Print activities with same starting time in timetables", 0));
        dataTimeConstraintsThreeActivitiesGroupedAction->setText(QApplication::translate("FetMainForm_template", "Three activities are grouped", 0));
        dataTimeConstraintsMaxDaysBetweenActivitiesAction->setText(QApplication::translate("FetMainForm_template", "Max days between a set of activities", 0));
        dataTimeConstraintsTeacherMinDaysPerWeekAction->setText(QApplication::translate("FetMainForm_template", "Min days per week for a teacher", 0));
        dataTimeConstraintsTeachersMinDaysPerWeekAction->setText(QApplication::translate("FetMainForm_template", "Min days per week for all teachers", 0));
        randomSeedAction->setText(QApplication::translate("FetMainForm_template", "Seed of random number generator", 0));
        settingsUseColorsAction->setText(QApplication::translate("FetMainForm_template", "Use colors in interface", 0));
        dataTimeConstraintsTeacherActivityTagMaxHoursDailyAction->setText(QApplication::translate("FetMainForm_template", "Max hours daily with an activity tag for a teacher", 0));
        dataTimeConstraintsTeachersActivityTagMaxHoursDailyAction->setText(QApplication::translate("FetMainForm_template", "Max hours daily with an activity tag for all teachers", 0));
        dataTimeConstraintsStudentsSetActivityTagMaxHoursDailyAction->setText(QApplication::translate("FetMainForm_template", "Max hours daily with an activity tag for a students set", 0));
        dataTimeConstraintsStudentsActivityTagMaxHoursDailyAction->setText(QApplication::translate("FetMainForm_template", "Max hours daily with an activity tag for all students", 0));
        dataTimeConstraintsStudentsSetMaxGapsPerDayAction->setText(QApplication::translate("FetMainForm_template", "Max gaps per day for a students set", 0));
        dataTimeConstraintsStudentsMaxGapsPerDayAction->setText(QApplication::translate("FetMainForm_template", "Max gaps per day for all students", 0));
        enableStudentsMaxGapsPerDayAction->setText(QApplication::translate("FetMainForm_template", "Enable students max gaps per day", 0));
        enableActivityTagMaxHoursDailyAction->setText(QApplication::translate("FetMainForm_template", "Enable activity tag max hours daily", 0));
        showWarningForNotPerfectConstraintsAction->setText(QApplication::translate("FetMainForm_template", "Warn if using not perfect constraints", 0));
        showWarningForNotPerfectConstraintsAction->setShortcut(QString());
        helpContentsAction->setText(QApplication::translate("FetMainForm_template", "Help contents", 0));
        helpForumAction->setText(QApplication::translate("FetMainForm_template", "Forum", 0));
        helpAddressesAction->setText(QApplication::translate("FetMainForm_template", "Web addresses", 0));
        helpHomepageAction->setText(QApplication::translate("FetMainForm_template", "Homepage", 0));
        settingsShowShortcutsOnMainWindowAction->setText(QApplication::translate("FetMainForm_template", "Show shortcut buttons in main window", 0));
        settingsPrintBreakSlotsAction->setText(QApplication::translate("FetMainForm_template", "Mark break slots with -X- in timetables", "It means to show or not the slots which are break slots, in the timetable, with an -X-. Uppercase -X-"));
        enableStudentsMinHoursDailyWithAllowEmptyDaysAction->setText(QApplication::translate("FetMainForm_template", "Enable students min hours daily with empty days", 0));
        showWarningForStudentsMinHoursDailyWithAllowEmptyDaysAction->setText(QApplication::translate("FetMainForm_template", "Warn if using students min hours daily with empty days", 0));
        activityPlanningAction->setText(QApplication::translate("FetMainForm_template", "Activity planning", 0));
        settingsConfirmActivityPlanningAction->setText(QApplication::translate("FetMainForm_template", "Confirm activity planning", "This is a setting - a check box: if a user wants to deactivate/activate the confirmation (instructions) dialog that appears before activity planning dialog"));
        settingsConfirmSpreadActivitiesAction->setText(QApplication::translate("FetMainForm_template", "Confirm spread activities over the week", "This is a setting - a check box: if a user wants to deactivate/activate the confirmation (instructions) dialog that appears before spreading the activities over the week dialog"));
        settingsConfirmRemoveRedundantAction->setText(QApplication::translate("FetMainForm_template", "Confirm remove redundant constraints", "This is a setting - a check box: if a user wants to deactivate/activate the confirmation (instructions) dialog that appears before removing redundant constraints dialog"));
        settingsConfirmSaveTimetableAction->setText(QApplication::translate("FetMainForm_template", "Confirm save data and timetable as", 0));
        fileClearRecentFilesListAction->setText(QApplication::translate("FetMainForm_template", "&Clear list", 0));
        dataActivitiesRoomsStatisticsAction->setText(QApplication::translate("FetMainForm_template", "Activities rooms statistics", 0));
        timetablePrintAction->setText(QApplication::translate("FetMainForm_template", "&Print", 0));
        timetablePrintAction->setShortcut(QApplication::translate("FetMainForm_template", "Ctrl+P", 0));
        dataSpaceConstraintsActivitiesOccupyMaxDifferentRoomsAction->setText(QApplication::translate("FetMainForm_template", "A set of activities occupies max different rooms", 0));
        dataSpaceConstraintsActivitiesSameRoomIfConsecutiveAction->setText(QApplication::translate("FetMainForm_template", "A set of activities are in the same room if they are consecutive", 0));
        dataTimeConstraintsStudentsSetMaxDaysPerWeekAction->setText(QApplication::translate("FetMainForm_template", "Max days per week for a students set", 0));
        dataTimeConstraintsStudentsMaxDaysPerWeekAction->setText(QApplication::translate("FetMainForm_template", "Max days per week for all students", 0));
        settingsPrintActivityTagsAction->setText(QApplication::translate("FetMainForm_template", "Print activity tags in timetables", 0));
        statisticsPrintAction->setText(QApplication::translate("FetMainForm_template", "Print advanced statistics", 0));
        settingsDuplicateVerticalNamesAction->setText(QApplication::translate("FetMainForm_template", "Duplicate vertical headers to the right", 0));
        groupActivitiesInInitialOrderAction->setText(QApplication::translate("FetMainForm_template", "Group activities in the initial order of generation", 0));
        enableGroupActivitiesInInitialOrderAction->setText(QApplication::translate("FetMainForm_template", "Enable group activities in initial order", 0));
        showWarningForGroupActivitiesInInitialOrderAction->setText(QApplication::translate("FetMainForm_template", "Warn if using group activities in initial order", 0));
        settingsShowSubgroupsInComboBoxesAction->setText(QApplication::translate("FetMainForm_template", "Show subgroups in combo boxes", 0));
        settingsShowSubgroupsInActivityPlanningAction->setText(QApplication::translate("FetMainForm_template", "Show subgroups in activity planning", 0));
        settingsShowToolTipsForConstraintsWithTablesAction->setText(QApplication::translate("FetMainForm_template", "Show tool tips for constraints with tables", 0));
        showWarningForSubgroupsWithTheSameActivitiesAction->setText(QApplication::translate("FetMainForm_template", "Warn subgroups with the same activities", 0));
        timetablesToWriteOnDiskAction->setText(QApplication::translate("FetMainForm_template", "Categories of timetables to be written on disk", "It means that the user selects the categories of timetables to be written on disk after the generation (soft conflicts, XML, days horizontal, time vertical, subgroups, teachers, etc.)"));
        settingsPrintDetailedTimetablesAction->setText(QApplication::translate("FetMainForm_template", "Print detailed timetables", 0));
        settingsPrintDetailedTeachersFreePeriodsTimetablesAction->setText(QApplication::translate("FetMainForm_template", "Print detailed teachers' free periods timetables", 0));
        dataTeachersSubjectsQualificationsStatisticsAction->setText(QApplication::translate("FetMainForm_template", "Teachers subjects qualifications statistics", "It means the statistics for the teachers - check the teacher's subject qualification"));
        shortcutSaveAsPushButton->setText(QApplication::translate("FetMainForm_template", "As", "It is an abbreviation for Save as. It is on the shortcuts tab buttons, so keep translation short"));
        shortcutOpenRecentPushButton->setText(QApplication::translate("FetMainForm_template", "Recent", "It is an abbreaviation for Open recent. It is text on a push button, to show the list of recently used files and open one of them. Please keep translation short."));
        shortcutSavePushButton->setText(QApplication::translate("FetMainForm_template", "Save", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutOpenPushButton->setText(QApplication::translate("FetMainForm_template", "Open", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutNewPushButton->setText(QApplication::translate("FetMainForm_template", "New", "It is on the shortcuts tab buttons, so keep translation short"));
        tabWidget->setTabText(tabWidget->indexOf(fileTab), QApplication::translate("FetMainForm_template", "File", 0));
        shortcutBasicPushButton->setText(QApplication::translate("FetMainForm_template", "Basic", "It is a shortcut button on the main form, activates a menu with institution information (name and comments) and days per week and hours per day. It is on the shortcuts tab buttons, so keep translation short"));
        shortcutActivitiesPushButton->setText(QApplication::translate("FetMainForm_template", "Activities", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutSubjectsPushButton->setText(QApplication::translate("FetMainForm_template", "Subjects", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutTeachersPushButton->setText(QApplication::translate("FetMainForm_template", "Teachers", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutActivityTagsPushButton->setText(QApplication::translate("FetMainForm_template", "Tags", "It means activity tags, but I want to keep it short. It is on the shortcuts tab buttons, so keep translation short"));
        shortcutStudentsPushButton->setText(QApplication::translate("FetMainForm_template", "Students", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutDataSpacePushButton->setText(QApplication::translate("FetMainForm_template", "Space", "It is on the shortcuts tab buttons, so keep translation short. It contains submenu for buildings and rooms"));
        shortcutSubactivitiesPushButton->setText(QApplication::translate("FetMainForm_template", "Subactivities", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutDataAdvancedPushButton->setText(QApplication::translate("FetMainForm_template", "Advanced", "It is on the shortcuts tab buttons, so keep translation short. It contains submenu for activity planning"));
        tabWidget->setTabText(tabWidget->indexOf(dataTab), QApplication::translate("FetMainForm_template", "Data", 0));
        shortcutAllTimeConstraintsPushButton->setText(QApplication::translate("FetMainForm_template", "All", "It refers to all time constraints (it is the text of a button for activating all time constraints dialog on the main form). It is on the shortcuts tab buttons, so keep translation short"));
        shortcutBreakTimeConstraintsPushButton->setText(QApplication::translate("FetMainForm_template", "Break", "Refers to break constraints (it is a button in the shortcuts tab on main form)"));
        shortcutTeachersTimeConstraintsPushButton->setText(QApplication::translate("FetMainForm_template", "Teachers", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutStudentsTimeConstraintsPushButton->setText(QApplication::translate("FetMainForm_template", "Students", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutActivitiesTimeConstraintsPushButton->setText(QApplication::translate("FetMainForm_template", "Activities", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutAdvancedTimeConstraintsPushButton->setText(QApplication::translate("FetMainForm_template", "Advanced", 0));
        tabWidget->setTabText(tabWidget->indexOf(timeConstraintsTab), QApplication::translate("FetMainForm_template", "Time", "It is a tab for shortcut buttons to time constraints, so it refers to time constraints, but we need to keep it short, that is why I don't add also 'constraints'"));
        shortcutAllSpaceConstraintsPushButton->setText(QApplication::translate("FetMainForm_template", "All", "It refers to all space constraints (it is the text of a button for activating all space constraints dialog on the main form). It is on the shortcuts tab buttons, so keep translation short"));
        shortcutActivitiesSpaceConstraintsPushButton->setText(QApplication::translate("FetMainForm_template", "Activities", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutRoomsSpaceConstraintsPushButton->setText(QApplication::translate("FetMainForm_template", "Rooms", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutTeachersSpaceConstraintsPushButton->setText(QApplication::translate("FetMainForm_template", "Teachers", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutStudentsSpaceConstraintsPushButton->setText(QApplication::translate("FetMainForm_template", "Students", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutSubjectsSpaceConstraintsPushButton->setText(QApplication::translate("FetMainForm_template", "Subjects", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutActivityTagsSpaceConstraintsPushButton->setText(QApplication::translate("FetMainForm_template", "Tags", "It means activity tags, but I want to keep it short. It is on the shortcuts tab buttons, so keep translation short"));
        shortcutSubjectsAndActivityTagsSpaceConstraintsPushButton->setText(QApplication::translate("FetMainForm_template", "Subjects and tags", "Tags means activity tags, but I want to keep it short. It is on the shortcuts tab buttons, so keep translation short"));
        tabWidget->setTabText(tabWidget->indexOf(spaceConstraintsTab), QApplication::translate("FetMainForm_template", "Space", "It is a tab for shortcut buttons to space constraints, so it refers to space constraints, but we need to keep it short, that is why I don't add also 'constraints'"));
        shortcutGeneratePushButton->setText(QApplication::translate("FetMainForm_template", "Generate", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutGenerateMultiplePushButton->setText(QApplication::translate("FetMainForm_template", "Multiple", "It means generate multiple timetables, but I wanted to keep field short, that is why I only write 'Multiple'.It is on the shortcuts tab buttons, so keep translation short"));
        shortcutViewTeachersPushButton->setText(QApplication::translate("FetMainForm_template", "Teachers", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutViewStudentsPushButton->setText(QApplication::translate("FetMainForm_template", "Students", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutShowSoftConflictsPushButton->setText(QApplication::translate("FetMainForm_template", "Conflicts", "It means show soft conflicts, but I want to keep field short. It is on the shortcuts tab buttons, so keep translation short"));
        shortcutsTimetableAdvancedPushButton->setText(QApplication::translate("FetMainForm_template", "Advanced", 0));
        shortcutViewRoomsPushButton->setText(QApplication::translate("FetMainForm_template", "Rooms", "It is on the shortcuts tab buttons, so keep translation short"));
        shortcutsTimetablePrintPushButton->setText(QApplication::translate("FetMainForm_template", "Print", 0));
        shortcutsTimetableLockingPushButton->setText(QApplication::translate("FetMainForm_template", "Locking", "Refers to timetable locking, means locking/unlocking activities, but we need to keep the field short."));
        tabWidget->setTabText(tabWidget->indexOf(timetableTab), QApplication::translate("FetMainForm_template", "Timetable", 0));
        helpMenu->setTitle(QApplication::translate("FetMainForm_template", "&Help", 0));
        menu_help_On_line->setTitle(QApplication::translate("FetMainForm_template", "Online", 0));
        fileMenu->setTitle(QApplication::translate("FetMainForm_template", "&File", 0));
        menuExport->setTitle(QApplication::translate("FetMainForm_template", "Export", 0));
        menuImport->setTitle(QApplication::translate("FetMainForm_template", "Import", 0));
        menuImport_CSV->setTitle(QApplication::translate("FetMainForm_template", "Import comma separated values (text)", 0));
        fileOpenRecentMenu->setTitle(QApplication::translate("FetMainForm_template", "Open &recent", 0));
        timetableMenu->setTitle(QApplication::translate("FetMainForm_template", "&Timetable", 0));
        menuAdvancedLockUnlock->setTitle(QApplication::translate("FetMainForm_template", "Advanced lock/unlock", 0));
        menuStatistics->setTitle(QApplication::translate("FetMainForm_template", "Statistics", 0));
        dataMenu->setTitle(QApplication::translate("FetMainForm_template", "&Data", 0));
        menuTime_constraints->setTitle(QApplication::translate("FetMainForm_template", "Time constraints", 0));
        menuMisc_time_constraints->setTitle(QApplication::translate("FetMainForm_template", "Miscellaneous", 0));
        menuTeachers_time_constraints->setTitle(QApplication::translate("FetMainForm_template", "Teachers", 0));
        menuStudents_time_constraints->setTitle(QApplication::translate("FetMainForm_template", "Students", 0));
        menuActivities_time_constraints->setTitle(QApplication::translate("FetMainForm_template", "Activities", 0));
        menuSpace_constraints->setTitle(QApplication::translate("FetMainForm_template", "Space constraints", 0));
        menuMisc_space_constraints->setTitle(QApplication::translate("FetMainForm_template", "Miscellaneous", 0));
        menuRooms_space_constraints->setTitle(QApplication::translate("FetMainForm_template", "Rooms", 0));
        menuActivities_space_constraints->setTitle(QApplication::translate("FetMainForm_template", "Activities", 0));
        menuSubjects_space_constraints->setTitle(QApplication::translate("FetMainForm_template", "Subjects", 0));
        menuSubjects_and_activity_tags_space_constraints->setTitle(QApplication::translate("FetMainForm_template", "Subjects and activity tags", 0));
        menuStudents_space_constraints->setTitle(QApplication::translate("FetMainForm_template", "Students", 0));
        menuTeachers_space_constraints->setTitle(QApplication::translate("FetMainForm_template", "Teachers", 0));
        menuActivity_tags_space_constraints->setTitle(QApplication::translate("FetMainForm_template", "Activity tags", 0));
        menuStudents->setTitle(QApplication::translate("FetMainForm_template", "Stu&dents", 0));
        menuInstitution_information->setTitle(QApplication::translate("FetMainForm_template", "Institution information", 0));
        menuDays_and_hours->setTitle(QApplication::translate("FetMainForm_template", "Days and hours", 0));
        menuSettings->setTitle(QApplication::translate("FetMainForm_template", "Settings", 0));
        menuSettingsAdvanced->setTitle(QApplication::translate("FetMainForm_template", "Advanced", 0));
        menuFET_interface->setTitle(QApplication::translate("FetMainForm_template", "Interface", 0));
        menuTimetables->setTitle(QApplication::translate("FetMainForm_template", "Timetables", 0));
        menuConfirmations->setTitle(QApplication::translate("FetMainForm_template", "Confirmations", "This is a submenu, contains these settings: if a user wants to deactivate/activate a confirmation (instructions) dialog that appears before an advanced dialog"));
        menuAdvanced->setTitle(QApplication::translate("FetMainForm_template", "Advanced", 0));
        Q_UNUSED(FetMainForm_template);
    } // retranslateUi

};

namespace Ui {
    class FetMainForm_template: public Ui_FetMainForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FETMAINFORM_TEMPLATE_H
