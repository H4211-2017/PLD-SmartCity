/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentsmingapsbetweenbuildingchangesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template
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
    QSpinBox *minGapsSpinBox;

    void setupUi(QDialog *ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template)
    {
        if (ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template->objectName().isEmpty())
            ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template"));
        ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template->resize(508, 218);
        gridLayout = new QGridLayout(ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        okPushButton = new QPushButton(ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout1->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout1->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 2);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        textLabel = new QLabel(ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setWordWrap(false);

        hboxLayout2->addWidget(textLabel);

        minGapsSpinBox = new QSpinBox(ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template);
        minGapsSpinBox->setObjectName(QStringLiteral("minGapsSpinBox"));

        hboxLayout2->addWidget(minGapsSpinBox);


        gridLayout->addLayout(hboxLayout2, 1, 0, 1, 1);


        retranslateUi(ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template)
    {
        ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template", "Modify students min gaps between building changes", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template", "Weight percentage (necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template", "Cancel", 0));
        textLabel->setText(QApplication::translate("ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template", "Min gaps between building changes", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template: public Ui_ModifyConstraintStudentsMinGapsBetweenBuildingChangesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H
