/****************************************************************************
** Meta object code from reading C++ file 'fetmainform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/interface/fetmainform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fetmainform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RandomSeedDialog_t {
    QByteArrayData data[4];
    char stringdata[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_RandomSeedDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_RandomSeedDialog_t qt_meta_stringdata_RandomSeedDialog = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 4),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 2)
    },
    "RandomSeedDialog\0help\0\0ok\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RandomSeedDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a,
       3,    0,   25,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RandomSeedDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RandomSeedDialog *_t = static_cast<RandomSeedDialog *>(_o);
        switch (_id) {
        case 0: _t->help(); break;
        case 1: _t->ok(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RandomSeedDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RandomSeedDialog.data,
      qt_meta_data_RandomSeedDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *RandomSeedDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RandomSeedDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RandomSeedDialog.stringdata))
        return static_cast<void*>(const_cast< RandomSeedDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int RandomSeedDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_FetMainForm_t {
    QByteArrayData data[243];
    char stringdata[12429];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FetMainForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FetMainForm_t qt_meta_stringdata_FetMainForm = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 23),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 26),
QT_MOC_LITERAL(4, 64, 27),
QT_MOC_LITERAL(5, 92, 29),
QT_MOC_LITERAL(6, 122, 27),
QT_MOC_LITERAL(7, 150, 27),
QT_MOC_LITERAL(8, 178, 43),
QT_MOC_LITERAL(9, 222, 14),
QT_MOC_LITERAL(10, 237, 44),
QT_MOC_LITERAL(11, 282, 42),
QT_MOC_LITERAL(12, 325, 46),
QT_MOC_LITERAL(13, 372, 40),
QT_MOC_LITERAL(14, 413, 40),
QT_MOC_LITERAL(15, 454, 52),
QT_MOC_LITERAL(16, 507, 32),
QT_MOC_LITERAL(17, 540, 38),
QT_MOC_LITERAL(18, 579, 31),
QT_MOC_LITERAL(19, 611, 27),
QT_MOC_LITERAL(20, 639, 28),
QT_MOC_LITERAL(21, 668, 31),
QT_MOC_LITERAL(22, 700, 41),
QT_MOC_LITERAL(23, 742, 31),
QT_MOC_LITERAL(24, 774, 41),
QT_MOC_LITERAL(25, 816, 35),
QT_MOC_LITERAL(26, 852, 28),
QT_MOC_LITERAL(27, 881, 29),
QT_MOC_LITERAL(28, 911, 32),
QT_MOC_LITERAL(29, 944, 41),
QT_MOC_LITERAL(30, 986, 48),
QT_MOC_LITERAL(31, 1035, 63),
QT_MOC_LITERAL(32, 1099, 39),
QT_MOC_LITERAL(33, 1139, 31),
QT_MOC_LITERAL(34, 1171, 34),
QT_MOC_LITERAL(35, 1206, 32),
QT_MOC_LITERAL(36, 1239, 7),
QT_MOC_LITERAL(37, 1247, 38),
QT_MOC_LITERAL(38, 1286, 50),
QT_MOC_LITERAL(39, 1337, 61),
QT_MOC_LITERAL(40, 1399, 42),
QT_MOC_LITERAL(41, 1442, 48),
QT_MOC_LITERAL(42, 1491, 48),
QT_MOC_LITERAL(43, 1540, 47),
QT_MOC_LITERAL(44, 1588, 45),
QT_MOC_LITERAL(45, 1634, 51),
QT_MOC_LITERAL(46, 1686, 37),
QT_MOC_LITERAL(47, 1724, 34),
QT_MOC_LITERAL(48, 1759, 42),
QT_MOC_LITERAL(49, 1802, 52),
QT_MOC_LITERAL(50, 1855, 60),
QT_MOC_LITERAL(51, 1916, 42),
QT_MOC_LITERAL(52, 1959, 50),
QT_MOC_LITERAL(53, 2010, 48),
QT_MOC_LITERAL(54, 2059, 33),
QT_MOC_LITERAL(55, 2093, 36),
QT_MOC_LITERAL(56, 2130, 28),
QT_MOC_LITERAL(57, 2159, 32),
QT_MOC_LITERAL(58, 2192, 41),
QT_MOC_LITERAL(59, 2234, 42),
QT_MOC_LITERAL(60, 2277, 60),
QT_MOC_LITERAL(61, 2338, 59),
QT_MOC_LITERAL(62, 2398, 60),
QT_MOC_LITERAL(63, 2459, 61),
QT_MOC_LITERAL(64, 2521, 58),
QT_MOC_LITERAL(65, 2580, 59),
QT_MOC_LITERAL(66, 2640, 54),
QT_MOC_LITERAL(67, 2695, 55),
QT_MOC_LITERAL(68, 2751, 74),
QT_MOC_LITERAL(69, 2826, 71),
QT_MOC_LITERAL(70, 2898, 75),
QT_MOC_LITERAL(71, 2974, 72),
QT_MOC_LITERAL(72, 3047, 79),
QT_MOC_LITERAL(73, 3127, 76),
QT_MOC_LITERAL(74, 3204, 70),
QT_MOC_LITERAL(75, 3275, 71),
QT_MOC_LITERAL(76, 3347, 71),
QT_MOC_LITERAL(77, 3419, 72),
QT_MOC_LITERAL(78, 3492, 75),
QT_MOC_LITERAL(79, 3568, 76),
QT_MOC_LITERAL(80, 3645, 59),
QT_MOC_LITERAL(81, 3705, 60),
QT_MOC_LITERAL(82, 3766, 70),
QT_MOC_LITERAL(83, 3837, 71),
QT_MOC_LITERAL(84, 3909, 63),
QT_MOC_LITERAL(85, 3973, 64),
QT_MOC_LITERAL(86, 4038, 72),
QT_MOC_LITERAL(87, 4111, 70),
QT_MOC_LITERAL(88, 4182, 57),
QT_MOC_LITERAL(89, 4240, 48),
QT_MOC_LITERAL(90, 4289, 62),
QT_MOC_LITERAL(91, 4352, 58),
QT_MOC_LITERAL(92, 4411, 60),
QT_MOC_LITERAL(93, 4472, 58),
QT_MOC_LITERAL(94, 4531, 67),
QT_MOC_LITERAL(95, 4599, 64),
QT_MOC_LITERAL(96, 4664, 66),
QT_MOC_LITERAL(97, 4731, 69),
QT_MOC_LITERAL(98, 4801, 68),
QT_MOC_LITERAL(99, 4870, 70),
QT_MOC_LITERAL(100, 4941, 73),
QT_MOC_LITERAL(101, 5015, 64),
QT_MOC_LITERAL(102, 5080, 64),
QT_MOC_LITERAL(103, 5145, 63),
QT_MOC_LITERAL(104, 5209, 79),
QT_MOC_LITERAL(105, 5289, 82),
QT_MOC_LITERAL(106, 5372, 62),
QT_MOC_LITERAL(107, 5435, 62),
QT_MOC_LITERAL(108, 5498, 62),
QT_MOC_LITERAL(109, 5561, 62),
QT_MOC_LITERAL(110, 5624, 61),
QT_MOC_LITERAL(111, 5686, 62),
QT_MOC_LITERAL(112, 5749, 62),
QT_MOC_LITERAL(113, 5812, 59),
QT_MOC_LITERAL(114, 5872, 60),
QT_MOC_LITERAL(115, 5933, 59),
QT_MOC_LITERAL(116, 5993, 60),
QT_MOC_LITERAL(117, 6054, 59),
QT_MOC_LITERAL(118, 6114, 58),
QT_MOC_LITERAL(119, 6173, 66),
QT_MOC_LITERAL(120, 6240, 65),
QT_MOC_LITERAL(121, 6306, 77),
QT_MOC_LITERAL(122, 6384, 76),
QT_MOC_LITERAL(123, 6461, 70),
QT_MOC_LITERAL(124, 6532, 69),
QT_MOC_LITERAL(125, 6602, 59),
QT_MOC_LITERAL(126, 6662, 58),
QT_MOC_LITERAL(127, 6721, 60),
QT_MOC_LITERAL(128, 6782, 59),
QT_MOC_LITERAL(129, 6842, 59),
QT_MOC_LITERAL(130, 6902, 58),
QT_MOC_LITERAL(131, 6961, 67),
QT_MOC_LITERAL(132, 7029, 68),
QT_MOC_LITERAL(133, 7098, 71),
QT_MOC_LITERAL(134, 7170, 68),
QT_MOC_LITERAL(135, 7239, 63),
QT_MOC_LITERAL(136, 7303, 60),
QT_MOC_LITERAL(137, 7364, 66),
QT_MOC_LITERAL(138, 7431, 63),
QT_MOC_LITERAL(139, 7495, 60),
QT_MOC_LITERAL(140, 7556, 62),
QT_MOC_LITERAL(141, 7619, 59),
QT_MOC_LITERAL(142, 7679, 76),
QT_MOC_LITERAL(143, 7756, 79),
QT_MOC_LITERAL(144, 7836, 59),
QT_MOC_LITERAL(145, 7896, 62),
QT_MOC_LITERAL(146, 7959, 66),
QT_MOC_LITERAL(147, 8026, 69),
QT_MOC_LITERAL(148, 8096, 77),
QT_MOC_LITERAL(149, 8174, 80),
QT_MOC_LITERAL(150, 8255, 70),
QT_MOC_LITERAL(151, 8326, 73),
QT_MOC_LITERAL(152, 8400, 59),
QT_MOC_LITERAL(153, 8460, 62),
QT_MOC_LITERAL(154, 8523, 58),
QT_MOC_LITERAL(155, 8582, 59),
QT_MOC_LITERAL(156, 8642, 62),
QT_MOC_LITERAL(157, 8705, 59),
QT_MOC_LITERAL(158, 8765, 60),
QT_MOC_LITERAL(159, 8826, 61),
QT_MOC_LITERAL(160, 8888, 64),
QT_MOC_LITERAL(161, 8953, 61),
QT_MOC_LITERAL(162, 9015, 35),
QT_MOC_LITERAL(163, 9051, 35),
QT_MOC_LITERAL(164, 9087, 45),
QT_MOC_LITERAL(165, 9133, 28),
QT_MOC_LITERAL(166, 9162, 26),
QT_MOC_LITERAL(167, 9189, 27),
QT_MOC_LITERAL(168, 9217, 35),
QT_MOC_LITERAL(169, 9253, 31),
QT_MOC_LITERAL(170, 9285, 31),
QT_MOC_LITERAL(171, 9317, 28),
QT_MOC_LITERAL(172, 9346, 32),
QT_MOC_LITERAL(173, 9379, 36),
QT_MOC_LITERAL(174, 9416, 40),
QT_MOC_LITERAL(175, 9457, 40),
QT_MOC_LITERAL(176, 9498, 37),
QT_MOC_LITERAL(177, 9536, 41),
QT_MOC_LITERAL(178, 9578, 33),
QT_MOC_LITERAL(179, 9612, 44),
QT_MOC_LITERAL(180, 9657, 45),
QT_MOC_LITERAL(181, 9703, 47),
QT_MOC_LITERAL(182, 9751, 45),
QT_MOC_LITERAL(183, 9797, 47),
QT_MOC_LITERAL(184, 9845, 56),
QT_MOC_LITERAL(185, 9902, 58),
QT_MOC_LITERAL(186, 9961, 43),
QT_MOC_LITERAL(187, 10005, 29),
QT_MOC_LITERAL(188, 10035, 27),
QT_MOC_LITERAL(189, 10063, 32),
QT_MOC_LITERAL(190, 10096, 47),
QT_MOC_LITERAL(191, 10144, 47),
QT_MOC_LITERAL(192, 10192, 42),
QT_MOC_LITERAL(193, 10235, 45),
QT_MOC_LITERAL(194, 10281, 42),
QT_MOC_LITERAL(195, 10324, 48),
QT_MOC_LITERAL(196, 10373, 67),
QT_MOC_LITERAL(197, 10441, 47),
QT_MOC_LITERAL(198, 10489, 40),
QT_MOC_LITERAL(199, 10530, 60),
QT_MOC_LITERAL(200, 10591, 34),
QT_MOC_LITERAL(201, 10626, 41),
QT_MOC_LITERAL(202, 10668, 34),
QT_MOC_LITERAL(203, 10703, 47),
QT_MOC_LITERAL(204, 10751, 49),
QT_MOC_LITERAL(205, 10801, 52),
QT_MOC_LITERAL(206, 10854, 52),
QT_MOC_LITERAL(207, 10907, 54),
QT_MOC_LITERAL(208, 10962, 52),
QT_MOC_LITERAL(209, 11015, 48),
QT_MOC_LITERAL(210, 11064, 50),
QT_MOC_LITERAL(211, 11115, 53),
QT_MOC_LITERAL(212, 11169, 53),
QT_MOC_LITERAL(213, 11223, 53),
QT_MOC_LITERAL(214, 11277, 57),
QT_MOC_LITERAL(215, 11335, 68),
QT_MOC_LITERAL(216, 11404, 55),
QT_MOC_LITERAL(217, 11460, 37),
QT_MOC_LITERAL(218, 11498, 45),
QT_MOC_LITERAL(219, 11544, 41),
QT_MOC_LITERAL(220, 11586, 41),
QT_MOC_LITERAL(221, 11628, 38),
QT_MOC_LITERAL(222, 11667, 46),
QT_MOC_LITERAL(223, 11714, 47),
QT_MOC_LITERAL(224, 11762, 44),
QT_MOC_LITERAL(225, 11807, 46),
QT_MOC_LITERAL(226, 11854, 34),
QT_MOC_LITERAL(227, 11889, 37),
QT_MOC_LITERAL(228, 11927, 41),
QT_MOC_LITERAL(229, 11969, 37),
QT_MOC_LITERAL(230, 12007, 37),
QT_MOC_LITERAL(231, 12045, 39),
QT_MOC_LITERAL(232, 12085, 42),
QT_MOC_LITERAL(233, 12128, 41),
QT_MOC_LITERAL(234, 12170, 38),
QT_MOC_LITERAL(235, 12209, 33),
QT_MOC_LITERAL(236, 12243, 39),
QT_MOC_LITERAL(237, 12283, 32),
QT_MOC_LITERAL(238, 12316, 33),
QT_MOC_LITERAL(239, 12350, 35),
QT_MOC_LITERAL(240, 12386, 13),
QT_MOC_LITERAL(241, 12400, 14),
QT_MOC_LITERAL(242, 12415, 12)
    },
    "FetMainForm\0enableNotPerfectMessage\0"
    "\0on_fileNewAction_triggered\0"
    "on_fileSaveAction_triggered\0"
    "on_fileSaveAsAction_triggered\0"
    "on_fileExitAction_triggered\0"
    "on_fileOpenAction_triggered\0"
    "on_fileClearRecentFilesListAction_triggered\0"
    "openRecentFile\0"
    "on_fileImportCSVActivityTagsAction_triggered\0"
    "on_fileImportCSVActivitiesAction_triggered\0"
    "on_fileImportCSVRoomsBuildingsAction_triggered\0"
    "on_fileImportCSVSubjectsAction_triggered\0"
    "on_fileImportCSVTeachersAction_triggered\0"
    "on_fileImportCSVYearsGroupsSubgroupsAction_triggered\0"
    "on_fileExportCSVAction_triggered\0"
    "on_dataInstitutionNameAction_triggered\0"
    "on_dataCommentsAction_triggered\0"
    "on_dataDaysAction_triggered\0"
    "on_dataHoursAction_triggered\0"
    "on_dataTeachersAction_triggered\0"
    "on_dataTeachersStatisticsAction_triggered\0"
    "on_dataSubjectsAction_triggered\0"
    "on_dataSubjectsStatisticsAction_triggered\0"
    "on_dataActivityTagsAction_triggered\0"
    "on_dataYearsAction_triggered\0"
    "on_dataGroupsAction_triggered\0"
    "on_dataSubgroupsAction_triggered\0"
    "on_dataStudentsStatisticsAction_triggered\0"
    "on_dataActivitiesRoomsStatisticsAction_triggered\0"
    "on_dataTeachersSubjectsQualificationsStatisticsAction_triggered\0"
    "on_dataHelpOnStatisticsAction_triggered\0"
    "on_helpSettingsAction_triggered\0"
    "on_settingsUseColorsAction_toggled\0"
    "showSubgroupsInComboBoxesToggled\0"
    "checked\0showSubgroupsInActivityPlanningToggled\0"
    "on_settingsShowShortcutsOnMainWindowAction_toggled\0"
    "on_settingsShowToolTipsForConstraintsWithTablesAction_toggled\0"
    "on_timetablesToWriteOnDiskAction_triggered\0"
    "on_settingsConfirmActivityPlanningAction_toggled\0"
    "on_settingsConfirmSpreadActivitiesAction_toggled\0"
    "on_settingsConfirmRemoveRedundantAction_toggled\0"
    "on_settingsConfirmSaveTimetableAction_toggled\0"
    "showWarningForSubgroupsWithTheSameActivitiesToggled\0"
    "enableActivityTagMaxHoursDailyToggled\0"
    "enableStudentsMaxGapsPerDayToggled\0"
    "showWarningForNotPerfectConstraintsToggled\0"
    "enableStudentsMinHoursDailyWithAllowEmptyDaysToggled\0"
    "showWarningForStudentsMinHoursDailyWithAllowEmptyDaysToggled\0"
    "enableGroupActivitiesInInitialOrderToggled\0"
    "showWarningForGroupActivitiesInInitialOrderToggled\0"
    "on_groupActivitiesInInitialOrderAction_triggered\0"
    "on_dataActivitiesAction_triggered\0"
    "on_dataSubactivitiesAction_triggered\0"
    "on_dataRoomsAction_triggered\0"
    "on_dataBuildingsAction_triggered\0"
    "on_dataAllTimeConstraintsAction_triggered\0"
    "on_dataAllSpaceConstraintsAction_triggered\0"
    "on_dataSpaceConstraintsRoomNotAvailableTimesAction_triggered\0"
    "on_dataSpaceConstraintsBasicCompulsorySpaceAction_triggered\0"
    "on_dataSpaceConstraintsActivityPreferredRoomAction_triggered\0"
    "on_dataSpaceConstraintsActivityPreferredRoomsAction_triggered\0"
    "on_dataSpaceConstraintsStudentsSetHomeRoomAction_triggered\0"
    "on_dataSpaceConstraintsStudentsSetHomeRoomsAction_triggered\0"
    "on_dataSpaceConstraintsTeacherHomeRoomAction_triggered\0"
    "on_dataSpaceConstraintsTeacherHomeRoomsAction_triggered\0"
    "on_dataSpaceConstraintsStudentsSetMaxBuildingChangesPerDayAction_trigg"
    "ered\0"
    "on_dataSpaceConstraintsStudentsMaxBuildingChangesPerDayAction_triggere"
    "d\0"
    "on_dataSpaceConstraintsStudentsSetMaxBuildingChangesPerWeekAction_trig"
    "gered\0"
    "on_dataSpaceConstraintsStudentsMaxBuildingChangesPerWeekAction_trigger"
    "ed\0"
    "on_dataSpaceConstraintsStudentsSetMinGapsBetweenBuildingChangesAction_"
    "triggered\0"
    "on_dataSpaceConstraintsStudentsMinGapsBetweenBuildingChangesAction_tri"
    "ggered\0"
    "on_dataSpaceConstraintsTeacherMaxBuildingChangesPerDayAction_triggered\0"
    "on_dataSpaceConstraintsTeachersMaxBuildingChangesPerDayAction_triggere"
    "d\0"
    "on_dataSpaceConstraintsTeacherMaxBuildingChangesPerWeekAction_triggere"
    "d\0"
    "on_dataSpaceConstraintsTeachersMaxBuildingChangesPerWeekAction_trigger"
    "ed\0"
    "on_dataSpaceConstraintsTeacherMinGapsBetweenBuildingChangesAction_trig"
    "gered\0"
    "on_dataSpaceConstraintsTeachersMinGapsBetweenBuildingChangesAction_tri"
    "ggered\0"
    "on_dataSpaceConstraintsSubjectPreferredRoomAction_triggered\0"
    "on_dataSpaceConstraintsSubjectPreferredRoomsAction_triggered\0"
    "on_dataSpaceConstraintsSubjectActivityTagPreferredRoomAction_triggered\0"
    "on_dataSpaceConstraintsSubjectActivityTagPreferredRoomsAction_triggere"
    "d\0"
    "on_dataSpaceConstraintsActivityTagPreferredRoomAction_triggered\0"
    "on_dataSpaceConstraintsActivityTagPreferredRoomsAction_triggered\0"
    "on_dataSpaceConstraintsActivitiesOccupyMaxDifferentRoomsAction_trigger"
    "ed\0"
    "on_dataSpaceConstraintsActivitiesSameRoomIfConsecutiveAction_triggered\0"
    "on_dataTimeConstraintsBasicCompulsoryTimeAction_triggered\0"
    "on_dataTimeConstraintsBreakTimesAction_triggered\0"
    "on_dataTimeConstraintsTwoActivitiesConsecutiveAction_triggered\0"
    "on_dataTimeConstraintsTwoActivitiesGroupedAction_triggered\0"
    "on_dataTimeConstraintsThreeActivitiesGroupedAction_triggered\0"
    "on_dataTimeConstraintsTwoActivitiesOrderedAction_triggered\0"
    "on_dataTimeConstraintsActivityPreferredStartingTimeAction_triggered\0"
    "on_dataTimeConstraintsActivityPreferredTimeSlotsAction_triggered\0"
    "on_dataTimeConstraintsActivitiesPreferredTimeSlotsAction_triggered\0"
    "on_dataTimeConstraintsSubactivitiesPreferredTimeSlotsAction_triggered\0"
    "on_dataTimeConstraintsActivityPreferredStartingTimesAction_triggered\0"
    "on_dataTimeConstraintsActivitiesPreferredStartingTimesAction_triggered\0"
    "on_dataTimeConstraintsSubactivitiesPreferredStartingTimesAction_trigge"
    "red\0"
    "on_dataTimeConstraintsActivitiesSameStartingTimeAction_triggered\0"
    "on_dataTimeConstraintsActivitiesSameStartingHourAction_triggered\0"
    "on_dataTimeConstraintsActivitiesSameStartingDayAction_triggered\0"
    "on_dataTimeConstraintsActivitiesOccupyMaxTimeSlotsFromSelectionAction_"
    "triggered\0"
    "on_dataTimeConstraintsActivitiesMaxSimultaneousInSelectedTimeSlotsActi"
    "on_triggered\0"
    "on_dataTimeConstraintsActivitiesNotOverlappingAction_triggered\0"
    "on_dataTimeConstraintsMinDaysBetweenActivitiesAction_triggered\0"
    "on_dataTimeConstraintsMaxDaysBetweenActivitiesAction_triggered\0"
    "on_dataTimeConstraintsMinGapsBetweenActivitiesAction_triggered\0"
    "on_dataTimeConstraintsActivityEndsStudentsDayAction_triggered\0"
    "on_dataTimeConstraintsActivitiesEndStudentsDayAction_triggered\0"
    "on_dataTimeConstraintsTeacherNotAvailableTimesAction_triggered\0"
    "on_dataTimeConstraintsTeacherMaxDaysPerWeekAction_triggered\0"
    "on_dataTimeConstraintsTeachersMaxDaysPerWeekAction_triggered\0"
    "on_dataTimeConstraintsTeacherMinDaysPerWeekAction_triggered\0"
    "on_dataTimeConstraintsTeachersMinDaysPerWeekAction_triggered\0"
    "on_dataTimeConstraintsTeachersMaxHoursDailyAction_triggered\0"
    "on_dataTimeConstraintsTeacherMaxHoursDailyAction_triggered\0"
    "on_dataTimeConstraintsTeachersMaxHoursContinuouslyAction_triggered\0"
    "on_dataTimeConstraintsTeacherMaxHoursContinuouslyAction_triggered\0"
    "on_dataTimeConstraintsTeachersActivityTagMaxHoursContinuouslyAction_tr"
    "iggered\0"
    "on_dataTimeConstraintsTeacherActivityTagMaxHoursContinuouslyAction_tri"
    "ggered\0"
    "on_dataTimeConstraintsTeachersActivityTagMaxHoursDailyAction_triggered\0"
    "on_dataTimeConstraintsTeacherActivityTagMaxHoursDailyAction_triggered\0"
    "on_dataTimeConstraintsTeachersMinHoursDailyAction_triggered\0"
    "on_dataTimeConstraintsTeacherMinHoursDailyAction_triggered\0"
    "on_dataTimeConstraintsTeachersMaxGapsPerWeekAction_triggered\0"
    "on_dataTimeConstraintsTeacherMaxGapsPerWeekAction_triggered\0"
    "on_dataTimeConstraintsTeachersMaxGapsPerDayAction_triggered\0"
    "on_dataTimeConstraintsTeacherMaxGapsPerDayAction_triggered\0"
    "on_dataTimeConstraintsTeacherIntervalMaxDaysPerWeekAction_triggered\0"
    "on_dataTimeConstraintsTeachersIntervalMaxDaysPerWeekAction_triggered\0"
    "on_dataTimeConstraintsStudentsSetIntervalMaxDaysPerWeekAction_triggere"
    "d\0"
    "on_dataTimeConstraintsStudentsIntervalMaxDaysPerWeekAction_triggered\0"
    "on_dataTimeConstraintsStudentsSetMaxDaysPerWeekAction_triggered\0"
    "on_dataTimeConstraintsStudentsMaxDaysPerWeekAction_triggered\0"
    "on_dataTimeConstraintsStudentsSetNotAvailableTimesAction_triggered\0"
    "on_dataTimeConstraintsStudentsSetMaxGapsPerWeekAction_triggered\0"
    "on_dataTimeConstraintsStudentsMaxGapsPerWeekAction_triggered\0"
    "on_dataTimeConstraintsStudentsSetMaxGapsPerDayAction_triggered\0"
    "on_dataTimeConstraintsStudentsMaxGapsPerDayAction_triggered\0"
    "on_dataTimeConstraintsStudentsEarlyMaxBeginningsAtSecondHourAction_tri"
    "ggered\0"
    "on_dataTimeConstraintsStudentsSetEarlyMaxBeginningsAtSecondHourAction_"
    "triggered\0"
    "on_dataTimeConstraintsStudentsMaxHoursDailyAction_triggered\0"
    "on_dataTimeConstraintsStudentsSetMaxHoursDailyAction_triggered\0"
    "on_dataTimeConstraintsStudentsMaxHoursContinuouslyAction_triggered\0"
    "on_dataTimeConstraintsStudentsSetMaxHoursContinuouslyAction_triggered\0"
    "on_dataTimeConstraintsStudentsActivityTagMaxHoursContinuouslyAction_tr"
    "iggered\0"
    "on_dataTimeConstraintsStudentsSetActivityTagMaxHoursContinuouslyAction"
    "_triggered\0"
    "on_dataTimeConstraintsStudentsActivityTagMaxHoursDailyAction_triggered\0"
    "on_dataTimeConstraintsStudentsSetActivityTagMaxHoursDailyAction_trigge"
    "red\0"
    "on_dataTimeConstraintsStudentsMinHoursDailyAction_triggered\0"
    "on_dataTimeConstraintsStudentsSetMinHoursDailyAction_triggered\0"
    "on_dataTimeConstraintsTeacherMaxSpanPerDayAction_triggered\0"
    "on_dataTimeConstraintsTeachersMaxSpanPerDayAction_triggered\0"
    "on_dataTimeConstraintsStudentsSetMaxSpanPerDayAction_triggered\0"
    "on_dataTimeConstraintsStudentsMaxSpanPerDayAction_triggered\0"
    "on_dataTimeConstraintsTeacherMinRestingHoursAction_triggered\0"
    "on_dataTimeConstraintsTeachersMinRestingHoursAction_triggered\0"
    "on_dataTimeConstraintsStudentsSetMinRestingHoursAction_triggered\0"
    "on_dataTimeConstraintsStudentsMinRestingHoursAction_triggered\0"
    "on_activityPlanningAction_triggered\0"
    "on_spreadActivitiesAction_triggered\0"
    "on_removeRedundantConstraintsAction_triggered\0"
    "on_helpAboutAction_triggered\0"
    "on_helpFAQAction_triggered\0"
    "on_helpTipsAction_triggered\0"
    "on_helpInstructionsAction_triggered\0"
    "on_helpHomepageAction_triggered\0"
    "on_helpContentsAction_triggered\0"
    "on_helpForumAction_triggered\0"
    "on_helpAddressesAction_triggered\0"
    "on_timetableGenerateAction_triggered\0"
    "on_timetableViewStudentsAction_triggered\0"
    "on_timetableViewTeachersAction_triggered\0"
    "on_timetableViewRoomsAction_triggered\0"
    "on_timetableShowConflictsAction_triggered\0"
    "on_timetablePrintAction_triggered\0"
    "on_timetableGenerateMultipleAction_triggered\0"
    "on_timetableLockAllActivitiesAction_triggered\0"
    "on_timetableUnlockAllActivitiesAction_triggered\0"
    "on_timetableLockActivitiesDayAction_triggered\0"
    "on_timetableUnlockActivitiesDayAction_triggered\0"
    "on_timetableLockActivitiesEndStudentsDayAction_triggered\0"
    "on_timetableUnlockActivitiesEndStudentsDayAction_triggered\0"
    "on_timetableSaveTimetableAsAction_triggered\0"
    "on_randomSeedAction_triggered\0"
    "on_languageAction_triggered\0"
    "on_checkForUpdatesAction_toggled\0"
    "on_settingsDivideTimetablesByDaysAction_toggled\0"
    "on_settingsDuplicateVerticalNamesAction_toggled\0"
    "on_settingsRestoreDefaultsAction_triggered\0"
    "on_settingsTimetableHtmlLevelAction_triggered\0"
    "on_settingsPrintActivityTagsAction_toggled\0"
    "on_settingsPrintDetailedTimetablesAction_toggled\0"
    "on_settingsPrintDetailedTeachersFreePeriodsTimetablesAction_toggled\0"
    "on_settingsPrintNotAvailableSlotsAction_toggled\0"
    "on_settingsPrintBreakSlotsAction_toggled\0"
    "on_settingsPrintActivitiesWithSameStartingTimeAction_toggled\0"
    "on_selectOutputDirAction_triggered\0"
    "on_statisticsExportToDiskAction_triggered\0"
    "on_statisticsPrintAction_triggered\0"
    "on_shortcutAllTimeConstraintsPushButton_clicked\0"
    "on_shortcutBreakTimeConstraintsPushButton_clicked\0"
    "on_shortcutTeachersTimeConstraintsPushButton_clicked\0"
    "on_shortcutStudentsTimeConstraintsPushButton_clicked\0"
    "on_shortcutActivitiesTimeConstraintsPushButton_clicked\0"
    "on_shortcutAdvancedTimeConstraintsPushButton_clicked\0"
    "on_shortcutAllSpaceConstraintsPushButton_clicked\0"
    "on_shortcutRoomsSpaceConstraintsPushButton_clicked\0"
    "on_shortcutTeachersSpaceConstraintsPushButton_clicked\0"
    "on_shortcutStudentsSpaceConstraintsPushButton_clicked\0"
    "on_shortcutSubjectsSpaceConstraintsPushButton_clicked\0"
    "on_shortcutActivityTagsSpaceConstraintsPushButton_clicked\0"
    "on_shortcutSubjectsAndActivityTagsSpaceConstraintsPushButton_clicked\0"
    "on_shortcutActivitiesSpaceConstraintsPushButton_clicked\0"
    "on_shortcutGeneratePushButton_clicked\0"
    "on_shortcutGenerateMultiplePushButton_clicked\0"
    "on_shortcutViewTeachersPushButton_clicked\0"
    "on_shortcutViewStudentsPushButton_clicked\0"
    "on_shortcutViewRoomsPushButton_clicked\0"
    "on_shortcutShowSoftConflictsPushButton_clicked\0"
    "on_shortcutsTimetableAdvancedPushButton_clicked\0"
    "on_shortcutsTimetablePrintPushButton_clicked\0"
    "on_shortcutsTimetableLockingPushButton_clicked\0"
    "on_shortcutBasicPushButton_clicked\0"
    "on_shortcutSubjectsPushButton_clicked\0"
    "on_shortcutActivityTagsPushButton_clicked\0"
    "on_shortcutTeachersPushButton_clicked\0"
    "on_shortcutStudentsPushButton_clicked\0"
    "on_shortcutActivitiesPushButton_clicked\0"
    "on_shortcutSubactivitiesPushButton_clicked\0"
    "on_shortcutDataAdvancedPushButton_clicked\0"
    "on_shortcutDataSpacePushButton_clicked\0"
    "on_shortcutOpenPushButton_clicked\0"
    "on_shortcutOpenRecentPushButton_clicked\0"
    "on_shortcutNewPushButton_clicked\0"
    "on_shortcutSavePushButton_clicked\0"
    "on_shortcutSaveAsPushButton_clicked\0"
    "replyFinished\0QNetworkReply*\0networkReply\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FetMainForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     238,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0, 1204,    2, 0x0a,
       3,    0, 1205,    2, 0x0a,
       4,    0, 1206,    2, 0x0a,
       5,    0, 1207,    2, 0x0a,
       6,    0, 1208,    2, 0x0a,
       7,    0, 1209,    2, 0x0a,
       8,    0, 1210,    2, 0x0a,
       9,    0, 1211,    2, 0x0a,
      10,    0, 1212,    2, 0x0a,
      11,    0, 1213,    2, 0x0a,
      12,    0, 1214,    2, 0x0a,
      13,    0, 1215,    2, 0x0a,
      14,    0, 1216,    2, 0x0a,
      15,    0, 1217,    2, 0x0a,
      16,    0, 1218,    2, 0x0a,
      17,    0, 1219,    2, 0x0a,
      18,    0, 1220,    2, 0x0a,
      19,    0, 1221,    2, 0x0a,
      20,    0, 1222,    2, 0x0a,
      21,    0, 1223,    2, 0x0a,
      22,    0, 1224,    2, 0x0a,
      23,    0, 1225,    2, 0x0a,
      24,    0, 1226,    2, 0x0a,
      25,    0, 1227,    2, 0x0a,
      26,    0, 1228,    2, 0x0a,
      27,    0, 1229,    2, 0x0a,
      28,    0, 1230,    2, 0x0a,
      29,    0, 1231,    2, 0x0a,
      30,    0, 1232,    2, 0x0a,
      31,    0, 1233,    2, 0x0a,
      32,    0, 1234,    2, 0x0a,
      33,    0, 1235,    2, 0x0a,
      34,    0, 1236,    2, 0x0a,
      35,    1, 1237,    2, 0x0a,
      37,    1, 1240,    2, 0x0a,
      38,    0, 1243,    2, 0x0a,
      39,    0, 1244,    2, 0x0a,
      40,    0, 1245,    2, 0x0a,
      41,    0, 1246,    2, 0x0a,
      42,    0, 1247,    2, 0x0a,
      43,    0, 1248,    2, 0x0a,
      44,    0, 1249,    2, 0x0a,
      45,    1, 1250,    2, 0x0a,
      46,    1, 1253,    2, 0x0a,
      47,    1, 1256,    2, 0x0a,
      48,    1, 1259,    2, 0x0a,
      49,    1, 1262,    2, 0x0a,
      50,    1, 1265,    2, 0x0a,
      51,    1, 1268,    2, 0x0a,
      52,    1, 1271,    2, 0x0a,
      53,    0, 1274,    2, 0x0a,
      54,    0, 1275,    2, 0x0a,
      55,    0, 1276,    2, 0x0a,
      56,    0, 1277,    2, 0x0a,
      57,    0, 1278,    2, 0x0a,
      58,    0, 1279,    2, 0x0a,
      59,    0, 1280,    2, 0x0a,
      60,    0, 1281,    2, 0x0a,
      61,    0, 1282,    2, 0x0a,
      62,    0, 1283,    2, 0x0a,
      63,    0, 1284,    2, 0x0a,
      64,    0, 1285,    2, 0x0a,
      65,    0, 1286,    2, 0x0a,
      66,    0, 1287,    2, 0x0a,
      67,    0, 1288,    2, 0x0a,
      68,    0, 1289,    2, 0x0a,
      69,    0, 1290,    2, 0x0a,
      70,    0, 1291,    2, 0x0a,
      71,    0, 1292,    2, 0x0a,
      72,    0, 1293,    2, 0x0a,
      73,    0, 1294,    2, 0x0a,
      74,    0, 1295,    2, 0x0a,
      75,    0, 1296,    2, 0x0a,
      76,    0, 1297,    2, 0x0a,
      77,    0, 1298,    2, 0x0a,
      78,    0, 1299,    2, 0x0a,
      79,    0, 1300,    2, 0x0a,
      80,    0, 1301,    2, 0x0a,
      81,    0, 1302,    2, 0x0a,
      82,    0, 1303,    2, 0x0a,
      83,    0, 1304,    2, 0x0a,
      84,    0, 1305,    2, 0x0a,
      85,    0, 1306,    2, 0x0a,
      86,    0, 1307,    2, 0x0a,
      87,    0, 1308,    2, 0x0a,
      88,    0, 1309,    2, 0x0a,
      89,    0, 1310,    2, 0x0a,
      90,    0, 1311,    2, 0x0a,
      91,    0, 1312,    2, 0x0a,
      92,    0, 1313,    2, 0x0a,
      93,    0, 1314,    2, 0x0a,
      94,    0, 1315,    2, 0x0a,
      95,    0, 1316,    2, 0x0a,
      96,    0, 1317,    2, 0x0a,
      97,    0, 1318,    2, 0x0a,
      98,    0, 1319,    2, 0x0a,
      99,    0, 1320,    2, 0x0a,
     100,    0, 1321,    2, 0x0a,
     101,    0, 1322,    2, 0x0a,
     102,    0, 1323,    2, 0x0a,
     103,    0, 1324,    2, 0x0a,
     104,    0, 1325,    2, 0x0a,
     105,    0, 1326,    2, 0x0a,
     106,    0, 1327,    2, 0x0a,
     107,    0, 1328,    2, 0x0a,
     108,    0, 1329,    2, 0x0a,
     109,    0, 1330,    2, 0x0a,
     110,    0, 1331,    2, 0x0a,
     111,    0, 1332,    2, 0x0a,
     112,    0, 1333,    2, 0x0a,
     113,    0, 1334,    2, 0x0a,
     114,    0, 1335,    2, 0x0a,
     115,    0, 1336,    2, 0x0a,
     116,    0, 1337,    2, 0x0a,
     117,    0, 1338,    2, 0x0a,
     118,    0, 1339,    2, 0x0a,
     119,    0, 1340,    2, 0x0a,
     120,    0, 1341,    2, 0x0a,
     121,    0, 1342,    2, 0x0a,
     122,    0, 1343,    2, 0x0a,
     123,    0, 1344,    2, 0x0a,
     124,    0, 1345,    2, 0x0a,
     125,    0, 1346,    2, 0x0a,
     126,    0, 1347,    2, 0x0a,
     127,    0, 1348,    2, 0x0a,
     128,    0, 1349,    2, 0x0a,
     129,    0, 1350,    2, 0x0a,
     130,    0, 1351,    2, 0x0a,
     131,    0, 1352,    2, 0x0a,
     132,    0, 1353,    2, 0x0a,
     133,    0, 1354,    2, 0x0a,
     134,    0, 1355,    2, 0x0a,
     135,    0, 1356,    2, 0x0a,
     136,    0, 1357,    2, 0x0a,
     137,    0, 1358,    2, 0x0a,
     138,    0, 1359,    2, 0x0a,
     139,    0, 1360,    2, 0x0a,
     140,    0, 1361,    2, 0x0a,
     141,    0, 1362,    2, 0x0a,
     142,    0, 1363,    2, 0x0a,
     143,    0, 1364,    2, 0x0a,
     144,    0, 1365,    2, 0x0a,
     145,    0, 1366,    2, 0x0a,
     146,    0, 1367,    2, 0x0a,
     147,    0, 1368,    2, 0x0a,
     148,    0, 1369,    2, 0x0a,
     149,    0, 1370,    2, 0x0a,
     150,    0, 1371,    2, 0x0a,
     151,    0, 1372,    2, 0x0a,
     152,    0, 1373,    2, 0x0a,
     153,    0, 1374,    2, 0x0a,
     154,    0, 1375,    2, 0x0a,
     155,    0, 1376,    2, 0x0a,
     156,    0, 1377,    2, 0x0a,
     157,    0, 1378,    2, 0x0a,
     158,    0, 1379,    2, 0x0a,
     159,    0, 1380,    2, 0x0a,
     160,    0, 1381,    2, 0x0a,
     161,    0, 1382,    2, 0x0a,
     162,    0, 1383,    2, 0x0a,
     163,    0, 1384,    2, 0x0a,
     164,    0, 1385,    2, 0x0a,
     165,    0, 1386,    2, 0x0a,
     166,    0, 1387,    2, 0x0a,
     167,    0, 1388,    2, 0x0a,
     168,    0, 1389,    2, 0x0a,
     169,    0, 1390,    2, 0x0a,
     170,    0, 1391,    2, 0x0a,
     171,    0, 1392,    2, 0x0a,
     172,    0, 1393,    2, 0x0a,
     173,    0, 1394,    2, 0x0a,
     174,    0, 1395,    2, 0x0a,
     175,    0, 1396,    2, 0x0a,
     176,    0, 1397,    2, 0x0a,
     177,    0, 1398,    2, 0x0a,
     178,    0, 1399,    2, 0x0a,
     179,    0, 1400,    2, 0x0a,
     180,    0, 1401,    2, 0x0a,
     181,    0, 1402,    2, 0x0a,
     182,    0, 1403,    2, 0x0a,
     183,    0, 1404,    2, 0x0a,
     184,    0, 1405,    2, 0x0a,
     185,    0, 1406,    2, 0x0a,
     186,    0, 1407,    2, 0x0a,
     187,    0, 1408,    2, 0x0a,
     188,    0, 1409,    2, 0x0a,
     189,    0, 1410,    2, 0x0a,
     190,    0, 1411,    2, 0x0a,
     191,    0, 1412,    2, 0x0a,
     192,    0, 1413,    2, 0x0a,
     193,    0, 1414,    2, 0x0a,
     194,    0, 1415,    2, 0x0a,
     195,    0, 1416,    2, 0x0a,
     196,    0, 1417,    2, 0x0a,
     197,    0, 1418,    2, 0x0a,
     198,    0, 1419,    2, 0x0a,
     199,    0, 1420,    2, 0x0a,
     200,    0, 1421,    2, 0x0a,
     201,    0, 1422,    2, 0x0a,
     202,    0, 1423,    2, 0x0a,
     203,    0, 1424,    2, 0x0a,
     204,    0, 1425,    2, 0x0a,
     205,    0, 1426,    2, 0x0a,
     206,    0, 1427,    2, 0x0a,
     207,    0, 1428,    2, 0x0a,
     208,    0, 1429,    2, 0x0a,
     209,    0, 1430,    2, 0x0a,
     210,    0, 1431,    2, 0x0a,
     211,    0, 1432,    2, 0x0a,
     212,    0, 1433,    2, 0x0a,
     213,    0, 1434,    2, 0x0a,
     214,    0, 1435,    2, 0x0a,
     215,    0, 1436,    2, 0x0a,
     216,    0, 1437,    2, 0x0a,
     217,    0, 1438,    2, 0x0a,
     218,    0, 1439,    2, 0x0a,
     219,    0, 1440,    2, 0x0a,
     220,    0, 1441,    2, 0x0a,
     221,    0, 1442,    2, 0x0a,
     222,    0, 1443,    2, 0x0a,
     223,    0, 1444,    2, 0x0a,
     224,    0, 1445,    2, 0x0a,
     225,    0, 1446,    2, 0x0a,
     226,    0, 1447,    2, 0x0a,
     227,    0, 1448,    2, 0x0a,
     228,    0, 1449,    2, 0x0a,
     229,    0, 1450,    2, 0x0a,
     230,    0, 1451,    2, 0x0a,
     231,    0, 1452,    2, 0x0a,
     232,    0, 1453,    2, 0x0a,
     233,    0, 1454,    2, 0x0a,
     234,    0, 1455,    2, 0x0a,
     235,    0, 1456,    2, 0x0a,
     236,    0, 1457,    2, 0x0a,
     237,    0, 1458,    2, 0x0a,
     238,    0, 1459,    2, 0x0a,
     239,    0, 1460,    2, 0x0a,
     240,    1, 1461,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 241,  242,

       0        // eod
};

void FetMainForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FetMainForm *_t = static_cast<FetMainForm *>(_o);
        switch (_id) {
        case 0: _t->enableNotPerfectMessage(); break;
        case 1: _t->on_fileNewAction_triggered(); break;
        case 2: _t->on_fileSaveAction_triggered(); break;
        case 3: _t->on_fileSaveAsAction_triggered(); break;
        case 4: _t->on_fileExitAction_triggered(); break;
        case 5: _t->on_fileOpenAction_triggered(); break;
        case 6: _t->on_fileClearRecentFilesListAction_triggered(); break;
        case 7: _t->openRecentFile(); break;
        case 8: _t->on_fileImportCSVActivityTagsAction_triggered(); break;
        case 9: _t->on_fileImportCSVActivitiesAction_triggered(); break;
        case 10: _t->on_fileImportCSVRoomsBuildingsAction_triggered(); break;
        case 11: _t->on_fileImportCSVSubjectsAction_triggered(); break;
        case 12: _t->on_fileImportCSVTeachersAction_triggered(); break;
        case 13: _t->on_fileImportCSVYearsGroupsSubgroupsAction_triggered(); break;
        case 14: _t->on_fileExportCSVAction_triggered(); break;
        case 15: _t->on_dataInstitutionNameAction_triggered(); break;
        case 16: _t->on_dataCommentsAction_triggered(); break;
        case 17: _t->on_dataDaysAction_triggered(); break;
        case 18: _t->on_dataHoursAction_triggered(); break;
        case 19: _t->on_dataTeachersAction_triggered(); break;
        case 20: _t->on_dataTeachersStatisticsAction_triggered(); break;
        case 21: _t->on_dataSubjectsAction_triggered(); break;
        case 22: _t->on_dataSubjectsStatisticsAction_triggered(); break;
        case 23: _t->on_dataActivityTagsAction_triggered(); break;
        case 24: _t->on_dataYearsAction_triggered(); break;
        case 25: _t->on_dataGroupsAction_triggered(); break;
        case 26: _t->on_dataSubgroupsAction_triggered(); break;
        case 27: _t->on_dataStudentsStatisticsAction_triggered(); break;
        case 28: _t->on_dataActivitiesRoomsStatisticsAction_triggered(); break;
        case 29: _t->on_dataTeachersSubjectsQualificationsStatisticsAction_triggered(); break;
        case 30: _t->on_dataHelpOnStatisticsAction_triggered(); break;
        case 31: _t->on_helpSettingsAction_triggered(); break;
        case 32: _t->on_settingsUseColorsAction_toggled(); break;
        case 33: _t->showSubgroupsInComboBoxesToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->showSubgroupsInActivityPlanningToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->on_settingsShowShortcutsOnMainWindowAction_toggled(); break;
        case 36: _t->on_settingsShowToolTipsForConstraintsWithTablesAction_toggled(); break;
        case 37: _t->on_timetablesToWriteOnDiskAction_triggered(); break;
        case 38: _t->on_settingsConfirmActivityPlanningAction_toggled(); break;
        case 39: _t->on_settingsConfirmSpreadActivitiesAction_toggled(); break;
        case 40: _t->on_settingsConfirmRemoveRedundantAction_toggled(); break;
        case 41: _t->on_settingsConfirmSaveTimetableAction_toggled(); break;
        case 42: _t->showWarningForSubgroupsWithTheSameActivitiesToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->enableActivityTagMaxHoursDailyToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->enableStudentsMaxGapsPerDayToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->showWarningForNotPerfectConstraintsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->enableStudentsMinHoursDailyWithAllowEmptyDaysToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->showWarningForStudentsMinHoursDailyWithAllowEmptyDaysToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->enableGroupActivitiesInInitialOrderToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->showWarningForGroupActivitiesInInitialOrderToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->on_groupActivitiesInInitialOrderAction_triggered(); break;
        case 51: _t->on_dataActivitiesAction_triggered(); break;
        case 52: _t->on_dataSubactivitiesAction_triggered(); break;
        case 53: _t->on_dataRoomsAction_triggered(); break;
        case 54: _t->on_dataBuildingsAction_triggered(); break;
        case 55: _t->on_dataAllTimeConstraintsAction_triggered(); break;
        case 56: _t->on_dataAllSpaceConstraintsAction_triggered(); break;
        case 57: _t->on_dataSpaceConstraintsRoomNotAvailableTimesAction_triggered(); break;
        case 58: _t->on_dataSpaceConstraintsBasicCompulsorySpaceAction_triggered(); break;
        case 59: _t->on_dataSpaceConstraintsActivityPreferredRoomAction_triggered(); break;
        case 60: _t->on_dataSpaceConstraintsActivityPreferredRoomsAction_triggered(); break;
        case 61: _t->on_dataSpaceConstraintsStudentsSetHomeRoomAction_triggered(); break;
        case 62: _t->on_dataSpaceConstraintsStudentsSetHomeRoomsAction_triggered(); break;
        case 63: _t->on_dataSpaceConstraintsTeacherHomeRoomAction_triggered(); break;
        case 64: _t->on_dataSpaceConstraintsTeacherHomeRoomsAction_triggered(); break;
        case 65: _t->on_dataSpaceConstraintsStudentsSetMaxBuildingChangesPerDayAction_triggered(); break;
        case 66: _t->on_dataSpaceConstraintsStudentsMaxBuildingChangesPerDayAction_triggered(); break;
        case 67: _t->on_dataSpaceConstraintsStudentsSetMaxBuildingChangesPerWeekAction_triggered(); break;
        case 68: _t->on_dataSpaceConstraintsStudentsMaxBuildingChangesPerWeekAction_triggered(); break;
        case 69: _t->on_dataSpaceConstraintsStudentsSetMinGapsBetweenBuildingChangesAction_triggered(); break;
        case 70: _t->on_dataSpaceConstraintsStudentsMinGapsBetweenBuildingChangesAction_triggered(); break;
        case 71: _t->on_dataSpaceConstraintsTeacherMaxBuildingChangesPerDayAction_triggered(); break;
        case 72: _t->on_dataSpaceConstraintsTeachersMaxBuildingChangesPerDayAction_triggered(); break;
        case 73: _t->on_dataSpaceConstraintsTeacherMaxBuildingChangesPerWeekAction_triggered(); break;
        case 74: _t->on_dataSpaceConstraintsTeachersMaxBuildingChangesPerWeekAction_triggered(); break;
        case 75: _t->on_dataSpaceConstraintsTeacherMinGapsBetweenBuildingChangesAction_triggered(); break;
        case 76: _t->on_dataSpaceConstraintsTeachersMinGapsBetweenBuildingChangesAction_triggered(); break;
        case 77: _t->on_dataSpaceConstraintsSubjectPreferredRoomAction_triggered(); break;
        case 78: _t->on_dataSpaceConstraintsSubjectPreferredRoomsAction_triggered(); break;
        case 79: _t->on_dataSpaceConstraintsSubjectActivityTagPreferredRoomAction_triggered(); break;
        case 80: _t->on_dataSpaceConstraintsSubjectActivityTagPreferredRoomsAction_triggered(); break;
        case 81: _t->on_dataSpaceConstraintsActivityTagPreferredRoomAction_triggered(); break;
        case 82: _t->on_dataSpaceConstraintsActivityTagPreferredRoomsAction_triggered(); break;
        case 83: _t->on_dataSpaceConstraintsActivitiesOccupyMaxDifferentRoomsAction_triggered(); break;
        case 84: _t->on_dataSpaceConstraintsActivitiesSameRoomIfConsecutiveAction_triggered(); break;
        case 85: _t->on_dataTimeConstraintsBasicCompulsoryTimeAction_triggered(); break;
        case 86: _t->on_dataTimeConstraintsBreakTimesAction_triggered(); break;
        case 87: _t->on_dataTimeConstraintsTwoActivitiesConsecutiveAction_triggered(); break;
        case 88: _t->on_dataTimeConstraintsTwoActivitiesGroupedAction_triggered(); break;
        case 89: _t->on_dataTimeConstraintsThreeActivitiesGroupedAction_triggered(); break;
        case 90: _t->on_dataTimeConstraintsTwoActivitiesOrderedAction_triggered(); break;
        case 91: _t->on_dataTimeConstraintsActivityPreferredStartingTimeAction_triggered(); break;
        case 92: _t->on_dataTimeConstraintsActivityPreferredTimeSlotsAction_triggered(); break;
        case 93: _t->on_dataTimeConstraintsActivitiesPreferredTimeSlotsAction_triggered(); break;
        case 94: _t->on_dataTimeConstraintsSubactivitiesPreferredTimeSlotsAction_triggered(); break;
        case 95: _t->on_dataTimeConstraintsActivityPreferredStartingTimesAction_triggered(); break;
        case 96: _t->on_dataTimeConstraintsActivitiesPreferredStartingTimesAction_triggered(); break;
        case 97: _t->on_dataTimeConstraintsSubactivitiesPreferredStartingTimesAction_triggered(); break;
        case 98: _t->on_dataTimeConstraintsActivitiesSameStartingTimeAction_triggered(); break;
        case 99: _t->on_dataTimeConstraintsActivitiesSameStartingHourAction_triggered(); break;
        case 100: _t->on_dataTimeConstraintsActivitiesSameStartingDayAction_triggered(); break;
        case 101: _t->on_dataTimeConstraintsActivitiesOccupyMaxTimeSlotsFromSelectionAction_triggered(); break;
        case 102: _t->on_dataTimeConstraintsActivitiesMaxSimultaneousInSelectedTimeSlotsAction_triggered(); break;
        case 103: _t->on_dataTimeConstraintsActivitiesNotOverlappingAction_triggered(); break;
        case 104: _t->on_dataTimeConstraintsMinDaysBetweenActivitiesAction_triggered(); break;
        case 105: _t->on_dataTimeConstraintsMaxDaysBetweenActivitiesAction_triggered(); break;
        case 106: _t->on_dataTimeConstraintsMinGapsBetweenActivitiesAction_triggered(); break;
        case 107: _t->on_dataTimeConstraintsActivityEndsStudentsDayAction_triggered(); break;
        case 108: _t->on_dataTimeConstraintsActivitiesEndStudentsDayAction_triggered(); break;
        case 109: _t->on_dataTimeConstraintsTeacherNotAvailableTimesAction_triggered(); break;
        case 110: _t->on_dataTimeConstraintsTeacherMaxDaysPerWeekAction_triggered(); break;
        case 111: _t->on_dataTimeConstraintsTeachersMaxDaysPerWeekAction_triggered(); break;
        case 112: _t->on_dataTimeConstraintsTeacherMinDaysPerWeekAction_triggered(); break;
        case 113: _t->on_dataTimeConstraintsTeachersMinDaysPerWeekAction_triggered(); break;
        case 114: _t->on_dataTimeConstraintsTeachersMaxHoursDailyAction_triggered(); break;
        case 115: _t->on_dataTimeConstraintsTeacherMaxHoursDailyAction_triggered(); break;
        case 116: _t->on_dataTimeConstraintsTeachersMaxHoursContinuouslyAction_triggered(); break;
        case 117: _t->on_dataTimeConstraintsTeacherMaxHoursContinuouslyAction_triggered(); break;
        case 118: _t->on_dataTimeConstraintsTeachersActivityTagMaxHoursContinuouslyAction_triggered(); break;
        case 119: _t->on_dataTimeConstraintsTeacherActivityTagMaxHoursContinuouslyAction_triggered(); break;
        case 120: _t->on_dataTimeConstraintsTeachersActivityTagMaxHoursDailyAction_triggered(); break;
        case 121: _t->on_dataTimeConstraintsTeacherActivityTagMaxHoursDailyAction_triggered(); break;
        case 122: _t->on_dataTimeConstraintsTeachersMinHoursDailyAction_triggered(); break;
        case 123: _t->on_dataTimeConstraintsTeacherMinHoursDailyAction_triggered(); break;
        case 124: _t->on_dataTimeConstraintsTeachersMaxGapsPerWeekAction_triggered(); break;
        case 125: _t->on_dataTimeConstraintsTeacherMaxGapsPerWeekAction_triggered(); break;
        case 126: _t->on_dataTimeConstraintsTeachersMaxGapsPerDayAction_triggered(); break;
        case 127: _t->on_dataTimeConstraintsTeacherMaxGapsPerDayAction_triggered(); break;
        case 128: _t->on_dataTimeConstraintsTeacherIntervalMaxDaysPerWeekAction_triggered(); break;
        case 129: _t->on_dataTimeConstraintsTeachersIntervalMaxDaysPerWeekAction_triggered(); break;
        case 130: _t->on_dataTimeConstraintsStudentsSetIntervalMaxDaysPerWeekAction_triggered(); break;
        case 131: _t->on_dataTimeConstraintsStudentsIntervalMaxDaysPerWeekAction_triggered(); break;
        case 132: _t->on_dataTimeConstraintsStudentsSetMaxDaysPerWeekAction_triggered(); break;
        case 133: _t->on_dataTimeConstraintsStudentsMaxDaysPerWeekAction_triggered(); break;
        case 134: _t->on_dataTimeConstraintsStudentsSetNotAvailableTimesAction_triggered(); break;
        case 135: _t->on_dataTimeConstraintsStudentsSetMaxGapsPerWeekAction_triggered(); break;
        case 136: _t->on_dataTimeConstraintsStudentsMaxGapsPerWeekAction_triggered(); break;
        case 137: _t->on_dataTimeConstraintsStudentsSetMaxGapsPerDayAction_triggered(); break;
        case 138: _t->on_dataTimeConstraintsStudentsMaxGapsPerDayAction_triggered(); break;
        case 139: _t->on_dataTimeConstraintsStudentsEarlyMaxBeginningsAtSecondHourAction_triggered(); break;
        case 140: _t->on_dataTimeConstraintsStudentsSetEarlyMaxBeginningsAtSecondHourAction_triggered(); break;
        case 141: _t->on_dataTimeConstraintsStudentsMaxHoursDailyAction_triggered(); break;
        case 142: _t->on_dataTimeConstraintsStudentsSetMaxHoursDailyAction_triggered(); break;
        case 143: _t->on_dataTimeConstraintsStudentsMaxHoursContinuouslyAction_triggered(); break;
        case 144: _t->on_dataTimeConstraintsStudentsSetMaxHoursContinuouslyAction_triggered(); break;
        case 145: _t->on_dataTimeConstraintsStudentsActivityTagMaxHoursContinuouslyAction_triggered(); break;
        case 146: _t->on_dataTimeConstraintsStudentsSetActivityTagMaxHoursContinuouslyAction_triggered(); break;
        case 147: _t->on_dataTimeConstraintsStudentsActivityTagMaxHoursDailyAction_triggered(); break;
        case 148: _t->on_dataTimeConstraintsStudentsSetActivityTagMaxHoursDailyAction_triggered(); break;
        case 149: _t->on_dataTimeConstraintsStudentsMinHoursDailyAction_triggered(); break;
        case 150: _t->on_dataTimeConstraintsStudentsSetMinHoursDailyAction_triggered(); break;
        case 151: _t->on_dataTimeConstraintsTeacherMaxSpanPerDayAction_triggered(); break;
        case 152: _t->on_dataTimeConstraintsTeachersMaxSpanPerDayAction_triggered(); break;
        case 153: _t->on_dataTimeConstraintsStudentsSetMaxSpanPerDayAction_triggered(); break;
        case 154: _t->on_dataTimeConstraintsStudentsMaxSpanPerDayAction_triggered(); break;
        case 155: _t->on_dataTimeConstraintsTeacherMinRestingHoursAction_triggered(); break;
        case 156: _t->on_dataTimeConstraintsTeachersMinRestingHoursAction_triggered(); break;
        case 157: _t->on_dataTimeConstraintsStudentsSetMinRestingHoursAction_triggered(); break;
        case 158: _t->on_dataTimeConstraintsStudentsMinRestingHoursAction_triggered(); break;
        case 159: _t->on_activityPlanningAction_triggered(); break;
        case 160: _t->on_spreadActivitiesAction_triggered(); break;
        case 161: _t->on_removeRedundantConstraintsAction_triggered(); break;
        case 162: _t->on_helpAboutAction_triggered(); break;
        case 163: _t->on_helpFAQAction_triggered(); break;
        case 164: _t->on_helpTipsAction_triggered(); break;
        case 165: _t->on_helpInstructionsAction_triggered(); break;
        case 166: _t->on_helpHomepageAction_triggered(); break;
        case 167: _t->on_helpContentsAction_triggered(); break;
        case 168: _t->on_helpForumAction_triggered(); break;
        case 169: _t->on_helpAddressesAction_triggered(); break;
        case 170: _t->on_timetableGenerateAction_triggered(); break;
        case 171: _t->on_timetableViewStudentsAction_triggered(); break;
        case 172: _t->on_timetableViewTeachersAction_triggered(); break;
        case 173: _t->on_timetableViewRoomsAction_triggered(); break;
        case 174: _t->on_timetableShowConflictsAction_triggered(); break;
        case 175: _t->on_timetablePrintAction_triggered(); break;
        case 176: _t->on_timetableGenerateMultipleAction_triggered(); break;
        case 177: _t->on_timetableLockAllActivitiesAction_triggered(); break;
        case 178: _t->on_timetableUnlockAllActivitiesAction_triggered(); break;
        case 179: _t->on_timetableLockActivitiesDayAction_triggered(); break;
        case 180: _t->on_timetableUnlockActivitiesDayAction_triggered(); break;
        case 181: _t->on_timetableLockActivitiesEndStudentsDayAction_triggered(); break;
        case 182: _t->on_timetableUnlockActivitiesEndStudentsDayAction_triggered(); break;
        case 183: _t->on_timetableSaveTimetableAsAction_triggered(); break;
        case 184: _t->on_randomSeedAction_triggered(); break;
        case 185: _t->on_languageAction_triggered(); break;
        case 186: _t->on_checkForUpdatesAction_toggled(); break;
        case 187: _t->on_settingsDivideTimetablesByDaysAction_toggled(); break;
        case 188: _t->on_settingsDuplicateVerticalNamesAction_toggled(); break;
        case 189: _t->on_settingsRestoreDefaultsAction_triggered(); break;
        case 190: _t->on_settingsTimetableHtmlLevelAction_triggered(); break;
        case 191: _t->on_settingsPrintActivityTagsAction_toggled(); break;
        case 192: _t->on_settingsPrintDetailedTimetablesAction_toggled(); break;
        case 193: _t->on_settingsPrintDetailedTeachersFreePeriodsTimetablesAction_toggled(); break;
        case 194: _t->on_settingsPrintNotAvailableSlotsAction_toggled(); break;
        case 195: _t->on_settingsPrintBreakSlotsAction_toggled(); break;
        case 196: _t->on_settingsPrintActivitiesWithSameStartingTimeAction_toggled(); break;
        case 197: _t->on_selectOutputDirAction_triggered(); break;
        case 198: _t->on_statisticsExportToDiskAction_triggered(); break;
        case 199: _t->on_statisticsPrintAction_triggered(); break;
        case 200: _t->on_shortcutAllTimeConstraintsPushButton_clicked(); break;
        case 201: _t->on_shortcutBreakTimeConstraintsPushButton_clicked(); break;
        case 202: _t->on_shortcutTeachersTimeConstraintsPushButton_clicked(); break;
        case 203: _t->on_shortcutStudentsTimeConstraintsPushButton_clicked(); break;
        case 204: _t->on_shortcutActivitiesTimeConstraintsPushButton_clicked(); break;
        case 205: _t->on_shortcutAdvancedTimeConstraintsPushButton_clicked(); break;
        case 206: _t->on_shortcutAllSpaceConstraintsPushButton_clicked(); break;
        case 207: _t->on_shortcutRoomsSpaceConstraintsPushButton_clicked(); break;
        case 208: _t->on_shortcutTeachersSpaceConstraintsPushButton_clicked(); break;
        case 209: _t->on_shortcutStudentsSpaceConstraintsPushButton_clicked(); break;
        case 210: _t->on_shortcutSubjectsSpaceConstraintsPushButton_clicked(); break;
        case 211: _t->on_shortcutActivityTagsSpaceConstraintsPushButton_clicked(); break;
        case 212: _t->on_shortcutSubjectsAndActivityTagsSpaceConstraintsPushButton_clicked(); break;
        case 213: _t->on_shortcutActivitiesSpaceConstraintsPushButton_clicked(); break;
        case 214: _t->on_shortcutGeneratePushButton_clicked(); break;
        case 215: _t->on_shortcutGenerateMultiplePushButton_clicked(); break;
        case 216: _t->on_shortcutViewTeachersPushButton_clicked(); break;
        case 217: _t->on_shortcutViewStudentsPushButton_clicked(); break;
        case 218: _t->on_shortcutViewRoomsPushButton_clicked(); break;
        case 219: _t->on_shortcutShowSoftConflictsPushButton_clicked(); break;
        case 220: _t->on_shortcutsTimetableAdvancedPushButton_clicked(); break;
        case 221: _t->on_shortcutsTimetablePrintPushButton_clicked(); break;
        case 222: _t->on_shortcutsTimetableLockingPushButton_clicked(); break;
        case 223: _t->on_shortcutBasicPushButton_clicked(); break;
        case 224: _t->on_shortcutSubjectsPushButton_clicked(); break;
        case 225: _t->on_shortcutActivityTagsPushButton_clicked(); break;
        case 226: _t->on_shortcutTeachersPushButton_clicked(); break;
        case 227: _t->on_shortcutStudentsPushButton_clicked(); break;
        case 228: _t->on_shortcutActivitiesPushButton_clicked(); break;
        case 229: _t->on_shortcutSubactivitiesPushButton_clicked(); break;
        case 230: _t->on_shortcutDataAdvancedPushButton_clicked(); break;
        case 231: _t->on_shortcutDataSpacePushButton_clicked(); break;
        case 232: _t->on_shortcutOpenPushButton_clicked(); break;
        case 233: _t->on_shortcutOpenRecentPushButton_clicked(); break;
        case 234: _t->on_shortcutNewPushButton_clicked(); break;
        case 235: _t->on_shortcutSavePushButton_clicked(); break;
        case 236: _t->on_shortcutSaveAsPushButton_clicked(); break;
        case 237: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FetMainForm::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FetMainForm.data,
      qt_meta_data_FetMainForm,  qt_static_metacall, 0, 0}
};


const QMetaObject *FetMainForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FetMainForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FetMainForm.stringdata))
        return static_cast<void*>(const_cast< FetMainForm*>(this));
    if (!strcmp(_clname, "Ui::FetMainForm_template"))
        return static_cast< Ui::FetMainForm_template*>(const_cast< FetMainForm*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FetMainForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 238)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 238;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 238)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 238;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
