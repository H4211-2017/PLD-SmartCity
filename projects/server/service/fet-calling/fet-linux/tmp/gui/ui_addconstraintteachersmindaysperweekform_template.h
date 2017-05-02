/********************************************************************************
** Form generated from reading UI file 'addconstraintteachersmindaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERSMINDAYSPERWEEKFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERSMINDAYSPERWEEKFORM_TEMPLATE_H

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

class Ui_AddConstraintTeachersMinDaysPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *minDaysTextLabel;
    QSpinBox *minDaysSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintTeachersMinDaysPerWeekForm_template)
    {
        if (AddConstraintTeachersMinDaysPerWeekForm_template->objectName().isEmpty())
            AddConstraintTeachersMinDaysPerWeekForm_template->setObjectName(QStringLiteral("AddConstraintTeachersMinDaysPerWeekForm_template"));
        AddConstraintTeachersMinDaysPerWeekForm_template->resize(440, 189);
        gridLayout = new QGridLayout(AddConstraintTeachersMinDaysPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(AddConstraintTeachersMinDaysPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeachersMinDaysPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minDaysTextLabel = new QLabel(AddConstraintTeachersMinDaysPerWeekForm_template);
        minDaysTextLabel->setObjectName(QStringLiteral("minDaysTextLabel"));
        minDaysTextLabel->setFrameShape(QFrame::NoFrame);
        minDaysTextLabel->setFrameShadow(QFrame::Plain);
        minDaysTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(minDaysTextLabel);

        minDaysSpinBox = new QSpinBox(AddConstraintTeachersMinDaysPerWeekForm_template);
        minDaysSpinBox->setObjectName(QStringLiteral("minDaysSpinBox"));

        horizontalLayout_2->addWidget(minDaysSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        addConstraintPushButton = new QPushButton(AddConstraintTeachersMinDaysPerWeekForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout_3->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeachersMinDaysPerWeekForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_3->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(AddConstraintTeachersMinDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeachersMinDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeachersMinDaysPerWeekForm_template)
    {
        AddConstraintTeachersMinDaysPerWeekForm_template->setWindowTitle(QApplication::translate("AddConstraintTeachersMinDaysPerWeekForm_template", "Add teachers min days per week", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeachersMinDaysPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        minDaysTextLabel->setText(QApplication::translate("AddConstraintTeachersMinDaysPerWeekForm_template", "Min days per week", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeachersMinDaysPerWeekForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeachersMinDaysPerWeekForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeachersMinDaysPerWeekForm_template: public Ui_AddConstraintTeachersMinDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERSMINDAYSPERWEEKFORM_TEMPLATE_H
