/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteacherminrestinghoursform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERMINRESTINGHOURSFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERMINRESTINGHOURSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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

class Ui_ModifyConstraintTeacherMinRestingHoursForm_template
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacer4;
    QVBoxLayout *verticalLayout;
    QLabel *teacherTextLabel;
    QComboBox *teachersComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel1;
    QSpinBox *minRestingHoursSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QCheckBox *circularCheckBox;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintTeacherMinRestingHoursForm_template)
    {
        if (ModifyConstraintTeacherMinRestingHoursForm_template->objectName().isEmpty())
            ModifyConstraintTeacherMinRestingHoursForm_template->setObjectName(QStringLiteral("ModifyConstraintTeacherMinRestingHoursForm_template"));
        ModifyConstraintTeacherMinRestingHoursForm_template->resize(633, 328);
        gridLayout = new QGridLayout(ModifyConstraintTeacherMinRestingHoursForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spacer4 = new QSpacerItem(99, 99, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer4, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        teacherTextLabel = new QLabel(ModifyConstraintTeacherMinRestingHoursForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        verticalLayout->addWidget(teacherTextLabel);

        teachersComboBox = new QComboBox(ModifyConstraintTeacherMinRestingHoursForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        verticalLayout->addWidget(teachersComboBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel1 = new QLabel(ModifyConstraintTeacherMinRestingHoursForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout->addWidget(textLabel1);

        minRestingHoursSpinBox = new QSpinBox(ModifyConstraintTeacherMinRestingHoursForm_template);
        minRestingHoursSpinBox->setObjectName(QStringLiteral("minRestingHoursSpinBox"));

        horizontalLayout->addWidget(minRestingHoursSpinBox);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(ModifyConstraintTeacherMinRestingHoursForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeacherMinRestingHoursForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        circularCheckBox = new QCheckBox(ModifyConstraintTeacherMinRestingHoursForm_template);
        circularCheckBox->setObjectName(QStringLiteral("circularCheckBox"));

        gridLayout->addWidget(circularCheckBox, 4, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintTeacherMinRestingHoursForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeacherMinRestingHoursForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 1);


        retranslateUi(ModifyConstraintTeacherMinRestingHoursForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeacherMinRestingHoursForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeacherMinRestingHoursForm_template)
    {
        ModifyConstraintTeacherMinRestingHoursForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeacherMinRestingHoursForm_template", "Modify teacher min resting hours", 0));
        teacherTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMinRestingHoursForm_template", "Teacher", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintTeacherMinRestingHoursForm_template", "Min resting hours", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMinRestingHoursForm_template", "Weight percentage (necessary: 100%)", 0));
        circularCheckBox->setText(QApplication::translate("ModifyConstraintTeacherMinRestingHoursForm_template", "Circular", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeacherMinRestingHoursForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeacherMinRestingHoursForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeacherMinRestingHoursForm_template: public Ui_ModifyConstraintTeacherMinRestingHoursForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERMINRESTINGHOURSFORM_TEMPLATE_H
