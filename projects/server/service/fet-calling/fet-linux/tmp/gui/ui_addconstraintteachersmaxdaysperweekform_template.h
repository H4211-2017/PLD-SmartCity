/********************************************************************************
** Form generated from reading UI file 'addconstraintteachersmaxdaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERSMAXDAYSPERWEEKFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERSMAXDAYSPERWEEKFORM_TEMPLATE_H

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

class Ui_AddConstraintTeachersMaxDaysPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *maxDaysTextLabel;
    QSpinBox *maxDaysSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintTeachersMaxDaysPerWeekForm_template)
    {
        if (AddConstraintTeachersMaxDaysPerWeekForm_template->objectName().isEmpty())
            AddConstraintTeachersMaxDaysPerWeekForm_template->setObjectName(QStringLiteral("AddConstraintTeachersMaxDaysPerWeekForm_template"));
        AddConstraintTeachersMaxDaysPerWeekForm_template->resize(440, 189);
        gridLayout = new QGridLayout(AddConstraintTeachersMaxDaysPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(AddConstraintTeachersMaxDaysPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeachersMaxDaysPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        maxDaysTextLabel = new QLabel(AddConstraintTeachersMaxDaysPerWeekForm_template);
        maxDaysTextLabel->setObjectName(QStringLiteral("maxDaysTextLabel"));
        maxDaysTextLabel->setFrameShape(QFrame::NoFrame);
        maxDaysTextLabel->setFrameShadow(QFrame::Plain);
        maxDaysTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(maxDaysTextLabel);

        maxDaysSpinBox = new QSpinBox(AddConstraintTeachersMaxDaysPerWeekForm_template);
        maxDaysSpinBox->setObjectName(QStringLiteral("maxDaysSpinBox"));

        horizontalLayout_2->addWidget(maxDaysSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        addConstraintPushButton = new QPushButton(AddConstraintTeachersMaxDaysPerWeekForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout_3->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeachersMaxDaysPerWeekForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_3->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(AddConstraintTeachersMaxDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeachersMaxDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeachersMaxDaysPerWeekForm_template)
    {
        AddConstraintTeachersMaxDaysPerWeekForm_template->setWindowTitle(QApplication::translate("AddConstraintTeachersMaxDaysPerWeekForm_template", "Add teachers max days per week", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeachersMaxDaysPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        maxDaysTextLabel->setText(QApplication::translate("AddConstraintTeachersMaxDaysPerWeekForm_template", "Max days per week", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeachersMaxDaysPerWeekForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeachersMaxDaysPerWeekForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeachersMaxDaysPerWeekForm_template: public Ui_AddConstraintTeachersMaxDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERSMAXDAYSPERWEEKFORM_TEMPLATE_H
