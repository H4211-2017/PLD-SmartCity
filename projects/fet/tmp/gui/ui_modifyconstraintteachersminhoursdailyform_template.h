/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachersminhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERSMINHOURSDAILYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERSMINHOURSDAILYFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeachersMinHoursDailyForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *teacherTextLabel_2;
    QSpacerItem *verticalSpacer;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QLabel *minHoursTextLabel;
    QSpinBox *minHoursSpinBox;
    QCheckBox *allowEmptyDaysCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintTeachersMinHoursDailyForm_template)
    {
        if (ModifyConstraintTeachersMinHoursDailyForm_template->objectName().isEmpty())
            ModifyConstraintTeachersMinHoursDailyForm_template->setObjectName(QStringLiteral("ModifyConstraintTeachersMinHoursDailyForm_template"));
        ModifyConstraintTeachersMinHoursDailyForm_template->resize(518, 288);
        gridLayout = new QGridLayout(ModifyConstraintTeachersMinHoursDailyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teacherTextLabel_2 = new QLabel(ModifyConstraintTeachersMinHoursDailyForm_template);
        teacherTextLabel_2->setObjectName(QStringLiteral("teacherTextLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teacherTextLabel_2->sizePolicy().hasHeightForWidth());
        teacherTextLabel_2->setSizePolicy(sizePolicy);
        teacherTextLabel_2->setFrameShape(QFrame::NoFrame);
        teacherTextLabel_2->setFrameShadow(QFrame::Plain);
        teacherTextLabel_2->setWordWrap(true);

        gridLayout->addWidget(teacherTextLabel_2, 0, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        weightTextLabel = new QLabel(ModifyConstraintTeachersMinHoursDailyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 2, 0, 1, 2);

        weightLineEdit = new QLineEdit(ModifyConstraintTeachersMinHoursDailyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 2, 2, 1, 1);

        minHoursTextLabel = new QLabel(ModifyConstraintTeachersMinHoursDailyForm_template);
        minHoursTextLabel->setObjectName(QStringLiteral("minHoursTextLabel"));
        minHoursTextLabel->setFrameShape(QFrame::NoFrame);
        minHoursTextLabel->setFrameShadow(QFrame::Plain);
        minHoursTextLabel->setWordWrap(false);

        gridLayout->addWidget(minHoursTextLabel, 3, 0, 1, 1);

        minHoursSpinBox = new QSpinBox(ModifyConstraintTeachersMinHoursDailyForm_template);
        minHoursSpinBox->setObjectName(QStringLiteral("minHoursSpinBox"));

        gridLayout->addWidget(minHoursSpinBox, 3, 2, 1, 1);

        allowEmptyDaysCheckBox = new QCheckBox(ModifyConstraintTeachersMinHoursDailyForm_template);
        allowEmptyDaysCheckBox->setObjectName(QStringLiteral("allowEmptyDaysCheckBox"));
        allowEmptyDaysCheckBox->setChecked(true);

        gridLayout->addWidget(allowEmptyDaysCheckBox, 4, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okPushButton = new QPushButton(ModifyConstraintTeachersMinHoursDailyForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeachersMinHoursDailyForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 3);


        retranslateUi(ModifyConstraintTeachersMinHoursDailyForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeachersMinHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeachersMinHoursDailyForm_template)
    {
        ModifyConstraintTeachersMinHoursDailyForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeachersMinHoursDailyForm_template", "Modify teachers min hours daily", 0));
        teacherTextLabel_2->setText(QApplication::translate("ModifyConstraintTeachersMinHoursDailyForm_template", "It is recommended to start with 2 min hours. Maybe you could try higher values after that, but they might be too large and you might get a impossible timetable.", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeachersMinHoursDailyForm_template", "Weight percentage (necessary: 100%)", 0));
        minHoursTextLabel->setText(QApplication::translate("ModifyConstraintTeachersMinHoursDailyForm_template", "Min hours daily", 0));
        allowEmptyDaysCheckBox->setText(QApplication::translate("ModifyConstraintTeachersMinHoursDailyForm_template", "Allow empty days", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeachersMinHoursDailyForm_template", "OK", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeachersMinHoursDailyForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeachersMinHoursDailyForm_template: public Ui_ModifyConstraintTeachersMinHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERSMINHOURSDAILYFORM_TEMPLATE_H
