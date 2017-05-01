/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentssetminhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSSETMINHOURSDAILYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSSETMINHOURSDAILYFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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

class Ui_ModifyConstraintStudentsSetMinHoursDailyForm_template
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QLabel *minHoursTextLabel;
    QSpinBox *minHoursSpinBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *allowLabel;
    QCheckBox *allowEmptyDaysCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintStudentsSetMinHoursDailyForm_template)
    {
        if (ModifyConstraintStudentsSetMinHoursDailyForm_template->objectName().isEmpty())
            ModifyConstraintStudentsSetMinHoursDailyForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsSetMinHoursDailyForm_template"));
        ModifyConstraintStudentsSetMinHoursDailyForm_template->resize(517, 286);
        gridLayout = new QGridLayout(ModifyConstraintStudentsSetMinHoursDailyForm_template);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        studentsTextLabel = new QLabel(ModifyConstraintStudentsSetMinHoursDailyForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));

        gridLayout->addWidget(studentsTextLabel, 1, 0, 1, 1);

        studentsComboBox = new QComboBox(ModifyConstraintStudentsSetMinHoursDailyForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 2, 0, 1, 3);

        weightTextLabel = new QLabel(ModifyConstraintStudentsSetMinHoursDailyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));

        gridLayout->addWidget(weightTextLabel, 3, 0, 1, 1);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsSetMinHoursDailyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 3, 1, 1, 2);

        minHoursTextLabel = new QLabel(ModifyConstraintStudentsSetMinHoursDailyForm_template);
        minHoursTextLabel->setObjectName(QStringLiteral("minHoursTextLabel"));

        gridLayout->addWidget(minHoursTextLabel, 4, 0, 1, 1);

        minHoursSpinBox = new QSpinBox(ModifyConstraintStudentsSetMinHoursDailyForm_template);
        minHoursSpinBox->setObjectName(QStringLiteral("minHoursSpinBox"));

        gridLayout->addWidget(minHoursSpinBox, 4, 1, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 1);

        allowLabel = new QLabel(ModifyConstraintStudentsSetMinHoursDailyForm_template);
        allowLabel->setObjectName(QStringLiteral("allowLabel"));
        allowLabel->setText(QStringLiteral("Label"));

        gridLayout->addWidget(allowLabel, 6, 0, 1, 2);

        allowEmptyDaysCheckBox = new QCheckBox(ModifyConstraintStudentsSetMinHoursDailyForm_template);
        allowEmptyDaysCheckBox->setObjectName(QStringLiteral("allowEmptyDaysCheckBox"));

        gridLayout->addWidget(allowEmptyDaysCheckBox, 7, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okPushButton = new QPushButton(ModifyConstraintStudentsSetMinHoursDailyForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsSetMinHoursDailyForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout, 8, 0, 1, 3);


        retranslateUi(ModifyConstraintStudentsSetMinHoursDailyForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsSetMinHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsSetMinHoursDailyForm_template)
    {
        ModifyConstraintStudentsSetMinHoursDailyForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsSetMinHoursDailyForm_template", "Modify students set min hours daily", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetMinHoursDailyForm_template", "Students", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetMinHoursDailyForm_template", "Weight percentage (necessary: 100%)", 0));
        minHoursTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetMinHoursDailyForm_template", "Min hours", 0));
        allowEmptyDaysCheckBox->setText(QApplication::translate("ModifyConstraintStudentsSetMinHoursDailyForm_template", "Allow empty days", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetMinHoursDailyForm_template", "OK", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetMinHoursDailyForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsSetMinHoursDailyForm_template: public Ui_ModifyConstraintStudentsSetMinHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSSETMINHOURSDAILYFORM_TEMPLATE_H
