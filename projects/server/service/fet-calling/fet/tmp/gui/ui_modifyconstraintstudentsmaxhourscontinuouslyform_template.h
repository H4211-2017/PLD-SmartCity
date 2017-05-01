/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentsmaxhourscontinuouslyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsMaxHoursContinuouslyForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *maxHoursTextLabel;
    QSpinBox *maxHoursSpinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintStudentsMaxHoursContinuouslyForm_template)
    {
        if (ModifyConstraintStudentsMaxHoursContinuouslyForm_template->objectName().isEmpty())
            ModifyConstraintStudentsMaxHoursContinuouslyForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsMaxHoursContinuouslyForm_template"));
        ModifyConstraintStudentsMaxHoursContinuouslyForm_template->resize(453, 185);
        gridLayout = new QGridLayout(ModifyConstraintStudentsMaxHoursContinuouslyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsMaxHoursContinuouslyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_3->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsMaxHoursContinuouslyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_3->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        maxHoursTextLabel = new QLabel(ModifyConstraintStudentsMaxHoursContinuouslyForm_template);
        maxHoursTextLabel->setObjectName(QStringLiteral("maxHoursTextLabel"));
        maxHoursTextLabel->setFrameShape(QFrame::NoFrame);
        maxHoursTextLabel->setFrameShadow(QFrame::Plain);
        maxHoursTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(maxHoursTextLabel);

        maxHoursSpinBox = new QSpinBox(ModifyConstraintStudentsMaxHoursContinuouslyForm_template);
        maxHoursSpinBox->setObjectName(QStringLiteral("maxHoursSpinBox"));

        horizontalLayout_2->addWidget(maxHoursSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okPushButton = new QPushButton(ModifyConstraintStudentsMaxHoursContinuouslyForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsMaxHoursContinuouslyForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(ModifyConstraintStudentsMaxHoursContinuouslyForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsMaxHoursContinuouslyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsMaxHoursContinuouslyForm_template)
    {
        ModifyConstraintStudentsMaxHoursContinuouslyForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsMaxHoursContinuouslyForm_template", "Modify constraint students max hours continuously", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsMaxHoursContinuouslyForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        maxHoursTextLabel->setText(QApplication::translate("ModifyConstraintStudentsMaxHoursContinuouslyForm_template", "Max hours continuously", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsMaxHoursContinuouslyForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsMaxHoursContinuouslyForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsMaxHoursContinuouslyForm_template: public Ui_ModifyConstraintStudentsMaxHoursContinuouslyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
