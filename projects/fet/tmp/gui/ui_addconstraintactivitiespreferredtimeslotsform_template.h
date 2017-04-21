/********************************************************************************
** Form generated from reading UI file 'addconstraintactivitiespreferredtimeslotsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTACTIVITIESPREFERREDTIMESLOTSFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTACTIVITIESPREFERREDTIMESLOTSFORM_TEMPLATE_H

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

class Ui_AddConstraintActivitiesPreferredTimeSlotsForm_template
{
public:
    QGridLayout *gridLayout;
    QGridLayout *filterGridLayout;
    QLabel *activityTagsTextLabel;
    QComboBox *studentsComboBox;
    QComboBox *activityTagsComboBox;
    QLabel *studentsTextLabel;
    QComboBox *subjectsComboBox;
    QLabel *subjectsTextLabel;
    QComboBox *teachersComboBox;
    QLabel *teachersTextLabel;
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
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintActivitiesPreferredTimeSlotsForm_template)
    {
        if (AddConstraintActivitiesPreferredTimeSlotsForm_template->objectName().isEmpty())
            AddConstraintActivitiesPreferredTimeSlotsForm_template->setObjectName(QStringLiteral("AddConstraintActivitiesPreferredTimeSlotsForm_template"));
        AddConstraintActivitiesPreferredTimeSlotsForm_template->resize(664, 585);
        gridLayout = new QGridLayout(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        filterGridLayout = new QGridLayout();
        filterGridLayout->setSpacing(6);
        filterGridLayout->setObjectName(QStringLiteral("filterGridLayout"));
        activityTagsTextLabel = new QLabel(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(activityTagsTextLabel, 0, 3, 1, 1);

        studentsComboBox = new QComboBox(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        filterGridLayout->addWidget(studentsComboBox, 1, 1, 1, 1);

        activityTagsComboBox = new QComboBox(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        filterGridLayout->addWidget(activityTagsComboBox, 1, 3, 1, 1);

        studentsTextLabel = new QLabel(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(studentsTextLabel, 0, 1, 1, 1);

        subjectsComboBox = new QComboBox(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        filterGridLayout->addWidget(subjectsComboBox, 1, 2, 1, 1);

        subjectsTextLabel = new QLabel(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(subjectsTextLabel, 0, 2, 1, 1);

        teachersComboBox = new QComboBox(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        filterGridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        teachersTextLabel = new QLabel(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(teachersTextLabel, 0, 0, 1, 1);


        gridLayout->addLayout(filterGridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        durationCheckBox = new QCheckBox(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        durationCheckBox->setObjectName(QStringLiteral("durationCheckBox"));

        horizontalLayout->addWidget(durationCheckBox);

        durationSpinBox = new QSpinBox(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        durationSpinBox->setObjectName(QStringLiteral("durationSpinBox"));

        horizontalLayout->addWidget(durationSpinBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        preferredTimesTable = new QTableWidget(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        preferredTimesTable->setObjectName(QStringLiteral("preferredTimesTable"));

        gridLayout->addWidget(preferredTimesTable, 2, 0, 1, 1);

        weightBoxLayout = new QHBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(weightBoxLayout, 3, 0, 1, 1);

        buttonsGridLayout = new QGridLayout();
        buttonsGridLayout->setSpacing(6);
        buttonsGridLayout->setObjectName(QStringLiteral("buttonsGridLayout"));
        setAllAllowedPushButton = new QPushButton(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        setAllAllowedPushButton->setObjectName(QStringLiteral("setAllAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllAllowedPushButton, 0, 0, 1, 1);

        label = new QLabel(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        label->setObjectName(QStringLiteral("label"));

        buttonsGridLayout->addWidget(label, 0, 1, 1, 2);

        setAllNotAllowedPushButton = new QPushButton(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        setAllNotAllowedPushButton->setObjectName(QStringLiteral("setAllNotAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllNotAllowedPushButton, 1, 0, 1, 1);

        addConstraintPushButton = new QPushButton(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        buttonsGridLayout->addWidget(addConstraintPushButton, 1, 1, 1, 1);

        closePushButton = new QPushButton(AddConstraintActivitiesPreferredTimeSlotsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        buttonsGridLayout->addWidget(closePushButton, 1, 2, 1, 1);


        gridLayout->addLayout(buttonsGridLayout, 4, 0, 1, 1);


        retranslateUi(AddConstraintActivitiesPreferredTimeSlotsForm_template);

        QMetaObject::connectSlotsByName(AddConstraintActivitiesPreferredTimeSlotsForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintActivitiesPreferredTimeSlotsForm_template)
    {
        AddConstraintActivitiesPreferredTimeSlotsForm_template->setWindowTitle(QApplication::translate("AddConstraintActivitiesPreferredTimeSlotsForm_template", "Add activities preferred time slots", 0));
        activityTagsTextLabel->setText(QApplication::translate("AddConstraintActivitiesPreferredTimeSlotsForm_template", "Activity tag", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintActivitiesPreferredTimeSlotsForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("AddConstraintActivitiesPreferredTimeSlotsForm_template", "Subject", 0));
        teachersTextLabel->setText(QApplication::translate("AddConstraintActivitiesPreferredTimeSlotsForm_template", "Teacher", 0));
        durationCheckBox->setText(QApplication::translate("AddConstraintActivitiesPreferredTimeSlotsForm_template", "Duration", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintActivitiesPreferredTimeSlotsForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        setAllAllowedPushButton->setText(QApplication::translate("AddConstraintActivitiesPreferredTimeSlotsForm_template", "Set all allowed", "It refers to time slots"));
        label->setText(QApplication::translate("AddConstraintActivitiesPreferredTimeSlotsForm_template", "X=not allowed, empty=allowed", 0));
        setAllNotAllowedPushButton->setText(QApplication::translate("AddConstraintActivitiesPreferredTimeSlotsForm_template", "Set all not allowed", "It refers to time slots"));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintActivitiesPreferredTimeSlotsForm_template", "Add", 0));
        closePushButton->setText(QApplication::translate("AddConstraintActivitiesPreferredTimeSlotsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintActivitiesPreferredTimeSlotsForm_template: public Ui_AddConstraintActivitiesPreferredTimeSlotsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTACTIVITIESPREFERREDTIMESLOTSFORM_TEMPLATE_H
