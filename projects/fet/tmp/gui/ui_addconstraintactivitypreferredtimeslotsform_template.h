/********************************************************************************
** Form generated from reading UI file 'addconstraintactivitypreferredtimeslotsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTACTIVITYPREFERREDTIMESLOTSFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTACTIVITYPREFERREDTIMESLOTSFORM_TEMPLATE_H

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

class Ui_AddConstraintActivityPreferredTimeSlotsForm_template
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
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintActivityPreferredTimeSlotsForm_template)
    {
        if (AddConstraintActivityPreferredTimeSlotsForm_template->objectName().isEmpty())
            AddConstraintActivityPreferredTimeSlotsForm_template->setObjectName(QStringLiteral("AddConstraintActivityPreferredTimeSlotsForm_template"));
        AddConstraintActivityPreferredTimeSlotsForm_template->resize(700, 568);
        gridLayout_2 = new QGridLayout(AddConstraintActivityPreferredTimeSlotsForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        filterGroupBox = new QGroupBox(AddConstraintActivityPreferredTimeSlotsForm_template);
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
        activitiesTextLabel = new QLabel(AddConstraintActivityPreferredTimeSlotsForm_template);
        activitiesTextLabel->setObjectName(QStringLiteral("activitiesTextLabel"));
        activitiesTextLabel->setWordWrap(false);

        activitiesBoxLayout->addWidget(activitiesTextLabel);

        activitiesComboBox = new QComboBox(AddConstraintActivityPreferredTimeSlotsForm_template);
        activitiesComboBox->setObjectName(QStringLiteral("activitiesComboBox"));

        activitiesBoxLayout->addWidget(activitiesComboBox);


        gridLayout_2->addLayout(activitiesBoxLayout, 1, 0, 1, 1);

        preferredTimesTable = new QTableWidget(AddConstraintActivityPreferredTimeSlotsForm_template);
        preferredTimesTable->setObjectName(QStringLiteral("preferredTimesTable"));

        gridLayout_2->addWidget(preferredTimesTable, 2, 0, 1, 1);

        weightBoxLayout = new QHBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        spacer3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        weightBoxLayout->addItem(spacer3);

        weightTextLabel = new QLabel(AddConstraintActivityPreferredTimeSlotsForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintActivityPreferredTimeSlotsForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout_2->addLayout(weightBoxLayout, 3, 0, 1, 1);

        buttonsGridLayout = new QGridLayout();
        buttonsGridLayout->setSpacing(6);
        buttonsGridLayout->setObjectName(QStringLiteral("buttonsGridLayout"));
        setAllAllowedPushButton = new QPushButton(AddConstraintActivityPreferredTimeSlotsForm_template);
        setAllAllowedPushButton->setObjectName(QStringLiteral("setAllAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllAllowedPushButton, 0, 0, 1, 1);

        label = new QLabel(AddConstraintActivityPreferredTimeSlotsForm_template);
        label->setObjectName(QStringLiteral("label"));

        buttonsGridLayout->addWidget(label, 0, 1, 1, 2);

        setAllNotAllowedPushButton = new QPushButton(AddConstraintActivityPreferredTimeSlotsForm_template);
        setAllNotAllowedPushButton->setObjectName(QStringLiteral("setAllNotAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllNotAllowedPushButton, 1, 0, 1, 1);

        addConstraintPushButton = new QPushButton(AddConstraintActivityPreferredTimeSlotsForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        buttonsGridLayout->addWidget(addConstraintPushButton, 1, 1, 1, 1);

        closePushButton = new QPushButton(AddConstraintActivityPreferredTimeSlotsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        buttonsGridLayout->addWidget(closePushButton, 1, 2, 1, 1);


        gridLayout_2->addLayout(buttonsGridLayout, 4, 0, 1, 1);


        retranslateUi(AddConstraintActivityPreferredTimeSlotsForm_template);

        QMetaObject::connectSlotsByName(AddConstraintActivityPreferredTimeSlotsForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintActivityPreferredTimeSlotsForm_template)
    {
        AddConstraintActivityPreferredTimeSlotsForm_template->setWindowTitle(QApplication::translate("AddConstraintActivityPreferredTimeSlotsForm_template", "Add activity preferred time slots", 0));
        filterGroupBox->setTitle(QApplication::translate("AddConstraintActivityPreferredTimeSlotsForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredTimeSlotsForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredTimeSlotsForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredTimeSlotsForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredTimeSlotsForm_template", "Activity tag", 0));
        activitiesTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredTimeSlotsForm_template", "Activity", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredTimeSlotsForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        setAllAllowedPushButton->setText(QApplication::translate("AddConstraintActivityPreferredTimeSlotsForm_template", "Set all allowed", "It refers to time slots"));
        label->setText(QApplication::translate("AddConstraintActivityPreferredTimeSlotsForm_template", "X=not allowed, empty=allowed", 0));
        setAllNotAllowedPushButton->setText(QApplication::translate("AddConstraintActivityPreferredTimeSlotsForm_template", "Set all not allowed", "It refers to time slots"));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintActivityPreferredTimeSlotsForm_template", "Add", 0));
        closePushButton->setText(QApplication::translate("AddConstraintActivityPreferredTimeSlotsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintActivityPreferredTimeSlotsForm_template: public Ui_AddConstraintActivityPreferredTimeSlotsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTACTIVITYPREFERREDTIMESLOTSFORM_TEMPLATE_H
