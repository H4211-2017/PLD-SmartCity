/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachersmaxbuildingchangesperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERSMAXBUILDINGCHANGESPERWEEKFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERSMAXBUILDINGCHANGESPERWEEKFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout1;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel;
    QSpinBox *maxChangesSpinBox;

    void setupUi(QDialog *ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template)
    {
        if (ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template->objectName().isEmpty())
            ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template->setObjectName(QStringLiteral("ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template"));
        ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template->resize(398, 182);
        gridLayout = new QGridLayout(ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        okPushButton = new QPushButton(ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout1->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout1->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 2);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        textLabel = new QLabel(ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setWordWrap(false);

        hboxLayout2->addWidget(textLabel);

        maxChangesSpinBox = new QSpinBox(ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template);
        maxChangesSpinBox->setObjectName(QStringLiteral("maxChangesSpinBox"));

        hboxLayout2->addWidget(maxChangesSpinBox);


        gridLayout->addLayout(hboxLayout2, 1, 0, 1, 1);


        retranslateUi(ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template)
    {
        ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template", "Modify teachers max building changes per week", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template", "Weight percentage\n"
"(necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template", "Cancel", 0));
        textLabel->setText(QApplication::translate("ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template", "Max building changes per week", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template: public Ui_ModifyConstraintTeachersMaxBuildingChangesPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERSMAXBUILDINGCHANGESPERWEEKFORM_TEMPLATE_H
