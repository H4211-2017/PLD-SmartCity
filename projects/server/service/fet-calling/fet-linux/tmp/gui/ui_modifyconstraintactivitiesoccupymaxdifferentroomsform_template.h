/********************************************************************************
** Form generated from reading UI file 'modifyconstraintactivitiesoccupymaxdifferentroomsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTACTIVITIESOCCUPYMAXDIFFERENTROOMSFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTACTIVITIESOCCUPYMAXDIFFERENTROOMSFORM_TEMPLATE_H

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

class Ui_ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template
{
public:
    QGridLayout *gridLayout;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout_3;
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
    QListWidget *allActivitiesListWidget;
    QPushButton *addAllActivitiesPushButton;
    QVBoxLayout *verticalLayout;
    QListWidget *selectedActivitiesListWidget;
    QPushButton *clearPushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *maxDifferentRoomsLabel;
    QSpinBox *maxDifferentRoomsSpinBox;
    QHBoxLayout *weightBoxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template)
    {
        if (ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template->objectName().isEmpty())
            ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template->setObjectName(QStringLiteral("ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template"));
        ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template->resize(650, 520);
        gridLayout = new QGridLayout(ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        filterGroupBox = new QGroupBox(ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout_3 = new QGridLayout(filterGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        teachersTextLabel = new QLabel(filterGroupBox);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        gridLayout_3->addWidget(teachersTextLabel, 0, 0, 1, 1);

        studentsTextLabel = new QLabel(filterGroupBox);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        gridLayout_3->addWidget(studentsTextLabel, 0, 1, 1, 1);

        subjectsTextLabel = new QLabel(filterGroupBox);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout_3->addWidget(subjectsTextLabel, 0, 2, 1, 1);

        activityTagsTextLabel = new QLabel(filterGroupBox);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        gridLayout_3->addWidget(activityTagsTextLabel, 0, 3, 1, 1);

        teachersComboBox = new QComboBox(filterGroupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout_3->addWidget(teachersComboBox, 1, 0, 1, 1);

        studentsComboBox = new QComboBox(filterGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout_3->addWidget(studentsComboBox, 1, 1, 1, 1);

        subjectsComboBox = new QComboBox(filterGroupBox);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout_3->addWidget(subjectsComboBox, 1, 2, 1, 1);

        activityTagsComboBox = new QComboBox(filterGroupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout_3->addWidget(activityTagsComboBox, 1, 3, 1, 1);


        gridLayout->addWidget(filterGroupBox, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        allActivitiesListWidget = new QListWidget(ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        allActivitiesListWidget->setObjectName(QStringLiteral("allActivitiesListWidget"));

        verticalLayout_2->addWidget(allActivitiesListWidget);

        addAllActivitiesPushButton = new QPushButton(ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        addAllActivitiesPushButton->setObjectName(QStringLiteral("addAllActivitiesPushButton"));

        verticalLayout_2->addWidget(addAllActivitiesPushButton);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectedActivitiesListWidget = new QListWidget(ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        selectedActivitiesListWidget->setObjectName(QStringLiteral("selectedActivitiesListWidget"));

        verticalLayout->addWidget(selectedActivitiesListWidget);

        clearPushButton = new QPushButton(ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        maxDifferentRoomsLabel = new QLabel(ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        maxDifferentRoomsLabel->setObjectName(QStringLiteral("maxDifferentRoomsLabel"));

        horizontalLayout_3->addWidget(maxDifferentRoomsLabel);

        maxDifferentRoomsSpinBox = new QSpinBox(ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        maxDifferentRoomsSpinBox->setObjectName(QStringLiteral("maxDifferentRoomsSpinBox"));

        horizontalLayout_3->addWidget(maxDifferentRoomsSpinBox);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        weightBoxLayout = new QHBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(weightBoxLayout, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okPushButton = new QPushButton(ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);


        retranslateUi(ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template)
    {
        ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template->setWindowTitle(QApplication::translate("ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Modify activities occupy max different rooms", 0));
        filterGroupBox->setTitle(QApplication::translate("ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Activity tag", 0));
        addAllActivitiesPushButton->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "All", "Text on a button. It refers to adding all activities from the list above this button into the current constraint"));
        clearPushButton->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Clear", 0));
        maxDifferentRoomsLabel->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Max different rooms", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Weight percentage (necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template: public Ui_ModifyConstraintActivitiesOccupyMaxDifferentRoomsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTACTIVITIESOCCUPYMAXDIFFERENTROOMSFORM_TEMPLATE_H
