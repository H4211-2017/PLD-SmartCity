/********************************************************************************
** Form generated from reading UI file 'constraintactivitiessamestartingtimeform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTACTIVITIESSAMESTARTINGTIMEFORM_TEMPLATE_H
#define UI_CONSTRAINTACTIVITIESSAMESTARTINGTIMEFORM_TEMPLATE_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConstraintActivitiesSameStartingTimeForm_template
{
public:
    QGridLayout *gridLayout_2;
    QLabel *constraintsTextLabel_2;
    QLabel *constraintsTextLabel_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *filterGroupBox_2;
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
    QHBoxLayout *horizontalLayout_2;
    QPushButton *helpPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintActivitiesSameStartingTimeForm_template)
    {
        if (ConstraintActivitiesSameStartingTimeForm_template->objectName().isEmpty())
            ConstraintActivitiesSameStartingTimeForm_template->setObjectName(QStringLiteral("ConstraintActivitiesSameStartingTimeForm_template"));
        ConstraintActivitiesSameStartingTimeForm_template->resize(740, 643);
        gridLayout_2 = new QGridLayout(ConstraintActivitiesSameStartingTimeForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        constraintsTextLabel_2 = new QLabel(ConstraintActivitiesSameStartingTimeForm_template);
        constraintsTextLabel_2->setObjectName(QStringLiteral("constraintsTextLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(constraintsTextLabel_2->sizePolicy().hasHeightForWidth());
        constraintsTextLabel_2->setSizePolicy(sizePolicy);
        constraintsTextLabel_2->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel_2->setFrameShadow(QFrame::Plain);
        constraintsTextLabel_2->setWordWrap(true);

        gridLayout_2->addWidget(constraintsTextLabel_2, 0, 0, 1, 2);

        constraintsTextLabel_3 = new QLabel(ConstraintActivitiesSameStartingTimeForm_template);
        constraintsTextLabel_3->setObjectName(QStringLiteral("constraintsTextLabel_3"));
        sizePolicy.setHeightForWidth(constraintsTextLabel_3->sizePolicy().hasHeightForWidth());
        constraintsTextLabel_3->setSizePolicy(sizePolicy);
        constraintsTextLabel_3->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel_3->setFrameShadow(QFrame::Plain);
        constraintsTextLabel_3->setWordWrap(true);

        gridLayout_2->addWidget(constraintsTextLabel_3, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintActivitiesSameStartingTimeForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintActivitiesSameStartingTimeForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout_2->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentConstraintTextLabel = new QLabel(ConstraintActivitiesSameStartingTimeForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintActivitiesSameStartingTimeForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout->addWidget(currentConstraintTextEdit);

        filterGroupBox_2 = new QGroupBox(ConstraintActivitiesSameStartingTimeForm_template);
        filterGroupBox_2->setObjectName(QStringLiteral("filterGroupBox_2"));
        gridLayout = new QGridLayout(filterGroupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersTextLabel = new QLabel(filterGroupBox_2);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        gridLayout->addWidget(teachersTextLabel, 0, 0, 1, 1);

        teachersComboBox = new QComboBox(filterGroupBox_2);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        studentsTextLabel = new QLabel(filterGroupBox_2);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel, 2, 0, 1, 1);

        studentsComboBox = new QComboBox(filterGroupBox_2);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 3, 0, 1, 1);

        subjectsTextLabel = new QLabel(filterGroupBox_2);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel, 4, 0, 1, 1);

        subjectsComboBox = new QComboBox(filterGroupBox_2);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 5, 0, 1, 1);

        activityTagsTextLabel = new QLabel(filterGroupBox_2);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        gridLayout->addWidget(activityTagsTextLabel, 6, 0, 1, 1);

        activityTagsComboBox = new QComboBox(filterGroupBox_2);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 7, 0, 1, 1);


        verticalLayout->addWidget(filterGroupBox_2);


        gridLayout_2->addLayout(verticalLayout, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintActivitiesSameStartingTimeForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintActivitiesSameStartingTimeForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintActivitiesSameStartingTimeForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        helpPushButton = new QPushButton(ConstraintActivitiesSameStartingTimeForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout_2->addWidget(helpPushButton);

        closePushButton = new QPushButton(ConstraintActivitiesSameStartingTimeForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_2->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout_2, 4, 0, 1, 2);


        retranslateUi(ConstraintActivitiesSameStartingTimeForm_template);

        QMetaObject::connectSlotsByName(ConstraintActivitiesSameStartingTimeForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintActivitiesSameStartingTimeForm_template)
    {
        ConstraintActivitiesSameStartingTimeForm_template->setWindowTitle(QApplication::translate("ConstraintActivitiesSameStartingTimeForm_template", "Constraints activities same starting time", 0));
        constraintsTextLabel_2->setText(QApplication::translate("ConstraintActivitiesSameStartingTimeForm_template", "Please read Help/Important tips, advice 2). It is IMPORTANT to remove redundant min days constraints after adding constraints same starting time. Click the Help button!", 0));
        constraintsTextLabel_3->setText(QApplication::translate("ConstraintActivitiesSameStartingTimeForm_template", "NOTE: You might not need this constraint. Press Help!", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintActivitiesSameStartingTimeForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintActivitiesSameStartingTimeForm_template", "Current constraint", 0));
        filterGroupBox_2->setTitle(QApplication::translate("ConstraintActivitiesSameStartingTimeForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("ConstraintActivitiesSameStartingTimeForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ConstraintActivitiesSameStartingTimeForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ConstraintActivitiesSameStartingTimeForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ConstraintActivitiesSameStartingTimeForm_template", "Activity tag", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesSameStartingTimeForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesSameStartingTimeForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesSameStartingTimeForm_template", "Remove", 0));
        helpPushButton->setText(QApplication::translate("ConstraintActivitiesSameStartingTimeForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("ConstraintActivitiesSameStartingTimeForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintActivitiesSameStartingTimeForm_template: public Ui_ConstraintActivitiesSameStartingTimeForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTACTIVITIESSAMESTARTINGTIMEFORM_TEMPLATE_H
