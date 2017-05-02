/********************************************************************************
** Form generated from reading UI file 'addconstraintteachermaxdaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERMAXDAYSPERWEEKFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERMAXDAYSPERWEEKFORM_TEMPLATE_H

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

class Ui_AddConstraintTeacherMaxDaysPerWeekForm_template
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
    QLabel *maxDaysTextLabel;
    QSpinBox *maxDaysSpinBox;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintTeacherMaxDaysPerWeekForm_template)
    {
        if (AddConstraintTeacherMaxDaysPerWeekForm_template->objectName().isEmpty())
            AddConstraintTeacherMaxDaysPerWeekForm_template->setObjectName(QStringLiteral("AddConstraintTeacherMaxDaysPerWeekForm_template"));
        AddConstraintTeacherMaxDaysPerWeekForm_template->resize(400, 253);
        verticalLayout_2 = new QVBoxLayout(AddConstraintTeacherMaxDaysPerWeekForm_template);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        teacherTextLabel = new QLabel(AddConstraintTeacherMaxDaysPerWeekForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        verticalLayout->addWidget(teacherTextLabel);

        teachersComboBox = new QComboBox(AddConstraintTeacherMaxDaysPerWeekForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        verticalLayout->addWidget(teachersComboBox);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(AddConstraintTeacherMaxDaysPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeacherMaxDaysPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        maxDaysTextLabel = new QLabel(AddConstraintTeacherMaxDaysPerWeekForm_template);
        maxDaysTextLabel->setObjectName(QStringLiteral("maxDaysTextLabel"));
        maxDaysTextLabel->setFrameShape(QFrame::NoFrame);
        maxDaysTextLabel->setFrameShadow(QFrame::Plain);
        maxDaysTextLabel->setWordWrap(false);

        horizontalLayout_3->addWidget(maxDaysTextLabel);

        maxDaysSpinBox = new QSpinBox(AddConstraintTeacherMaxDaysPerWeekForm_template);
        maxDaysSpinBox->setObjectName(QStringLiteral("maxDaysSpinBox"));

        horizontalLayout_3->addWidget(maxDaysSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeacherMaxDaysPerWeekForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeacherMaxDaysPerWeekForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(AddConstraintTeacherMaxDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeacherMaxDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeacherMaxDaysPerWeekForm_template)
    {
        AddConstraintTeacherMaxDaysPerWeekForm_template->setWindowTitle(QApplication::translate("AddConstraintTeacherMaxDaysPerWeekForm_template", "Add teacher max days per week", 0));
        teacherTextLabel->setText(QApplication::translate("AddConstraintTeacherMaxDaysPerWeekForm_template", "Teacher", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeacherMaxDaysPerWeekForm_template", "Weight percentage\n"
"(necessary: 100%)", 0));
        maxDaysTextLabel->setText(QApplication::translate("AddConstraintTeacherMaxDaysPerWeekForm_template", "Max days per week", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeacherMaxDaysPerWeekForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeacherMaxDaysPerWeekForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeacherMaxDaysPerWeekForm_template: public Ui_AddConstraintTeacherMaxDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERMAXDAYSPERWEEKFORM_TEMPLATE_H
