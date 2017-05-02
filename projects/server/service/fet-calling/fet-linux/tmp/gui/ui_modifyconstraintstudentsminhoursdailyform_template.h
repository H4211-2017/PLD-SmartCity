/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentsminhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSMINHOURSDAILYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSMINHOURSDAILYFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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

class Ui_ModifyConstraintStudentsMinHoursDailyForm_template
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
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

    void setupUi(QDialog *ModifyConstraintStudentsMinHoursDailyForm_template)
    {
        if (ModifyConstraintStudentsMinHoursDailyForm_template->objectName().isEmpty())
            ModifyConstraintStudentsMinHoursDailyForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsMinHoursDailyForm_template"));
        ModifyConstraintStudentsMinHoursDailyForm_template->resize(508, 232);
        gridLayout = new QGridLayout(ModifyConstraintStudentsMinHoursDailyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        weightTextLabel = new QLabel(ModifyConstraintStudentsMinHoursDailyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 1, 0, 1, 2);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsMinHoursDailyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 1, 2, 1, 1);

        minHoursTextLabel = new QLabel(ModifyConstraintStudentsMinHoursDailyForm_template);
        minHoursTextLabel->setObjectName(QStringLiteral("minHoursTextLabel"));
        minHoursTextLabel->setFrameShape(QFrame::NoFrame);
        minHoursTextLabel->setFrameShadow(QFrame::Plain);
        minHoursTextLabel->setWordWrap(false);

        gridLayout->addWidget(minHoursTextLabel, 2, 0, 1, 1);

        minHoursSpinBox = new QSpinBox(ModifyConstraintStudentsMinHoursDailyForm_template);
        minHoursSpinBox->setObjectName(QStringLiteral("minHoursSpinBox"));

        gridLayout->addWidget(minHoursSpinBox, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        allowLabel = new QLabel(ModifyConstraintStudentsMinHoursDailyForm_template);
        allowLabel->setObjectName(QStringLiteral("allowLabel"));
        allowLabel->setText(QStringLiteral("Label"));

        gridLayout->addWidget(allowLabel, 4, 0, 1, 3);

        allowEmptyDaysCheckBox = new QCheckBox(ModifyConstraintStudentsMinHoursDailyForm_template);
        allowEmptyDaysCheckBox->setObjectName(QStringLiteral("allowEmptyDaysCheckBox"));
        allowEmptyDaysCheckBox->setCheckable(true);
        allowEmptyDaysCheckBox->setChecked(false);

        gridLayout->addWidget(allowEmptyDaysCheckBox, 5, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okPushButton = new QPushButton(ModifyConstraintStudentsMinHoursDailyForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsMinHoursDailyForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 3);


        retranslateUi(ModifyConstraintStudentsMinHoursDailyForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsMinHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsMinHoursDailyForm_template)
    {
        ModifyConstraintStudentsMinHoursDailyForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsMinHoursDailyForm_template", "Modify students min hours daily", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsMinHoursDailyForm_template", "Weight percentage (necessary: 100%)", 0));
        minHoursTextLabel->setText(QApplication::translate("ModifyConstraintStudentsMinHoursDailyForm_template", "Min hours", 0));
        allowEmptyDaysCheckBox->setText(QApplication::translate("ModifyConstraintStudentsMinHoursDailyForm_template", "Allow empty days", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsMinHoursDailyForm_template", "OK", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsMinHoursDailyForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsMinHoursDailyForm_template: public Ui_ModifyConstraintStudentsMinHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSMINHOURSDAILYFORM_TEMPLATE_H
