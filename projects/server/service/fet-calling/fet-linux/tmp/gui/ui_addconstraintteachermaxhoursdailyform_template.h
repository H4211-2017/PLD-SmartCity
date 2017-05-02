/********************************************************************************
** Form generated from reading UI file 'addconstraintteachermaxhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERMAXHOURSDAILYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERMAXHOURSDAILYFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintTeacherMaxHoursDailyForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *teacherTextLabel;
    QComboBox *teachersComboBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *maxHoursTextLabel;
    QSpinBox *maxHoursSpinBox;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintTeacherMaxHoursDailyForm_template)
    {
        if (AddConstraintTeacherMaxHoursDailyForm_template->objectName().isEmpty())
            AddConstraintTeacherMaxHoursDailyForm_template->setObjectName(QStringLiteral("AddConstraintTeacherMaxHoursDailyForm_template"));
        AddConstraintTeacherMaxHoursDailyForm_template->resize(461, 261);
        gridLayout = new QGridLayout(AddConstraintTeacherMaxHoursDailyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        teacherTextLabel = new QLabel(AddConstraintTeacherMaxHoursDailyForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        verticalLayout->addWidget(teacherTextLabel);

        teachersComboBox = new QComboBox(AddConstraintTeacherMaxHoursDailyForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        verticalLayout->addWidget(teachersComboBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 47, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        weightTextLabel = new QLabel(AddConstraintTeacherMaxHoursDailyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_3->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeacherMaxHoursDailyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_3->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        maxHoursTextLabel = new QLabel(AddConstraintTeacherMaxHoursDailyForm_template);
        maxHoursTextLabel->setObjectName(QStringLiteral("maxHoursTextLabel"));
        maxHoursTextLabel->setFrameShape(QFrame::NoFrame);
        maxHoursTextLabel->setFrameShadow(QFrame::Plain);
        maxHoursTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(maxHoursTextLabel);

        maxHoursSpinBox = new QSpinBox(AddConstraintTeacherMaxHoursDailyForm_template);
        maxHoursSpinBox->setObjectName(QStringLiteral("maxHoursSpinBox"));

        horizontalLayout_2->addWidget(maxHoursSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeacherMaxHoursDailyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeacherMaxHoursDailyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);


        retranslateUi(AddConstraintTeacherMaxHoursDailyForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeacherMaxHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeacherMaxHoursDailyForm_template)
    {
        AddConstraintTeacherMaxHoursDailyForm_template->setWindowTitle(QApplication::translate("AddConstraintTeacherMaxHoursDailyForm_template", "Add teacher max hours daily", 0));
        teacherTextLabel->setText(QApplication::translate("AddConstraintTeacherMaxHoursDailyForm_template", "Teacher", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeacherMaxHoursDailyForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        maxHoursTextLabel->setText(QApplication::translate("AddConstraintTeacherMaxHoursDailyForm_template", "Max hours daily", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeacherMaxHoursDailyForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeacherMaxHoursDailyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeacherMaxHoursDailyForm_template: public Ui_AddConstraintTeacherMaxHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERMAXHOURSDAILYFORM_TEMPLATE_H
