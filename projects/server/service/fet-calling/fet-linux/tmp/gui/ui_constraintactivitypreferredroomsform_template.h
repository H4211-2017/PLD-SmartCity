/********************************************************************************
** Form generated from reading UI file 'constraintactivitypreferredroomsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTACTIVITYPREFERREDROOMSFORM_TEMPLATE_H
#define UI_CONSTRAINTACTIVITYPREFERREDROOMSFORM_TEMPLATE_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConstraintActivityPreferredRoomsForm_template
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *currentConstraintTextLabel;
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
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintActivityPreferredRoomsForm_template)
    {
        if (ConstraintActivityPreferredRoomsForm_template->objectName().isEmpty())
            ConstraintActivityPreferredRoomsForm_template->setObjectName(QStringLiteral("ConstraintActivityPreferredRoomsForm_template"));
        ConstraintActivityPreferredRoomsForm_template->resize(560, 485);
        gridLayout_2 = new QGridLayout(ConstraintActivityPreferredRoomsForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        constraintsTextLabel = new QLabel(ConstraintActivityPreferredRoomsForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintActivityPreferredRoomsForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 2, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintActivityPreferredRoomsForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintActivityPreferredRoomsForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout_2->addLayout(verticalLayout_2, 0, 2, 1, 2);

        filterActivitiesGroupBox = new QGroupBox(ConstraintActivityPreferredRoomsForm_template);
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


        gridLayout_2->addWidget(filterActivitiesGroupBox, 1, 2, 1, 2);

        addConstraintPushButton = new QPushButton(ConstraintActivityPreferredRoomsForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        gridLayout_2->addWidget(addConstraintPushButton, 2, 0, 1, 1);

        modifyConstraintPushButton = new QPushButton(ConstraintActivityPreferredRoomsForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        gridLayout_2->addWidget(modifyConstraintPushButton, 2, 1, 1, 2);

        removeConstraintPushButton = new QPushButton(ConstraintActivityPreferredRoomsForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        gridLayout_2->addWidget(removeConstraintPushButton, 2, 3, 1, 1);

        closePushButton = new QPushButton(ConstraintActivityPreferredRoomsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout_2->addWidget(closePushButton, 3, 1, 1, 2);


        retranslateUi(ConstraintActivityPreferredRoomsForm_template);

        QMetaObject::connectSlotsByName(ConstraintActivityPreferredRoomsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintActivityPreferredRoomsForm_template)
    {
        ConstraintActivityPreferredRoomsForm_template->setWindowTitle(QApplication::translate("ConstraintActivityPreferredRoomsForm_template", "Constraints activity preferred rooms", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintActivityPreferredRoomsForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintActivityPreferredRoomsForm_template", "Current constraint", 0));
        filterActivitiesGroupBox->setTitle(QApplication::translate("ConstraintActivityPreferredRoomsForm_template", "Filter activities", 0));
        teachersTextLabel->setText(QApplication::translate("ConstraintActivityPreferredRoomsForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ConstraintActivityPreferredRoomsForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ConstraintActivityPreferredRoomsForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ConstraintActivityPreferredRoomsForm_template", "Activity tag", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintActivityPreferredRoomsForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintActivityPreferredRoomsForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintActivityPreferredRoomsForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintActivityPreferredRoomsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintActivityPreferredRoomsForm_template: public Ui_ConstraintActivityPreferredRoomsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTACTIVITYPREFERREDROOMSFORM_TEMPLATE_H
