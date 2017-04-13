/********************************************************************************
** Form generated from reading UI file 'constraintmaxdaysbetweenactivitiesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTMAXDAYSBETWEENACTIVITIESFORM_TEMPLATE_H
#define UI_CONSTRAINTMAXDAYSBETWEENACTIVITIESFORM_TEMPLATE_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ConstraintMaxDaysBetweenActivitiesForm_template
{
public:
    QGridLayout *gridLayout_2;
    QLabel *constraintsTextLabel;
    QLabel *currentConstraintTextLabel;
    QListWidget *constraintsListWidget;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QLabel *teachersTextLabel;
    QComboBox *teachersComboBox;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
    QLabel *subjectsTextLabel;
    QComboBox *subjectsComboBox;
    QLabel *activityTagsTextLabel;
    QComboBox *activityTagsComboBox;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QHBoxLayout *hboxLayout1;
    QPushButton *helpPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintMaxDaysBetweenActivitiesForm_template)
    {
        if (ConstraintMaxDaysBetweenActivitiesForm_template->objectName().isEmpty())
            ConstraintMaxDaysBetweenActivitiesForm_template->setObjectName(QStringLiteral("ConstraintMaxDaysBetweenActivitiesForm_template"));
        ConstraintMaxDaysBetweenActivitiesForm_template->resize(594, 509);
        gridLayout_2 = new QGridLayout(ConstraintMaxDaysBetweenActivitiesForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintMaxDaysBetweenActivitiesForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(constraintsTextLabel, 0, 0, 1, 1);

        currentConstraintTextLabel = new QLabel(ConstraintMaxDaysBetweenActivitiesForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(currentConstraintTextLabel, 0, 1, 1, 1);

        constraintsListWidget = new QListWidget(ConstraintMaxDaysBetweenActivitiesForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        gridLayout_2->addWidget(constraintsListWidget, 1, 0, 2, 1);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintMaxDaysBetweenActivitiesForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        gridLayout_2->addWidget(currentConstraintTextEdit, 1, 1, 1, 1);

        filterGroupBox = new QGroupBox(ConstraintMaxDaysBetweenActivitiesForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersTextLabel = new QLabel(filterGroupBox);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        gridLayout->addWidget(teachersTextLabel, 0, 0, 1, 1);

        teachersComboBox = new QComboBox(filterGroupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        studentsTextLabel = new QLabel(filterGroupBox);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel, 2, 0, 1, 1);

        studentsComboBox = new QComboBox(filterGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 3, 0, 1, 1);

        subjectsTextLabel = new QLabel(filterGroupBox);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel, 4, 0, 1, 1);

        subjectsComboBox = new QComboBox(filterGroupBox);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 5, 0, 1, 1);

        activityTagsTextLabel = new QLabel(filterGroupBox);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        gridLayout->addWidget(activityTagsTextLabel, 6, 0, 1, 1);

        activityTagsComboBox = new QComboBox(filterGroupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 7, 0, 1, 1);


        gridLayout_2->addWidget(filterGroupBox, 2, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(ConstraintMaxDaysBetweenActivitiesForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintMaxDaysBetweenActivitiesForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        hboxLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintMaxDaysBetweenActivitiesForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        hboxLayout->addWidget(removeConstraintPushButton);


        gridLayout_2->addLayout(hboxLayout, 3, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        helpPushButton = new QPushButton(ConstraintMaxDaysBetweenActivitiesForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        hboxLayout1->addWidget(helpPushButton);

        closePushButton = new QPushButton(ConstraintMaxDaysBetweenActivitiesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout1->addWidget(closePushButton);


        gridLayout_2->addLayout(hboxLayout1, 4, 0, 1, 2);


        retranslateUi(ConstraintMaxDaysBetweenActivitiesForm_template);

        QMetaObject::connectSlotsByName(ConstraintMaxDaysBetweenActivitiesForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintMaxDaysBetweenActivitiesForm_template)
    {
        ConstraintMaxDaysBetweenActivitiesForm_template->setWindowTitle(QApplication::translate("ConstraintMaxDaysBetweenActivitiesForm_template", "Constraints max days between activities", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintMaxDaysBetweenActivitiesForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintMaxDaysBetweenActivitiesForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintMaxDaysBetweenActivitiesForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("ConstraintMaxDaysBetweenActivitiesForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ConstraintMaxDaysBetweenActivitiesForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ConstraintMaxDaysBetweenActivitiesForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ConstraintMaxDaysBetweenActivitiesForm_template", "Activity tag", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintMaxDaysBetweenActivitiesForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintMaxDaysBetweenActivitiesForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintMaxDaysBetweenActivitiesForm_template", "Remove", 0));
        helpPushButton->setText(QApplication::translate("ConstraintMaxDaysBetweenActivitiesForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("ConstraintMaxDaysBetweenActivitiesForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintMaxDaysBetweenActivitiesForm_template: public Ui_ConstraintMaxDaysBetweenActivitiesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTMAXDAYSBETWEENACTIVITIESFORM_TEMPLATE_H
