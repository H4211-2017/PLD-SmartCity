/********************************************************************************
** Form generated from reading UI file 'modifysubactivityform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSUBACTIVITYFORM_TEMPLATE_H
#define UI_MODIFYSUBACTIVITYFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifySubactivityForm_template
{
public:
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *allTeachersTextLabel;
    QListWidget *allTeachersListWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *selectedTeachersTextLabel;
    QListWidget *selectedTeachersListWidget;
    QPushButton *clearTeacherPushButton;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *allStudentsTextLabel;
    QListWidget *allStudentsListWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *selectedStudentsTextLabel;
    QListWidget *selectedStudentsListWidget;
    QPushButton *clearStudentsPushButton;
    QHBoxLayout *horizontalLayout;
    QCheckBox *showYearsCheckBox;
    QCheckBox *showGroupsCheckBox;
    QCheckBox *showSubgroupsCheckBox;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *allActivityTagsTextLabel;
    QListWidget *allActivityTagsListWidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *selectedActivityTagsTextLabel;
    QListWidget *selectedActivityTagsListWidget;
    QPushButton *clearActivityTagPushButton;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *subjectsTextLabel;
    QComboBox *subjectsComboBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSpinBox *nStudentsSpinBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *durationTextLabel;
    QSpinBox *durationSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QCheckBox *activeCheckBox;
    QLabel *crtTextLabel;
    QSpacerItem *verticalSpacer;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *okPushButton;
    QPushButton *helpPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifySubactivityForm_template)
    {
        if (ModifySubactivityForm_template->objectName().isEmpty())
            ModifySubactivityForm_template->setObjectName(QStringLiteral("ModifySubactivityForm_template"));
        ModifySubactivityForm_template->resize(790, 599);
        gridLayout_4 = new QGridLayout(ModifySubactivityForm_template);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        allTeachersTextLabel = new QLabel(ModifySubactivityForm_template);
        allTeachersTextLabel->setObjectName(QStringLiteral("allTeachersTextLabel"));
        allTeachersTextLabel->setWordWrap(false);

        verticalLayout->addWidget(allTeachersTextLabel);

        allTeachersListWidget = new QListWidget(ModifySubactivityForm_template);
        allTeachersListWidget->setObjectName(QStringLiteral("allTeachersListWidget"));

        verticalLayout->addWidget(allTeachersListWidget);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        selectedTeachersTextLabel = new QLabel(ModifySubactivityForm_template);
        selectedTeachersTextLabel->setObjectName(QStringLiteral("selectedTeachersTextLabel"));
        selectedTeachersTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(selectedTeachersTextLabel);

        selectedTeachersListWidget = new QListWidget(ModifySubactivityForm_template);
        selectedTeachersListWidget->setObjectName(QStringLiteral("selectedTeachersListWidget"));

        verticalLayout_2->addWidget(selectedTeachersListWidget);

        clearTeacherPushButton = new QPushButton(ModifySubactivityForm_template);
        clearTeacherPushButton->setObjectName(QStringLiteral("clearTeacherPushButton"));

        verticalLayout_2->addWidget(clearTeacherPushButton);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        allStudentsTextLabel = new QLabel(ModifySubactivityForm_template);
        allStudentsTextLabel->setObjectName(QStringLiteral("allStudentsTextLabel"));
        allStudentsTextLabel->setWordWrap(false);

        verticalLayout_3->addWidget(allStudentsTextLabel);

        allStudentsListWidget = new QListWidget(ModifySubactivityForm_template);
        allStudentsListWidget->setObjectName(QStringLiteral("allStudentsListWidget"));

        verticalLayout_3->addWidget(allStudentsListWidget);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        selectedStudentsTextLabel = new QLabel(ModifySubactivityForm_template);
        selectedStudentsTextLabel->setObjectName(QStringLiteral("selectedStudentsTextLabel"));
        selectedStudentsTextLabel->setWordWrap(false);

        verticalLayout_4->addWidget(selectedStudentsTextLabel);

        selectedStudentsListWidget = new QListWidget(ModifySubactivityForm_template);
        selectedStudentsListWidget->setObjectName(QStringLiteral("selectedStudentsListWidget"));

        verticalLayout_4->addWidget(selectedStudentsListWidget);

        clearStudentsPushButton = new QPushButton(ModifySubactivityForm_template);
        clearStudentsPushButton->setObjectName(QStringLiteral("clearStudentsPushButton"));

        verticalLayout_4->addWidget(clearStudentsPushButton);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        showYearsCheckBox = new QCheckBox(ModifySubactivityForm_template);
        showYearsCheckBox->setObjectName(QStringLiteral("showYearsCheckBox"));
        showYearsCheckBox->setChecked(true);

        horizontalLayout->addWidget(showYearsCheckBox);

        showGroupsCheckBox = new QCheckBox(ModifySubactivityForm_template);
        showGroupsCheckBox->setObjectName(QStringLiteral("showGroupsCheckBox"));
        showGroupsCheckBox->setChecked(true);

        horizontalLayout->addWidget(showGroupsCheckBox);

        showSubgroupsCheckBox = new QCheckBox(ModifySubactivityForm_template);
        showSubgroupsCheckBox->setObjectName(QStringLiteral("showSubgroupsCheckBox"));

        horizontalLayout->addWidget(showSubgroupsCheckBox);


        verticalLayout_5->addLayout(horizontalLayout);


        gridLayout_4->addLayout(verticalLayout_5, 0, 0, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        allActivityTagsTextLabel = new QLabel(ModifySubactivityForm_template);
        allActivityTagsTextLabel->setObjectName(QStringLiteral("allActivityTagsTextLabel"));
        allActivityTagsTextLabel->setWordWrap(false);

        verticalLayout_7->addWidget(allActivityTagsTextLabel);

        allActivityTagsListWidget = new QListWidget(ModifySubactivityForm_template);
        allActivityTagsListWidget->setObjectName(QStringLiteral("allActivityTagsListWidget"));

        verticalLayout_7->addWidget(allActivityTagsListWidget);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        selectedActivityTagsTextLabel = new QLabel(ModifySubactivityForm_template);
        selectedActivityTagsTextLabel->setObjectName(QStringLiteral("selectedActivityTagsTextLabel"));
        selectedActivityTagsTextLabel->setWordWrap(false);

        verticalLayout_6->addWidget(selectedActivityTagsTextLabel);

        selectedActivityTagsListWidget = new QListWidget(ModifySubactivityForm_template);
        selectedActivityTagsListWidget->setObjectName(QStringLiteral("selectedActivityTagsListWidget"));

        verticalLayout_6->addWidget(selectedActivityTagsListWidget);

        clearActivityTagPushButton = new QPushButton(ModifySubactivityForm_template);
        clearActivityTagPushButton->setObjectName(QStringLiteral("clearActivityTagPushButton"));

        verticalLayout_6->addWidget(clearActivityTagPushButton);


        horizontalLayout_4->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(horizontalLayout_4);

        frame = new QFrame(ModifySubactivityForm_template);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        subjectsTextLabel = new QLabel(frame);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel, 0, 0, 1, 1);

        subjectsComboBox = new QComboBox(frame);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));
        subjectsComboBox->setEditable(false);
        subjectsComboBox->setInsertPolicy(QComboBox::NoInsert);
        subjectsComboBox->setAutoCompletion(false);
        subjectsComboBox->setDuplicatesEnabled(false);

        gridLayout->addWidget(subjectsComboBox, 1, 0, 1, 1);


        verticalLayout_8->addWidget(frame);

        groupBox = new QGroupBox(ModifySubactivityForm_template);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        nStudentsSpinBox = new QSpinBox(groupBox);
        nStudentsSpinBox->setObjectName(QStringLiteral("nStudentsSpinBox"));
        nStudentsSpinBox->setEnabled(true);
        nStudentsSpinBox->setMinimum(-1);
        nStudentsSpinBox->setMaximum(1000);
        nStudentsSpinBox->setValue(-1);

        gridLayout_2->addWidget(nStudentsSpinBox, 0, 0, 1, 1);


        verticalLayout_8->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ModifySubactivityForm_template);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        durationTextLabel = new QLabel(groupBox_2);
        durationTextLabel->setObjectName(QStringLiteral("durationTextLabel"));
        durationTextLabel->setEnabled(true);
        durationTextLabel->setWordWrap(false);

        horizontalLayout_6->addWidget(durationTextLabel);

        durationSpinBox = new QSpinBox(groupBox_2);
        durationSpinBox->setObjectName(QStringLiteral("durationSpinBox"));
        durationSpinBox->setEnabled(true);
        durationSpinBox->setMinimum(1);

        horizontalLayout_6->addWidget(durationSpinBox);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        activeCheckBox = new QCheckBox(groupBox_2);
        activeCheckBox->setObjectName(QStringLiteral("activeCheckBox"));
        activeCheckBox->setEnabled(true);
        activeCheckBox->setChecked(true);

        horizontalLayout_7->addWidget(activeCheckBox);


        gridLayout_3->addLayout(horizontalLayout_7, 1, 0, 1, 1);


        verticalLayout_8->addWidget(groupBox_2);

        crtTextLabel = new QLabel(ModifySubactivityForm_template);
        crtTextLabel->setObjectName(QStringLiteral("crtTextLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(crtTextLabel->sizePolicy().hasHeightForWidth());
        crtTextLabel->setSizePolicy(sizePolicy);
        crtTextLabel->setText(QLatin1String("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Current subactivity has split index i out of j<br />The current data applies only to this subactivity</p></body></html>"));
        crtTextLabel->setTextFormat(Qt::RichText);
        crtTextLabel->setWordWrap(true);

        verticalLayout_8->addWidget(crtTextLabel);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        frame_2 = new QFrame(ModifySubactivityForm_template);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        okPushButton = new QPushButton(frame_2);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout_5->addWidget(okPushButton);

        helpPushButton = new QPushButton(frame_2);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout_5->addWidget(helpPushButton);

        cancelPushButton = new QPushButton(frame_2);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_5->addWidget(cancelPushButton);


        verticalLayout_8->addWidget(frame_2);


        gridLayout_4->addLayout(verticalLayout_8, 0, 1, 1, 1);


        retranslateUi(ModifySubactivityForm_template);

        QMetaObject::connectSlotsByName(ModifySubactivityForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifySubactivityForm_template)
    {
        ModifySubactivityForm_template->setWindowTitle(QApplication::translate("ModifySubactivityForm_template", "Modify subactivity", 0));
        allTeachersTextLabel->setText(QApplication::translate("ModifySubactivityForm_template", "Teachers", 0));
        selectedTeachersTextLabel->setText(QApplication::translate("ModifySubactivityForm_template", "Selected", "It refers to a list of selected teachers"));
        clearTeacherPushButton->setText(QApplication::translate("ModifySubactivityForm_template", "Clear", 0));
        allStudentsTextLabel->setText(QApplication::translate("ModifySubactivityForm_template", "Students", "This refers to sets of students, but I want to keep the string short"));
        selectedStudentsTextLabel->setText(QApplication::translate("ModifySubactivityForm_template", "Selected", "It refers to a list of selected students (in fact, students sets, but translate selected as in 'selected students')"));
        clearStudentsPushButton->setText(QApplication::translate("ModifySubactivityForm_template", "Clear", 0));
        showYearsCheckBox->setText(QApplication::translate("ModifySubactivityForm_template", "Years", 0));
        showGroupsCheckBox->setText(QApplication::translate("ModifySubactivityForm_template", "Groups", 0));
        showSubgroupsCheckBox->setText(QApplication::translate("ModifySubactivityForm_template", "Subgroups", 0));
        allActivityTagsTextLabel->setText(QApplication::translate("ModifySubactivityForm_template", "Activity tags", 0));
        selectedActivityTagsTextLabel->setText(QApplication::translate("ModifySubactivityForm_template", "Selected", "It refers to a list of selected activity tags"));
        clearActivityTagPushButton->setText(QApplication::translate("ModifySubactivityForm_template", "Clear", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifySubactivityForm_template", "Subject", 0));
        groupBox->setTitle(QApplication::translate("ModifySubactivityForm_template", "Students", "This refers to the number of students, but I want to keep string short"));
        groupBox_2->setTitle(QString());
        durationTextLabel->setText(QApplication::translate("ModifySubactivityForm_template", "Duration", 0));
        activeCheckBox->setText(QApplication::translate("ModifySubactivityForm_template", "Active", "It refers to a subactivity"));
        okPushButton->setText(QApplication::translate("ModifySubactivityForm_template", "Ok", 0));
        helpPushButton->setText(QApplication::translate("ModifySubactivityForm_template", "Help", 0));
        cancelPushButton->setText(QApplication::translate("ModifySubactivityForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifySubactivityForm_template: public Ui_ModifySubactivityForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSUBACTIVITYFORM_TEMPLATE_H
