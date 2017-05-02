/********************************************************************************
** Form generated from reading UI file 'constraintactivitiesnotoverlappingform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTACTIVITIESNOTOVERLAPPINGFORM_TEMPLATE_H
#define UI_CONSTRAINTACTIVITIESNOTOVERLAPPINGFORM_TEMPLATE_H

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

class Ui_ConstraintActivitiesNotOverlappingForm_template
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
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintActivitiesNotOverlappingForm_template)
    {
        if (ConstraintActivitiesNotOverlappingForm_template->objectName().isEmpty())
            ConstraintActivitiesNotOverlappingForm_template->setObjectName(QStringLiteral("ConstraintActivitiesNotOverlappingForm_template"));
        ConstraintActivitiesNotOverlappingForm_template->resize(548, 503);
        gridLayout_2 = new QGridLayout(ConstraintActivitiesNotOverlappingForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintActivitiesNotOverlappingForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(constraintsTextLabel, 0, 0, 1, 1);

        currentConstraintTextLabel = new QLabel(ConstraintActivitiesNotOverlappingForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(currentConstraintTextLabel, 0, 1, 1, 1);

        constraintsListWidget = new QListWidget(ConstraintActivitiesNotOverlappingForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        gridLayout_2->addWidget(constraintsListWidget, 1, 0, 2, 1);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintActivitiesNotOverlappingForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        gridLayout_2->addWidget(currentConstraintTextEdit, 1, 1, 1, 1);

        filterGroupBox = new QGroupBox(ConstraintActivitiesNotOverlappingForm_template);
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

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintActivitiesNotOverlappingForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintActivitiesNotOverlappingForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintActivitiesNotOverlappingForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintActivitiesNotOverlappingForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 2);


        retranslateUi(ConstraintActivitiesNotOverlappingForm_template);

        QMetaObject::connectSlotsByName(ConstraintActivitiesNotOverlappingForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintActivitiesNotOverlappingForm_template)
    {
        ConstraintActivitiesNotOverlappingForm_template->setWindowTitle(QApplication::translate("ConstraintActivitiesNotOverlappingForm_template", "Constraints activities not overlapping", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintActivitiesNotOverlappingForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintActivitiesNotOverlappingForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintActivitiesNotOverlappingForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("ConstraintActivitiesNotOverlappingForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ConstraintActivitiesNotOverlappingForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ConstraintActivitiesNotOverlappingForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ConstraintActivitiesNotOverlappingForm_template", "Activity tag", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesNotOverlappingForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesNotOverlappingForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesNotOverlappingForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintActivitiesNotOverlappingForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintActivitiesNotOverlappingForm_template: public Ui_ConstraintActivitiesNotOverlappingForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTACTIVITIESNOTOVERLAPPINGFORM_TEMPLATE_H
