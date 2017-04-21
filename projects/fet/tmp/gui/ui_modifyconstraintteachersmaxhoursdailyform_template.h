/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachersmaxhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERSMAXHOURSDAILYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERSMAXHOURSDAILYFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintTeachersMaxHoursDailyForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *maxHoursTextLabel;
    QSpinBox *maxHoursSpinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintTeachersMaxHoursDailyForm_template)
    {
        if (ModifyConstraintTeachersMaxHoursDailyForm_template->objectName().isEmpty())
            ModifyConstraintTeachersMaxHoursDailyForm_template->setObjectName(QStringLiteral("ModifyConstraintTeachersMaxHoursDailyForm_template"));
        ModifyConstraintTeachersMaxHoursDailyForm_template->resize(469, 167);
        gridLayout = new QGridLayout(ModifyConstraintTeachersMaxHoursDailyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        weightTextLabel = new QLabel(ModifyConstraintTeachersMaxHoursDailyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_3->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeachersMaxHoursDailyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_3->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        maxHoursTextLabel = new QLabel(ModifyConstraintTeachersMaxHoursDailyForm_template);
        maxHoursTextLabel->setObjectName(QStringLiteral("maxHoursTextLabel"));
        maxHoursTextLabel->setFrameShape(QFrame::NoFrame);
        maxHoursTextLabel->setFrameShadow(QFrame::Plain);
        maxHoursTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(maxHoursTextLabel);

        maxHoursSpinBox = new QSpinBox(ModifyConstraintTeachersMaxHoursDailyForm_template);
        maxHoursSpinBox->setObjectName(QStringLiteral("maxHoursSpinBox"));

        horizontalLayout_2->addWidget(maxHoursSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okPushButton = new QPushButton(ModifyConstraintTeachersMaxHoursDailyForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeachersMaxHoursDailyForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(ModifyConstraintTeachersMaxHoursDailyForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeachersMaxHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeachersMaxHoursDailyForm_template)
    {
        ModifyConstraintTeachersMaxHoursDailyForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeachersMaxHoursDailyForm_template", "Modify teachers max hours daily", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeachersMaxHoursDailyForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        maxHoursTextLabel->setText(QApplication::translate("ModifyConstraintTeachersMaxHoursDailyForm_template", "Max hours daily", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeachersMaxHoursDailyForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeachersMaxHoursDailyForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeachersMaxHoursDailyForm_template: public Ui_ModifyConstraintTeachersMaxHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERSMAXHOURSDAILYFORM_TEMPLATE_H
