/********************************************************************************
** Form generated from reading UI file 'constraintactivitypreferredroomform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTACTIVITYPREFERREDROOMFORM_TEMPLATE_H
#define UI_CONSTRAINTACTIVITYPREFERREDROOMFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ConstraintActivityPreferredRoomForm_template
{
public:
    QGridLayout *gridLayout_3;
    QLabel *constraintsTextLabel;
    QLabel *currentConstraintTextLabel;
    QListWidget *constraintsListWidget;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *filterActivitiesGroupBox;
    QGridLayout *gridLayout;
    QLabel *teachersTextLabel;
    QComboBox *teachersComboBox;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
    QLabel *subjectsTextLabel;
    QComboBox *subjectsComboBox;
    QLabel *activityTagsTextLabel;
    QComboBox *activityTagsComboBox;
    QGroupBox *filterRoomsGroupBox;
    QGridLayout *gridLayout_2;
    QComboBox *roomsComboBox;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintActivityPreferredRoomForm_template)
    {
        if (ConstraintActivityPreferredRoomForm_template->objectName().isEmpty())
            ConstraintActivityPreferredRoomForm_template->setObjectName(QStringLiteral("ConstraintActivityPreferredRoomForm_template"));
        ConstraintActivityPreferredRoomForm_template->resize(568, 520);
        gridLayout_3 = new QGridLayout(ConstraintActivityPreferredRoomForm_template);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        constraintsTextLabel = new QLabel(ConstraintActivityPreferredRoomForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        gridLayout_3->addWidget(constraintsTextLabel, 0, 0, 1, 1);

        currentConstraintTextLabel = new QLabel(ConstraintActivityPreferredRoomForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        gridLayout_3->addWidget(currentConstraintTextLabel, 0, 2, 1, 1);

        constraintsListWidget = new QListWidget(ConstraintActivityPreferredRoomForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        gridLayout_3->addWidget(constraintsListWidget, 1, 0, 3, 2);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintActivityPreferredRoomForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        gridLayout_3->addWidget(currentConstraintTextEdit, 1, 2, 1, 2);

        filterActivitiesGroupBox = new QGroupBox(ConstraintActivityPreferredRoomForm_template);
        filterActivitiesGroupBox->setObjectName(QStringLiteral("filterActivitiesGroupBox"));
        gridLayout = new QGridLayout(filterActivitiesGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersTextLabel = new QLabel(filterActivitiesGroupBox);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        gridLayout->addWidget(teachersTextLabel, 0, 0, 1, 1);

        teachersComboBox = new QComboBox(filterActivitiesGroupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        studentsTextLabel = new QLabel(filterActivitiesGroupBox);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel, 2, 0, 1, 1);

        studentsComboBox = new QComboBox(filterActivitiesGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 3, 0, 1, 1);

        subjectsTextLabel = new QLabel(filterActivitiesGroupBox);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel, 4, 0, 1, 1);

        subjectsComboBox = new QComboBox(filterActivitiesGroupBox);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 5, 0, 1, 1);

        activityTagsTextLabel = new QLabel(filterActivitiesGroupBox);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        gridLayout->addWidget(activityTagsTextLabel, 6, 0, 1, 1);

        activityTagsComboBox = new QComboBox(filterActivitiesGroupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 7, 0, 1, 1);


        gridLayout_3->addWidget(filterActivitiesGroupBox, 2, 2, 1, 2);

        filterRoomsGroupBox = new QGroupBox(ConstraintActivityPreferredRoomForm_template);
        filterRoomsGroupBox->setObjectName(QStringLiteral("filterRoomsGroupBox"));
        gridLayout_2 = new QGridLayout(filterRoomsGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        roomsComboBox = new QComboBox(filterRoomsGroupBox);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        gridLayout_2->addWidget(roomsComboBox, 0, 0, 1, 1);


        gridLayout_3->addWidget(filterRoomsGroupBox, 3, 2, 1, 2);

        addConstraintPushButton = new QPushButton(ConstraintActivityPreferredRoomForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        gridLayout_3->addWidget(addConstraintPushButton, 4, 0, 1, 1);

        modifyConstraintPushButton = new QPushButton(ConstraintActivityPreferredRoomForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        gridLayout_3->addWidget(modifyConstraintPushButton, 4, 1, 1, 1);

        removeConstraintPushButton = new QPushButton(ConstraintActivityPreferredRoomForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        gridLayout_3->addWidget(removeConstraintPushButton, 4, 2, 1, 1);

        closePushButton = new QPushButton(ConstraintActivityPreferredRoomForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout_3->addWidget(closePushButton, 4, 3, 1, 1);


        retranslateUi(ConstraintActivityPreferredRoomForm_template);

        QMetaObject::connectSlotsByName(ConstraintActivityPreferredRoomForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintActivityPreferredRoomForm_template)
    {
        ConstraintActivityPreferredRoomForm_template->setWindowTitle(QApplication::translate("ConstraintActivityPreferredRoomForm_template", "Constraints activity preferred room", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintActivityPreferredRoomForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintActivityPreferredRoomForm_template", "Current constraint", 0));
        filterActivitiesGroupBox->setTitle(QApplication::translate("ConstraintActivityPreferredRoomForm_template", "Filter activities", 0));
        teachersTextLabel->setText(QApplication::translate("ConstraintActivityPreferredRoomForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ConstraintActivityPreferredRoomForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ConstraintActivityPreferredRoomForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ConstraintActivityPreferredRoomForm_template", "Activity tag", 0));
        filterRoomsGroupBox->setTitle(QApplication::translate("ConstraintActivityPreferredRoomForm_template", "Filter rooms", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintActivityPreferredRoomForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintActivityPreferredRoomForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintActivityPreferredRoomForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintActivityPreferredRoomForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintActivityPreferredRoomForm_template: public Ui_ConstraintActivityPreferredRoomForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTACTIVITYPREFERREDROOMFORM_TEMPLATE_H
