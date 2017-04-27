/********************************************************************************
** Form generated from reading UI file 'addgroupactivitiesininitialorderitemform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGROUPACTIVITIESININITIALORDERITEMFORM_TEMPLATE_H
#define UI_ADDGROUPACTIVITIESININITIALORDERITEMFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddGroupActivitiesInInitialOrderItemForm_template
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
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *activitiesTextLabel;
    QListWidget *activitiesListWidget;
    QPushButton *addAllActivitiesPushButton;
    QVBoxLayout *verticalLayout;
    QLabel *selectedActivitiesTextLabel;
    QListWidget *selectedActivitiesListWidget;
    QPushButton *clearPushButton;
    QFrame *line;
    QHBoxLayout *hboxLayout;
    QPushButton *addItemPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddGroupActivitiesInInitialOrderItemForm_template)
    {
        if (AddGroupActivitiesInInitialOrderItemForm_template->objectName().isEmpty())
            AddGroupActivitiesInInitialOrderItemForm_template->setObjectName(QStringLiteral("AddGroupActivitiesInInitialOrderItemForm_template"));
        AddGroupActivitiesInInitialOrderItemForm_template->resize(534, 515);
        gridLayout_2 = new QGridLayout(AddGroupActivitiesInInitialOrderItemForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        filterGroupBox = new QGroupBox(AddGroupActivitiesInInitialOrderItemForm_template);
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

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        activitiesTextLabel = new QLabel(AddGroupActivitiesInInitialOrderItemForm_template);
        activitiesTextLabel->setObjectName(QStringLiteral("activitiesTextLabel"));
        activitiesTextLabel->setFrameShape(QFrame::NoFrame);
        activitiesTextLabel->setFrameShadow(QFrame::Plain);
        activitiesTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(activitiesTextLabel);

        activitiesListWidget = new QListWidget(AddGroupActivitiesInInitialOrderItemForm_template);
        activitiesListWidget->setObjectName(QStringLiteral("activitiesListWidget"));

        verticalLayout_2->addWidget(activitiesListWidget);

        addAllActivitiesPushButton = new QPushButton(AddGroupActivitiesInInitialOrderItemForm_template);
        addAllActivitiesPushButton->setObjectName(QStringLiteral("addAllActivitiesPushButton"));

        verticalLayout_2->addWidget(addAllActivitiesPushButton);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectedActivitiesTextLabel = new QLabel(AddGroupActivitiesInInitialOrderItemForm_template);
        selectedActivitiesTextLabel->setObjectName(QStringLiteral("selectedActivitiesTextLabel"));
        selectedActivitiesTextLabel->setFrameShape(QFrame::NoFrame);
        selectedActivitiesTextLabel->setFrameShadow(QFrame::Plain);
        selectedActivitiesTextLabel->setWordWrap(false);

        verticalLayout->addWidget(selectedActivitiesTextLabel);

        selectedActivitiesListWidget = new QListWidget(AddGroupActivitiesInInitialOrderItemForm_template);
        selectedActivitiesListWidget->setObjectName(QStringLiteral("selectedActivitiesListWidget"));

        verticalLayout->addWidget(selectedActivitiesListWidget);

        clearPushButton = new QPushButton(AddGroupActivitiesInInitialOrderItemForm_template);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        horizontalLayout_4->addLayout(verticalLayout);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        line = new QFrame(AddGroupActivitiesInInitialOrderItemForm_template);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addItemPushButton = new QPushButton(AddGroupActivitiesInInitialOrderItemForm_template);
        addItemPushButton->setObjectName(QStringLiteral("addItemPushButton"));

        hboxLayout->addWidget(addItemPushButton);

        closePushButton = new QPushButton(AddGroupActivitiesInInitialOrderItemForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(hboxLayout, 3, 0, 1, 1);


        retranslateUi(AddGroupActivitiesInInitialOrderItemForm_template);

        QMetaObject::connectSlotsByName(AddGroupActivitiesInInitialOrderItemForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddGroupActivitiesInInitialOrderItemForm_template)
    {
        AddGroupActivitiesInInitialOrderItemForm_template->setWindowTitle(QApplication::translate("AddGroupActivitiesInInitialOrderItemForm_template", "Add group activities in initial order item", 0));
        filterGroupBox->setTitle(QApplication::translate("AddGroupActivitiesInInitialOrderItemForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("AddGroupActivitiesInInitialOrderItemForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("AddGroupActivitiesInInitialOrderItemForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("AddGroupActivitiesInInitialOrderItemForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("AddGroupActivitiesInInitialOrderItemForm_template", "Activity tag", 0));
        activitiesTextLabel->setText(QApplication::translate("AddGroupActivitiesInInitialOrderItemForm_template", "Activities", 0));
        addAllActivitiesPushButton->setText(QApplication::translate("AddGroupActivitiesInInitialOrderItemForm_template", "All", "Text on a button. It refers to adding all activities from the list above this button into the current constraint"));
        selectedActivitiesTextLabel->setText(QApplication::translate("AddGroupActivitiesInInitialOrderItemForm_template", "Selected", "It refers to a list of selected activities"));
        clearPushButton->setText(QApplication::translate("AddGroupActivitiesInInitialOrderItemForm_template", "Clear", 0));
        addItemPushButton->setText(QApplication::translate("AddGroupActivitiesInInitialOrderItemForm_template", "Add item", 0));
        closePushButton->setText(QApplication::translate("AddGroupActivitiesInInitialOrderItemForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddGroupActivitiesInInitialOrderItemForm_template: public Ui_AddGroupActivitiesInInitialOrderItemForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGROUPACTIVITIESININITIALORDERITEMFORM_TEMPLATE_H
