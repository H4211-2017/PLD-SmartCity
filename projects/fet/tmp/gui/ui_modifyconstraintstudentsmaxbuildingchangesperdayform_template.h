/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentsmaxbuildingchangesperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template
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

    void setupUi(QDialog *ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template)
    {
        if (ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template->objectName().isEmpty())
            ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template"));
        ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template->resize(448, 210);
        gridLayout = new QGridLayout(ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        okPushButton = new QPushButton(ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout1->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout1->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 2);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        textLabel = new QLabel(ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setWordWrap(false);

        hboxLayout2->addWidget(textLabel);

        maxChangesSpinBox = new QSpinBox(ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template);
        maxChangesSpinBox->setObjectName(QStringLiteral("maxChangesSpinBox"));

        hboxLayout2->addWidget(maxChangesSpinBox);


        gridLayout->addLayout(hboxLayout2, 1, 0, 1, 1);


        retranslateUi(ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template)
    {
        ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template", "Modify students max building changes per day", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template", "Weight percentage\n"
"(necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template", "Cancel", 0));
        textLabel->setText(QApplication::translate("ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template", "Max building changes per day", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template: public Ui_ModifyConstraintStudentsMaxBuildingChangesPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H
