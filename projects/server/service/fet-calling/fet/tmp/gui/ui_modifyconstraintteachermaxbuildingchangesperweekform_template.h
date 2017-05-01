/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachermaxbuildingchangesperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERMAXBUILDINGCHANGESPERWEEKFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERMAXBUILDINGCHANGESPERWEEKFORM_TEMPLATE_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *studentsTextLabel;
    QComboBox *teachersComboBox;
    QSpacerItem *spacer2;
    QHBoxLayout *hboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout1;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel;
    QSpinBox *maxChangesSpinBox;

    void setupUi(QDialog *ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template)
    {
        if (ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template->objectName().isEmpty())
            ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template->setObjectName(QStringLiteral("ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template"));
        ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template->resize(499, 247);
        gridLayout = new QGridLayout(ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        studentsTextLabel = new QLabel(ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        vboxLayout->addWidget(studentsTextLabel);

        teachersComboBox = new QComboBox(ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(teachersComboBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        spacer2 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer2, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        okPushButton = new QPushButton(ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout1->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout1->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout1, 4, 0, 1, 2);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        textLabel = new QLabel(ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setWordWrap(false);

        hboxLayout2->addWidget(textLabel);

        maxChangesSpinBox = new QSpinBox(ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template);
        maxChangesSpinBox->setObjectName(QStringLiteral("maxChangesSpinBox"));

        hboxLayout2->addWidget(maxChangesSpinBox);


        gridLayout->addLayout(hboxLayout2, 3, 0, 1, 1);


        retranslateUi(ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template)
    {
        ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template", "Modify teacher max building changes per week", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template", "Teacher", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template", "Cancel", 0));
        textLabel->setText(QApplication::translate("ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template", "Max building changes per week", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template: public Ui_ModifyConstraintTeacherMaxBuildingChangesPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERMAXBUILDINGCHANGESPERWEEKFORM_TEMPLATE_H
