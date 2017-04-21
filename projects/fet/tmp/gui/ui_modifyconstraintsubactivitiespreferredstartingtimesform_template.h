/********************************************************************************
** Form generated from reading UI file 'modifyconstraintsubactivitiespreferredstartingtimesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSUBACTIVITIESPREFERREDSTARTINGTIMESFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSUBACTIVITIESPREFERREDSTARTINGTIMESFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintSubactivitiesPreferredStartingTimesForm_template
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *componentBoxLayout;
    QLabel *textLabel1;
    QSpinBox *componentNumberSpinBox;
    QSpacerItem *spacer1;
    QGridLayout *filterGridLayout;
    QComboBox *teachersComboBox;
    QComboBox *activityTagsComboBox;
    QComboBox *subjectsComboBox;
    QLabel *activityTagsTextLabel;
    QLabel *teachersTextLabel;
    QComboBox *studentsComboBox;
    QLabel *studentsTextLabel;
    QLabel *subjectsTextLabel;
    QTableWidget *preferredTimesTable;
    QHBoxLayout *weightBoxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QGridLayout *buttonsGridLayout;
    QPushButton *setAllAllowedPushButton;
    QLabel *label;
    QPushButton *setAllNotAllowedPushButton;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintSubactivitiesPreferredStartingTimesForm_template)
    {
        if (ModifyConstraintSubactivitiesPreferredStartingTimesForm_template->objectName().isEmpty())
            ModifyConstraintSubactivitiesPreferredStartingTimesForm_template->setObjectName(QStringLiteral("ModifyConstraintSubactivitiesPreferredStartingTimesForm_template"));
        ModifyConstraintSubactivitiesPreferredStartingTimesForm_template->resize(673, 569);
        gridLayout_2 = new QGridLayout(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        componentBoxLayout = new QHBoxLayout();
        componentBoxLayout->setSpacing(6);
        componentBoxLayout->setObjectName(QStringLiteral("componentBoxLayout"));
        textLabel1 = new QLabel(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        componentBoxLayout->addWidget(textLabel1);

        componentNumberSpinBox = new QSpinBox(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        componentNumberSpinBox->setObjectName(QStringLiteral("componentNumberSpinBox"));
        componentNumberSpinBox->setMinimum(1);

        componentBoxLayout->addWidget(componentNumberSpinBox);

        spacer1 = new QSpacerItem(131, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        componentBoxLayout->addItem(spacer1);


        gridLayout_2->addLayout(componentBoxLayout, 0, 0, 1, 1);

        filterGridLayout = new QGridLayout();
        filterGridLayout->setSpacing(6);
        filterGridLayout->setObjectName(QStringLiteral("filterGridLayout"));
        teachersComboBox = new QComboBox(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        filterGridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        activityTagsComboBox = new QComboBox(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        filterGridLayout->addWidget(activityTagsComboBox, 1, 3, 1, 1);

        subjectsComboBox = new QComboBox(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        filterGridLayout->addWidget(subjectsComboBox, 1, 2, 1, 1);

        activityTagsTextLabel = new QLabel(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(activityTagsTextLabel, 0, 3, 1, 1);

        teachersTextLabel = new QLabel(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(teachersTextLabel, 0, 0, 1, 1);

        studentsComboBox = new QComboBox(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        filterGridLayout->addWidget(studentsComboBox, 1, 1, 1, 1);

        studentsTextLabel = new QLabel(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(studentsTextLabel, 0, 1, 1, 1);

        subjectsTextLabel = new QLabel(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(subjectsTextLabel, 0, 2, 1, 1);


        gridLayout_2->addLayout(filterGridLayout, 1, 0, 1, 1);

        preferredTimesTable = new QTableWidget(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        preferredTimesTable->setObjectName(QStringLiteral("preferredTimesTable"));

        gridLayout_2->addWidget(preferredTimesTable, 2, 0, 1, 1);

        weightBoxLayout = new QHBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout_2->addLayout(weightBoxLayout, 3, 0, 1, 1);

        buttonsGridLayout = new QGridLayout();
        buttonsGridLayout->setSpacing(6);
        buttonsGridLayout->setObjectName(QStringLiteral("buttonsGridLayout"));
        setAllAllowedPushButton = new QPushButton(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        setAllAllowedPushButton->setObjectName(QStringLiteral("setAllAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllAllowedPushButton, 0, 0, 1, 1);

        label = new QLabel(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        label->setObjectName(QStringLiteral("label"));

        buttonsGridLayout->addWidget(label, 0, 1, 1, 2);

        setAllNotAllowedPushButton = new QPushButton(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        setAllNotAllowedPushButton->setObjectName(QStringLiteral("setAllNotAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllNotAllowedPushButton, 1, 0, 1, 1);

        okPushButton = new QPushButton(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        buttonsGridLayout->addWidget(okPushButton, 1, 1, 1, 1);

        cancelPushButton = new QPushButton(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        buttonsGridLayout->addWidget(cancelPushButton, 1, 2, 1, 1);


        gridLayout_2->addLayout(buttonsGridLayout, 4, 0, 1, 1);


        retranslateUi(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintSubactivitiesPreferredStartingTimesForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintSubactivitiesPreferredStartingTimesForm_template)
    {
        ModifyConstraintSubactivitiesPreferredStartingTimesForm_template->setWindowTitle(QApplication::translate("ModifyConstraintSubactivitiesPreferredStartingTimesForm_template", "Modify subactivities preferred starting times", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredStartingTimesForm_template", "Component number (split index)", 0));
        activityTagsTextLabel->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredStartingTimesForm_template", "Activity tag", 0));
        teachersTextLabel->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredStartingTimesForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredStartingTimesForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredStartingTimesForm_template", "Subject", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredStartingTimesForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        setAllAllowedPushButton->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredStartingTimesForm_template", "Set all allowed", "It refers to time slots"));
        label->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredStartingTimesForm_template", "X=not allowed, empty=allowed", 0));
        setAllNotAllowedPushButton->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredStartingTimesForm_template", "Set all not allowed", "It refers to time slots"));
        okPushButton->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredStartingTimesForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredStartingTimesForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintSubactivitiesPreferredStartingTimesForm_template: public Ui_ModifyConstraintSubactivitiesPreferredStartingTimesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSUBACTIVITIESPREFERREDSTARTINGTIMESFORM_TEMPLATE_H
