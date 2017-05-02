/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentsminrestinghoursform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSMINRESTINGHOURSFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSMINRESTINGHOURSFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsMinRestingHoursForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textLabel1;
    QSpinBox *minRestingHoursSpinBox;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;
    QCheckBox *circularCheckBox;
    QSpacerItem *spacer5;

    void setupUi(QDialog *ModifyConstraintStudentsMinRestingHoursForm_template)
    {
        if (ModifyConstraintStudentsMinRestingHoursForm_template->objectName().isEmpty())
            ModifyConstraintStudentsMinRestingHoursForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsMinRestingHoursForm_template"));
        ModifyConstraintStudentsMinRestingHoursForm_template->resize(629, 300);
        gridLayout = new QGridLayout(ModifyConstraintStudentsMinRestingHoursForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsMinRestingHoursForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsMinRestingHoursForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textLabel1 = new QLabel(ModifyConstraintStudentsMinRestingHoursForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout_2->addWidget(textLabel1);

        minRestingHoursSpinBox = new QSpinBox(ModifyConstraintStudentsMinRestingHoursForm_template);
        minRestingHoursSpinBox->setObjectName(QStringLiteral("minRestingHoursSpinBox"));

        horizontalLayout_2->addWidget(minRestingHoursSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintStudentsMinRestingHoursForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsMinRestingHoursForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);

        circularCheckBox = new QCheckBox(ModifyConstraintStudentsMinRestingHoursForm_template);
        circularCheckBox->setObjectName(QStringLiteral("circularCheckBox"));

        gridLayout->addWidget(circularCheckBox, 3, 0, 1, 2);

        spacer5 = new QSpacerItem(20, 45, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer5, 0, 0, 1, 2);


        retranslateUi(ModifyConstraintStudentsMinRestingHoursForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsMinRestingHoursForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsMinRestingHoursForm_template)
    {
        ModifyConstraintStudentsMinRestingHoursForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsMinRestingHoursForm_template", "Modify students min resting hours", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsMinRestingHoursForm_template", "Weight percentage (necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintStudentsMinRestingHoursForm_template", "Min resting hours", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsMinRestingHoursForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsMinRestingHoursForm_template", "Cancel", 0));
        circularCheckBox->setText(QApplication::translate("ModifyConstraintStudentsMinRestingHoursForm_template", "Circular", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsMinRestingHoursForm_template: public Ui_ModifyConstraintStudentsMinRestingHoursForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSMINRESTINGHOURSFORM_TEMPLATE_H
