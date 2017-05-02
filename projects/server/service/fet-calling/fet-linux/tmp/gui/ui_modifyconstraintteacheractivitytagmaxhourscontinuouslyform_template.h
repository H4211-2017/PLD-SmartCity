/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteacheractivitytagmaxhourscontinuouslyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERACTIVITYTAGMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERACTIVITYTAGMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template
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

    void setupUi(QDialog *ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template)
    {
        if (ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template->objectName().isEmpty())
            ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template->setObjectName(QStringLiteral("ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template"));
        ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template->resize(490, 282);
        gridLayout = new QGridLayout(ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        activityTagTextLabel = new QLabel(ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template);
        activityTagTextLabel->setObjectName(QStringLiteral("activityTagTextLabel"));
        activityTagTextLabel->setFrameShape(QFrame::NoFrame);
        activityTagTextLabel->setFrameShadow(QFrame::Plain);
        activityTagTextLabel->setWordWrap(false);

        gridLayout1->addWidget(activityTagTextLabel, 2, 0, 1, 1);

        teachersComboBox = new QComboBox(ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        gridLayout1->addWidget(teachersComboBox, 1, 0, 1, 1);

        teacherTextLabel = new QLabel(ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        gridLayout1->addWidget(teacherTextLabel, 0, 0, 1, 1);

        activityTagsComboBox = new QComboBox(ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template);
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
        weightTextLabel = new QLabel(ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        maxHoursTextLabel = new QLabel(ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template);
        maxHoursTextLabel->setObjectName(QStringLiteral("maxHoursTextLabel"));
        maxHoursTextLabel->setFrameShape(QFrame::NoFrame);
        maxHoursTextLabel->setFrameShadow(QFrame::Plain);
        maxHoursTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(maxHoursTextLabel);

        maxHoursSpinBox = new QSpinBox(ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template);
        maxHoursSpinBox->setObjectName(QStringLiteral("maxHoursSpinBox"));

        horizontalLayout->addWidget(maxHoursSpinBox);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 1);


        retranslateUi(ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template)
    {
        ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template", "Modify teacher activity tag max hours continuously", 0));
        activityTagTextLabel->setText(QApplication::translate("ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template", "Activity tag", 0));
        teacherTextLabel->setText(QApplication::translate("ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template", "Teacher", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        maxHoursTextLabel->setText(QApplication::translate("ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template", "Max hours continuously", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template: public Ui_ModifyConstraintTeacherActivityTagMaxHoursContinuouslyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERACTIVITYTAGMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
