/********************************************************************************
** Form generated from reading UI file 'constraintmingapsbetweenactivitiesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTMINGAPSBETWEENACTIVITIESFORM_TEMPLATE_H
#define UI_CONSTRAINTMINGAPSBETWEENACTIVITIESFORM_TEMPLATE_H

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

class Ui_ConstraintMinGapsBetweenActivitiesForm_template
{
public:
    QGridLayout *gridLayout_2;
    QLabel *textLabel1;
    QLabel *textLabel1_2;
    QLabel *constraintsTextLabel;
    QLabel *currentConstraintTextLabel;
    QListWidget *constraintsListWidget;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *groupBox;
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
    QPushButton *helpPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintMinGapsBetweenActivitiesForm_template)
    {
        if (ConstraintMinGapsBetweenActivitiesForm_template->objectName().isEmpty())
            ConstraintMinGapsBetweenActivitiesForm_template->setObjectName(QStringLiteral("ConstraintMinGapsBetweenActivitiesForm_template"));
        ConstraintMinGapsBetweenActivitiesForm_template->resize(580, 560);
        gridLayout_2 = new QGridLayout(ConstraintMinGapsBetweenActivitiesForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textLabel1 = new QLabel(ConstraintMinGapsBetweenActivitiesForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);
        textLabel1->setWordWrap(true);

        gridLayout_2->addWidget(textLabel1, 0, 0, 1, 2);

        textLabel1_2 = new QLabel(ConstraintMinGapsBetweenActivitiesForm_template);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));
        sizePolicy.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
        textLabel1_2->setSizePolicy(sizePolicy);
        textLabel1_2->setWordWrap(true);

        gridLayout_2->addWidget(textLabel1_2, 1, 0, 1, 2);

        constraintsTextLabel = new QLabel(ConstraintMinGapsBetweenActivitiesForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(constraintsTextLabel, 2, 0, 1, 1);

        currentConstraintTextLabel = new QLabel(ConstraintMinGapsBetweenActivitiesForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(currentConstraintTextLabel, 2, 1, 1, 1);

        constraintsListWidget = new QListWidget(ConstraintMinGapsBetweenActivitiesForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        gridLayout_2->addWidget(constraintsListWidget, 3, 0, 2, 1);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintMinGapsBetweenActivitiesForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        gridLayout_2->addWidget(currentConstraintTextEdit, 3, 1, 1, 1);

        groupBox = new QGroupBox(ConstraintMinGapsBetweenActivitiesForm_template);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersTextLabel = new QLabel(groupBox);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        gridLayout->addWidget(teachersTextLabel, 0, 0, 1, 1);

        teachersComboBox = new QComboBox(groupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        studentsTextLabel = new QLabel(groupBox);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel, 2, 0, 1, 1);

        studentsComboBox = new QComboBox(groupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 3, 0, 1, 1);

        subjectsTextLabel = new QLabel(groupBox);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel, 4, 0, 1, 1);

        subjectsComboBox = new QComboBox(groupBox);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 5, 0, 1, 1);

        activityTagsTextLabel = new QLabel(groupBox);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        gridLayout->addWidget(activityTagsTextLabel, 6, 0, 1, 1);

        activityTagsComboBox = new QComboBox(groupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 7, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 4, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(ConstraintMinGapsBetweenActivitiesForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintMinGapsBetweenActivitiesForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        hboxLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintMinGapsBetweenActivitiesForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        hboxLayout->addWidget(removeConstraintPushButton);

        helpPushButton = new QPushButton(ConstraintMinGapsBetweenActivitiesForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        hboxLayout->addWidget(helpPushButton);

        closePushButton = new QPushButton(ConstraintMinGapsBetweenActivitiesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(hboxLayout, 5, 0, 1, 2);


        retranslateUi(ConstraintMinGapsBetweenActivitiesForm_template);

        QMetaObject::connectSlotsByName(ConstraintMinGapsBetweenActivitiesForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintMinGapsBetweenActivitiesForm_template)
    {
        ConstraintMinGapsBetweenActivitiesForm_template->setWindowTitle(QApplication::translate("ConstraintMinGapsBetweenActivitiesForm_template", "Constraints min gaps between activities", 0));
        textLabel1->setText(QApplication::translate("ConstraintMinGapsBetweenActivitiesForm_template", "This constraint ensures, for a set of activities: if any pair of activities is in the same day, they must be separated by at least min gaps (hours).", 0));
        textLabel1_2->setText(QApplication::translate("ConstraintMinGapsBetweenActivitiesForm_template", "Note: please click Help for important advice", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintMinGapsBetweenActivitiesForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintMinGapsBetweenActivitiesForm_template", "Current constraint", 0));
        groupBox->setTitle(QApplication::translate("ConstraintMinGapsBetweenActivitiesForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("ConstraintMinGapsBetweenActivitiesForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ConstraintMinGapsBetweenActivitiesForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ConstraintMinGapsBetweenActivitiesForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ConstraintMinGapsBetweenActivitiesForm_template", "Activity tag", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintMinGapsBetweenActivitiesForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintMinGapsBetweenActivitiesForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintMinGapsBetweenActivitiesForm_template", "Remove", 0));
        helpPushButton->setText(QApplication::translate("ConstraintMinGapsBetweenActivitiesForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("ConstraintMinGapsBetweenActivitiesForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintMinGapsBetweenActivitiesForm_template: public Ui_ConstraintMinGapsBetweenActivitiesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTMINGAPSBETWEENACTIVITIESFORM_TEMPLATE_H
