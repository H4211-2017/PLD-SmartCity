/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachersmaxspanperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERSMAXSPANPERDAYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERSMAXSPANPERDAYFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintTeachersMaxSpanPerDayForm_template
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *spacer5;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel1;
    QSpinBox *maxSpanSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintTeachersMaxSpanPerDayForm_template)
    {
        if (ModifyConstraintTeachersMaxSpanPerDayForm_template->objectName().isEmpty())
            ModifyConstraintTeachersMaxSpanPerDayForm_template->setObjectName(QStringLiteral("ModifyConstraintTeachersMaxSpanPerDayForm_template"));
        ModifyConstraintTeachersMaxSpanPerDayForm_template->resize(651, 264);
        verticalLayout = new QVBoxLayout(ModifyConstraintTeachersMaxSpanPerDayForm_template);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        spacer5 = new QSpacerItem(20, 83, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacer5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel1 = new QLabel(ModifyConstraintTeachersMaxSpanPerDayForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout->addWidget(textLabel1);

        maxSpanSpinBox = new QSpinBox(ModifyConstraintTeachersMaxSpanPerDayForm_template);
        maxSpanSpinBox->setObjectName(QStringLiteral("maxSpanSpinBox"));

        horizontalLayout->addWidget(maxSpanSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(ModifyConstraintTeachersMaxSpanPerDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeachersMaxSpanPerDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintTeachersMaxSpanPerDayForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeachersMaxSpanPerDayForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(ModifyConstraintTeachersMaxSpanPerDayForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeachersMaxSpanPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeachersMaxSpanPerDayForm_template)
    {
        ModifyConstraintTeachersMaxSpanPerDayForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeachersMaxSpanPerDayForm_template", "Modify teachers max span per day", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintTeachersMaxSpanPerDayForm_template", "Max span per day", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeachersMaxSpanPerDayForm_template", "Weight percentage (necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeachersMaxSpanPerDayForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeachersMaxSpanPerDayForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeachersMaxSpanPerDayForm_template: public Ui_ModifyConstraintTeachersMaxSpanPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERSMAXSPANPERDAYFORM_TEMPLATE_H
