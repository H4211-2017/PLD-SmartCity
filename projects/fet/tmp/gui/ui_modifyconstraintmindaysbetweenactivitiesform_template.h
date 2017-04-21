/********************************************************************************
** Form generated from reading UI file 'modifyconstraintmindaysbetweenactivitiesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTMINDAYSBETWEENACTIVITIESFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTMINDAYSBETWEENACTIVITIESFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintMinDaysBetweenActivitiesForm_template
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QLabel *teachersTextLabel;
    QLabel *studentsTextLabel;
    QLabel *subjectsTextLabel;
    QLabel *activityTagsTextLabel;
    QComboBox *teachersComboBox;
    QComboBox *studentsComboBox;
    QComboBox *subjectsComboBox;
    QComboBox *activityTagsComboBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *activitiesTextLabel;
    QListWidget *activitiesListWidget;
    QPushButton *addAllActivitiesPushButton;
    QVBoxLayout *verticalLayout;
    QLabel *selectedActivitiesTextLabel;
    QListWidget *selectedActivitiesListWidget;
    QPushButton *clearPushButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *minDaysTextLabel;
    QSpinBox *minDaysSpinBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *consecutiveIfSameDayCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintMinDaysBetweenActivitiesForm_template)
    {
        if (ModifyConstraintMinDaysBetweenActivitiesForm_template->objectName().isEmpty())
            ModifyConstraintMinDaysBetweenActivitiesForm_template->setObjectName(QStringLiteral("ModifyConstraintMinDaysBetweenActivitiesForm_template"));
        ModifyConstraintMinDaysBetweenActivitiesForm_template->resize(626, 540);
        gridLayout_2 = new QGridLayout(ModifyConstraintMinDaysBetweenActivitiesForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        filterGroupBox = new QGroupBox(ModifyConstraintMinDaysBetweenActivitiesForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersTextLabel = new QLabel(filterGroupBox);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        gridLayout->addWidget(teachersTextLabel, 0, 0, 1, 1);

        studentsTextLabel = new QLabel(filterGroupBox);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel, 0, 1, 1, 1);

        subjectsTextLabel = new QLabel(filterGroupBox);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel, 0, 2, 1, 1);

        activityTagsTextLabel = new QLabel(filterGroupBox);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        gridLayout->addWidget(activityTagsTextLabel, 0, 3, 1, 1);

        teachersComboBox = new QComboBox(filterGroupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        studentsComboBox = new QComboBox(filterGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 1, 1, 1, 1);

        subjectsComboBox = new QComboBox(filterGroupBox);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 1, 2, 1, 1);

        activityTagsComboBox = new QComboBox(filterGroupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 1, 3, 1, 1);


        gridLayout_2->addWidget(filterGroupBox, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        activitiesTextLabel = new QLabel(ModifyConstraintMinDaysBetweenActivitiesForm_template);
        activitiesTextLabel->setObjectName(QStringLiteral("activitiesTextLabel"));
        activitiesTextLabel->setFrameShape(QFrame::NoFrame);
        activitiesTextLabel->setFrameShadow(QFrame::Plain);
        activitiesTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(activitiesTextLabel);

        activitiesListWidget = new QListWidget(ModifyConstraintMinDaysBetweenActivitiesForm_template);
        activitiesListWidget->setObjectName(QStringLiteral("activitiesListWidget"));

        verticalLayout_2->addWidget(activitiesListWidget);

        addAllActivitiesPushButton = new QPushButton(ModifyConstraintMinDaysBetweenActivitiesForm_template);
        addAllActivitiesPushButton->setObjectName(QStringLiteral("addAllActivitiesPushButton"));

        verticalLayout_2->addWidget(addAllActivitiesPushButton);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectedActivitiesTextLabel = new QLabel(ModifyConstraintMinDaysBetweenActivitiesForm_template);
        selectedActivitiesTextLabel->setObjectName(QStringLiteral("selectedActivitiesTextLabel"));
        selectedActivitiesTextLabel->setFrameShape(QFrame::NoFrame);
        selectedActivitiesTextLabel->setFrameShadow(QFrame::Plain);
        selectedActivitiesTextLabel->setWordWrap(false);

        verticalLayout->addWidget(selectedActivitiesTextLabel);

        selectedActivitiesListWidget = new QListWidget(ModifyConstraintMinDaysBetweenActivitiesForm_template);
        selectedActivitiesListWidget->setObjectName(QStringLiteral("selectedActivitiesListWidget"));

        verticalLayout->addWidget(selectedActivitiesListWidget);

        clearPushButton = new QPushButton(ModifyConstraintMinDaysBetweenActivitiesForm_template);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        minDaysTextLabel = new QLabel(ModifyConstraintMinDaysBetweenActivitiesForm_template);
        minDaysTextLabel->setObjectName(QStringLiteral("minDaysTextLabel"));
        minDaysTextLabel->setFrameShape(QFrame::NoFrame);
        minDaysTextLabel->setFrameShadow(QFrame::Plain);
        minDaysTextLabel->setWordWrap(false);

        horizontalLayout_4->addWidget(minDaysTextLabel);

        minDaysSpinBox = new QSpinBox(ModifyConstraintMinDaysBetweenActivitiesForm_template);
        minDaysSpinBox->setObjectName(QStringLiteral("minDaysSpinBox"));

        horizontalLayout_4->addWidget(minDaysSpinBox);

        horizontalSpacer = new QSpacerItem(128, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        consecutiveIfSameDayCheckBox = new QCheckBox(ModifyConstraintMinDaysBetweenActivitiesForm_template);
        consecutiveIfSameDayCheckBox->setObjectName(QStringLiteral("consecutiveIfSameDayCheckBox"));
        consecutiveIfSameDayCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(consecutiveIfSameDayCheckBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        weightTextLabel = new QLabel(ModifyConstraintMinDaysBetweenActivitiesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_3->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintMinDaysBetweenActivitiesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("95.0"));

        horizontalLayout_3->addWidget(weightLineEdit);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintMinDaysBetweenActivitiesForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintMinDaysBetweenActivitiesForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout_2->addLayout(hboxLayout, 4, 0, 1, 2);


        retranslateUi(ModifyConstraintMinDaysBetweenActivitiesForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintMinDaysBetweenActivitiesForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintMinDaysBetweenActivitiesForm_template)
    {
        ModifyConstraintMinDaysBetweenActivitiesForm_template->setWindowTitle(QApplication::translate("ModifyConstraintMinDaysBetweenActivitiesForm_template", "Modify min days between activities", 0));
        filterGroupBox->setTitle(QApplication::translate("ModifyConstraintMinDaysBetweenActivitiesForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("ModifyConstraintMinDaysBetweenActivitiesForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintMinDaysBetweenActivitiesForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifyConstraintMinDaysBetweenActivitiesForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ModifyConstraintMinDaysBetweenActivitiesForm_template", "Activity tag", 0));
        activitiesTextLabel->setText(QApplication::translate("ModifyConstraintMinDaysBetweenActivitiesForm_template", "Activities", 0));
        addAllActivitiesPushButton->setText(QApplication::translate("ModifyConstraintMinDaysBetweenActivitiesForm_template", "All", "Text on a button. It refers to adding all activities from the list above this button into the current constraint"));
        selectedActivitiesTextLabel->setText(QApplication::translate("ModifyConstraintMinDaysBetweenActivitiesForm_template", "Selected", "It refers to a list of selected activities"));
        clearPushButton->setText(QApplication::translate("ModifyConstraintMinDaysBetweenActivitiesForm_template", "Clear", 0));
        minDaysTextLabel->setText(QApplication::translate("ModifyConstraintMinDaysBetweenActivitiesForm_template", "Min days", "Keep translation short. It refers to the minimum number of days between a set of activities"));
        consecutiveIfSameDayCheckBox->setText(QApplication::translate("ModifyConstraintMinDaysBetweenActivitiesForm_template", "If activities on same day,\n"
"force activities consecutive", "Keep translation short. Check how the dialog looks (dialog modify min days between a set of activities)"));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintMinDaysBetweenActivitiesForm_template", "Weight percentage (recommended: 95.0% - 100.0%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintMinDaysBetweenActivitiesForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintMinDaysBetweenActivitiesForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintMinDaysBetweenActivitiesForm_template: public Ui_ModifyConstraintMinDaysBetweenActivitiesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTMINDAYSBETWEENACTIVITIESFORM_TEMPLATE_H
