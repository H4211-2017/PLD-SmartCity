/********************************************************************************
** Form generated from reading UI file 'modifyconstraintactivitiesoccupymaxtimeslotsfromselectionform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTACTIVITIESOCCUPYMAXTIMESLOTSFROMSELECTIONFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTACTIVITIESOCCUPYMAXTIMESLOTSFROMSELECTIONFORM_TEMPLATE_H

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

class Ui_ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template
{
public:
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_5;
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
    QWidget *tab_2;
    QGridLayout *gridLayout_6;
    QTableWidget *selectedTimesTable;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *setAllSelectedPushButton;
    QPushButton *setAllUnselectedPushButton;
    QSpacerItem *horizontalSpacer;
    QGroupBox *maxOccupiedGroupBox;
    QGridLayout *gridLayout_2;
    QSpinBox *maxOccupiedSpinBox;
    QHBoxLayout *weightBoxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template)
    {
        if (ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template->objectName().isEmpty())
            ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template->setObjectName(QStringLiteral("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template"));
        ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template->resize(660, 540);
        gridLayout_4 = new QGridLayout(ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tabWidget = new QTabWidget(ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_5 = new QGridLayout(tab);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
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


        gridLayout_5->addWidget(filterGroupBox, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        allActivitiesListWidget = new QListWidget(tab);
        allActivitiesListWidget->setObjectName(QStringLiteral("allActivitiesListWidget"));

        verticalLayout_2->addWidget(allActivitiesListWidget);

        addAllActivitiesPushButton = new QPushButton(tab);
        addAllActivitiesPushButton->setObjectName(QStringLiteral("addAllActivitiesPushButton"));

        verticalLayout_2->addWidget(addAllActivitiesPushButton);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectedActivitiesListWidget = new QListWidget(tab);
        selectedActivitiesListWidget->setObjectName(QStringLiteral("selectedActivitiesListWidget"));

        verticalLayout->addWidget(selectedActivitiesListWidget);

        clearPushButton = new QPushButton(tab);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout_5->addLayout(horizontalLayout_2, 1, 0, 1, 1);

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

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
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


        horizontalLayout_3->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(240, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        maxOccupiedGroupBox = new QGroupBox(tab_2);
        maxOccupiedGroupBox->setObjectName(QStringLiteral("maxOccupiedGroupBox"));
        gridLayout_2 = new QGridLayout(maxOccupiedGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        maxOccupiedSpinBox = new QSpinBox(maxOccupiedGroupBox);
        maxOccupiedSpinBox->setObjectName(QStringLiteral("maxOccupiedSpinBox"));

        gridLayout_2->addWidget(maxOccupiedSpinBox, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(maxOccupiedGroupBox);


        gridLayout_6->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_4->addWidget(tabWidget, 0, 0, 1, 1);

        weightBoxLayout = new QHBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout_4->addLayout(weightBoxLayout, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okPushButton = new QPushButton(ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        gridLayout_4->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template)
    {
        ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template->setWindowTitle(QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "Modify activities occupy max time slots from selection", 0));
        filterGroupBox->setTitle(QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "Activity tag", 0));
        addAllActivitiesPushButton->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "All", "Text on a button. It refers to adding all activities from the list above this button into the current constraint"));
        clearPushButton->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "Clear", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "Activities", 0));
        label->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "X=selected, empty=not selected", 0));
        setAllSelectedPushButton->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "Select all", "It refers to time slots"));
        setAllUnselectedPushButton->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "Unselect all", "It refers to time slots"));
        maxOccupiedGroupBox->setTitle(QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "Max occupied", "It refers to the max number of occupied time slots"));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "Time slots", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "Weight percentage (necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template: public Ui_ModifyConstraintActivitiesOccupyMaxTimeSlotsFromSelectionForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTACTIVITIESOCCUPYMAXTIMESLOTSFROMSELECTIONFORM_TEMPLATE_H
