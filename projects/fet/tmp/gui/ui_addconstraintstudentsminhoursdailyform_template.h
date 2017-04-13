/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentsminhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSMINHOURSDAILYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSMINHOURSDAILYFORM_TEMPLATE_H

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

class Ui_AddConstraintStudentsMinHoursDailyForm_template
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QLabel *minHoursTextLabel;
    QSpinBox *minHoursSpinBox;
    QSpacerItem *verticalSpacer;
    QLabel *allowLabel;
    QCheckBox *allowEmptyDaysCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintStudentsMinHoursDailyForm_template)
    {
        if (AddConstraintStudentsMinHoursDailyForm_template->objectName().isEmpty())
            AddConstraintStudentsMinHoursDailyForm_template->setObjectName(QStringLiteral("AddConstraintStudentsMinHoursDailyForm_template"));
        AddConstraintStudentsMinHoursDailyForm_template->resize(472, 235);
        gridLayout = new QGridLayout(AddConstraintStudentsMinHoursDailyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);

        weightTextLabel = new QLabel(AddConstraintStudentsMinHoursDailyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 1, 0, 1, 1);

        weightLineEdit = new QLineEdit(AddConstraintStudentsMinHoursDailyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 1, 1, 1, 1);

        minHoursTextLabel = new QLabel(AddConstraintStudentsMinHoursDailyForm_template);
        minHoursTextLabel->setObjectName(QStringLiteral("minHoursTextLabel"));
        minHoursTextLabel->setFrameShape(QFrame::NoFrame);
        minHoursTextLabel->setFrameShadow(QFrame::Plain);
        minHoursTextLabel->setWordWrap(false);

        gridLayout->addWidget(minHoursTextLabel, 2, 0, 1, 1);

        minHoursSpinBox = new QSpinBox(AddConstraintStudentsMinHoursDailyForm_template);
        minHoursSpinBox->setObjectName(QStringLiteral("minHoursSpinBox"));

        gridLayout->addWidget(minHoursSpinBox, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        allowLabel = new QLabel(AddConstraintStudentsMinHoursDailyForm_template);
        allowLabel->setObjectName(QStringLiteral("allowLabel"));
        allowLabel->setText(QStringLiteral("Label"));

        gridLayout->addWidget(allowLabel, 4, 0, 1, 2);

        allowEmptyDaysCheckBox = new QCheckBox(AddConstraintStudentsMinHoursDailyForm_template);
        allowEmptyDaysCheckBox->setObjectName(QStringLiteral("allowEmptyDaysCheckBox"));

        gridLayout->addWidget(allowEmptyDaysCheckBox, 5, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsMinHoursDailyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsMinHoursDailyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 2);


        retranslateUi(AddConstraintStudentsMinHoursDailyForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsMinHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsMinHoursDailyForm_template)
    {
        AddConstraintStudentsMinHoursDailyForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsMinHoursDailyForm_template", "Add students min hours daily", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsMinHoursDailyForm_template", "Weight percentage (necessary: 100%)", 0));
        minHoursTextLabel->setText(QApplication::translate("AddConstraintStudentsMinHoursDailyForm_template", "Min hours", 0));
        allowEmptyDaysCheckBox->setText(QApplication::translate("AddConstraintStudentsMinHoursDailyForm_template", "Allow empty days", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsMinHoursDailyForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsMinHoursDailyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsMinHoursDailyForm_template: public Ui_AddConstraintStudentsMinHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSMINHOURSDAILYFORM_TEMPLATE_H
