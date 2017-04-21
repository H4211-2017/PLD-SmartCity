/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentssetminhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSSETMINHOURSDAILYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSSETMINHOURSDAILYFORM_TEMPLATE_H

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

class Ui_AddConstraintStudentsSetMinHoursDailyForm_template
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QLabel *minHoursTextLabel;
    QSpinBox *minHoursSpinBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *allowLabel;
    QCheckBox *allowEmptyDaysCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintStudentsSetMinHoursDailyForm_template)
    {
        if (AddConstraintStudentsSetMinHoursDailyForm_template->objectName().isEmpty())
            AddConstraintStudentsSetMinHoursDailyForm_template->setObjectName(QStringLiteral("AddConstraintStudentsSetMinHoursDailyForm_template"));
        AddConstraintStudentsSetMinHoursDailyForm_template->resize(502, 267);
        gridLayout = new QGridLayout(AddConstraintStudentsSetMinHoursDailyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        studentsTextLabel = new QLabel(AddConstraintStudentsSetMinHoursDailyForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel, 1, 0, 1, 3);

        studentsComboBox = new QComboBox(AddConstraintStudentsSetMinHoursDailyForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));
        studentsComboBox->setEditable(false);
        studentsComboBox->setInsertPolicy(QComboBox::NoInsert);
        studentsComboBox->setAutoCompletion(false);
        studentsComboBox->setDuplicatesEnabled(false);

        gridLayout->addWidget(studentsComboBox, 2, 0, 1, 3);

        weightTextLabel = new QLabel(AddConstraintStudentsSetMinHoursDailyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 3, 0, 1, 2);

        weightLineEdit = new QLineEdit(AddConstraintStudentsSetMinHoursDailyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 3, 2, 1, 1);

        minHoursTextLabel = new QLabel(AddConstraintStudentsSetMinHoursDailyForm_template);
        minHoursTextLabel->setObjectName(QStringLiteral("minHoursTextLabel"));
        minHoursTextLabel->setFrameShape(QFrame::NoFrame);
        minHoursTextLabel->setFrameShadow(QFrame::Plain);
        minHoursTextLabel->setWordWrap(false);

        gridLayout->addWidget(minHoursTextLabel, 4, 0, 1, 1);

        minHoursSpinBox = new QSpinBox(AddConstraintStudentsSetMinHoursDailyForm_template);
        minHoursSpinBox->setObjectName(QStringLiteral("minHoursSpinBox"));

        gridLayout->addWidget(minHoursSpinBox, 4, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 33, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);

        allowLabel = new QLabel(AddConstraintStudentsSetMinHoursDailyForm_template);
        allowLabel->setObjectName(QStringLiteral("allowLabel"));
        allowLabel->setText(QStringLiteral("Label"));

        gridLayout->addWidget(allowLabel, 6, 0, 1, 3);

        allowEmptyDaysCheckBox = new QCheckBox(AddConstraintStudentsSetMinHoursDailyForm_template);
        allowEmptyDaysCheckBox->setObjectName(QStringLiteral("allowEmptyDaysCheckBox"));

        gridLayout->addWidget(allowEmptyDaysCheckBox, 7, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsSetMinHoursDailyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsSetMinHoursDailyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 8, 0, 1, 3);


        retranslateUi(AddConstraintStudentsSetMinHoursDailyForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsSetMinHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsSetMinHoursDailyForm_template)
    {
        AddConstraintStudentsSetMinHoursDailyForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsSetMinHoursDailyForm_template", "Add students set min hours daily", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMinHoursDailyForm_template", "Students set", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMinHoursDailyForm_template", "Weight percentage (necessary: 100%)", 0));
        minHoursTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMinHoursDailyForm_template", "Min hours", 0));
        allowEmptyDaysCheckBox->setText(QApplication::translate("AddConstraintStudentsSetMinHoursDailyForm_template", "Allow empty days", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsSetMinHoursDailyForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsSetMinHoursDailyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsSetMinHoursDailyForm_template: public Ui_AddConstraintStudentsSetMinHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSSETMINHOURSDAILYFORM_TEMPLATE_H
