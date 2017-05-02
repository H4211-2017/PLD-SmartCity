/********************************************************************************
** Form generated from reading UI file 'constraintactivitiesmaxsimultaneousinselectedtimeslotsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTACTIVITIESMAXSIMULTANEOUSINSELECTEDTIMESLOTSFORM_TEMPLATE_H
#define UI_CONSTRAINTACTIVITIESMAXSIMULTANEOUSINSELECTEDTIMESLOTSFORM_TEMPLATE_H

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

class Ui_ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template
{
public:
    QGridLayout *gridLayout_2;
    QLabel *instructionsLabel;
    QVBoxLayout *verticalLayout_2;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout;
    QLabel *currentConstraintTextLabel;
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
    QPushButton *helpPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template)
    {
        if (ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template->objectName().isEmpty())
            ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template->setObjectName(QStringLiteral("ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template"));
        ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template->resize(595, 530);
        gridLayout_2 = new QGridLayout(ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        instructionsLabel = new QLabel(ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        instructionsLabel->setObjectName(QStringLiteral("instructionsLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(instructionsLabel->sizePolicy().hasHeightForWidth());
        instructionsLabel->setSizePolicy(sizePolicy);
        instructionsLabel->setWordWrap(true);

        gridLayout_2->addWidget(instructionsLabel, 0, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout_2->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout_2, 1, 0, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentConstraintTextLabel = new QLabel(ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout->addWidget(currentConstraintTextEdit);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);

        filterGroupBox = new QGroupBox(ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
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
        addConstraintPushButton = new QPushButton(ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        helpPushButton = new QPushButton(ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout->addWidget(helpPushButton);

        closePushButton = new QPushButton(ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 2);


        retranslateUi(ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);

        QMetaObject::connectSlotsByName(ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template)
    {
        ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template->setWindowTitle(QApplication::translate("ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Constraints activities max simultaneous in selected time slots", 0));
        instructionsLabel->setText(QApplication::translate("ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "IMPORTANT: Please do not overuse this constraint, because the generation may be slowed down very much. Please read Help for more details.", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Activity tag", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Remove", 0));
        helpPushButton->setText(QApplication::translate("ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template: public Ui_ConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTACTIVITIESMAXSIMULTANEOUSINSELECTEDTIMESLOTSFORM_TEMPLATE_H
