/********************************************************************************
** Form generated from reading UI file 'modifyconstraintactivityendsstudentsdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTACTIVITYENDSSTUDENTSDAYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTACTIVITYENDSSTUDENTSDAYFORM_TEMPLATE_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintActivityEndsStudentsDayForm_template
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QLabel *teachersTextLabel;
    QLabel *studentsTextLabel;
    QComboBox *teachersComboBox;
    QComboBox *studentsComboBox;
    QLabel *subjectsTextLabel;
    QLabel *activityTagsTextLabel;
    QComboBox *subjectsComboBox;
    QComboBox *activityTagsComboBox;
    QSpacerItem *spacer3;
    QVBoxLayout *verticalLayout;
    QLabel *activityTextLabel;
    QComboBox *activitiesComboBox;
    QSpacerItem *spacer2;
    QHBoxLayout *hboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout1;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintActivityEndsStudentsDayForm_template)
    {
        if (ModifyConstraintActivityEndsStudentsDayForm_template->objectName().isEmpty())
            ModifyConstraintActivityEndsStudentsDayForm_template->setObjectName(QStringLiteral("ModifyConstraintActivityEndsStudentsDayForm_template"));
        ModifyConstraintActivityEndsStudentsDayForm_template->resize(592, 415);
        gridLayout_2 = new QGridLayout(ModifyConstraintActivityEndsStudentsDayForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        filterGroupBox = new QGroupBox(ModifyConstraintActivityEndsStudentsDayForm_template);
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

        teachersComboBox = new QComboBox(filterGroupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        studentsComboBox = new QComboBox(filterGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 1, 1, 1, 1);

        subjectsTextLabel = new QLabel(filterGroupBox);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel, 2, 0, 1, 1);

        activityTagsTextLabel = new QLabel(filterGroupBox);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        gridLayout->addWidget(activityTagsTextLabel, 2, 1, 1, 1);

        subjectsComboBox = new QComboBox(filterGroupBox);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 3, 0, 1, 1);

        activityTagsComboBox = new QComboBox(filterGroupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 3, 1, 1, 1);


        gridLayout_2->addWidget(filterGroupBox, 0, 0, 1, 1);

        spacer3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacer3, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        activityTextLabel = new QLabel(ModifyConstraintActivityEndsStudentsDayForm_template);
        activityTextLabel->setObjectName(QStringLiteral("activityTextLabel"));
        activityTextLabel->setFrameShape(QFrame::NoFrame);
        activityTextLabel->setFrameShadow(QFrame::Plain);
        activityTextLabel->setWordWrap(false);

        verticalLayout->addWidget(activityTextLabel);

        activitiesComboBox = new QComboBox(ModifyConstraintActivityEndsStudentsDayForm_template);
        activitiesComboBox->setObjectName(QStringLiteral("activitiesComboBox"));
        activitiesComboBox->setEditable(false);
        activitiesComboBox->setInsertPolicy(QComboBox::NoInsert);
        activitiesComboBox->setAutoCompletion(false);
        activitiesComboBox->setDuplicatesEnabled(false);

        verticalLayout->addWidget(activitiesComboBox);


        gridLayout_2->addLayout(verticalLayout, 2, 0, 1, 1);

        spacer2 = new QSpacerItem(20, 47, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacer2, 3, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintActivityEndsStudentsDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintActivityEndsStudentsDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout_2->addLayout(hboxLayout, 4, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        okPushButton = new QPushButton(ModifyConstraintActivityEndsStudentsDayForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout1->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintActivityEndsStudentsDayForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout1->addWidget(cancelPushButton);


        gridLayout_2->addLayout(hboxLayout1, 5, 0, 1, 1);


        retranslateUi(ModifyConstraintActivityEndsStudentsDayForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintActivityEndsStudentsDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintActivityEndsStudentsDayForm_template)
    {
        ModifyConstraintActivityEndsStudentsDayForm_template->setWindowTitle(QApplication::translate("ModifyConstraintActivityEndsStudentsDayForm_template", "Modify activity ends students day", 0));
        filterGroupBox->setTitle(QApplication::translate("ModifyConstraintActivityEndsStudentsDayForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("ModifyConstraintActivityEndsStudentsDayForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintActivityEndsStudentsDayForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifyConstraintActivityEndsStudentsDayForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("ModifyConstraintActivityEndsStudentsDayForm_template", "Activity tag", 0));
        activityTextLabel->setText(QApplication::translate("ModifyConstraintActivityEndsStudentsDayForm_template", "Activity", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintActivityEndsStudentsDayForm_template", "Weight percentage\n"
"(necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintActivityEndsStudentsDayForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintActivityEndsStudentsDayForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintActivityEndsStudentsDayForm_template: public Ui_ModifyConstraintActivityEndsStudentsDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTACTIVITYENDSSTUDENTSDAYFORM_TEMPLATE_H
