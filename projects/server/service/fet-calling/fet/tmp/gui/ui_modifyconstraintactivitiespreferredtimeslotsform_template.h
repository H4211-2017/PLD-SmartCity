/********************************************************************************
** Form generated from reading UI file 'modifyconstraintactivitiespreferredtimeslotsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTACTIVITIESPREFERREDTIMESLOTSFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTACTIVITIESPREFERREDTIMESLOTSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintActivitiesPreferredTimeSlotsForm_template
{
public:
    QGridLayout *gridLayout;
    QGridLayout *filterGridLayout;
    QComboBox *teachersComboBox;
    QComboBox *activityTagsComboBox;
    QComboBox *subjectsComboBox;
    QLabel *activityTagsTextLabel;
    QLabel *teachersTextLabel;
    QComboBox *studentsComboBox;
    QLabel *studentsTextLabel;
    QLabel *subjectsTextLabel;
    QHBoxLayout *horizontalLayout;
    QCheckBox *durationCheckBox;
    QSpinBox *durationSpinBox;
    QTableWidget *preferredTimesTable;
    QHBoxLayout *weightBoxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QGridLayout *buttonsGridLayout;
    QPushButton *setAllAllowedPushButton;
    QLabel *label;
    QPushButton *setAllNotAllowedPushButton;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintActivitiesPreferredTimeSlotsForm_template)
    {
        if (ModifyConstraintActivitiesPreferredTimeSlotsForm_template->objectName().isEmpty())
            ModifyConstraintActivitiesPreferredTimeSlotsForm_template->setObjectName(QStringLiteral("ModifyConstraintActivitiesPreferredTimeSlotsForm_template"));
        ModifyConstraintActivitiesPreferredTimeSlotsForm_template->resize(665, 580);
        gridLayout = new QGridLayout(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        filterGridLayout = new QGridLayout();
        filterGridLayout->setSpacing(6);
        filterGridLayout->setObjectName(QStringLiteral("filterGridLayout"));
        teachersComboBox = new QComboBox(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        filterGridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        activityTagsComboBox = new QComboBox(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        filterGridLayout->addWidget(activityTagsComboBox, 1, 3, 1, 1);

        subjectsComboBox = new QComboBox(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        filterGridLayout->addWidget(subjectsComboBox, 1, 2, 1, 1);

        activityTagsTextLabel = new QLabel(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(activityTagsTextLabel, 0, 3, 1, 1);

        teachersTextLabel = new QLabel(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(teachersTextLabel, 0, 0, 1, 1);

        studentsComboBox = new QComboBox(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        filterGridLayout->addWidget(studentsComboBox, 1, 1, 1, 1);

        studentsTextLabel = new QLabel(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(studentsTextLabel, 0, 1, 1, 1);

        subjectsTextLabel = new QLabel(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(subjectsTextLabel, 0, 2, 1, 1);


        gridLayout->addLayout(filterGridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        durationCheckBox = new QCheckBox(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        durationCheckBox->setObjectName(QStringLiteral("durationCheckBox"));

        horizontalLayout->addWidget(durationCheckBox);

        durationSpinBox = new QSpinBox(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        durationSpinBox->setObjectName(QStringLiteral("durationSpinBox"));

        horizontalLayout->addWidget(durationSpinBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        preferredTimesTable = new QTableWidget(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        preferredTimesTable->setObjectName(QStringLiteral("preferredTimesTable"));

        gridLayout->addWidget(preferredTimesTable, 2, 0, 1, 1);

        weightBoxLayout = new QHBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(weightBoxLayout, 3, 0, 1, 1);

        buttonsGridLayout = new QGridLayout();
        buttonsGridLayout->setSpacing(6);
        buttonsGridLayout->setObjectName(QStringLiteral("buttonsGridLayout"));
        setAllAllowedPushButton = new QPushButton(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        setAllAllowedPushButton->setObjectName(QStringLiteral("setAllAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllAllowedPushButton, 0, 0, 1, 1);

        label = new QLabel(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        label->setObjectName(QStringLiteral("label"));

        buttonsGridLayout->addWidget(label, 0, 1, 1, 2);

        setAllNotAllowedPushButton = new QPushButton(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        setAllNotAllowedPushButton->setObjectName(QStringLiteral("setAllNotAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllNotAllowedPushButton, 1, 0, 1, 1);

        okPushButton = new QPushButton(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        buttonsGridLayout->addWidget(okPushButton, 1, 1, 1, 1);

        cancelPushButton = new QPushButton(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        buttonsGridLayout->addWidget(cancelPushButton, 1, 2, 1, 1);


        gridLayout->addLayout(buttonsGridLayout, 4, 0, 1, 1);


        retranslateUi(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintActivitiesPreferredTimeSlotsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintActivitiesPreferredTimeSlotsForm_template)
    {
        ModifyConstraintActivitiesPreferredTimeSlotsForm_template->setWindowTitle(QApplication::translate("ModifyConstraintActivitiesPreferredTimeSlotsForm_template", "Modify activities preferred time slots", 0));
        activityTagsTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesPreferredTimeSlotsForm_template", "Activity tag", 0));
        teachersTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesPreferredTimeSlotsForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesPreferredTimeSlotsForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesPreferredTimeSlotsForm_template", "Subject", 0));
        durationCheckBox->setText(QApplication::translate("ModifyConstraintActivitiesPreferredTimeSlotsForm_template", "Duration", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesPreferredTimeSlotsForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        setAllAllowedPushButton->setText(QApplication::translate("ModifyConstraintActivitiesPreferredTimeSlotsForm_template", "Set all allowed", "It refers to time slots"));
        label->setText(QApplication::translate("ModifyConstraintActivitiesPreferredTimeSlotsForm_template", "X=not allowed, empty=allowed", 0));
        setAllNotAllowedPushButton->setText(QApplication::translate("ModifyConstraintActivitiesPreferredTimeSlotsForm_template", "Set all not allowed", "It refers to time slots"));
        okPushButton->setText(QApplication::translate("ModifyConstraintActivitiesPreferredTimeSlotsForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintActivitiesPreferredTimeSlotsForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintActivitiesPreferredTimeSlotsForm_template: public Ui_ModifyConstraintActivitiesPreferredTimeSlotsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTACTIVITIESPREFERREDTIMESLOTSFORM_TEMPLATE_H
