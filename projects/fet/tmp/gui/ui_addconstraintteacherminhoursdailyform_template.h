/********************************************************************************
** Form generated from reading UI file 'addconstraintteacherminhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERMINHOURSDAILYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERMINHOURSDAILYFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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

class Ui_AddConstraintTeacherMinHoursDailyForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *teacherTextLabel_2;
    QSpacerItem *verticalSpacer;
    QLabel *teacherTextLabel;
    QComboBox *teachersComboBox;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QLabel *minHoursTextLabel;
    QSpinBox *minHoursSpinBox;
    QCheckBox *allowEmptyDaysCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintTeacherMinHoursDailyForm_template)
    {
        if (AddConstraintTeacherMinHoursDailyForm_template->objectName().isEmpty())
            AddConstraintTeacherMinHoursDailyForm_template->setObjectName(QStringLiteral("AddConstraintTeacherMinHoursDailyForm_template"));
        AddConstraintTeacherMinHoursDailyForm_template->resize(508, 297);
        gridLayout = new QGridLayout(AddConstraintTeacherMinHoursDailyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teacherTextLabel_2 = new QLabel(AddConstraintTeacherMinHoursDailyForm_template);
        teacherTextLabel_2->setObjectName(QStringLiteral("teacherTextLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teacherTextLabel_2->sizePolicy().hasHeightForWidth());
        teacherTextLabel_2->setSizePolicy(sizePolicy);
        teacherTextLabel_2->setFrameShape(QFrame::NoFrame);
        teacherTextLabel_2->setFrameShadow(QFrame::Plain);
        teacherTextLabel_2->setWordWrap(true);

        gridLayout->addWidget(teacherTextLabel_2, 0, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 2);

        teacherTextLabel = new QLabel(AddConstraintTeacherMinHoursDailyForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        gridLayout->addWidget(teacherTextLabel, 2, 0, 1, 3);

        teachersComboBox = new QComboBox(AddConstraintTeacherMinHoursDailyForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        gridLayout->addWidget(teachersComboBox, 3, 0, 1, 3);

        weightTextLabel = new QLabel(AddConstraintTeacherMinHoursDailyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 4, 0, 1, 2);

        weightLineEdit = new QLineEdit(AddConstraintTeacherMinHoursDailyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 4, 2, 1, 1);

        minHoursTextLabel = new QLabel(AddConstraintTeacherMinHoursDailyForm_template);
        minHoursTextLabel->setObjectName(QStringLiteral("minHoursTextLabel"));
        minHoursTextLabel->setFrameShape(QFrame::NoFrame);
        minHoursTextLabel->setFrameShadow(QFrame::Plain);
        minHoursTextLabel->setWordWrap(false);

        gridLayout->addWidget(minHoursTextLabel, 5, 0, 1, 1);

        minHoursSpinBox = new QSpinBox(AddConstraintTeacherMinHoursDailyForm_template);
        minHoursSpinBox->setObjectName(QStringLiteral("minHoursSpinBox"));
        minHoursSpinBox->setValue(2);

        gridLayout->addWidget(minHoursSpinBox, 5, 2, 1, 1);

        allowEmptyDaysCheckBox = new QCheckBox(AddConstraintTeacherMinHoursDailyForm_template);
        allowEmptyDaysCheckBox->setObjectName(QStringLiteral("allowEmptyDaysCheckBox"));
        allowEmptyDaysCheckBox->setChecked(true);

        gridLayout->addWidget(allowEmptyDaysCheckBox, 6, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeacherMinHoursDailyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeacherMinHoursDailyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 3);


        retranslateUi(AddConstraintTeacherMinHoursDailyForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeacherMinHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeacherMinHoursDailyForm_template)
    {
        AddConstraintTeacherMinHoursDailyForm_template->setWindowTitle(QApplication::translate("AddConstraintTeacherMinHoursDailyForm_template", "Add teacher min hours daily", 0));
        teacherTextLabel_2->setText(QApplication::translate("AddConstraintTeacherMinHoursDailyForm_template", "It is recommended to start with 2 min hours and strenghen them as you find new timetables.", 0));
        teacherTextLabel->setText(QApplication::translate("AddConstraintTeacherMinHoursDailyForm_template", "Teacher", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeacherMinHoursDailyForm_template", "Weight percentage (necessary: 100%)", 0));
        minHoursTextLabel->setText(QApplication::translate("AddConstraintTeacherMinHoursDailyForm_template", "Min hours daily", 0));
        allowEmptyDaysCheckBox->setText(QApplication::translate("AddConstraintTeacherMinHoursDailyForm_template", "Allow empty days", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeacherMinHoursDailyForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeacherMinHoursDailyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeacherMinHoursDailyForm_template: public Ui_AddConstraintTeacherMinHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERMINHOURSDAILYFORM_TEMPLATE_H
