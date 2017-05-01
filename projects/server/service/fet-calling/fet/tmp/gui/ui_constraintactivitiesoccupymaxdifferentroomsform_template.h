/********************************************************************************
** Form generated from reading UI file 'constraintactivitiesoccupymaxdifferentroomsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTACTIVITIESOCCUPYMAXDIFFERENTROOMSFORM_TEMPLATE_H
#define UI_CONSTRAINTACTIVITIESOCCUPYMAXDIFFERENTROOMSFORM_TEMPLATE_H

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

class Ui_ConstraintActivitiesOccupyMaxDifferentRoomsForm_template
{
public:
    QGridLayout *gridLayout_2;
    QLabel *instructionsLabel;
    QVBoxLayout *verticalLayout;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout_2;
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

    void setupUi(QDialog *ConstraintActivitiesOccupyMaxDifferentRoomsForm_template)
    {
        if (ConstraintActivitiesOccupyMaxDifferentRoomsForm_template->objectName().isEmpty())
            ConstraintActivitiesOccupyMaxDifferentRoomsForm_template->setObjectName(QStringLiteral("ConstraintActivitiesOccupyMaxDifferentRoomsForm_template"));
        ConstraintActivitiesOccupyMaxDifferentRoomsForm_template->resize(610, 538);
        gridLayout_2 = new QGridLayout(ConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        instructionsLabel = new QLabel(ConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        instructionsLabel->setObjectName(QStringLiteral("instructionsLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(instructionsLabel->sizePolicy().hasHeightForWidth());
        instructionsLabel->setSizePolicy(sizePolicy);
        instructionsLabel->setWordWrap(true);

        gridLayout_2->addWidget(instructionsLabel, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        constraintsTextLabel = new QLabel(ConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 2, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout_2->addLayout(verticalLayout_2, 1, 1, 1, 1);

        filterGroupBox = new QGroupBox(ConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
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
        addConstraintPushButton = new QPushButton(ConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        helpPushButton = new QPushButton(ConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout->addWidget(helpPushButton);

        closePushButton = new QPushButton(ConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 2);


        retranslateUi(ConstraintActivitiesOccupyMaxDifferentRoomsForm_template);

        QMetaObject::connectSlotsByName(ConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintActivitiesOccupyMaxDifferentRoomsForm_template)
    {
        ConstraintActivitiesOccupyMaxDifferentRoomsForm_template->setWindowTitle(QApplication::translate("ConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Constraints activities occupy max different rooms", 0));
        instructionsLabel->setText(QApplication::translate("ConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "IMPORTANT: Please be careful with this constraint, because the generation may become too slow or impossible if you overuse it. Press Help for more details.", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("ConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Activity tag", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Remove", 0));
        helpPushButton->setText(QApplication::translate("ConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("ConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintActivitiesOccupyMaxDifferentRoomsForm_template: public Ui_ConstraintActivitiesOccupyMaxDifferentRoomsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTACTIVITIESOCCUPYMAXDIFFERENTROOMSFORM_TEMPLATE_H
