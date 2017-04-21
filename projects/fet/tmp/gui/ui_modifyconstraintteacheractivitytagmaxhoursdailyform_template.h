/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteacheractivitytagmaxhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERACTIVITYTAGMAXHOURSDAILYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERACTIVITYTAGMAXHOURSDAILYFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QLabel *activityTagTextLabel;
    QComboBox *teachersComboBox;
    QLabel *teacherTextLabel;
    QComboBox *activityTagsComboBox;
    QSpacerItem *spacer7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *maxHoursTextLabel;
    QSpinBox *maxHoursSpinBox;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template)
    {
        if (ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template->objectName().isEmpty())
            ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template->setObjectName(QStringLiteral("ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template"));
        ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template->resize(490, 282);
        gridLayout = new QGridLayout(ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        activityTagTextLabel = new QLabel(ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template);
        activityTagTextLabel->setObjectName(QStringLiteral("activityTagTextLabel"));
        activityTagTextLabel->setFrameShape(QFrame::NoFrame);
        activityTagTextLabel->setFrameShadow(QFrame::Plain);
        activityTagTextLabel->setWordWrap(false);

        gridLayout1->addWidget(activityTagTextLabel, 2, 0, 1, 1);

        teachersComboBox = new QComboBox(ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        gridLayout1->addWidget(teachersComboBox, 1, 0, 1, 1);

        teacherTextLabel = new QLabel(ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        gridLayout1->addWidget(teacherTextLabel, 0, 0, 1, 1);

        activityTagsComboBox = new QComboBox(ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));
        activityTagsComboBox->setEditable(false);
        activityTagsComboBox->setInsertPolicy(QComboBox::NoInsert);
        activityTagsComboBox->setAutoCompletion(false);
        activityTagsComboBox->setDuplicatesEnabled(false);

        gridLayout1->addWidget(activityTagsComboBox, 3, 0, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        spacer7 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer7, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        maxHoursTextLabel = new QLabel(ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template);
        maxHoursTextLabel->setObjectName(QStringLiteral("maxHoursTextLabel"));
        maxHoursTextLabel->setFrameShape(QFrame::NoFrame);
        maxHoursTextLabel->setFrameShadow(QFrame::Plain);
        maxHoursTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(maxHoursTextLabel);

        maxHoursSpinBox = new QSpinBox(ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template);
        maxHoursSpinBox->setObjectName(QStringLiteral("maxHoursSpinBox"));

        horizontalLayout->addWidget(maxHoursSpinBox);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 1);


        retranslateUi(ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template)
    {
        ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template", "Modify teacher activity tag max hours daily", 0));
        activityTagTextLabel->setText(QApplication::translate("ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template", "Activity tag", 0));
        teacherTextLabel->setText(QApplication::translate("ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template", "Teacher", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        maxHoursTextLabel->setText(QApplication::translate("ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template", "Max hours daily", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template: public Ui_ModifyConstraintTeacherActivityTagMaxHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERACTIVITYTAGMAXHOURSDAILYFORM_TEMPLATE_H
