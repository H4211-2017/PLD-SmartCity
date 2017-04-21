/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentssetmaxdaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSSETMAXDAYSPERWEEKFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSSETMAXDAYSPERWEEKFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsSetMaxDaysPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
    QHBoxLayout *hboxLayout;
    QLabel *maxDaysTextLabel;
    QSpinBox *maxDaysSpinBox;
    QHBoxLayout *hboxLayout1;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;
    QSpacerItem *spacer7;
    QSpacerItem *spacer8;
    QHBoxLayout *hboxLayout2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;

    void setupUi(QDialog *ModifyConstraintStudentsSetMaxDaysPerWeekForm_template)
    {
        if (ModifyConstraintStudentsSetMaxDaysPerWeekForm_template->objectName().isEmpty())
            ModifyConstraintStudentsSetMaxDaysPerWeekForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsSetMaxDaysPerWeekForm_template"));
        ModifyConstraintStudentsSetMaxDaysPerWeekForm_template->resize(526, 400);
        gridLayout = new QGridLayout(ModifyConstraintStudentsSetMaxDaysPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        studentsTextLabel = new QLabel(ModifyConstraintStudentsSetMaxDaysPerWeekForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        vboxLayout->addWidget(studentsTextLabel);

        studentsComboBox = new QComboBox(ModifyConstraintStudentsSetMaxDaysPerWeekForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));
        studentsComboBox->setEditable(false);
        studentsComboBox->setInsertPolicy(QComboBox::NoInsert);
        studentsComboBox->setAutoCompletion(false);
        studentsComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(studentsComboBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        maxDaysTextLabel = new QLabel(ModifyConstraintStudentsSetMaxDaysPerWeekForm_template);
        maxDaysTextLabel->setObjectName(QStringLiteral("maxDaysTextLabel"));
        maxDaysTextLabel->setFrameShape(QFrame::NoFrame);
        maxDaysTextLabel->setFrameShadow(QFrame::Plain);
        maxDaysTextLabel->setWordWrap(false);

        hboxLayout->addWidget(maxDaysTextLabel);

        maxDaysSpinBox = new QSpinBox(ModifyConstraintStudentsSetMaxDaysPerWeekForm_template);
        maxDaysSpinBox->setObjectName(QStringLiteral("maxDaysSpinBox"));

        hboxLayout->addWidget(maxDaysSpinBox);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        okPushButton = new QPushButton(ModifyConstraintStudentsSetMaxDaysPerWeekForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout1->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsSetMaxDaysPerWeekForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout1->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout1, 5, 0, 1, 2);

        spacer7 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer7, 3, 0, 1, 1);

        spacer8 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer8, 1, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsSetMaxDaysPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsSetMaxDaysPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout2->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout2, 4, 0, 1, 1);


        retranslateUi(ModifyConstraintStudentsSetMaxDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsSetMaxDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsSetMaxDaysPerWeekForm_template)
    {
        ModifyConstraintStudentsSetMaxDaysPerWeekForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsSetMaxDaysPerWeekForm_template", "Modify students set max days per week", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetMaxDaysPerWeekForm_template", "Students set", 0));
        maxDaysTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetMaxDaysPerWeekForm_template", "Max days per week", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetMaxDaysPerWeekForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetMaxDaysPerWeekForm_template", "Cancel", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetMaxDaysPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsSetMaxDaysPerWeekForm_template: public Ui_ModifyConstraintStudentsSetMaxDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSSETMAXDAYSPERWEEKFORM_TEMPLATE_H
