/********************************************************************************
** Form generated from reading UI file 'constraintactivitypreferredtimeslotsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTACTIVITYPREFERREDTIMESLOTSFORM_TEMPLATE_H
#define UI_CONSTRAINTACTIVITYPREFERREDTIMESLOTSFORM_TEMPLATE_H

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

class Ui_ConstraintActivityPreferredTimeSlotsForm_template
{
public:
    QGridLayout *gridLayout_2;
    QLabel *instructionsTextLabel_2;
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

    void setupUi(QDialog *ConstraintActivityPreferredTimeSlotsForm_template)
    {
        if (ConstraintActivityPreferredTimeSlotsForm_template->objectName().isEmpty())
            ConstraintActivityPreferredTimeSlotsForm_template->setObjectName(QStringLiteral("ConstraintActivityPreferredTimeSlotsForm_template"));
        ConstraintActivityPreferredTimeSlotsForm_template->resize(544, 538);
        gridLayout_2 = new QGridLayout(ConstraintActivityPreferredTimeSlotsForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        instructionsTextLabel_2 = new QLabel(ConstraintActivityPreferredTimeSlotsForm_template);
        instructionsTextLabel_2->setObjectName(QStringLiteral("instructionsTextLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(instructionsTextLabel_2->sizePolicy().hasHeightForWidth());
        instructionsTextLabel_2->setSizePolicy(sizePolicy);
        instructionsTextLabel_2->setWordWrap(true);

        gridLayout_2->addWidget(instructionsTextLabel_2, 0, 0, 1, 4);

        constraintsTextLabel = new QLabel(ConstraintActivityPreferredTimeSlotsForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(constraintsTextLabel, 1, 0, 1, 1);

        currentConstraintTextLabel = new QLabel(ConstraintActivityPreferredTimeSlotsForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(currentConstraintTextLabel, 1, 2, 1, 1);

        constraintsListWidget = new QListWidget(ConstraintActivityPreferredTimeSlotsForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        gridLayout_2->addWidget(constraintsListWidget, 2, 0, 2, 2);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintActivityPreferredTimeSlotsForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        gridLayout_2->addWidget(currentConstraintTextEdit, 2, 2, 1, 2);

        filterGroupBox = new QGroupBox(ConstraintActivityPreferredTimeSlotsForm_template);
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


        gridLayout_2->addWidget(filterGroupBox, 3, 2, 1, 2);

        addConstraintPushButton = new QPushButton(ConstraintActivityPreferredTimeSlotsForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        gridLayout_2->addWidget(addConstraintPushButton, 4, 0, 1, 1);

        modifyConstraintPushButton = new QPushButton(ConstraintActivityPreferredTimeSlotsForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));
        modifyConstraintPushButton->setEnabled(true);

        gridLayout_2->addWidget(modifyConstraintPushButton, 4, 1, 1, 1);

        removeConstraintPushButton = new QPushButton(ConstraintActivityPreferredTimeSlotsForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        gridLayout_2->addWidget(removeConstraintPushButton, 4, 2, 1, 1);

        closePushButton = new QPushButton(ConstraintActivityPreferredTimeSlotsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout_2->addWidget(closePushButton, 4, 3, 1, 1);


        retranslateUi(ConstraintActivityPreferredTimeSlotsForm_template);

        QMetaObject::connectSlotsByName(ConstraintActivityPreferredTimeSlotsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintActivityPreferredTimeSlotsForm_template)
    {
        ConstraintActivityPreferredTimeSlotsForm_template->setWindowTitle(QApplication::translate("ConstraintActivityPreferredTimeSlotsForm_template", "Constraints activity preferred time slots", 0));
        instructionsTextLabel_2->setText(QApplication::translate("ConstraintActivityPreferredTimeSlotsForm_template", "Each hour slot of each considered activity must be allowed by this constraint (more restrictive than preferred starting times for activities with duration greater than 1)", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintActivityPreferredTimeSlotsForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintActivityPreferredTimeSlotsForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintActivityPreferredTimeSlotsForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("ConstraintActivityPreferredTimeSlotsForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ConstraintActivityPreferredTimeSlotsForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ConstraintActivityPreferredTimeSlotsForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ConstraintActivityPreferredTimeSlotsForm_template", "Activity tag", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintActivityPreferredTimeSlotsForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintActivityPreferredTimeSlotsForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintActivityPreferredTimeSlotsForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintActivityPreferredTimeSlotsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintActivityPreferredTimeSlotsForm_template: public Ui_ConstraintActivityPreferredTimeSlotsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTACTIVITYPREFERREDTIMESLOTSFORM_TEMPLATE_H
