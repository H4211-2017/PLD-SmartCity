/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteacherintervalmaxdaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;
    QVBoxLayout *vboxLayout;
    QLabel *teacherTextLabel;
    QComboBox *teachersComboBox;
    QHBoxLayout *hboxLayout1;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QVBoxLayout *vboxLayout1;
    QLabel *startTextLabel;
    QComboBox *startHourComboBox;
    QVBoxLayout *vboxLayout2;
    QLabel *endTextLabel;
    QComboBox *endHourComboBox;
    QSpacerItem *spacer9;
    QSpacerItem *spacer8;
    QSpacerItem *spacer7;
    QHBoxLayout *hboxLayout2;
    QLabel *maxDaysTextLabel;
    QSpinBox *maxDaysSpinBox;

    void setupUi(QDialog *ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template)
    {
        if (ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template->objectName().isEmpty())
            ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template->setObjectName(QStringLiteral("ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template"));
        ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template->resize(527, 387);
        gridLayout = new QGridLayout(ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 8, 0, 1, 2);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        teacherTextLabel = new QLabel(ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        vboxLayout->addWidget(teacherTextLabel);

        teachersComboBox = new QComboBox(ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(teachersComboBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        weightTextLabel = new QLabel(ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout1->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout1, 7, 0, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        startTextLabel = new QLabel(ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        startTextLabel->setObjectName(QStringLiteral("startTextLabel"));
        startTextLabel->setFrameShape(QFrame::NoFrame);
        startTextLabel->setFrameShadow(QFrame::Plain);
        startTextLabel->setWordWrap(false);

        vboxLayout1->addWidget(startTextLabel);

        startHourComboBox = new QComboBox(ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        startHourComboBox->setObjectName(QStringLiteral("startHourComboBox"));
        startHourComboBox->setEditable(false);
        startHourComboBox->setInsertPolicy(QComboBox::NoInsert);
        startHourComboBox->setAutoCompletion(false);
        startHourComboBox->setDuplicatesEnabled(false);

        vboxLayout1->addWidget(startHourComboBox);


        gridLayout->addLayout(vboxLayout1, 2, 0, 1, 1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        endTextLabel = new QLabel(ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        endTextLabel->setObjectName(QStringLiteral("endTextLabel"));
        endTextLabel->setFrameShape(QFrame::NoFrame);
        endTextLabel->setFrameShadow(QFrame::Plain);
        endTextLabel->setWordWrap(false);

        vboxLayout2->addWidget(endTextLabel);

        endHourComboBox = new QComboBox(ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        endHourComboBox->setObjectName(QStringLiteral("endHourComboBox"));
        endHourComboBox->setEditable(false);
        endHourComboBox->setInsertPolicy(QComboBox::NoInsert);
        endHourComboBox->setAutoCompletion(false);
        endHourComboBox->setDuplicatesEnabled(false);

        vboxLayout2->addWidget(endHourComboBox);


        gridLayout->addLayout(vboxLayout2, 3, 0, 1, 1);

        spacer9 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer9, 1, 0, 1, 1);

        spacer8 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer8, 4, 0, 1, 1);

        spacer7 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer7, 6, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        maxDaysTextLabel = new QLabel(ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        maxDaysTextLabel->setObjectName(QStringLiteral("maxDaysTextLabel"));
        maxDaysTextLabel->setFrameShape(QFrame::NoFrame);
        maxDaysTextLabel->setFrameShadow(QFrame::Plain);
        maxDaysTextLabel->setWordWrap(false);

        hboxLayout2->addWidget(maxDaysTextLabel);

        maxDaysSpinBox = new QSpinBox(ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        maxDaysSpinBox->setObjectName(QStringLiteral("maxDaysSpinBox"));

        hboxLayout2->addWidget(maxDaysSpinBox);


        gridLayout->addLayout(hboxLayout2, 5, 0, 1, 1);


        retranslateUi(ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template)
    {
        ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template", "Modify teacher interval max days per week", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template", "Cancel", 0));
        teacherTextLabel->setText(QApplication::translate("ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template", "Teacher", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        startTextLabel->setText(QApplication::translate("ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template", "Interval start hour", 0));
        endTextLabel->setText(QApplication::translate("ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template", "Interval end hour", 0));
        maxDaysTextLabel->setText(QApplication::translate("ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template", "Max days per week", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template: public Ui_ModifyConstraintTeacherIntervalMaxDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H
