/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteacherminhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERMINHOURSDAILYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERMINHOURSDAILYFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeacherMinHoursDailyForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *teacherTextLabel_2;
    QSpacerItem *verticalSpacer;
    QLabel *teacherTextLabel;
    QComboBox *teachersComboBox;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QLabel *minHoursTextLabel;
    QSpinBox *minHoursSpinBox;
    QCheckBox *allowEmptyDaysCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintTeacherMinHoursDailyForm_template)
    {
        if (ModifyConstraintTeacherMinHoursDailyForm_template->objectName().isEmpty())
            ModifyConstraintTeacherMinHoursDailyForm_template->setObjectName(QStringLiteral("ModifyConstraintTeacherMinHoursDailyForm_template"));
        ModifyConstraintTeacherMinHoursDailyForm_template->resize(519, 301);
        gridLayout = new QGridLayout(ModifyConstraintTeacherMinHoursDailyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teacherTextLabel_2 = new QLabel(ModifyConstraintTeacherMinHoursDailyForm_template);
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

        verticalSpacer = new QSpacerItem(20, 66, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        teacherTextLabel = new QLabel(ModifyConstraintTeacherMinHoursDailyForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        gridLayout->addWidget(teacherTextLabel, 2, 0, 1, 3);

        teachersComboBox = new QComboBox(ModifyConstraintTeacherMinHoursDailyForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        gridLayout->addWidget(teachersComboBox, 3, 0, 1, 3);

        weightTextLabel = new QLabel(ModifyConstraintTeacherMinHoursDailyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 4, 0, 1, 2);

        weightLineEdit = new QLineEdit(ModifyConstraintTeacherMinHoursDailyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 4, 2, 1, 1);

        minHoursTextLabel = new QLabel(ModifyConstraintTeacherMinHoursDailyForm_template);
        minHoursTextLabel->setObjectName(QStringLiteral("minHoursTextLabel"));
        minHoursTextLabel->setFrameShape(QFrame::NoFrame);
        minHoursTextLabel->setFrameShadow(QFrame::Plain);
        minHoursTextLabel->setWordWrap(false);

        gridLayout->addWidget(minHoursTextLabel, 5, 0, 1, 1);

        minHoursSpinBox = new QSpinBox(ModifyConstraintTeacherMinHoursDailyForm_template);
        minHoursSpinBox->setObjectName(QStringLiteral("minHoursSpinBox"));

        gridLayout->addWidget(minHoursSpinBox, 5, 2, 1, 1);

        allowEmptyDaysCheckBox = new QCheckBox(ModifyConstraintTeacherMinHoursDailyForm_template);
        allowEmptyDaysCheckBox->setObjectName(QStringLiteral("allowEmptyDaysCheckBox"));
        allowEmptyDaysCheckBox->setChecked(true);

        gridLayout->addWidget(allowEmptyDaysCheckBox, 6, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okPushButton = new QPushButton(ModifyConstraintTeacherMinHoursDailyForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeacherMinHoursDailyForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 3);


        retranslateUi(ModifyConstraintTeacherMinHoursDailyForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeacherMinHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeacherMinHoursDailyForm_template)
    {
        ModifyConstraintTeacherMinHoursDailyForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeacherMinHoursDailyForm_template", "Modify teacher min hours daily", 0));
        teacherTextLabel_2->setText(QApplication::translate("ModifyConstraintTeacherMinHoursDailyForm_template", "It is recommended to start with 2 min hours and strenghen them as you find new timetables.", 0));
        teacherTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMinHoursDailyForm_template", "Teacher", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMinHoursDailyForm_template", "Weight percentage (necessary: 100%)", 0));
        minHoursTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMinHoursDailyForm_template", "Min hours daily", 0));
        allowEmptyDaysCheckBox->setText(QApplication::translate("ModifyConstraintTeacherMinHoursDailyForm_template", "Allow empty days", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeacherMinHoursDailyForm_template", "OK", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeacherMinHoursDailyForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeacherMinHoursDailyForm_template: public Ui_ModifyConstraintTeacherMinHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERMINHOURSDAILYFORM_TEMPLATE_H
