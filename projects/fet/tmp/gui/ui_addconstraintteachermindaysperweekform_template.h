/********************************************************************************
** Form generated from reading UI file 'addconstraintteachermindaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERMINDAYSPERWEEKFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERMINDAYSPERWEEKFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_AddConstraintTeacherMinDaysPerWeekForm_template
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *teacherTextLabel;
    QComboBox *teachersComboBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *minDaysTextLabel;
    QSpinBox *minDaysSpinBox;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintTeacherMinDaysPerWeekForm_template)
    {
        if (AddConstraintTeacherMinDaysPerWeekForm_template->objectName().isEmpty())
            AddConstraintTeacherMinDaysPerWeekForm_template->setObjectName(QStringLiteral("AddConstraintTeacherMinDaysPerWeekForm_template"));
        AddConstraintTeacherMinDaysPerWeekForm_template->resize(418, 277);
        verticalLayout_2 = new QVBoxLayout(AddConstraintTeacherMinDaysPerWeekForm_template);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        teacherTextLabel = new QLabel(AddConstraintTeacherMinDaysPerWeekForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        verticalLayout->addWidget(teacherTextLabel);

        teachersComboBox = new QComboBox(AddConstraintTeacherMinDaysPerWeekForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        verticalLayout->addWidget(teachersComboBox);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(AddConstraintTeacherMinDaysPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeacherMinDaysPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        minDaysTextLabel = new QLabel(AddConstraintTeacherMinDaysPerWeekForm_template);
        minDaysTextLabel->setObjectName(QStringLiteral("minDaysTextLabel"));
        minDaysTextLabel->setFrameShape(QFrame::NoFrame);
        minDaysTextLabel->setFrameShadow(QFrame::Plain);
        minDaysTextLabel->setWordWrap(false);

        horizontalLayout_3->addWidget(minDaysTextLabel);

        minDaysSpinBox = new QSpinBox(AddConstraintTeacherMinDaysPerWeekForm_template);
        minDaysSpinBox->setObjectName(QStringLiteral("minDaysSpinBox"));

        horizontalLayout_3->addWidget(minDaysSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeacherMinDaysPerWeekForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeacherMinDaysPerWeekForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(AddConstraintTeacherMinDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeacherMinDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeacherMinDaysPerWeekForm_template)
    {
        AddConstraintTeacherMinDaysPerWeekForm_template->setWindowTitle(QApplication::translate("AddConstraintTeacherMinDaysPerWeekForm_template", "Add teacher min days per week", 0));
        teacherTextLabel->setText(QApplication::translate("AddConstraintTeacherMinDaysPerWeekForm_template", "Teacher", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeacherMinDaysPerWeekForm_template", "Weight percentage\n"
"(necessary: 100%)", 0));
        minDaysTextLabel->setText(QApplication::translate("AddConstraintTeacherMinDaysPerWeekForm_template", "Min days per week", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeacherMinDaysPerWeekForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeacherMinDaysPerWeekForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeacherMinDaysPerWeekForm_template: public Ui_AddConstraintTeacherMinDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERMINDAYSPERWEEKFORM_TEMPLATE_H
