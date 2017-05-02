/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentssetmaxbuildingchangesperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSSETMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSSETMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template
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

    void setupUi(QDialog *ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template)
    {
        if (ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template->objectName().isEmpty())
            ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template"));
        ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template->resize(539, 287);
        gridLayout = new QGridLayout(ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        studentsTextLabel = new QLabel(ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        vboxLayout->addWidget(studentsTextLabel);

        studentsComboBox = new QComboBox(ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template);
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
        weightTextLabel = new QLabel(ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        okPushButton = new QPushButton(ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout1->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout1->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout1, 4, 0, 1, 2);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        textLabel = new QLabel(ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setWordWrap(false);

        hboxLayout2->addWidget(textLabel);

        maxChangesSpinBox = new QSpinBox(ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template);
        maxChangesSpinBox->setObjectName(QStringLiteral("maxChangesSpinBox"));

        hboxLayout2->addWidget(maxChangesSpinBox);


        gridLayout->addLayout(hboxLayout2, 3, 0, 1, 1);


        retranslateUi(ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template)
    {
        ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template", "Modify students set max building changes per day", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template", "Students", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template", "Weight percentage (necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template", "Cancel", 0));
        textLabel->setText(QApplication::translate("ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template", "Max building changes per day", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template: public Ui_ModifyConstraintStudentsSetMaxBuildingChangesPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSSETMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H
