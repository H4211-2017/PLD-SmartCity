/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachersmaxdaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERSMAXDAYSPERWEEKFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERSMAXDAYSPERWEEKFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeachersMaxDaysPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *maxDaysTextLabel;
    QSpinBox *maxDaysSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintTeachersMaxDaysPerWeekForm_template)
    {
        if (ModifyConstraintTeachersMaxDaysPerWeekForm_template->objectName().isEmpty())
            ModifyConstraintTeachersMaxDaysPerWeekForm_template->setObjectName(QStringLiteral("ModifyConstraintTeachersMaxDaysPerWeekForm_template"));
        ModifyConstraintTeachersMaxDaysPerWeekForm_template->resize(411, 182);
        gridLayout = new QGridLayout(ModifyConstraintTeachersMaxDaysPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(ModifyConstraintTeachersMaxDaysPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeachersMaxDaysPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        maxDaysTextLabel = new QLabel(ModifyConstraintTeachersMaxDaysPerWeekForm_template);
        maxDaysTextLabel->setObjectName(QStringLiteral("maxDaysTextLabel"));
        maxDaysTextLabel->setFrameShape(QFrame::NoFrame);
        maxDaysTextLabel->setFrameShadow(QFrame::Plain);
        maxDaysTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(maxDaysTextLabel);

        maxDaysSpinBox = new QSpinBox(ModifyConstraintTeachersMaxDaysPerWeekForm_template);
        maxDaysSpinBox->setObjectName(QStringLiteral("maxDaysSpinBox"));

        horizontalLayout_2->addWidget(maxDaysSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        okPushButton = new QPushButton(ModifyConstraintTeachersMaxDaysPerWeekForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout_3->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeachersMaxDaysPerWeekForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_3->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(ModifyConstraintTeachersMaxDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeachersMaxDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeachersMaxDaysPerWeekForm_template)
    {
        ModifyConstraintTeachersMaxDaysPerWeekForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeachersMaxDaysPerWeekForm_template", "Modify teachers max days per week", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeachersMaxDaysPerWeekForm_template", "Weight percentage\n"
"(necessary: 100%)", 0));
        maxDaysTextLabel->setText(QApplication::translate("ModifyConstraintTeachersMaxDaysPerWeekForm_template", "Max days per week", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeachersMaxDaysPerWeekForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeachersMaxDaysPerWeekForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeachersMaxDaysPerWeekForm_template: public Ui_ModifyConstraintTeachersMaxDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERSMAXDAYSPERWEEKFORM_TEMPLATE_H
