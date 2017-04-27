/********************************************************************************
** Form generated from reading UI file 'constraintactivityendsstudentsdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTACTIVITYENDSSTUDENTSDAYFORM_TEMPLATE_H
#define UI_CONSTRAINTACTIVITYENDSSTUDENTSDAYFORM_TEMPLATE_H

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

class Ui_ConstraintActivityEndsStudentsDayForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *constraintsTextLabel;
    QLabel *currentConstraintTextLabel;
    QListWidget *constraintsListWidget;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *filterGroupBox;
    QVBoxLayout *verticalLayout;
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

    void setupUi(QDialog *ConstraintActivityEndsStudentsDayForm_template)
    {
        if (ConstraintActivityEndsStudentsDayForm_template->objectName().isEmpty())
            ConstraintActivityEndsStudentsDayForm_template->setObjectName(QStringLiteral("ConstraintActivityEndsStudentsDayForm_template"));
        ConstraintActivityEndsStudentsDayForm_template->resize(536, 455);
        gridLayout = new QGridLayout(ConstraintActivityEndsStudentsDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        constraintsTextLabel = new QLabel(ConstraintActivityEndsStudentsDayForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        gridLayout->addWidget(constraintsTextLabel, 0, 0, 1, 1);

        currentConstraintTextLabel = new QLabel(ConstraintActivityEndsStudentsDayForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        gridLayout->addWidget(currentConstraintTextLabel, 0, 2, 1, 2);

        constraintsListWidget = new QListWidget(ConstraintActivityEndsStudentsDayForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        gridLayout->addWidget(constraintsListWidget, 1, 0, 2, 2);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintActivityEndsStudentsDayForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        gridLayout->addWidget(currentConstraintTextEdit, 1, 2, 1, 2);

        filterGroupBox = new QGroupBox(ConstraintActivityEndsStudentsDayForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        verticalLayout = new QVBoxLayout(filterGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        teachersTextLabel = new QLabel(filterGroupBox);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        verticalLayout->addWidget(teachersTextLabel);

        teachersComboBox = new QComboBox(filterGroupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        verticalLayout->addWidget(teachersComboBox);

        studentsTextLabel = new QLabel(filterGroupBox);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(studentsTextLabel);

        studentsComboBox = new QComboBox(filterGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        verticalLayout->addWidget(studentsComboBox);

        subjectsTextLabel = new QLabel(filterGroupBox);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(subjectsTextLabel);

        subjectsComboBox = new QComboBox(filterGroupBox);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        verticalLayout->addWidget(subjectsComboBox);

        activityTagsTextLabel = new QLabel(filterGroupBox);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(activityTagsTextLabel);

        activityTagsComboBox = new QComboBox(filterGroupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        verticalLayout->addWidget(activityTagsComboBox);


        gridLayout->addWidget(filterGroupBox, 2, 2, 1, 2);

        addConstraintPushButton = new QPushButton(ConstraintActivityEndsStudentsDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        gridLayout->addWidget(addConstraintPushButton, 3, 0, 1, 1);

        modifyConstraintPushButton = new QPushButton(ConstraintActivityEndsStudentsDayForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        gridLayout->addWidget(modifyConstraintPushButton, 3, 1, 1, 1);

        removeConstraintPushButton = new QPushButton(ConstraintActivityEndsStudentsDayForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        gridLayout->addWidget(removeConstraintPushButton, 3, 2, 1, 1);

        closePushButton = new QPushButton(ConstraintActivityEndsStudentsDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout->addWidget(closePushButton, 3, 3, 1, 1);


        retranslateUi(ConstraintActivityEndsStudentsDayForm_template);

        QMetaObject::connectSlotsByName(ConstraintActivityEndsStudentsDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintActivityEndsStudentsDayForm_template)
    {
        ConstraintActivityEndsStudentsDayForm_template->setWindowTitle(QApplication::translate("ConstraintActivityEndsStudentsDayForm_template", "Constraints activity ends students day", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintActivityEndsStudentsDayForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintActivityEndsStudentsDayForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintActivityEndsStudentsDayForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("ConstraintActivityEndsStudentsDayForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ConstraintActivityEndsStudentsDayForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ConstraintActivityEndsStudentsDayForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ConstraintActivityEndsStudentsDayForm_template", "Activity tag", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintActivityEndsStudentsDayForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintActivityEndsStudentsDayForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintActivityEndsStudentsDayForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintActivityEndsStudentsDayForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintActivityEndsStudentsDayForm_template: public Ui_ConstraintActivityEndsStudentsDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTACTIVITYENDSSTUDENTSDAYFORM_TEMPLATE_H
