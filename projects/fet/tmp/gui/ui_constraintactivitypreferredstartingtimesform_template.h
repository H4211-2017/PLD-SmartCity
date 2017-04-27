/********************************************************************************
** Form generated from reading UI file 'constraintactivitypreferredstartingtimesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTACTIVITYPREFERREDSTARTINGTIMESFORM_TEMPLATE_H
#define UI_CONSTRAINTACTIVITYPREFERREDSTARTINGTIMESFORM_TEMPLATE_H

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

class Ui_ConstraintActivityPreferredStartingTimesForm_template
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
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintActivityPreferredStartingTimesForm_template)
    {
        if (ConstraintActivityPreferredStartingTimesForm_template->objectName().isEmpty())
            ConstraintActivityPreferredStartingTimesForm_template->setObjectName(QStringLiteral("ConstraintActivityPreferredStartingTimesForm_template"));
        ConstraintActivityPreferredStartingTimesForm_template->resize(543, 486);
        gridLayout_2 = new QGridLayout(ConstraintActivityPreferredStartingTimesForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintActivityPreferredStartingTimesForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(constraintsTextLabel, 0, 0, 1, 1);

        currentConstraintTextLabel = new QLabel(ConstraintActivityPreferredStartingTimesForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(currentConstraintTextLabel, 0, 2, 1, 1);

        constraintsListWidget = new QListWidget(ConstraintActivityPreferredStartingTimesForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        gridLayout_2->addWidget(constraintsListWidget, 1, 0, 2, 2);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintActivityPreferredStartingTimesForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        gridLayout_2->addWidget(currentConstraintTextEdit, 1, 2, 1, 2);

        filterGroupBox = new QGroupBox(ConstraintActivityPreferredStartingTimesForm_template);
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


        gridLayout_2->addWidget(filterGroupBox, 2, 2, 1, 2);

        addConstraintPushButton = new QPushButton(ConstraintActivityPreferredStartingTimesForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        gridLayout_2->addWidget(addConstraintPushButton, 3, 0, 1, 1);

        modifyConstraintPushButton = new QPushButton(ConstraintActivityPreferredStartingTimesForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));
        modifyConstraintPushButton->setEnabled(true);

        gridLayout_2->addWidget(modifyConstraintPushButton, 3, 1, 1, 1);

        removeConstraintPushButton = new QPushButton(ConstraintActivityPreferredStartingTimesForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        gridLayout_2->addWidget(removeConstraintPushButton, 3, 2, 1, 1);

        closePushButton = new QPushButton(ConstraintActivityPreferredStartingTimesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout_2->addWidget(closePushButton, 3, 3, 1, 1);


        retranslateUi(ConstraintActivityPreferredStartingTimesForm_template);

        QMetaObject::connectSlotsByName(ConstraintActivityPreferredStartingTimesForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintActivityPreferredStartingTimesForm_template)
    {
        ConstraintActivityPreferredStartingTimesForm_template->setWindowTitle(QApplication::translate("ConstraintActivityPreferredStartingTimesForm_template", "Constraints activity preferred starting times", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintActivityPreferredStartingTimesForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintActivityPreferredStartingTimesForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintActivityPreferredStartingTimesForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("ConstraintActivityPreferredStartingTimesForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ConstraintActivityPreferredStartingTimesForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ConstraintActivityPreferredStartingTimesForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ConstraintActivityPreferredStartingTimesForm_template", "Activity tag", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintActivityPreferredStartingTimesForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintActivityPreferredStartingTimesForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintActivityPreferredStartingTimesForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintActivityPreferredStartingTimesForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintActivityPreferredStartingTimesForm_template: public Ui_ConstraintActivityPreferredStartingTimesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTACTIVITYPREFERREDSTARTINGTIMESFORM_TEMPLATE_H
