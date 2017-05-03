/********************************************************************************
** Form generated from reading UI file 'modifyconstraintactivitypreferredstartingtimeform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTACTIVITYPREFERREDSTARTINGTIMEFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTACTIVITYPREFERREDSTARTINGTIMEFORM_TEMPLATE_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintActivityPreferredStartingTimeForm_template
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QLabel *teachersTextLabel;
    QLabel *studentsTextLabel;
    QComboBox *teachersComboBox;
    QComboBox *studentsComboBox;
    QLabel *subjectsTextLabel;
    QLabel *activityTagsTextLabel;
    QComboBox *subjectsComboBox;
    QComboBox *activityTagsComboBox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *vboxLayout;
    QLabel *activityTextLabel;
    QComboBox *activitiesComboBox;
    QHBoxLayout *hboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QGroupBox *periodGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *dayTextLabel;
    QLabel *startHourTextLabel;
    QComboBox *dayComboBox;
    QComboBox *startHourComboBox;
    QCheckBox *permLockedCheckBox;
    QLabel *permTextLabel;
    QHBoxLayout *hboxLayout1;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintActivityPreferredStartingTimeForm_template)
    {
        if (ModifyConstraintActivityPreferredStartingTimeForm_template->objectName().isEmpty())
            ModifyConstraintActivityPreferredStartingTimeForm_template->setObjectName(QStringLiteral("ModifyConstraintActivityPreferredStartingTimeForm_template"));
        ModifyConstraintActivityPreferredStartingTimeForm_template->resize(700, 559);
        gridLayout_3 = new QGridLayout(ModifyConstraintActivityPreferredStartingTimeForm_template);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        filterGroupBox = new QGroupBox(ModifyConstraintActivityPreferredStartingTimeForm_template);
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

        teachersComboBox = new QComboBox(filterGroupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        studentsComboBox = new QComboBox(filterGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 1, 1, 1, 1);

        subjectsTextLabel = new QLabel(filterGroupBox);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel, 2, 0, 1, 1);

        activityTagsTextLabel = new QLabel(filterGroupBox);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        gridLayout->addWidget(activityTagsTextLabel, 2, 1, 1, 1);

        subjectsComboBox = new QComboBox(filterGroupBox);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 3, 0, 1, 1);

        activityTagsComboBox = new QComboBox(filterGroupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 3, 1, 1, 1);


        gridLayout_3->addWidget(filterGroupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        activityTextLabel = new QLabel(ModifyConstraintActivityPreferredStartingTimeForm_template);
        activityTextLabel->setObjectName(QStringLiteral("activityTextLabel"));
        activityTextLabel->setFrameShape(QFrame::NoFrame);
        activityTextLabel->setFrameShadow(QFrame::Plain);
        activityTextLabel->setWordWrap(false);

        vboxLayout->addWidget(activityTextLabel);

        activitiesComboBox = new QComboBox(ModifyConstraintActivityPreferredStartingTimeForm_template);
        activitiesComboBox->setObjectName(QStringLiteral("activitiesComboBox"));
        activitiesComboBox->setEditable(false);
        activitiesComboBox->setInsertPolicy(QComboBox::NoInsert);
        activitiesComboBox->setAutoCompletion(false);
        activitiesComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(activitiesComboBox);


        gridLayout_3->addLayout(vboxLayout, 2, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintActivityPreferredStartingTimeForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintActivityPreferredStartingTimeForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout_3->addLayout(hboxLayout, 3, 0, 1, 1);

        periodGroupBox = new QGroupBox(ModifyConstraintActivityPreferredStartingTimeForm_template);
        periodGroupBox->setObjectName(QStringLiteral("periodGroupBox"));
        gridLayout_2 = new QGridLayout(periodGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        dayTextLabel = new QLabel(periodGroupBox);
        dayTextLabel->setObjectName(QStringLiteral("dayTextLabel"));
        dayTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(dayTextLabel, 0, 0, 1, 1);

        startHourTextLabel = new QLabel(periodGroupBox);
        startHourTextLabel->setObjectName(QStringLiteral("startHourTextLabel"));
        startHourTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(startHourTextLabel, 0, 1, 1, 1);

        dayComboBox = new QComboBox(periodGroupBox);
        dayComboBox->setObjectName(QStringLiteral("dayComboBox"));
        dayComboBox->setDuplicatesEnabled(false);

        gridLayout_2->addWidget(dayComboBox, 1, 0, 1, 1);

        startHourComboBox = new QComboBox(periodGroupBox);
        startHourComboBox->setObjectName(QStringLiteral("startHourComboBox"));
        startHourComboBox->setDuplicatesEnabled(false);

        gridLayout_2->addWidget(startHourComboBox, 1, 1, 1, 1);


        gridLayout_3->addWidget(periodGroupBox, 4, 0, 1, 1);

        permLockedCheckBox = new QCheckBox(ModifyConstraintActivityPreferredStartingTimeForm_template);
        permLockedCheckBox->setObjectName(QStringLiteral("permLockedCheckBox"));
        permLockedCheckBox->setChecked(true);

        gridLayout_3->addWidget(permLockedCheckBox, 5, 0, 1, 1);

        permTextLabel = new QLabel(ModifyConstraintActivityPreferredStartingTimeForm_template);
        permTextLabel->setObjectName(QStringLiteral("permTextLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(permTextLabel->sizePolicy().hasHeightForWidth());
        permTextLabel->setSizePolicy(sizePolicy);
        permTextLabel->setAlignment(Qt::AlignVCenter);
        permTextLabel->setWordWrap(true);

        gridLayout_3->addWidget(permTextLabel, 6, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        okPushButton = new QPushButton(ModifyConstraintActivityPreferredStartingTimeForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout1->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintActivityPreferredStartingTimeForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout1->addWidget(cancelPushButton);


        gridLayout_3->addLayout(hboxLayout1, 7, 0, 1, 1);


        retranslateUi(ModifyConstraintActivityPreferredStartingTimeForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintActivityPreferredStartingTimeForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintActivityPreferredStartingTimeForm_template)
    {
        ModifyConstraintActivityPreferredStartingTimeForm_template->setWindowTitle(QApplication::translate("ModifyConstraintActivityPreferredStartingTimeForm_template", "Modify activity preferred starting time", 0));
        filterGroupBox->setTitle(QApplication::translate("ModifyConstraintActivityPreferredStartingTimeForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimeForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimeForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimeForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimeForm_template", "Activity tag", 0));
        activityTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimeForm_template", "Activity", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimeForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        periodGroupBox->setTitle(QApplication::translate("ModifyConstraintActivityPreferredStartingTimeForm_template", "Period", 0));
        dayTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimeForm_template", "Day", 0));
        startHourTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimeForm_template", "Start hour", 0));
        permLockedCheckBox->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimeForm_template", "Permanently locked", 0));
        permTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimeForm_template", "Select this if you want this constraint not to be unlockable from the 'Timetable' menu (recommended). You can always remove this constraint from the constraints dialogs or uncheck \"permanently locked\" checkbox by editing this constraint", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimeForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimeForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintActivityPreferredStartingTimeForm_template: public Ui_ModifyConstraintActivityPreferredStartingTimeForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTACTIVITYPREFERREDSTARTINGTIMEFORM_TEMPLATE_H
