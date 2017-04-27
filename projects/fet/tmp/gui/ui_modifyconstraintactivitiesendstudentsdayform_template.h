/********************************************************************************
** Form generated from reading UI file 'modifyconstraintactivitiesendstudentsdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTACTIVITIESENDSTUDENTSDAYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTACTIVITIESENDSTUDENTSDAYFORM_TEMPLATE_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintActivitiesEndStudentsDayForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *teachersTextLabel;
    QComboBox *teachersComboBox;
    QLabel *subjectsTextLabel;
    QComboBox *subjectsComboBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
    QLabel *activityTagsTextLabel;
    QComboBox *activityTagsComboBox;
    QSpacerItem *spacer3;
    QHBoxLayout *hboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout1;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintActivitiesEndStudentsDayForm_template)
    {
        if (ModifyConstraintActivitiesEndStudentsDayForm_template->objectName().isEmpty())
            ModifyConstraintActivitiesEndStudentsDayForm_template->setObjectName(QStringLiteral("ModifyConstraintActivitiesEndStudentsDayForm_template"));
        ModifyConstraintActivitiesEndStudentsDayForm_template->resize(572, 279);
        gridLayout = new QGridLayout(ModifyConstraintActivitiesEndStudentsDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        teachersTextLabel = new QLabel(ModifyConstraintActivitiesEndStudentsDayForm_template);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        verticalLayout->addWidget(teachersTextLabel);

        teachersComboBox = new QComboBox(ModifyConstraintActivitiesEndStudentsDayForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        verticalLayout->addWidget(teachersComboBox);

        subjectsTextLabel = new QLabel(ModifyConstraintActivitiesEndStudentsDayForm_template);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(subjectsTextLabel);

        subjectsComboBox = new QComboBox(ModifyConstraintActivitiesEndStudentsDayForm_template);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        verticalLayout->addWidget(subjectsComboBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        studentsTextLabel = new QLabel(ModifyConstraintActivitiesEndStudentsDayForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(studentsTextLabel);

        studentsComboBox = new QComboBox(ModifyConstraintActivitiesEndStudentsDayForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        verticalLayout_2->addWidget(studentsComboBox);

        activityTagsTextLabel = new QLabel(ModifyConstraintActivitiesEndStudentsDayForm_template);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(activityTagsTextLabel);

        activityTagsComboBox = new QComboBox(ModifyConstraintActivitiesEndStudentsDayForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        verticalLayout_2->addWidget(activityTagsComboBox);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        spacer3 = new QSpacerItem(20, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer3, 1, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintActivitiesEndStudentsDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintActivitiesEndStudentsDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        okPushButton = new QPushButton(ModifyConstraintActivitiesEndStudentsDayForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout1->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintActivitiesEndStudentsDayForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout1->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout1, 3, 0, 1, 2);


        retranslateUi(ModifyConstraintActivitiesEndStudentsDayForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintActivitiesEndStudentsDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintActivitiesEndStudentsDayForm_template)
    {
        ModifyConstraintActivitiesEndStudentsDayForm_template->setWindowTitle(QApplication::translate("ModifyConstraintActivitiesEndStudentsDayForm_template", "Modify activities end students day", 0));
        teachersTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesEndStudentsDayForm_template", "Teacher", 0));
        subjectsTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesEndStudentsDayForm_template", "Subject", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesEndStudentsDayForm_template", "Students set", 0));
        activityTagsTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesEndStudentsDayForm_template", "Activity tag", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintActivitiesEndStudentsDayForm_template", "Weight percentage (necessary: 100.0%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintActivitiesEndStudentsDayForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintActivitiesEndStudentsDayForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintActivitiesEndStudentsDayForm_template: public Ui_ModifyConstraintActivitiesEndStudentsDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTACTIVITIESENDSTUDENTSDAYFORM_TEMPLATE_H
