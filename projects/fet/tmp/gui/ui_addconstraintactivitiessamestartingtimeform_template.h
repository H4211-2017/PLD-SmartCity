/********************************************************************************
** Form generated from reading UI file 'addconstraintactivitiessamestartingtimeform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTACTIVITIESSAMESTARTINGTIMEFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTACTIVITIESSAMESTARTINGTIMEFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintActivitiesSameStartingTimeForm_template
{
public:
    QGridLayout *gridLayout_2;
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
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *activitiesTextLabel;
    QListWidget *activitiesListWidget;
    QPushButton *addAllActivitiesPushButton;
    QVBoxLayout *verticalLayout;
    QLabel *simultaneousActivitiesTextLabel;
    QListWidget *simultaneousActivitiesListWidget;
    QPushButton *clearPushButton;
    QCheckBox *blockCheckBox;
    QVBoxLayout *vboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;
    QPushButton *helpPushButton;

    void setupUi(QDialog *AddConstraintActivitiesSameStartingTimeForm_template)
    {
        if (AddConstraintActivitiesSameStartingTimeForm_template->objectName().isEmpty())
            AddConstraintActivitiesSameStartingTimeForm_template->setObjectName(QStringLiteral("AddConstraintActivitiesSameStartingTimeForm_template"));
        AddConstraintActivitiesSameStartingTimeForm_template->resize(648, 552);
        gridLayout_2 = new QGridLayout(AddConstraintActivitiesSameStartingTimeForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        filterGroupBox = new QGroupBox(AddConstraintActivitiesSameStartingTimeForm_template);
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


        gridLayout_2->addWidget(filterGroupBox, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        activitiesTextLabel = new QLabel(AddConstraintActivitiesSameStartingTimeForm_template);
        activitiesTextLabel->setObjectName(QStringLiteral("activitiesTextLabel"));
        activitiesTextLabel->setFrameShape(QFrame::NoFrame);
        activitiesTextLabel->setFrameShadow(QFrame::Plain);
        activitiesTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(activitiesTextLabel);

        activitiesListWidget = new QListWidget(AddConstraintActivitiesSameStartingTimeForm_template);
        activitiesListWidget->setObjectName(QStringLiteral("activitiesListWidget"));

        verticalLayout_2->addWidget(activitiesListWidget);

        addAllActivitiesPushButton = new QPushButton(AddConstraintActivitiesSameStartingTimeForm_template);
        addAllActivitiesPushButton->setObjectName(QStringLiteral("addAllActivitiesPushButton"));

        verticalLayout_2->addWidget(addAllActivitiesPushButton);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        simultaneousActivitiesTextLabel = new QLabel(AddConstraintActivitiesSameStartingTimeForm_template);
        simultaneousActivitiesTextLabel->setObjectName(QStringLiteral("simultaneousActivitiesTextLabel"));
        simultaneousActivitiesTextLabel->setFrameShape(QFrame::NoFrame);
        simultaneousActivitiesTextLabel->setFrameShadow(QFrame::Plain);
        simultaneousActivitiesTextLabel->setWordWrap(false);

        verticalLayout->addWidget(simultaneousActivitiesTextLabel);

        simultaneousActivitiesListWidget = new QListWidget(AddConstraintActivitiesSameStartingTimeForm_template);
        simultaneousActivitiesListWidget->setObjectName(QStringLiteral("simultaneousActivitiesListWidget"));

        verticalLayout->addWidget(simultaneousActivitiesListWidget);

        clearPushButton = new QPushButton(AddConstraintActivitiesSameStartingTimeForm_template);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        blockCheckBox = new QCheckBox(AddConstraintActivitiesSameStartingTimeForm_template);
        blockCheckBox->setObjectName(QStringLiteral("blockCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(blockCheckBox->sizePolicy().hasHeightForWidth());
        blockCheckBox->setSizePolicy(sizePolicy);
        blockCheckBox->setChecked(false);

        gridLayout_2->addWidget(blockCheckBox, 2, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        weightTextLabel = new QLabel(AddConstraintActivitiesSameStartingTimeForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        vboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintActivitiesSameStartingTimeForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        vboxLayout->addWidget(weightLineEdit);


        gridLayout_2->addLayout(vboxLayout, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintActivitiesSameStartingTimeForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintActivitiesSameStartingTimeForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);

        helpPushButton = new QPushButton(AddConstraintActivitiesSameStartingTimeForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout->addWidget(helpPushButton);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 1, 1);


        retranslateUi(AddConstraintActivitiesSameStartingTimeForm_template);

        QMetaObject::connectSlotsByName(AddConstraintActivitiesSameStartingTimeForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintActivitiesSameStartingTimeForm_template)
    {
        AddConstraintActivitiesSameStartingTimeForm_template->setWindowTitle(QApplication::translate("AddConstraintActivitiesSameStartingTimeForm_template", "Add activities same starting time", 0));
        filterGroupBox->setTitle(QApplication::translate("AddConstraintActivitiesSameStartingTimeForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("AddConstraintActivitiesSameStartingTimeForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintActivitiesSameStartingTimeForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("AddConstraintActivitiesSameStartingTimeForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("AddConstraintActivitiesSameStartingTimeForm_template", "Activity tag", 0));
        activitiesTextLabel->setText(QApplication::translate("AddConstraintActivitiesSameStartingTimeForm_template", "Activities", 0));
        addAllActivitiesPushButton->setText(QApplication::translate("AddConstraintActivitiesSameStartingTimeForm_template", "All", "Text on a button. It refers to adding all activities from the list above this button into the current constraint"));
        simultaneousActivitiesTextLabel->setText(QApplication::translate("AddConstraintActivitiesSameStartingTimeForm_template", "Selected", "It refers to a list of selected activities"));
        clearPushButton->setText(QApplication::translate("AddConstraintActivitiesSameStartingTimeForm_template", "Clear", 0));
        blockCheckBox->setText(QApplication::translate("AddConstraintActivitiesSameStartingTimeForm_template", "Add multiple constraints", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintActivitiesSameStartingTimeForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintActivitiesSameStartingTimeForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintActivitiesSameStartingTimeForm_template", "Close", 0));
        helpPushButton->setText(QApplication::translate("AddConstraintActivitiesSameStartingTimeForm_template", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintActivitiesSameStartingTimeForm_template: public Ui_AddConstraintActivitiesSameStartingTimeForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTACTIVITIESSAMESTARTINGTIMEFORM_TEMPLATE_H
