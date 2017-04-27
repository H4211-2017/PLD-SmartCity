/********************************************************************************
** Form generated from reading UI file 'modifyconstraintactivitiespreferredstartingtimesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTACTIVITIESPREFERREDSTARTINGTIMESFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTACTIVITIESPREFERREDSTARTINGTIMESFORM_TEMPLATE_H

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

class Ui_ModifyConstraintActivitiesPreferredStartingTimesForm_template
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

    void setupUi(QDialog *ModifyConstraintActivitiesPreferredStartingTimesForm_template)
    {
        if (ModifyConstraintActivitiesPreferredStartingTimesForm_template->objectName().isEmpty())
            ModifyConstraintActivitiesPreferredStartingTimesForm_template->setObjectName(QStringLiteral("ModifyConstraintActivitiesPreferredStartingTimesForm_template"));
        ModifyConstraintActivitiesPreferredStartingTimesForm_template->resize(671, 571);
        gridLayout = new QGridLayout(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        filterGridLayout = new QGridLayout();
        filterGridLayout->setSpacing(6);
        filterGridLayout->setObjectName(QStringLiteral("filterGridLayout"));
        teachersComboBox = new QComboBox(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        filterGridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        activityTagsComboBox = new QComboBox(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        filterGridLayout->addWidget(activityTagsComboBox, 1, 3, 1, 1);

        subjectsComboBox = new QComboBox(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        filterGridLayout->addWidget(subjectsComboBox, 1, 2, 1, 1);

        activityTagsTextLabel = new QLabel(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(activityTagsTextLabel, 0, 3, 1, 1);

        teachersTextLabel = new QLabel(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(teachersTextLabel, 0, 0, 1, 1);

        studentsComboBox = new QComboBox(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        filterGridLayout->addWidget(studentsComboBox, 1, 1, 1, 1);

        studentsTextLabel = new QLabel(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(studentsTextLabel, 0, 1, 1, 1);

        subjectsTextLabel = new QLabel(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(subjectsTextLabel, 0, 2, 1, 1);


        gridLayout->addLayout(filterGridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        durationCheckBox = new QCheckBox(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        durationCheckBox->setObjectName(QStringLiteral("durationCheckBox"));

        horizontalLayout->addWidget(durationCheckBox);

        durationSpinBox = new QSpinBox(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        durationSpinBox->setObjectName(QStringLiteral("durationSpinBox"));

        horizontalLayout->addWidget(durationSpinBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        preferredTimesTable = new QTableWidget(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        preferredTimesTable->setObjectName(QStringLiteral("preferredTimesTable"));

        gridLayout->addWidget(preferredTimesTable, 2, 0, 1, 1);

        weightBoxLayout = new QHBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(weightBoxLayout, 3, 0, 1, 1);

        buttonsGridLayout = new QGridLayout();
        buttonsGridLayout->setSpacing(6);
        buttonsGridLayout->setObjectName(QStringLiteral("buttonsGridLayout"));
        setAllAllowedPushButton = new QPushButton(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        setAllAllowedPushButton->setObjectName(QStringLiteral("setAllAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllAllowedPushButton, 0, 0, 1, 1);

        label = new QLabel(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        label->setObjectName(QStringLiteral("label"));

        buttonsGridLayout->addWidget(label, 0, 1, 1, 2);

        setAllNotAllowedPushButton = new QPushButton(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        setAllNotAllowedPushButton->setObjectName(QStringLiteral("setAllNotAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllNotAllowedPushButton, 1, 0, 1, 1);

        okPushButton = new QPushButton(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        buttonsGridLayout->addWidget(okPushButton, 1, 1, 1, 1);

        cancelPushButton = new QPushButton(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        buttonsGridLayout->addWidget(cancelPushButton, 1, 2, 1, 1);


        gridLayout->addLayout(buttonsGridLayout, 4, 0, 1, 1);


        retranslateUi(ModifyConstraintActivitiesPreferredStartingTimesForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintActivitiesPreferredStartingTimesForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintActivitiesPreferredStartingTimesForm_template)
    {
        ModifyConstraintActivitiesPreferredStartingTimesForm_template->setWindowTitle(QApplication::translate("ModifyConstraintActivitiesPreferredStartingTimesForm_template", "Modify activities preferred starting times", 0));
        activityTagsTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesPreferredStartingTimesForm_template", "Activity tag", 0));
        teachersTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesPreferredStartingTimesForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesPreferredStartingTimesForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesPreferredStartingTimesForm_template", "Subject", 0));
        durationCheckBox->setText(QApplication::translate("ModifyConstraintActivitiesPreferredStartingTimesForm_template", "Duration", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesPreferredStartingTimesForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        setAllAllowedPushButton->setText(QApplication::translate("ModifyConstraintActivitiesPreferredStartingTimesForm_template", "Set all allowed", "It refers to time slots"));
        label->setText(QApplication::translate("ModifyConstraintActivitiesPreferredStartingTimesForm_template", "X=not allowed, empty=allowed", 0));
        setAllNotAllowedPushButton->setText(QApplication::translate("ModifyConstraintActivitiesPreferredStartingTimesForm_template", "Set all not allowed", "It refers to time slots"));
        okPushButton->setText(QApplication::translate("ModifyConstraintActivitiesPreferredStartingTimesForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintActivitiesPreferredStartingTimesForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintActivitiesPreferredStartingTimesForm_template: public Ui_ModifyConstraintActivitiesPreferredStartingTimesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTACTIVITIESPREFERREDSTARTINGTIMESFORM_TEMPLATE_H
