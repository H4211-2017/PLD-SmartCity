/********************************************************************************
** Form generated from reading UI file 'modifygroupactivitiesininitialorderitemform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYGROUPACTIVITIESININITIALORDERITEMFORM_TEMPLATE_H
#define UI_MODIFYGROUPACTIVITIESININITIALORDERITEMFORM_TEMPLATE_H

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

class Ui_ModifyGroupActivitiesInInitialOrderItemForm_template
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
    QHBoxLayout *horizontalLayout;
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
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyGroupActivitiesInInitialOrderItemForm_template)
    {
        if (ModifyGroupActivitiesInInitialOrderItemForm_template->objectName().isEmpty())
            ModifyGroupActivitiesInInitialOrderItemForm_template->setObjectName(QStringLiteral("ModifyGroupActivitiesInInitialOrderItemForm_template"));
        ModifyGroupActivitiesInInitialOrderItemForm_template->resize(564, 515);
        gridLayout_2 = new QGridLayout(ModifyGroupActivitiesInInitialOrderItemForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        filterGroupBox = new QGroupBox(ModifyGroupActivitiesInInitialOrderItemForm_template);
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

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        activitiesTextLabel = new QLabel(ModifyGroupActivitiesInInitialOrderItemForm_template);
        activitiesTextLabel->setObjectName(QStringLiteral("activitiesTextLabel"));
        activitiesTextLabel->setFrameShape(QFrame::NoFrame);
        activitiesTextLabel->setFrameShadow(QFrame::Plain);
        activitiesTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(activitiesTextLabel);

        activitiesListWidget = new QListWidget(ModifyGroupActivitiesInInitialOrderItemForm_template);
        activitiesListWidget->setObjectName(QStringLiteral("activitiesListWidget"));

        verticalLayout_2->addWidget(activitiesListWidget);

        addAllActivitiesPushButton = new QPushButton(ModifyGroupActivitiesInInitialOrderItemForm_template);
        addAllActivitiesPushButton->setObjectName(QStringLiteral("addAllActivitiesPushButton"));

        verticalLayout_2->addWidget(addAllActivitiesPushButton);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectedActivitiesTextLabel = new QLabel(ModifyGroupActivitiesInInitialOrderItemForm_template);
        selectedActivitiesTextLabel->setObjectName(QStringLiteral("selectedActivitiesTextLabel"));
        selectedActivitiesTextLabel->setFrameShape(QFrame::NoFrame);
        selectedActivitiesTextLabel->setFrameShadow(QFrame::Plain);
        selectedActivitiesTextLabel->setWordWrap(false);

        verticalLayout->addWidget(selectedActivitiesTextLabel);

        selectedActivitiesListWidget = new QListWidget(ModifyGroupActivitiesInInitialOrderItemForm_template);
        selectedActivitiesListWidget->setObjectName(QStringLiteral("selectedActivitiesListWidget"));

        verticalLayout->addWidget(selectedActivitiesListWidget);

        clearPushButton = new QPushButton(ModifyGroupActivitiesInInitialOrderItemForm_template);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        line = new QFrame(ModifyGroupActivitiesInInitialOrderItemForm_template);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyGroupActivitiesInInitialOrderItemForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyGroupActivitiesInInitialOrderItemForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout_2->addLayout(hboxLayout, 3, 0, 1, 1);


        retranslateUi(ModifyGroupActivitiesInInitialOrderItemForm_template);

        QMetaObject::connectSlotsByName(ModifyGroupActivitiesInInitialOrderItemForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyGroupActivitiesInInitialOrderItemForm_template)
    {
        ModifyGroupActivitiesInInitialOrderItemForm_template->setWindowTitle(QApplication::translate("ModifyGroupActivitiesInInitialOrderItemForm_template", "Modify group activities in initial order item", 0));
        filterGroupBox->setTitle(QApplication::translate("ModifyGroupActivitiesInInitialOrderItemForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("ModifyGroupActivitiesInInitialOrderItemForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyGroupActivitiesInInitialOrderItemForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifyGroupActivitiesInInitialOrderItemForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ModifyGroupActivitiesInInitialOrderItemForm_template", "Activity tag", 0));
        activitiesTextLabel->setText(QApplication::translate("ModifyGroupActivitiesInInitialOrderItemForm_template", "Activities", 0));
        addAllActivitiesPushButton->setText(QApplication::translate("ModifyGroupActivitiesInInitialOrderItemForm_template", "All", "Text on a button. It refers to adding all activities from the list above this button into the current constraint"));
        selectedActivitiesTextLabel->setText(QApplication::translate("ModifyGroupActivitiesInInitialOrderItemForm_template", "Selected", "It refers to a list of selected activities"));
        clearPushButton->setText(QApplication::translate("ModifyGroupActivitiesInInitialOrderItemForm_template", "Clear", 0));
        okPushButton->setText(QApplication::translate("ModifyGroupActivitiesInInitialOrderItemForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyGroupActivitiesInInitialOrderItemForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyGroupActivitiesInInitialOrderItemForm_template: public Ui_ModifyGroupActivitiesInInitialOrderItemForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYGROUPACTIVITIESININITIALORDERITEMFORM_TEMPLATE_H
