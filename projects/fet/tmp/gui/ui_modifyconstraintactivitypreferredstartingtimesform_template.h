/********************************************************************************
** Form generated from reading UI file 'modifyconstraintactivitypreferredstartingtimesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTACTIVITYPREFERREDSTARTINGTIMESFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTACTIVITYPREFERREDSTARTINGTIMESFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintActivityPreferredStartingTimesForm_template
{
public:
    QGridLayout *gridLayout_2;
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
    QVBoxLayout *activitiesBoxLayout;
    QLabel *activitiesTextLabel;
    QComboBox *activitiesComboBox;
    QTableWidget *preferredTimesTable;
    QHBoxLayout *weightBoxLayout;
    QSpacerItem *spacer3;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QGridLayout *buttonsGridLayout;
    QPushButton *setAllAllowedPushButton;
    QLabel *label;
    QPushButton *setAllNotAllowedPushButton;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintActivityPreferredStartingTimesForm_template)
    {
        if (ModifyConstraintActivityPreferredStartingTimesForm_template->objectName().isEmpty())
            ModifyConstraintActivityPreferredStartingTimesForm_template->setObjectName(QStringLiteral("ModifyConstraintActivityPreferredStartingTimesForm_template"));
        ModifyConstraintActivityPreferredStartingTimesForm_template->resize(663, 596);
        gridLayout_2 = new QGridLayout(ModifyConstraintActivityPreferredStartingTimesForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        filterGroupBox = new QGroupBox(ModifyConstraintActivityPreferredStartingTimesForm_template);
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


        gridLayout_2->addWidget(filterGroupBox, 0, 0, 1, 1);

        activitiesBoxLayout = new QVBoxLayout();
        activitiesBoxLayout->setSpacing(6);
        activitiesBoxLayout->setObjectName(QStringLiteral("activitiesBoxLayout"));
        activitiesTextLabel = new QLabel(ModifyConstraintActivityPreferredStartingTimesForm_template);
        activitiesTextLabel->setObjectName(QStringLiteral("activitiesTextLabel"));
        activitiesTextLabel->setWordWrap(false);

        activitiesBoxLayout->addWidget(activitiesTextLabel);

        activitiesComboBox = new QComboBox(ModifyConstraintActivityPreferredStartingTimesForm_template);
        activitiesComboBox->setObjectName(QStringLiteral("activitiesComboBox"));

        activitiesBoxLayout->addWidget(activitiesComboBox);


        gridLayout_2->addLayout(activitiesBoxLayout, 1, 0, 1, 1);

        preferredTimesTable = new QTableWidget(ModifyConstraintActivityPreferredStartingTimesForm_template);
        preferredTimesTable->setObjectName(QStringLiteral("preferredTimesTable"));

        gridLayout_2->addWidget(preferredTimesTable, 2, 0, 1, 1);

        weightBoxLayout = new QHBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        spacer3 = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        weightBoxLayout->addItem(spacer3);

        weightTextLabel = new QLabel(ModifyConstraintActivityPreferredStartingTimesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintActivityPreferredStartingTimesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout_2->addLayout(weightBoxLayout, 3, 0, 1, 1);

        buttonsGridLayout = new QGridLayout();
        buttonsGridLayout->setSpacing(6);
        buttonsGridLayout->setObjectName(QStringLiteral("buttonsGridLayout"));
        setAllAllowedPushButton = new QPushButton(ModifyConstraintActivityPreferredStartingTimesForm_template);
        setAllAllowedPushButton->setObjectName(QStringLiteral("setAllAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllAllowedPushButton, 0, 0, 1, 1);

        label = new QLabel(ModifyConstraintActivityPreferredStartingTimesForm_template);
        label->setObjectName(QStringLiteral("label"));

        buttonsGridLayout->addWidget(label, 0, 1, 1, 2);

        setAllNotAllowedPushButton = new QPushButton(ModifyConstraintActivityPreferredStartingTimesForm_template);
        setAllNotAllowedPushButton->setObjectName(QStringLiteral("setAllNotAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllNotAllowedPushButton, 1, 0, 1, 1);

        okPushButton = new QPushButton(ModifyConstraintActivityPreferredStartingTimesForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        buttonsGridLayout->addWidget(okPushButton, 1, 1, 1, 1);

        cancelPushButton = new QPushButton(ModifyConstraintActivityPreferredStartingTimesForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        buttonsGridLayout->addWidget(cancelPushButton, 1, 2, 1, 1);


        gridLayout_2->addLayout(buttonsGridLayout, 4, 0, 1, 1);


        retranslateUi(ModifyConstraintActivityPreferredStartingTimesForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintActivityPreferredStartingTimesForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintActivityPreferredStartingTimesForm_template)
    {
        ModifyConstraintActivityPreferredStartingTimesForm_template->setWindowTitle(QApplication::translate("ModifyConstraintActivityPreferredStartingTimesForm_template", "Modify activity preferred starting times", 0));
        filterGroupBox->setTitle(QApplication::translate("ModifyConstraintActivityPreferredStartingTimesForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimesForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimesForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimesForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimesForm_template", "Activity tag", 0));
        activitiesTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimesForm_template", "Activity", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimesForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        setAllAllowedPushButton->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimesForm_template", "Set all allowed", "It refers to time slots"));
        label->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimesForm_template", "X=not allowed, empty=allowed", 0));
        setAllNotAllowedPushButton->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimesForm_template", "Set all not allowed", "It refers to time slots"));
        okPushButton->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimesForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintActivityPreferredStartingTimesForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintActivityPreferredStartingTimesForm_template: public Ui_ModifyConstraintActivityPreferredStartingTimesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTACTIVITYPREFERREDSTARTINGTIMESFORM_TEMPLATE_H
