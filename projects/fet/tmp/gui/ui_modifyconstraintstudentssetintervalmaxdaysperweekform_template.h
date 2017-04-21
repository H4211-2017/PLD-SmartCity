/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentssetintervalmaxdaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSSETINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSSETINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;
    QVBoxLayout *vboxLayout;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
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

    void setupUi(QDialog *ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template)
    {
        if (ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template->objectName().isEmpty())
            ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template"));
        ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template->resize(526, 400);
        gridLayout = new QGridLayout(ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 8, 0, 1, 2);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        studentsTextLabel = new QLabel(ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        vboxLayout->addWidget(studentsTextLabel);

        studentsComboBox = new QComboBox(ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));
        studentsComboBox->setEditable(false);
        studentsComboBox->setInsertPolicy(QComboBox::NoInsert);
        studentsComboBox->setAutoCompletion(false);
        studentsComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(studentsComboBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout1->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout1, 7, 0, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        startTextLabel = new QLabel(ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        startTextLabel->setObjectName(QStringLiteral("startTextLabel"));
        startTextLabel->setFrameShape(QFrame::NoFrame);
        startTextLabel->setFrameShadow(QFrame::Plain);
        startTextLabel->setWordWrap(false);

        vboxLayout1->addWidget(startTextLabel);

        startHourComboBox = new QComboBox(ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
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
        endTextLabel = new QLabel(ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        endTextLabel->setObjectName(QStringLiteral("endTextLabel"));
        endTextLabel->setFrameShape(QFrame::NoFrame);
        endTextLabel->setFrameShadow(QFrame::Plain);
        endTextLabel->setWordWrap(false);

        vboxLayout2->addWidget(endTextLabel);

        endHourComboBox = new QComboBox(ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
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
        maxDaysTextLabel = new QLabel(ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        maxDaysTextLabel->setObjectName(QStringLiteral("maxDaysTextLabel"));
        maxDaysTextLabel->setFrameShape(QFrame::NoFrame);
        maxDaysTextLabel->setFrameShadow(QFrame::Plain);
        maxDaysTextLabel->setWordWrap(false);

        hboxLayout2->addWidget(maxDaysTextLabel);

        maxDaysSpinBox = new QSpinBox(ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
        maxDaysSpinBox->setObjectName(QStringLiteral("maxDaysSpinBox"));

        hboxLayout2->addWidget(maxDaysSpinBox);


        gridLayout->addLayout(hboxLayout2, 5, 0, 1, 1);


        retranslateUi(ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template)
    {
        ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template", "Modify students set interval max days per week", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template", "Cancel", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template", "Students set", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        startTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template", "Interval start hour", 0));
        endTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template", "Interval end hour", 0));
        maxDaysTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template", "Max days per week", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template: public Ui_ModifyConstraintStudentsSetIntervalMaxDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSSETINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H
