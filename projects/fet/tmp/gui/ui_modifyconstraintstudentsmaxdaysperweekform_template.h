/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentsmaxdaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSMAXDAYSPERWEEKFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSMAXDAYSPERWEEKFORM_TEMPLATE_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintStudentsMaxDaysPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *maxDaysTextLabel;
    QSpinBox *maxDaysSpinBox;
    QSpacerItem *spacer7;
    QHBoxLayout *hboxLayout1;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;
    QSpacerItem *spacer8;
    QHBoxLayout *hboxLayout2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;

    void setupUi(QDialog *ModifyConstraintStudentsMaxDaysPerWeekForm_template)
    {
        if (ModifyConstraintStudentsMaxDaysPerWeekForm_template->objectName().isEmpty())
            ModifyConstraintStudentsMaxDaysPerWeekForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsMaxDaysPerWeekForm_template"));
        ModifyConstraintStudentsMaxDaysPerWeekForm_template->resize(469, 314);
        gridLayout = new QGridLayout(ModifyConstraintStudentsMaxDaysPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        maxDaysTextLabel = new QLabel(ModifyConstraintStudentsMaxDaysPerWeekForm_template);
        maxDaysTextLabel->setObjectName(QStringLiteral("maxDaysTextLabel"));
        maxDaysTextLabel->setFrameShape(QFrame::NoFrame);
        maxDaysTextLabel->setFrameShadow(QFrame::Plain);
        maxDaysTextLabel->setWordWrap(false);

        hboxLayout->addWidget(maxDaysTextLabel);

        maxDaysSpinBox = new QSpinBox(ModifyConstraintStudentsMaxDaysPerWeekForm_template);
        maxDaysSpinBox->setObjectName(QStringLiteral("maxDaysSpinBox"));

        hboxLayout->addWidget(maxDaysSpinBox);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        spacer7 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer7, 2, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        okPushButton = new QPushButton(ModifyConstraintStudentsMaxDaysPerWeekForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout1->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsMaxDaysPerWeekForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout1->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout1, 4, 0, 1, 2);

        spacer8 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer8, 0, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsMaxDaysPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsMaxDaysPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout2->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout2, 3, 0, 1, 1);


        retranslateUi(ModifyConstraintStudentsMaxDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsMaxDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsMaxDaysPerWeekForm_template)
    {
        ModifyConstraintStudentsMaxDaysPerWeekForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsMaxDaysPerWeekForm_template", "Modify students max days per week", 0));
        maxDaysTextLabel->setText(QApplication::translate("ModifyConstraintStudentsMaxDaysPerWeekForm_template", "Max days per week", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsMaxDaysPerWeekForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsMaxDaysPerWeekForm_template", "Cancel", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsMaxDaysPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsMaxDaysPerWeekForm_template: public Ui_ModifyConstraintStudentsMaxDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSMAXDAYSPERWEEKFORM_TEMPLATE_H
