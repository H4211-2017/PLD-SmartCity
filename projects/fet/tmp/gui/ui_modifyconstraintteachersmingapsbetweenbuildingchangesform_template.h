/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachersmingapsbetweenbuildingchangesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERSMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERSMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template
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

    void setupUi(QDialog *ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template)
    {
        if (ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template->objectName().isEmpty())
            ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template->setObjectName(QStringLiteral("ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template"));
        ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template->resize(501, 198);
        gridLayout = new QGridLayout(ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        okPushButton = new QPushButton(ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout1->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout1->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 2);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        textLabel = new QLabel(ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setWordWrap(false);

        hboxLayout2->addWidget(textLabel);

        minGapsSpinBox = new QSpinBox(ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template);
        minGapsSpinBox->setObjectName(QStringLiteral("minGapsSpinBox"));

        hboxLayout2->addWidget(minGapsSpinBox);


        gridLayout->addLayout(hboxLayout2, 1, 0, 1, 1);


        retranslateUi(ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template)
    {
        ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template", "Modify teachers min gaps between building changes", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template", "Weight percentage (necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template", "Cancel", 0));
        textLabel->setText(QApplication::translate("ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template", "Min gaps between building changes", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template: public Ui_ModifyConstraintTeachersMinGapsBetweenBuildingChangesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERSMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H
