/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachersminrestinghoursform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERSMINRESTINGHOURSFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERSMINRESTINGHOURSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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

class Ui_ModifyConstraintTeachersMinRestingHoursForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel1;
    QSpinBox *minRestingHoursSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;
    QCheckBox *circularCheckBox;
    QSpacerItem *spacer5;

    void setupUi(QDialog *ModifyConstraintTeachersMinRestingHoursForm_template)
    {
        if (ModifyConstraintTeachersMinRestingHoursForm_template->objectName().isEmpty())
            ModifyConstraintTeachersMinRestingHoursForm_template->setObjectName(QStringLiteral("ModifyConstraintTeachersMinRestingHoursForm_template"));
        ModifyConstraintTeachersMinRestingHoursForm_template->resize(651, 313);
        gridLayout = new QGridLayout(ModifyConstraintTeachersMinRestingHoursForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel1 = new QLabel(ModifyConstraintTeachersMinRestingHoursForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout->addWidget(textLabel1);

        minRestingHoursSpinBox = new QSpinBox(ModifyConstraintTeachersMinRestingHoursForm_template);
        minRestingHoursSpinBox->setObjectName(QStringLiteral("minRestingHoursSpinBox"));

        horizontalLayout->addWidget(minRestingHoursSpinBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(ModifyConstraintTeachersMinRestingHoursForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeachersMinRestingHoursForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintTeachersMinRestingHoursForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeachersMinRestingHoursForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);

        circularCheckBox = new QCheckBox(ModifyConstraintTeachersMinRestingHoursForm_template);
        circularCheckBox->setObjectName(QStringLiteral("circularCheckBox"));

        gridLayout->addWidget(circularCheckBox, 3, 0, 1, 2);

        spacer5 = new QSpacerItem(20, 83, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer5, 0, 0, 1, 2);


        retranslateUi(ModifyConstraintTeachersMinRestingHoursForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeachersMinRestingHoursForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeachersMinRestingHoursForm_template)
    {
        ModifyConstraintTeachersMinRestingHoursForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeachersMinRestingHoursForm_template", "Modify teachers min resting hours", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintTeachersMinRestingHoursForm_template", "Min resting hours", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeachersMinRestingHoursForm_template", "Weight percentage (necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeachersMinRestingHoursForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeachersMinRestingHoursForm_template", "Cancel", 0));
        circularCheckBox->setText(QApplication::translate("ModifyConstraintTeachersMinRestingHoursForm_template", "Circular", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeachersMinRestingHoursForm_template: public Ui_ModifyConstraintTeachersMinRestingHoursForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERSMINRESTINGHOURSFORM_TEMPLATE_H
