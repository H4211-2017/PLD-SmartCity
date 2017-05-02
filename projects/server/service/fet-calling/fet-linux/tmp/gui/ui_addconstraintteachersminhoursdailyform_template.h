/********************************************************************************
** Form generated from reading UI file 'addconstraintteachersminhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERSMINHOURSDAILYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERSMINHOURSDAILYFORM_TEMPLATE_H

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

class Ui_AddConstraintTeachersMinHoursDailyForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *teacherTextLabel_2;
    QSpacerItem *verticalSpacer;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QLabel *minHoursTextLabel;
    QSpinBox *minHoursSpinBox;
    QCheckBox *allowEmptyDaysCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintTeachersMinHoursDailyForm_template)
    {
        if (AddConstraintTeachersMinHoursDailyForm_template->objectName().isEmpty())
            AddConstraintTeachersMinHoursDailyForm_template->setObjectName(QStringLiteral("AddConstraintTeachersMinHoursDailyForm_template"));
        AddConstraintTeachersMinHoursDailyForm_template->resize(519, 301);
        gridLayout = new QGridLayout(AddConstraintTeachersMinHoursDailyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teacherTextLabel_2 = new QLabel(AddConstraintTeachersMinHoursDailyForm_template);
        teacherTextLabel_2->setObjectName(QStringLiteral("teacherTextLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teacherTextLabel_2->sizePolicy().hasHeightForWidth());
        teacherTextLabel_2->setSizePolicy(sizePolicy);
        teacherTextLabel_2->setFrameShape(QFrame::NoFrame);
        teacherTextLabel_2->setFrameShadow(QFrame::Plain);
        teacherTextLabel_2->setWordWrap(true);

        gridLayout->addWidget(teacherTextLabel_2, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 107, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        weightTextLabel = new QLabel(AddConstraintTeachersMinHoursDailyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 2, 0, 1, 1);

        weightLineEdit = new QLineEdit(AddConstraintTeachersMinHoursDailyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 2, 1, 1, 1);

        minHoursTextLabel = new QLabel(AddConstraintTeachersMinHoursDailyForm_template);
        minHoursTextLabel->setObjectName(QStringLiteral("minHoursTextLabel"));
        minHoursTextLabel->setFrameShape(QFrame::NoFrame);
        minHoursTextLabel->setFrameShadow(QFrame::Plain);
        minHoursTextLabel->setWordWrap(false);

        gridLayout->addWidget(minHoursTextLabel, 3, 0, 1, 1);

        minHoursSpinBox = new QSpinBox(AddConstraintTeachersMinHoursDailyForm_template);
        minHoursSpinBox->setObjectName(QStringLiteral("minHoursSpinBox"));
        minHoursSpinBox->setValue(2);

        gridLayout->addWidget(minHoursSpinBox, 3, 1, 1, 1);

        allowEmptyDaysCheckBox = new QCheckBox(AddConstraintTeachersMinHoursDailyForm_template);
        allowEmptyDaysCheckBox->setObjectName(QStringLiteral("allowEmptyDaysCheckBox"));
        allowEmptyDaysCheckBox->setChecked(true);

        gridLayout->addWidget(allowEmptyDaysCheckBox, 4, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeachersMinHoursDailyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeachersMinHoursDailyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 2);


        retranslateUi(AddConstraintTeachersMinHoursDailyForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeachersMinHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeachersMinHoursDailyForm_template)
    {
        AddConstraintTeachersMinHoursDailyForm_template->setWindowTitle(QApplication::translate("AddConstraintTeachersMinHoursDailyForm_template", "Add teachers min hours daily", 0));
        teacherTextLabel_2->setText(QApplication::translate("AddConstraintTeachersMinHoursDailyForm_template", "It is recommended to start with 2 min hours. Maybe you could try higher values after that, but they might be too large and you might get a impossible timetable.", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeachersMinHoursDailyForm_template", "Weight percentage (necessary: 100%)", 0));
        minHoursTextLabel->setText(QApplication::translate("AddConstraintTeachersMinHoursDailyForm_template", "Min hours daily", 0));
        allowEmptyDaysCheckBox->setText(QApplication::translate("AddConstraintTeachersMinHoursDailyForm_template", "Allow empty days", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeachersMinHoursDailyForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeachersMinHoursDailyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeachersMinHoursDailyForm_template: public Ui_AddConstraintTeachersMinHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERSMINHOURSDAILYFORM_TEMPLATE_H
