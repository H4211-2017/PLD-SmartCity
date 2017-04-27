/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachermindaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERMINDAYSPERWEEKFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERMINDAYSPERWEEKFORM_TEMPLATE_H

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

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintTeacherMinDaysPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *teacherTextLabel;
    QComboBox *teachersComboBox;
    QSpacerItem *verticalSpacer;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QLabel *minDaysTextLabel;
    QSpinBox *minDaysSpinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintTeacherMinDaysPerWeekForm_template)
    {
        if (ModifyConstraintTeacherMinDaysPerWeekForm_template->objectName().isEmpty())
            ModifyConstraintTeacherMinDaysPerWeekForm_template->setObjectName(QStringLiteral("ModifyConstraintTeacherMinDaysPerWeekForm_template"));
        ModifyConstraintTeacherMinDaysPerWeekForm_template->resize(442, 205);
        gridLayout = new QGridLayout(ModifyConstraintTeacherMinDaysPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teacherTextLabel = new QLabel(ModifyConstraintTeacherMinDaysPerWeekForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        gridLayout->addWidget(teacherTextLabel, 0, 0, 1, 2);

        teachersComboBox = new QComboBox(ModifyConstraintTeacherMinDaysPerWeekForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        gridLayout->addWidget(teachersComboBox, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 53, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        weightTextLabel = new QLabel(ModifyConstraintTeacherMinDaysPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 3, 0, 1, 1);

        weightLineEdit = new QLineEdit(ModifyConstraintTeacherMinDaysPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 3, 1, 1, 1);

        minDaysTextLabel = new QLabel(ModifyConstraintTeacherMinDaysPerWeekForm_template);
        minDaysTextLabel->setObjectName(QStringLiteral("minDaysTextLabel"));
        minDaysTextLabel->setFrameShape(QFrame::NoFrame);
        minDaysTextLabel->setFrameShadow(QFrame::Plain);
        minDaysTextLabel->setWordWrap(false);

        gridLayout->addWidget(minDaysTextLabel, 4, 0, 1, 1);

        minDaysSpinBox = new QSpinBox(ModifyConstraintTeacherMinDaysPerWeekForm_template);
        minDaysSpinBox->setObjectName(QStringLiteral("minDaysSpinBox"));

        gridLayout->addWidget(minDaysSpinBox, 4, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okPushButton = new QPushButton(ModifyConstraintTeacherMinDaysPerWeekForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeacherMinDaysPerWeekForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 2);


        retranslateUi(ModifyConstraintTeacherMinDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeacherMinDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeacherMinDaysPerWeekForm_template)
    {
        ModifyConstraintTeacherMinDaysPerWeekForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeacherMinDaysPerWeekForm_template", "Modify teacher min days per week", 0));
        teacherTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMinDaysPerWeekForm_template", "Teacher", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMinDaysPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        minDaysTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMinDaysPerWeekForm_template", "Min days per week", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeacherMinDaysPerWeekForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeacherMinDaysPerWeekForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeacherMinDaysPerWeekForm_template: public Ui_ModifyConstraintTeacherMinDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERMINDAYSPERWEEKFORM_TEMPLATE_H
