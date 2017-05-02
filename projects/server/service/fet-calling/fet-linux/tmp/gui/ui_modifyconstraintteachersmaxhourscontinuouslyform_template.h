/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachersmaxhourscontinuouslyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERSMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERSMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeachersMaxHoursContinuouslyForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *maxHoursTextLabel;
    QSpinBox *maxHoursSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintTeachersMaxHoursContinuouslyForm_template)
    {
        if (ModifyConstraintTeachersMaxHoursContinuouslyForm_template->objectName().isEmpty())
            ModifyConstraintTeachersMaxHoursContinuouslyForm_template->setObjectName(QStringLiteral("ModifyConstraintTeachersMaxHoursContinuouslyForm_template"));
        ModifyConstraintTeachersMaxHoursContinuouslyForm_template->resize(434, 167);
        gridLayout = new QGridLayout(ModifyConstraintTeachersMaxHoursContinuouslyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(ModifyConstraintTeachersMaxHoursContinuouslyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeachersMaxHoursContinuouslyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        maxHoursTextLabel = new QLabel(ModifyConstraintTeachersMaxHoursContinuouslyForm_template);
        maxHoursTextLabel->setObjectName(QStringLiteral("maxHoursTextLabel"));
        maxHoursTextLabel->setFrameShape(QFrame::NoFrame);
        maxHoursTextLabel->setFrameShadow(QFrame::Plain);
        maxHoursTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(maxHoursTextLabel);

        maxHoursSpinBox = new QSpinBox(ModifyConstraintTeachersMaxHoursContinuouslyForm_template);
        maxHoursSpinBox->setObjectName(QStringLiteral("maxHoursSpinBox"));

        horizontalLayout_2->addWidget(maxHoursSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        okPushButton = new QPushButton(ModifyConstraintTeachersMaxHoursContinuouslyForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout_3->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeachersMaxHoursContinuouslyForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_3->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(ModifyConstraintTeachersMaxHoursContinuouslyForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeachersMaxHoursContinuouslyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeachersMaxHoursContinuouslyForm_template)
    {
        ModifyConstraintTeachersMaxHoursContinuouslyForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeachersMaxHoursContinuouslyForm_template", "Modify teachers max hours continuously", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeachersMaxHoursContinuouslyForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        maxHoursTextLabel->setText(QApplication::translate("ModifyConstraintTeachersMaxHoursContinuouslyForm_template", "Max hours continuously", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeachersMaxHoursContinuouslyForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeachersMaxHoursContinuouslyForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeachersMaxHoursContinuouslyForm_template: public Ui_ModifyConstraintTeachersMaxHoursContinuouslyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERSMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
