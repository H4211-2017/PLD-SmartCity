/********************************************************************************
** Form generated from reading UI file 'addconstraintsubactivitiespreferredstartingtimesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSUBACTIVITIESPREFERREDSTARTINGTIMESFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSUBACTIVITIESPREFERREDSTARTINGTIMESFORM_TEMPLATE_H

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

class Ui_AddConstraintSubactivitiesPreferredStartingTimesForm_template
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *componentBoxLayout;
    QLabel *textLabel1;
    QSpinBox *componentNumberSpinBox;
    QSpacerItem *spacer1;
    QLabel *instructionsTextLabel;
    QHBoxLayout *weightBoxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QTableWidget *preferredTimesTable;
    QGridLayout *filterGridLayout;
    QLabel *activityTagsTextLabel;
    QComboBox *studentsComboBox;
    QComboBox *activityTagsComboBox;
    QLabel *studentsTextLabel;
    QComboBox *subjectsComboBox;
    QLabel *subjectsTextLabel;
    QComboBox *teachersComboBox;
    QLabel *teachersTextLabel;
    QGridLayout *buttonsGridLayout;
    QPushButton *setAllAllowedPushButton;
    QLabel *label;
    QPushButton *setAllNotAllowedPushButton;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintSubactivitiesPreferredStartingTimesForm_template)
    {
        if (AddConstraintSubactivitiesPreferredStartingTimesForm_template->objectName().isEmpty())
            AddConstraintSubactivitiesPreferredStartingTimesForm_template->setObjectName(QStringLiteral("AddConstraintSubactivitiesPreferredStartingTimesForm_template"));
        AddConstraintSubactivitiesPreferredStartingTimesForm_template->resize(666, 569);
        gridLayout_2 = new QGridLayout(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        componentBoxLayout = new QHBoxLayout();
        componentBoxLayout->setSpacing(6);
        componentBoxLayout->setObjectName(QStringLiteral("componentBoxLayout"));
        textLabel1 = new QLabel(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        componentBoxLayout->addWidget(textLabel1);

        componentNumberSpinBox = new QSpinBox(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        componentNumberSpinBox->setObjectName(QStringLiteral("componentNumberSpinBox"));
        componentNumberSpinBox->setMinimum(1);

        componentBoxLayout->addWidget(componentNumberSpinBox);

        spacer1 = new QSpacerItem(131, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        componentBoxLayout->addItem(spacer1);


        gridLayout_2->addLayout(componentBoxLayout, 1, 0, 1, 1);

        instructionsTextLabel = new QLabel(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        instructionsTextLabel->setObjectName(QStringLiteral("instructionsTextLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(instructionsTextLabel->sizePolicy().hasHeightForWidth());
        instructionsTextLabel->setSizePolicy(sizePolicy);
        instructionsTextLabel->setWordWrap(true);

        gridLayout_2->addWidget(instructionsTextLabel, 0, 0, 1, 1);

        weightBoxLayout = new QHBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout_2->addLayout(weightBoxLayout, 4, 0, 1, 1);

        preferredTimesTable = new QTableWidget(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        preferredTimesTable->setObjectName(QStringLiteral("preferredTimesTable"));

        gridLayout_2->addWidget(preferredTimesTable, 3, 0, 1, 1);

        filterGridLayout = new QGridLayout();
        filterGridLayout->setSpacing(6);
        filterGridLayout->setObjectName(QStringLiteral("filterGridLayout"));
        activityTagsTextLabel = new QLabel(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(activityTagsTextLabel, 0, 3, 1, 1);

        studentsComboBox = new QComboBox(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        filterGridLayout->addWidget(studentsComboBox, 1, 1, 1, 1);

        activityTagsComboBox = new QComboBox(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        filterGridLayout->addWidget(activityTagsComboBox, 1, 3, 1, 1);

        studentsTextLabel = new QLabel(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(studentsTextLabel, 0, 1, 1, 1);

        subjectsComboBox = new QComboBox(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        filterGridLayout->addWidget(subjectsComboBox, 1, 2, 1, 1);

        subjectsTextLabel = new QLabel(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(subjectsTextLabel, 0, 2, 1, 1);

        teachersComboBox = new QComboBox(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        filterGridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        teachersTextLabel = new QLabel(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        filterGridLayout->addWidget(teachersTextLabel, 0, 0, 1, 1);


        gridLayout_2->addLayout(filterGridLayout, 2, 0, 1, 1);

        buttonsGridLayout = new QGridLayout();
        buttonsGridLayout->setSpacing(6);
        buttonsGridLayout->setObjectName(QStringLiteral("buttonsGridLayout"));
        setAllAllowedPushButton = new QPushButton(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        setAllAllowedPushButton->setObjectName(QStringLiteral("setAllAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllAllowedPushButton, 0, 0, 1, 1);

        label = new QLabel(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        label->setObjectName(QStringLiteral("label"));

        buttonsGridLayout->addWidget(label, 0, 1, 1, 2);

        setAllNotAllowedPushButton = new QPushButton(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        setAllNotAllowedPushButton->setObjectName(QStringLiteral("setAllNotAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllNotAllowedPushButton, 1, 0, 1, 1);

        addConstraintPushButton = new QPushButton(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        buttonsGridLayout->addWidget(addConstraintPushButton, 1, 1, 1, 1);

        closePushButton = new QPushButton(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        buttonsGridLayout->addWidget(closePushButton, 1, 2, 1, 1);


        gridLayout_2->addLayout(buttonsGridLayout, 5, 0, 1, 1);


        retranslateUi(AddConstraintSubactivitiesPreferredStartingTimesForm_template);

        QMetaObject::connectSlotsByName(AddConstraintSubactivitiesPreferredStartingTimesForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintSubactivitiesPreferredStartingTimesForm_template)
    {
        AddConstraintSubactivitiesPreferredStartingTimesForm_template->setWindowTitle(QApplication::translate("AddConstraintSubactivitiesPreferredStartingTimesForm_template", "Add subactivities preferred starting times", 0));
        textLabel1->setText(QApplication::translate("AddConstraintSubactivitiesPreferredStartingTimesForm_template", "Component number (split index)", 0));
        instructionsTextLabel->setText(QApplication::translate("AddConstraintSubactivitiesPreferredStartingTimesForm_template", "Choose the component number of the subactivities to be constrained.", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintSubactivitiesPreferredStartingTimesForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        activityTagsTextLabel->setText(QApplication::translate("AddConstraintSubactivitiesPreferredStartingTimesForm_template", "Activity tag", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintSubactivitiesPreferredStartingTimesForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("AddConstraintSubactivitiesPreferredStartingTimesForm_template", "Subject", 0));
        teachersTextLabel->setText(QApplication::translate("AddConstraintSubactivitiesPreferredStartingTimesForm_template", "Teacher", 0));
        setAllAllowedPushButton->setText(QApplication::translate("AddConstraintSubactivitiesPreferredStartingTimesForm_template", "Set all allowed", "It refers to time slots"));
        label->setText(QApplication::translate("AddConstraintSubactivitiesPreferredStartingTimesForm_template", "X=not allowed, empty=allowed", 0));
        setAllNotAllowedPushButton->setText(QApplication::translate("AddConstraintSubactivitiesPreferredStartingTimesForm_template", "Set all not allowed", "It refers to time slots"));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintSubactivitiesPreferredStartingTimesForm_template", "Add", 0));
        closePushButton->setText(QApplication::translate("AddConstraintSubactivitiesPreferredStartingTimesForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintSubactivitiesPreferredStartingTimesForm_template: public Ui_AddConstraintSubactivitiesPreferredStartingTimesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSUBACTIVITIESPREFERREDSTARTINGTIMESFORM_TEMPLATE_H
