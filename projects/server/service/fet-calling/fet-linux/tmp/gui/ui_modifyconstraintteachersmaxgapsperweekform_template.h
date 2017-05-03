/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachersmaxgapsperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERSMAXGAPSPERWEEKFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERSMAXGAPSPERWEEKFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeachersMaxGapsPerWeekForm_template
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *weightTextLabel_2;
    QSpacerItem *spacer5;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel1;
    QSpinBox *maxGapsSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintTeachersMaxGapsPerWeekForm_template)
    {
        if (ModifyConstraintTeachersMaxGapsPerWeekForm_template->objectName().isEmpty())
            ModifyConstraintTeachersMaxGapsPerWeekForm_template->setObjectName(QStringLiteral("ModifyConstraintTeachersMaxGapsPerWeekForm_template"));
        ModifyConstraintTeachersMaxGapsPerWeekForm_template->resize(610, 295);
        verticalLayout = new QVBoxLayout(ModifyConstraintTeachersMaxGapsPerWeekForm_template);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        weightTextLabel_2 = new QLabel(ModifyConstraintTeachersMaxGapsPerWeekForm_template);
        weightTextLabel_2->setObjectName(QStringLiteral("weightTextLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(weightTextLabel_2->sizePolicy().hasHeightForWidth());
        weightTextLabel_2->setSizePolicy(sizePolicy);
        weightTextLabel_2->setFrameShape(QFrame::NoFrame);
        weightTextLabel_2->setFrameShadow(QFrame::Plain);
        weightTextLabel_2->setWordWrap(true);

        verticalLayout->addWidget(weightTextLabel_2);

        spacer5 = new QSpacerItem(20, 74, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacer5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel1 = new QLabel(ModifyConstraintTeachersMaxGapsPerWeekForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout->addWidget(textLabel1);

        maxGapsSpinBox = new QSpinBox(ModifyConstraintTeachersMaxGapsPerWeekForm_template);
        maxGapsSpinBox->setObjectName(QStringLiteral("maxGapsSpinBox"));

        horizontalLayout->addWidget(maxGapsSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(ModifyConstraintTeachersMaxGapsPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeachersMaxGapsPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintTeachersMaxGapsPerWeekForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeachersMaxGapsPerWeekForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(ModifyConstraintTeachersMaxGapsPerWeekForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeachersMaxGapsPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeachersMaxGapsPerWeekForm_template)
    {
        ModifyConstraintTeachersMaxGapsPerWeekForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeachersMaxGapsPerWeekForm_template", "Modify teachers max gaps per week", 0));
        weightTextLabel_2->setText(QApplication::translate("ModifyConstraintTeachersMaxGapsPerWeekForm_template", "It is recommended to use only one constraint of this type. You must use weight percentage 100%, because otherwise you will get poor timetables. Try to fix firstly a rather large value for max gaps per week and lower it as you find new timetables.\n"
"Note: teacher not available and break are not counted as gaps.", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintTeachersMaxGapsPerWeekForm_template", "Max gaps per week", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeachersMaxGapsPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeachersMaxGapsPerWeekForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeachersMaxGapsPerWeekForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeachersMaxGapsPerWeekForm_template: public Ui_ModifyConstraintTeachersMaxGapsPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERSMAXGAPSPERWEEKFORM_TEMPLATE_H
