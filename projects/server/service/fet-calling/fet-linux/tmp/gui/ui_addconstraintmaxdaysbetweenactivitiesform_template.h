/********************************************************************************
** Form generated from reading UI file 'addconstraintmaxdaysbetweenactivitiesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTMAXDAYSBETWEENACTIVITIESFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTMAXDAYSBETWEENACTIVITIESFORM_TEMPLATE_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintMaxDaysBetweenActivitiesForm_template
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QLabel *teachersTextLabel;
    QLabel *studentsTextLabel;
    QLabel *subjectsTextLabel;
    QLabel *activityTagsTextLabel;
    QComboBox *teachersComboBox;
    QComboBox *studentsComboBox;
    QComboBox *subjectsComboBox;
    QComboBox *activityTagsComboBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *activitiesTextLabel;
    QListWidget *activitiesListWidget;
    QPushButton *addAllActivitiesPushButton;
    QVBoxLayout *verticalLayout;
    QLabel *selectedActivitiesTextLabel;
    QListWidget *selectedActivitiesListWidget;
    QPushButton *clearPushButton;
    QGridLayout *gridLayout_2;
    QLabel *maxDaysTextLabel;
    QSpinBox *maxDaysSpinBox;
    QVBoxLayout *vboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintMaxDaysBetweenActivitiesForm_template)
    {
        if (AddConstraintMaxDaysBetweenActivitiesForm_template->objectName().isEmpty())
            AddConstraintMaxDaysBetweenActivitiesForm_template->setObjectName(QStringLiteral("AddConstraintMaxDaysBetweenActivitiesForm_template"));
        AddConstraintMaxDaysBetweenActivitiesForm_template->resize(614, 561);
        gridLayout_3 = new QGridLayout(AddConstraintMaxDaysBetweenActivitiesForm_template);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        filterGroupBox = new QGroupBox(AddConstraintMaxDaysBetweenActivitiesForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersTextLabel = new QLabel(filterGroupBox);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        gridLayout->addWidget(teachersTextLabel, 0, 0, 1, 1);

        studentsTextLabel = new QLabel(filterGroupBox);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel, 0, 1, 1, 1);

        subjectsTextLabel = new QLabel(filterGroupBox);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel, 0, 2, 1, 1);

        activityTagsTextLabel = new QLabel(filterGroupBox);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        gridLayout->addWidget(activityTagsTextLabel, 0, 3, 1, 1);

        teachersComboBox = new QComboBox(filterGroupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        studentsComboBox = new QComboBox(filterGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 1, 1, 1, 1);

        subjectsComboBox = new QComboBox(filterGroupBox);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 1, 2, 1, 1);

        activityTagsComboBox = new QComboBox(filterGroupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 1, 3, 1, 1);


        gridLayout_3->addWidget(filterGroupBox, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        activitiesTextLabel = new QLabel(AddConstraintMaxDaysBetweenActivitiesForm_template);
        activitiesTextLabel->setObjectName(QStringLiteral("activitiesTextLabel"));
        activitiesTextLabel->setFrameShape(QFrame::NoFrame);
        activitiesTextLabel->setFrameShadow(QFrame::Plain);
        activitiesTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(activitiesTextLabel);

        activitiesListWidget = new QListWidget(AddConstraintMaxDaysBetweenActivitiesForm_template);
        activitiesListWidget->setObjectName(QStringLiteral("activitiesListWidget"));

        verticalLayout_2->addWidget(activitiesListWidget);

        addAllActivitiesPushButton = new QPushButton(AddConstraintMaxDaysBetweenActivitiesForm_template);
        addAllActivitiesPushButton->setObjectName(QStringLiteral("addAllActivitiesPushButton"));

        verticalLayout_2->addWidget(addAllActivitiesPushButton);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectedActivitiesTextLabel = new QLabel(AddConstraintMaxDaysBetweenActivitiesForm_template);
        selectedActivitiesTextLabel->setObjectName(QStringLiteral("selectedActivitiesTextLabel"));
        selectedActivitiesTextLabel->setFrameShape(QFrame::NoFrame);
        selectedActivitiesTextLabel->setFrameShadow(QFrame::Plain);
        selectedActivitiesTextLabel->setWordWrap(false);

        verticalLayout->addWidget(selectedActivitiesTextLabel);

        selectedActivitiesListWidget = new QListWidget(AddConstraintMaxDaysBetweenActivitiesForm_template);
        selectedActivitiesListWidget->setObjectName(QStringLiteral("selectedActivitiesListWidget"));

        verticalLayout->addWidget(selectedActivitiesListWidget);

        clearPushButton = new QPushButton(AddConstraintMaxDaysBetweenActivitiesForm_template);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        maxDaysTextLabel = new QLabel(AddConstraintMaxDaysBetweenActivitiesForm_template);
        maxDaysTextLabel->setObjectName(QStringLiteral("maxDaysTextLabel"));
        maxDaysTextLabel->setFrameShape(QFrame::NoFrame);
        maxDaysTextLabel->setFrameShadow(QFrame::Plain);
        maxDaysTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(maxDaysTextLabel, 0, 0, 1, 1);

        maxDaysSpinBox = new QSpinBox(AddConstraintMaxDaysBetweenActivitiesForm_template);
        maxDaysSpinBox->setObjectName(QStringLiteral("maxDaysSpinBox"));

        gridLayout_2->addWidget(maxDaysSpinBox, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        weightTextLabel = new QLabel(AddConstraintMaxDaysBetweenActivitiesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        vboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintMaxDaysBetweenActivitiesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        vboxLayout->addWidget(weightLineEdit);


        gridLayout_3->addLayout(vboxLayout, 3, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintMaxDaysBetweenActivitiesForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintMaxDaysBetweenActivitiesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout_3->addLayout(hboxLayout, 4, 0, 1, 1);


        retranslateUi(AddConstraintMaxDaysBetweenActivitiesForm_template);

        QMetaObject::connectSlotsByName(AddConstraintMaxDaysBetweenActivitiesForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintMaxDaysBetweenActivitiesForm_template)
    {
        AddConstraintMaxDaysBetweenActivitiesForm_template->setWindowTitle(QApplication::translate("AddConstraintMaxDaysBetweenActivitiesForm_template", "Add max days between activities", 0));
        filterGroupBox->setTitle(QApplication::translate("AddConstraintMaxDaysBetweenActivitiesForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("AddConstraintMaxDaysBetweenActivitiesForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintMaxDaysBetweenActivitiesForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("AddConstraintMaxDaysBetweenActivitiesForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("AddConstraintMaxDaysBetweenActivitiesForm_template", "Activity tag", 0));
        activitiesTextLabel->setText(QApplication::translate("AddConstraintMaxDaysBetweenActivitiesForm_template", "Activities", 0));
        addAllActivitiesPushButton->setText(QApplication::translate("AddConstraintMaxDaysBetweenActivitiesForm_template", "All", "Text on a button. It refers to adding all activities from the list above this button into the current constraint"));
        selectedActivitiesTextLabel->setText(QApplication::translate("AddConstraintMaxDaysBetweenActivitiesForm_template", "Selected", "It refers to a list of selected activities"));
        clearPushButton->setText(QApplication::translate("AddConstraintMaxDaysBetweenActivitiesForm_template", "Clear", 0));
        maxDaysTextLabel->setText(QApplication::translate("AddConstraintMaxDaysBetweenActivitiesForm_template", "Max days", "It refers to the maximum number of days between activities"));
        weightTextLabel->setText(QApplication::translate("AddConstraintMaxDaysBetweenActivitiesForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintMaxDaysBetweenActivitiesForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintMaxDaysBetweenActivitiesForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintMaxDaysBetweenActivitiesForm_template: public Ui_AddConstraintMaxDaysBetweenActivitiesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTMAXDAYSBETWEENACTIVITIESFORM_TEMPLATE_H
