/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachermingapsbetweenbuildingchangesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *studentsTextLabel;
    QComboBox *teachersComboBox;
    QSpacerItem *spacer2;
    QHBoxLayout *hboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout1;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel;
    QSpinBox *minGapsSpinBox;

    void setupUi(QDialog *ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template)
    {
        if (ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template->objectName().isEmpty())
            ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template->setObjectName(QStringLiteral("ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template"));
        ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template->resize(503, 224);
        gridLayout = new QGridLayout(ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        studentsTextLabel = new QLabel(ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        vboxLayout->addWidget(studentsTextLabel);

        teachersComboBox = new QComboBox(ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(teachersComboBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        spacer2 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer2, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        weightTextLabel = new QLabel(ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        okPushButton = new QPushButton(ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout1->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout1->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout1, 4, 0, 1, 2);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        textLabel = new QLabel(ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setWordWrap(false);

        hboxLayout2->addWidget(textLabel);

        minGapsSpinBox = new QSpinBox(ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        minGapsSpinBox->setObjectName(QStringLiteral("minGapsSpinBox"));

        hboxLayout2->addWidget(minGapsSpinBox);


        gridLayout->addLayout(hboxLayout2, 3, 0, 1, 1);


        retranslateUi(ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template)
    {
        ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template", "Modify teacher min gaps between building changes", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template", "Teacher", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template", "Weight percentage (necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template", "Cancel", 0));
        textLabel->setText(QApplication::translate("ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template", "Min gaps between building changes", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template: public Ui_ModifyConstraintTeacherMinGapsBetweenBuildingChangesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H
