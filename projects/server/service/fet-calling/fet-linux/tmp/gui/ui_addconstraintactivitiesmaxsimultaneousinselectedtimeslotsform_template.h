/********************************************************************************
** Form generated from reading UI file 'addconstraintactivitiesmaxsimultaneousinselectedtimeslotsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTACTIVITIESMAXSIMULTANEOUSINSELECTEDTIMESLOTSFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTACTIVITIESMAXSIMULTANEOUSINSELECTEDTIMESLOTSFORM_TEMPLATE_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template
{
public:
    QGridLayout *gridLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
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
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QListWidget *allActivitiesListWidget;
    QPushButton *addAllActivitiesPushButton;
    QVBoxLayout *verticalLayout;
    QListWidget *selectedActivitiesListWidget;
    QPushButton *clearPushButton;
    QWidget *tab_2;
    QGridLayout *gridLayout_6;
    QTableWidget *selectedTimesTable;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *setAllSelectedPushButton;
    QPushButton *setAllUnselectedPushButton;
    QSpacerItem *horizontalSpacer;
    QGroupBox *maxSimultaneousGroupBox;
    QGridLayout *gridLayout_2;
    QSpinBox *maxSimultaneousSpinBox;
    QHBoxLayout *weightBoxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template)
    {
        if (AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template->objectName().isEmpty())
            AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template->setObjectName(QStringLiteral("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template"));
        AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template->resize(660, 540);
        gridLayout_5 = new QGridLayout(AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        tabWidget = new QTabWidget(AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        filterGroupBox = new QGroupBox(tab);
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


        gridLayout_4->addWidget(filterGroupBox, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        allActivitiesListWidget = new QListWidget(tab);
        allActivitiesListWidget->setObjectName(QStringLiteral("allActivitiesListWidget"));

        verticalLayout_2->addWidget(allActivitiesListWidget);

        addAllActivitiesPushButton = new QPushButton(tab);
        addAllActivitiesPushButton->setObjectName(QStringLiteral("addAllActivitiesPushButton"));

        verticalLayout_2->addWidget(addAllActivitiesPushButton);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectedActivitiesListWidget = new QListWidget(tab);
        selectedActivitiesListWidget->setObjectName(QStringLiteral("selectedActivitiesListWidget"));

        verticalLayout->addWidget(selectedActivitiesListWidget);

        clearPushButton = new QPushButton(tab);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        horizontalLayout_3->addLayout(verticalLayout);


        gridLayout_4->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_6 = new QGridLayout(tab_2);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        selectedTimesTable = new QTableWidget(tab_2);
        selectedTimesTable->setObjectName(QStringLiteral("selectedTimesTable"));

        gridLayout_6->addWidget(selectedTimesTable, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        setAllSelectedPushButton = new QPushButton(tab_2);
        setAllSelectedPushButton->setObjectName(QStringLiteral("setAllSelectedPushButton"));

        gridLayout->addWidget(setAllSelectedPushButton, 1, 0, 1, 1);

        setAllUnselectedPushButton = new QPushButton(tab_2);
        setAllUnselectedPushButton->setObjectName(QStringLiteral("setAllUnselectedPushButton"));

        gridLayout->addWidget(setAllUnselectedPushButton, 1, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        maxSimultaneousGroupBox = new QGroupBox(tab_2);
        maxSimultaneousGroupBox->setObjectName(QStringLiteral("maxSimultaneousGroupBox"));
        gridLayout_2 = new QGridLayout(maxSimultaneousGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        maxSimultaneousSpinBox = new QSpinBox(maxSimultaneousGroupBox);
        maxSimultaneousSpinBox->setObjectName(QStringLiteral("maxSimultaneousSpinBox"));

        gridLayout_2->addWidget(maxSimultaneousSpinBox, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(maxSimultaneousGroupBox);


        gridLayout_6->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_5->addWidget(tabWidget, 0, 0, 1, 1);

        weightBoxLayout = new QHBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout_5->addLayout(weightBoxLayout, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_5->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template)
    {
        AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template->setWindowTitle(QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Add activities max simultaneous in selected time slots", 0));
        filterGroupBox->setTitle(QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Activity tag", 0));
        addAllActivitiesPushButton->setText(QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "All", "Text on a button. It refers to adding all activities from the list above this button into the current constraint"));
        clearPushButton->setText(QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Clear", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Activities", 0));
        label->setText(QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "X=selected, empty=not selected", 0));
        setAllSelectedPushButton->setText(QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Select all", "It refers to time slots"));
        setAllUnselectedPushButton->setText(QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Unselect all", "It refers to time slots"));
        maxSimultaneousGroupBox->setTitle(QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Max simultaneous", "It refers to the max number of simultaneous activities"));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Time slots", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Weight percentage (necessary: 100%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template: public Ui_AddConstraintActivitiesMaxSimultaneousInSelectedTimeSlotsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTACTIVITIESMAXSIMULTANEOUSINSELECTEDTIMESLOTSFORM_TEMPLATE_H
