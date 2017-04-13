/********************************************************************************
** Form generated from reading UI file 'timetablestowriteondiskform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMETABLESTOWRITEONDISKFORM_TEMPLATE_H
#define UI_TIMETABLESTOWRITEONDISKFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_TimetablesToWriteOnDiskForm_template
{
public:
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout;
    QCheckBox *softConflictsCheckBox;
    QFrame *frame_3;
    QGridLayout *gridLayout_3;
    QCheckBox *subgroupsCheckBox;
    QCheckBox *groupsCheckBox;
    QCheckBox *yearsCheckBox;
    QCheckBox *teachersCheckBox;
    QCheckBox *teachersFreePeriodsCheckBox;
    QCheckBox *roomsCheckBox;
    QCheckBox *subjectsCheckBox;
    QCheckBox *activitiesCheckBox;
    QCheckBox *activityTagsCheckBox;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QCheckBox *statisticsCheckBox;
    QCheckBox *xmlCheckBox;
    QCheckBox *daysHorizontalCheckBox;
    QCheckBox *daysVerticalCheckBox;
    QCheckBox *timeHorizontalCheckBox;
    QCheckBox *timeVerticalCheckBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelPushButton;
    QPushButton *okPushButton;

    void setupUi(QDialog *TimetablesToWriteOnDiskForm_template)
    {
        if (TimetablesToWriteOnDiskForm_template->objectName().isEmpty())
            TimetablesToWriteOnDiskForm_template->setObjectName(QStringLiteral("TimetablesToWriteOnDiskForm_template"));
        TimetablesToWriteOnDiskForm_template->resize(577, 373);
        gridLayout_5 = new QGridLayout(TimetablesToWriteOnDiskForm_template);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        frame = new QFrame(TimetablesToWriteOnDiskForm_template);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        softConflictsCheckBox = new QCheckBox(frame);
        softConflictsCheckBox->setObjectName(QStringLiteral("softConflictsCheckBox"));
        softConflictsCheckBox->setChecked(true);

        gridLayout->addWidget(softConflictsCheckBox, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);

        frame_3 = new QFrame(TimetablesToWriteOnDiskForm_template);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        subgroupsCheckBox = new QCheckBox(frame_3);
        subgroupsCheckBox->setObjectName(QStringLiteral("subgroupsCheckBox"));
        subgroupsCheckBox->setChecked(true);

        gridLayout_3->addWidget(subgroupsCheckBox, 0, 0, 1, 1);

        groupsCheckBox = new QCheckBox(frame_3);
        groupsCheckBox->setObjectName(QStringLiteral("groupsCheckBox"));
        groupsCheckBox->setChecked(true);

        gridLayout_3->addWidget(groupsCheckBox, 1, 0, 1, 1);

        yearsCheckBox = new QCheckBox(frame_3);
        yearsCheckBox->setObjectName(QStringLiteral("yearsCheckBox"));
        yearsCheckBox->setChecked(true);

        gridLayout_3->addWidget(yearsCheckBox, 2, 0, 1, 1);

        teachersCheckBox = new QCheckBox(frame_3);
        teachersCheckBox->setObjectName(QStringLiteral("teachersCheckBox"));
        teachersCheckBox->setChecked(true);

        gridLayout_3->addWidget(teachersCheckBox, 3, 0, 1, 1);

        teachersFreePeriodsCheckBox = new QCheckBox(frame_3);
        teachersFreePeriodsCheckBox->setObjectName(QStringLiteral("teachersFreePeriodsCheckBox"));
        teachersFreePeriodsCheckBox->setChecked(true);

        gridLayout_3->addWidget(teachersFreePeriodsCheckBox, 4, 0, 1, 1);

        roomsCheckBox = new QCheckBox(frame_3);
        roomsCheckBox->setObjectName(QStringLiteral("roomsCheckBox"));
        roomsCheckBox->setChecked(true);

        gridLayout_3->addWidget(roomsCheckBox, 5, 0, 1, 1);

        subjectsCheckBox = new QCheckBox(frame_3);
        subjectsCheckBox->setObjectName(QStringLiteral("subjectsCheckBox"));
        subjectsCheckBox->setChecked(true);

        gridLayout_3->addWidget(subjectsCheckBox, 6, 0, 1, 1);

        activitiesCheckBox = new QCheckBox(frame_3);
        activitiesCheckBox->setObjectName(QStringLiteral("activitiesCheckBox"));
        activitiesCheckBox->setChecked(true);

        gridLayout_3->addWidget(activitiesCheckBox, 8, 0, 1, 1);

        activityTagsCheckBox = new QCheckBox(frame_3);
        activityTagsCheckBox->setObjectName(QStringLiteral("activityTagsCheckBox"));
        activityTagsCheckBox->setChecked(true);

        gridLayout_3->addWidget(activityTagsCheckBox, 7, 0, 1, 1);


        gridLayout_4->addWidget(frame_3, 0, 1, 2, 1);

        frame_2 = new QFrame(TimetablesToWriteOnDiskForm_template);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        statisticsCheckBox = new QCheckBox(frame_2);
        statisticsCheckBox->setObjectName(QStringLiteral("statisticsCheckBox"));
        statisticsCheckBox->setChecked(true);

        gridLayout_2->addWidget(statisticsCheckBox, 0, 0, 1, 1);

        xmlCheckBox = new QCheckBox(frame_2);
        xmlCheckBox->setObjectName(QStringLiteral("xmlCheckBox"));
        xmlCheckBox->setChecked(true);

        gridLayout_2->addWidget(xmlCheckBox, 1, 0, 1, 1);

        daysHorizontalCheckBox = new QCheckBox(frame_2);
        daysHorizontalCheckBox->setObjectName(QStringLiteral("daysHorizontalCheckBox"));
        daysHorizontalCheckBox->setChecked(true);

        gridLayout_2->addWidget(daysHorizontalCheckBox, 2, 0, 1, 1);

        daysVerticalCheckBox = new QCheckBox(frame_2);
        daysVerticalCheckBox->setObjectName(QStringLiteral("daysVerticalCheckBox"));
        daysVerticalCheckBox->setChecked(true);

        gridLayout_2->addWidget(daysVerticalCheckBox, 3, 0, 1, 1);

        timeHorizontalCheckBox = new QCheckBox(frame_2);
        timeHorizontalCheckBox->setObjectName(QStringLiteral("timeHorizontalCheckBox"));
        timeHorizontalCheckBox->setChecked(true);

        gridLayout_2->addWidget(timeHorizontalCheckBox, 4, 0, 1, 1);

        timeVerticalCheckBox = new QCheckBox(frame_2);
        timeVerticalCheckBox->setObjectName(QStringLiteral("timeVerticalCheckBox"));
        timeVerticalCheckBox->setChecked(true);

        gridLayout_2->addWidget(timeVerticalCheckBox, 5, 0, 1, 1);


        gridLayout_4->addWidget(frame_2, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 154, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelPushButton = new QPushButton(TimetablesToWriteOnDiskForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);

        okPushButton = new QPushButton(TimetablesToWriteOnDiskForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);


        gridLayout_5->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(TimetablesToWriteOnDiskForm_template);

        QMetaObject::connectSlotsByName(TimetablesToWriteOnDiskForm_template);
    } // setupUi

    void retranslateUi(QDialog *TimetablesToWriteOnDiskForm_template)
    {
        TimetablesToWriteOnDiskForm_template->setWindowTitle(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Select the categories of timetables to be written on disk", 0));
        softConflictsCheckBox->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Soft conflicts", 0));
        subgroupsCheckBox->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Subgroups", 0));
        groupsCheckBox->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Groups", 0));
        yearsCheckBox->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Years", 0));
        teachersCheckBox->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Teachers", 0));
        teachersFreePeriodsCheckBox->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Teachers free periods", 0));
        roomsCheckBox->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Rooms", 0));
        subjectsCheckBox->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Subjects", 0));
        activitiesCheckBox->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Activities", 0));
        activityTagsCheckBox->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Activity tags", 0));
        statisticsCheckBox->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Statistics", 0));
        xmlCheckBox->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "XML", 0));
        daysHorizontalCheckBox->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Days horizontal", 0));
        daysVerticalCheckBox->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Days vertical", 0));
        timeHorizontalCheckBox->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Time horizontal", 0));
        timeVerticalCheckBox->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Time vertical", 0));
        cancelPushButton->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "Cancel", 0));
        okPushButton->setText(QApplication::translate("TimetablesToWriteOnDiskForm_template", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class TimetablesToWriteOnDiskForm_template: public Ui_TimetablesToWriteOnDiskForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMETABLESTOWRITEONDISKFORM_TEMPLATE_H
