/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentsintervalmaxdaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;
    QHBoxLayout *hboxLayout1;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QVBoxLayout *vboxLayout;
    QLabel *startTextLabel;
    QComboBox *startHourComboBox;
    QVBoxLayout *vboxLayout1;
    QLabel *endTextLabel;
    QComboBox *endHourComboBox;
    QSpacerItem *spacer8;
    QSpacerItem *spacer7;
    QHBoxLayout *hboxLayout2;
    QLabel *maxDaysTextLabel;
    QSpinBox *maxDaysSpinBox;

    void setupUi(QDialog *ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template)
    {
        if (ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template->objectName().isEmpty())
            ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template"));
        ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template->resize(469, 314);
        gridLayout = new QGridLayout(ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout1->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout1, 5, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        startTextLabel = new QLabel(ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template);
        startTextLabel->setObjectName(QStringLiteral("startTextLabel"));
        startTextLabel->setFrameShape(QFrame::NoFrame);
        startTextLabel->setFrameShadow(QFrame::Plain);
        startTextLabel->setWordWrap(false);

        vboxLayout->addWidget(startTextLabel);

        startHourComboBox = new QComboBox(ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template);
        startHourComboBox->setObjectName(QStringLiteral("startHourComboBox"));
        startHourComboBox->setEditable(false);
        startHourComboBox->setInsertPolicy(QComboBox::NoInsert);
        startHourComboBox->setAutoCompletion(false);
        startHourComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(startHourComboBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        endTextLabel = new QLabel(ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template);
        endTextLabel->setObjectName(QStringLiteral("endTextLabel"));
        endTextLabel->setFrameShape(QFrame::NoFrame);
        endTextLabel->setFrameShadow(QFrame::Plain);
        endTextLabel->setWordWrap(false);

        vboxLayout1->addWidget(endTextLabel);

        endHourComboBox = new QComboBox(ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template);
        endHourComboBox->setObjectName(QStringLiteral("endHourComboBox"));
        endHourComboBox->setEditable(false);
        endHourComboBox->setInsertPolicy(QComboBox::NoInsert);
        endHourComboBox->setAutoCompletion(false);
        endHourComboBox->setDuplicatesEnabled(false);

        vboxLayout1->addWidget(endHourComboBox);


        gridLayout->addLayout(vboxLayout1, 1, 0, 1, 1);

        spacer8 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer8, 2, 0, 1, 1);

        spacer7 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer7, 4, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        maxDaysTextLabel = new QLabel(ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template);
        maxDaysTextLabel->setObjectName(QStringLiteral("maxDaysTextLabel"));
        maxDaysTextLabel->setFrameShape(QFrame::NoFrame);
        maxDaysTextLabel->setFrameShadow(QFrame::Plain);
        maxDaysTextLabel->setWordWrap(false);

        hboxLayout2->addWidget(maxDaysTextLabel);

        maxDaysSpinBox = new QSpinBox(ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template);
        maxDaysSpinBox->setObjectName(QStringLiteral("maxDaysSpinBox"));

        hboxLayout2->addWidget(maxDaysSpinBox);


        gridLayout->addLayout(hboxLayout2, 3, 0, 1, 1);


        retranslateUi(ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template)
    {
        ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template", "Modify students interval max days per week", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template", "Cancel", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        startTextLabel->setText(QApplication::translate("ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template", "Interval start hour", 0));
        endTextLabel->setText(QApplication::translate("ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template", "Interval end hour", 0));
        maxDaysTextLabel->setText(QApplication::translate("ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template", "Max days per week", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template: public Ui_ModifyConstraintStudentsIntervalMaxDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H
