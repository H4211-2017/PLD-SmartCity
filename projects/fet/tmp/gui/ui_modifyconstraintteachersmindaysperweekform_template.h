/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachersmindaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERSMINDAYSPERWEEKFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERSMINDAYSPERWEEKFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeachersMinDaysPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *minDaysTextLabel;
    QSpinBox *minDaysSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintTeachersMinDaysPerWeekForm_template)
    {
        if (ModifyConstraintTeachersMinDaysPerWeekForm_template->objectName().isEmpty())
            ModifyConstraintTeachersMinDaysPerWeekForm_template->setObjectName(QStringLiteral("ModifyConstraintTeachersMinDaysPerWeekForm_template"));
        ModifyConstraintTeachersMinDaysPerWeekForm_template->resize(411, 182);
        gridLayout = new QGridLayout(ModifyConstraintTeachersMinDaysPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(ModifyConstraintTeachersMinDaysPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeachersMinDaysPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minDaysTextLabel = new QLabel(ModifyConstraintTeachersMinDaysPerWeekForm_template);
        minDaysTextLabel->setObjectName(QStringLiteral("minDaysTextLabel"));
        minDaysTextLabel->setFrameShape(QFrame::NoFrame);
        minDaysTextLabel->setFrameShadow(QFrame::Plain);
        minDaysTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(minDaysTextLabel);

        minDaysSpinBox = new QSpinBox(ModifyConstraintTeachersMinDaysPerWeekForm_template);
        minDaysSpinBox->setObjectName(QStringLiteral("minDaysSpinBox"));

        horizontalLayout_2->addWidget(minDaysSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        okPushButton = new QPushButton(ModifyConstraintTeachersMinDaysPerWeekForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout_3->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeachersMinDaysPerWeekForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout_3->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(ModifyConstraintTeachersMinDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeachersMinDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeachersMinDaysPerWeekForm_template)
    {
        ModifyConstraintTeachersMinDaysPerWeekForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeachersMinDaysPerWeekForm_template", "Modify teachers min days per week", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeachersMinDaysPerWeekForm_template", "Weight percentage\n"
"(necessary: 100%)", 0));
        minDaysTextLabel->setText(QApplication::translate("ModifyConstraintTeachersMinDaysPerWeekForm_template", "Min days per week", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeachersMinDaysPerWeekForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeachersMinDaysPerWeekForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeachersMinDaysPerWeekForm_template: public Ui_ModifyConstraintTeachersMinDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERSMINDAYSPERWEEKFORM_TEMPLATE_H
