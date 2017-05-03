/********************************************************************************
** Form generated from reading UI file 'addconstraintactivitiespreferredstartingtimesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTACTIVITIESPREFERREDSTARTINGTIMESFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTACTIVITIESPREFERREDSTARTINGTIMESFORM_TEMPLATE_H

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

class Ui_AddConstraintActivitiesPreferredStartingTimesForm_template
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

    void setupUi(QDialog *AddConstraintActivitiesPreferredStartingTimesForm_template)
    {
        if (AddConstraintActivitiesPreferredStartingTimesForm_template->objectName().isEmpty())
            AddConstraintActivitiesPreferredStartingTimesForm_template->setObjectName(QStringLiteral("AddConstraintActivitiesPreferredStartingTimesForm_template"));
        AddConstraintActivitiesPreferredStartingTimesForm_template->resize(682, 582);
        gridLayout = new QGridLayout(AddConstraintActivitiesPreferredStartingTimesForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        filterGridLayout = new QGridLayout();
        filterGridLayout->setSpacing(6);
        filterGridLayout->setObjectName(QStringLiteral("filterGridLayout"));
        activityTagsTextLabel = new QLabel(AddConstraintActivitiesPreferredStartingTimesForm_template);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(activityTagsTextLabel, 0, 3, 1, 1);

        studentsComboBox = new QComboBox(AddConstraintActivitiesPreferredStartingTimesForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        filterGridLayout->addWidget(studentsComboBox, 1, 1, 1, 1);

        activityTagsComboBox = new QComboBox(AddConstraintActivitiesPreferredStartingTimesForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        filterGridLayout->addWidget(activityTagsComboBox, 1, 3, 1, 1);

        studentsTextLabel = new QLabel(AddConstraintActivitiesPreferredStartingTimesForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(studentsTextLabel, 0, 1, 1, 1);

        subjectsComboBox = new QComboBox(AddConstraintActivitiesPreferredStartingTimesForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        filterGridLayout->addWidget(subjectsComboBox, 1, 2, 1, 1);

        subjectsTextLabel = new QLabel(AddConstraintActivitiesPreferredStartingTimesForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(subjectsTextLabel, 0, 2, 1, 1);

        teachersComboBox = new QComboBox(AddConstraintActivitiesPreferredStartingTimesForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        filterGridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        teachersTextLabel = new QLabel(AddConstraintActivitiesPreferredStartingTimesForm_template);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(teachersTextLabel, 0, 0, 1, 1);


        gridLayout->addLayout(filterGridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        durationCheckBox = new QCheckBox(AddConstraintActivitiesPreferredStartingTimesForm_template);
        durationCheckBox->setObjectName(QStringLiteral("durationCheckBox"));

        horizontalLayout->addWidget(durationCheckBox);

        durationSpinBox = new QSpinBox(AddConstraintActivitiesPreferredStartingTimesForm_template);
        durationSpinBox->setObjectName(QStringLiteral("durationSpinBox"));

        horizontalLayout->addWidget(durationSpinBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        preferredTimesTable = new QTableWidget(AddConstraintActivitiesPreferredStartingTimesForm_template);
        preferredTimesTable->setObjectName(QStringLiteral("preferredTimesTable"));

        gridLayout->addWidget(preferredTimesTable, 2, 0, 1, 1);

        weightBoxLayout = new QHBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(AddConstraintActivitiesPreferredStartingTimesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintActivitiesPreferredStartingTimesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(weightBoxLayout, 3, 0, 1, 1);

        buttonsGridLayout = new QGridLayout();
        buttonsGridLayout->setSpacing(6);
        buttonsGridLayout->setObjectName(QStringLiteral("buttonsGridLayout"));
        setAllAllowedPushButton = new QPushButton(AddConstraintActivitiesPreferredStartingTimesForm_template);
        setAllAllowedPushButton->setObjectName(QStringLiteral("setAllAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllAllowedPushButton, 0, 0, 1, 1);

        label = new QLabel(AddConstraintActivitiesPreferredStartingTimesForm_template);
        label->setObjectName(QStringLiteral("label"));

        buttonsGridLayout->addWidget(label, 0, 1, 1, 2);

        setAllNotAllowedPushButton = new QPushButton(AddConstraintActivitiesPreferredStartingTimesForm_template);
        setAllNotAllowedPushButton->setObjectName(QStringLiteral("setAllNotAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllNotAllowedPushButton, 1, 0, 1, 1);

        addConstraintPushButton = new QPushButton(AddConstraintActivitiesPreferredStartingTimesForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        buttonsGridLayout->addWidget(addConstraintPushButton, 1, 1, 1, 1);

        closePushButton = new QPushButton(AddConstraintActivitiesPreferredStartingTimesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        buttonsGridLayout->addWidget(closePushButton, 1, 2, 1, 1);


        gridLayout->addLayout(buttonsGridLayout, 4, 0, 1, 1);


        retranslateUi(AddConstraintActivitiesPreferredStartingTimesForm_template);

        QMetaObject::connectSlotsByName(AddConstraintActivitiesPreferredStartingTimesForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintActivitiesPreferredStartingTimesForm_template)
    {
        AddConstraintActivitiesPreferredStartingTimesForm_template->setWindowTitle(QApplication::translate("AddConstraintActivitiesPreferredStartingTimesForm_template", "Add activities preferred starting times", 0));
        activityTagsTextLabel->setText(QApplication::translate("AddConstraintActivitiesPreferredStartingTimesForm_template", "Activity tag", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintActivitiesPreferredStartingTimesForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("AddConstraintActivitiesPreferredStartingTimesForm_template", "Subject", 0));
        teachersTextLabel->setText(QApplication::translate("AddConstraintActivitiesPreferredStartingTimesForm_template", "Teacher", 0));
        durationCheckBox->setText(QApplication::translate("AddConstraintActivitiesPreferredStartingTimesForm_template", "Duration", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintActivitiesPreferredStartingTimesForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        setAllAllowedPushButton->setText(QApplication::translate("AddConstraintActivitiesPreferredStartingTimesForm_template", "Set all allowed", "It refers to time slots"));
        label->setText(QApplication::translate("AddConstraintActivitiesPreferredStartingTimesForm_template", "X=not allowed, empty=allowed", 0));
        setAllNotAllowedPushButton->setText(QApplication::translate("AddConstraintActivitiesPreferredStartingTimesForm_template", "Set all not allowed", "It refers to time slots"));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintActivitiesPreferredStartingTimesForm_template", "Add", 0));
        closePushButton->setText(QApplication::translate("AddConstraintActivitiesPreferredStartingTimesForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintActivitiesPreferredStartingTimesForm_template: public Ui_AddConstraintActivitiesPreferredStartingTimesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTACTIVITIESPREFERREDSTARTINGTIMESFORM_TEMPLATE_H
