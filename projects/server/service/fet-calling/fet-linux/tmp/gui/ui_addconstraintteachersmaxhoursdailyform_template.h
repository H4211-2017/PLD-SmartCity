/********************************************************************************
** Form generated from reading UI file 'addconstraintteachersmaxhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERSMAXHOURSDAILYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERSMAXHOURSDAILYFORM_TEMPLATE_H

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

class Ui_AddConstraintTeachersMaxHoursDailyForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *maxHoursTextLabel;
    QSpinBox *maxHoursSpinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintTeachersMaxHoursDailyForm_template)
    {
        if (AddConstraintTeachersMaxHoursDailyForm_template->objectName().isEmpty())
            AddConstraintTeachersMaxHoursDailyForm_template->setObjectName(QStringLiteral("AddConstraintTeachersMaxHoursDailyForm_template"));
        AddConstraintTeachersMaxHoursDailyForm_template->resize(463, 169);
        gridLayout = new QGridLayout(AddConstraintTeachersMaxHoursDailyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(AddConstraintTeachersMaxHoursDailyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeachersMaxHoursDailyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        maxHoursTextLabel = new QLabel(AddConstraintTeachersMaxHoursDailyForm_template);
        maxHoursTextLabel->setObjectName(QStringLiteral("maxHoursTextLabel"));
        maxHoursTextLabel->setFrameShape(QFrame::NoFrame);
        maxHoursTextLabel->setFrameShadow(QFrame::Plain);
        maxHoursTextLabel->setWordWrap(false);

        horizontalLayout_3->addWidget(maxHoursTextLabel);

        maxHoursSpinBox = new QSpinBox(AddConstraintTeachersMaxHoursDailyForm_template);
        maxHoursSpinBox->setObjectName(QStringLiteral("maxHoursSpinBox"));

        horizontalLayout_3->addWidget(maxHoursSpinBox);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeachersMaxHoursDailyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeachersMaxHoursDailyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(AddConstraintTeachersMaxHoursDailyForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeachersMaxHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeachersMaxHoursDailyForm_template)
    {
        AddConstraintTeachersMaxHoursDailyForm_template->setWindowTitle(QApplication::translate("AddConstraintTeachersMaxHoursDailyForm_template", "Add teachers max hours daily", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeachersMaxHoursDailyForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        maxHoursTextLabel->setText(QApplication::translate("AddConstraintTeachersMaxHoursDailyForm_template", "Max hours daily", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeachersMaxHoursDailyForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeachersMaxHoursDailyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeachersMaxHoursDailyForm_template: public Ui_AddConstraintTeachersMaxHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERSMAXHOURSDAILYFORM_TEMPLATE_H
