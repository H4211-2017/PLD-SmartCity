/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentssetmaxbuildingchangesperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSSETMAXBUILDINGCHANGESPERWEEKFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSSETMAXBUILDINGCHANGESPERWEEKFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
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

    void setupUi(QDialog *ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template)
    {
        if (ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template->objectName().isEmpty())
            ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template"));
        ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template->resize(561, 287);
        gridLayout = new QGridLayout(ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        studentsTextLabel = new QLabel(ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        vboxLayout->addWidget(studentsTextLabel);

        studentsComboBox = new QComboBox(ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));
        studentsComboBox->setEditable(false);
        studentsComboBox->setInsertPolicy(QComboBox::NoInsert);
        studentsComboBox->setAutoCompletion(false);
        studentsComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(studentsComboBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        spacer2 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer2, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        okPushButton = new QPushButton(ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout1->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout1->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout1, 4, 0, 1, 2);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        textLabel = new QLabel(ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setWordWrap(false);

        hboxLayout2->addWidget(textLabel);

        maxChangesSpinBox = new QSpinBox(ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
        maxChangesSpinBox->setObjectName(QStringLiteral("maxChangesSpinBox"));

        hboxLayout2->addWidget(maxChangesSpinBox);


        gridLayout->addLayout(hboxLayout2, 3, 0, 1, 1);


        retranslateUi(ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template)
    {
        ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template", "Modify students set max building changes per week", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template", "Students", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template", "Cancel", 0));
        textLabel->setText(QApplication::translate("ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template", "Max building changes per week", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template: public Ui_ModifyConstraintStudentsSetMaxBuildingChangesPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSSETMAXBUILDINGCHANGESPERWEEKFORM_TEMPLATE_H
