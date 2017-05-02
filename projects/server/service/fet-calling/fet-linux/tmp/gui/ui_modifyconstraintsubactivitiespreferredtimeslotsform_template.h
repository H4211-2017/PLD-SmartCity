/********************************************************************************
** Form generated from reading UI file 'modifyconstraintsubactivitiespreferredtimeslotsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSUBACTIVITIESPREFERREDTIMESLOTSFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSUBACTIVITIESPREFERREDTIMESLOTSFORM_TEMPLATE_H

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

class Ui_ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *componentBoxLayout;
    QLabel *textLabel1;
    QSpinBox *componentNumberSpinBox;
    QSpacerItem *spacer1;
    QGridLayout *filterBoxLayout;
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

    void setupUi(QDialog *ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template)
    {
        if (ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template->objectName().isEmpty())
            ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template->setObjectName(QStringLiteral("ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template"));
        ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template->resize(664, 567);
        gridLayout_2 = new QGridLayout(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        componentBoxLayout = new QHBoxLayout();
        componentBoxLayout->setSpacing(6);
        componentBoxLayout->setObjectName(QStringLiteral("componentBoxLayout"));
        textLabel1 = new QLabel(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        componentBoxLayout->addWidget(textLabel1);

        componentNumberSpinBox = new QSpinBox(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        componentNumberSpinBox->setObjectName(QStringLiteral("componentNumberSpinBox"));
        componentNumberSpinBox->setMinimum(1);

        componentBoxLayout->addWidget(componentNumberSpinBox);

        spacer1 = new QSpacerItem(131, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        componentBoxLayout->addItem(spacer1);


        gridLayout_2->addLayout(componentBoxLayout, 0, 0, 1, 1);

        filterBoxLayout = new QGridLayout();
        filterBoxLayout->setSpacing(6);
        filterBoxLayout->setObjectName(QStringLiteral("filterBoxLayout"));
        teachersComboBox = new QComboBox(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        filterBoxLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        activityTagsComboBox = new QComboBox(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        filterBoxLayout->addWidget(activityTagsComboBox, 1, 3, 1, 1);

        subjectsComboBox = new QComboBox(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        filterBoxLayout->addWidget(subjectsComboBox, 1, 2, 1, 1);

        activityTagsTextLabel = new QLabel(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        filterBoxLayout->addWidget(activityTagsTextLabel, 0, 3, 1, 1);

        teachersTextLabel = new QLabel(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        filterBoxLayout->addWidget(teachersTextLabel, 0, 0, 1, 1);

        studentsComboBox = new QComboBox(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        filterBoxLayout->addWidget(studentsComboBox, 1, 1, 1, 1);

        studentsTextLabel = new QLabel(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        filterBoxLayout->addWidget(studentsTextLabel, 0, 1, 1, 1);

        subjectsTextLabel = new QLabel(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        filterBoxLayout->addWidget(subjectsTextLabel, 0, 2, 1, 1);


        gridLayout_2->addLayout(filterBoxLayout, 1, 0, 1, 1);

        preferredTimesTable = new QTableWidget(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        preferredTimesTable->setObjectName(QStringLiteral("preferredTimesTable"));

        gridLayout_2->addWidget(preferredTimesTable, 2, 0, 1, 1);

        weightBoxLayout = new QHBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout_2->addLayout(weightBoxLayout, 3, 0, 1, 1);

        buttonsGridLayout = new QGridLayout();
        buttonsGridLayout->setSpacing(6);
        buttonsGridLayout->setObjectName(QStringLiteral("buttonsGridLayout"));
        setAllAllowedPushButton = new QPushButton(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        setAllAllowedPushButton->setObjectName(QStringLiteral("setAllAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllAllowedPushButton, 0, 0, 1, 1);

        label = new QLabel(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        label->setObjectName(QStringLiteral("label"));

        buttonsGridLayout->addWidget(label, 0, 1, 1, 2);

        setAllNotAllowedPushButton = new QPushButton(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        setAllNotAllowedPushButton->setObjectName(QStringLiteral("setAllNotAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllNotAllowedPushButton, 1, 0, 1, 1);

        okPushButton = new QPushButton(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        buttonsGridLayout->addWidget(okPushButton, 1, 1, 1, 1);

        cancelPushButton = new QPushButton(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        buttonsGridLayout->addWidget(cancelPushButton, 1, 2, 1, 1);


        gridLayout_2->addLayout(buttonsGridLayout, 4, 0, 1, 1);


        retranslateUi(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template)
    {
        ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template->setWindowTitle(QApplication::translate("ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template", "Modify subactivities preferred time slots", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template", "Component number (split index)", 0));
        activityTagsTextLabel->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template", "Activity tag", 0));
        teachersTextLabel->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template", "Subject", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        setAllAllowedPushButton->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template", "Set all allowed", "It refers to time slots"));
        label->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template", "X=not allowed, empty=allowed", 0));
        setAllNotAllowedPushButton->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template", "Set all not allowed", "It refers to time slots"));
        okPushButton->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template: public Ui_ModifyConstraintSubactivitiesPreferredTimeSlotsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSUBACTIVITIESPREFERREDTIMESLOTSFORM_TEMPLATE_H
