/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachersmaxgapsperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERSMAXGAPSPERDAYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERSMAXGAPSPERDAYFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeachersMaxGapsPerDayForm_template
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

    void setupUi(QDialog *ModifyConstraintTeachersMaxGapsPerDayForm_template)
    {
        if (ModifyConstraintTeachersMaxGapsPerDayForm_template->objectName().isEmpty())
            ModifyConstraintTeachersMaxGapsPerDayForm_template->setObjectName(QStringLiteral("ModifyConstraintTeachersMaxGapsPerDayForm_template"));
        ModifyConstraintTeachersMaxGapsPerDayForm_template->resize(610, 304);
        verticalLayout = new QVBoxLayout(ModifyConstraintTeachersMaxGapsPerDayForm_template);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        weightTextLabel_2 = new QLabel(ModifyConstraintTeachersMaxGapsPerDayForm_template);
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

        spacer5 = new QSpacerItem(20, 83, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacer5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel1 = new QLabel(ModifyConstraintTeachersMaxGapsPerDayForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout->addWidget(textLabel1);

        maxGapsSpinBox = new QSpinBox(ModifyConstraintTeachersMaxGapsPerDayForm_template);
        maxGapsSpinBox->setObjectName(QStringLiteral("maxGapsSpinBox"));

        horizontalLayout->addWidget(maxGapsSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(ModifyConstraintTeachersMaxGapsPerDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeachersMaxGapsPerDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintTeachersMaxGapsPerDayForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeachersMaxGapsPerDayForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(ModifyConstraintTeachersMaxGapsPerDayForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeachersMaxGapsPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeachersMaxGapsPerDayForm_template)
    {
        ModifyConstraintTeachersMaxGapsPerDayForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeachersMaxGapsPerDayForm_template", "Modify teachers max gaps per day", 0));
        weightTextLabel_2->setText(QApplication::translate("ModifyConstraintTeachersMaxGapsPerDayForm_template", "It is recommended to use only one constraint of this type. You must use weight percentage 100%, because otherwise you will get poor timetables. Try to fix firstly a rather large value for max gaps per day and lower it as you find new timetables.\n"
"Note: teacher not available and break are not counted as gaps.", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintTeachersMaxGapsPerDayForm_template", "Max gaps per day", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeachersMaxGapsPerDayForm_template", "Weight percentage (necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeachersMaxGapsPerDayForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeachersMaxGapsPerDayForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeachersMaxGapsPerDayForm_template: public Ui_ModifyConstraintTeachersMaxGapsPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERSMAXGAPSPERDAYFORM_TEMPLATE_H
