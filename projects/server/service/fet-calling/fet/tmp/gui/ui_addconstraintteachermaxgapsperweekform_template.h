/********************************************************************************
** Form generated from reading UI file 'addconstraintteachermaxgapsperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERMAXGAPSPERWEEKFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERMAXGAPSPERWEEKFORM_TEMPLATE_H

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

QT_BEGIN_NAMESPACE

class Ui_AddConstraintTeacherMaxGapsPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *teacherInstructionsTextLabel;
    QSpacerItem *spacer1;
    QLabel *teacherTextLabel;
    QComboBox *teachersComboBox;
    QLabel *textLabel1;
    QSpinBox *maxGapsSpinBox;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintTeacherMaxGapsPerWeekForm_template)
    {
        if (AddConstraintTeacherMaxGapsPerWeekForm_template->objectName().isEmpty())
            AddConstraintTeacherMaxGapsPerWeekForm_template->setObjectName(QStringLiteral("AddConstraintTeacherMaxGapsPerWeekForm_template"));
        AddConstraintTeacherMaxGapsPerWeekForm_template->resize(632, 334);
        gridLayout = new QGridLayout(AddConstraintTeacherMaxGapsPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teacherInstructionsTextLabel = new QLabel(AddConstraintTeacherMaxGapsPerWeekForm_template);
        teacherInstructionsTextLabel->setObjectName(QStringLiteral("teacherInstructionsTextLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teacherInstructionsTextLabel->sizePolicy().hasHeightForWidth());
        teacherInstructionsTextLabel->setSizePolicy(sizePolicy);
        teacherInstructionsTextLabel->setFrameShape(QFrame::NoFrame);
        teacherInstructionsTextLabel->setFrameShadow(QFrame::Plain);
        teacherInstructionsTextLabel->setWordWrap(true);

        gridLayout->addWidget(teacherInstructionsTextLabel, 0, 0, 1, 2);

        spacer1 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 1, 0, 1, 2);

        teacherTextLabel = new QLabel(AddConstraintTeacherMaxGapsPerWeekForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        gridLayout->addWidget(teacherTextLabel, 2, 0, 1, 2);

        teachersComboBox = new QComboBox(AddConstraintTeacherMaxGapsPerWeekForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        gridLayout->addWidget(teachersComboBox, 3, 0, 1, 2);

        textLabel1 = new QLabel(AddConstraintTeacherMaxGapsPerWeekForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 4, 0, 1, 1);

        maxGapsSpinBox = new QSpinBox(AddConstraintTeacherMaxGapsPerWeekForm_template);
        maxGapsSpinBox->setObjectName(QStringLiteral("maxGapsSpinBox"));

        gridLayout->addWidget(maxGapsSpinBox, 4, 1, 1, 1);

        weightTextLabel = new QLabel(AddConstraintTeacherMaxGapsPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 5, 0, 1, 1);

        weightLineEdit = new QLineEdit(AddConstraintTeacherMaxGapsPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 5, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeacherMaxGapsPerWeekForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeacherMaxGapsPerWeekForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 2);


        retranslateUi(AddConstraintTeacherMaxGapsPerWeekForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeacherMaxGapsPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeacherMaxGapsPerWeekForm_template)
    {
        AddConstraintTeacherMaxGapsPerWeekForm_template->setWindowTitle(QApplication::translate("AddConstraintTeacherMaxGapsPerWeekForm_template", "Add teacher max gaps per week", 0));
        teacherInstructionsTextLabel->setText(QApplication::translate("AddConstraintTeacherMaxGapsPerWeekForm_template", "You must use weight percentage 100%, because otherwise you will get poor timetables. Try to fix firstly a rather large value for max gaps per week and lower it as you find new timetables. The default 3 given here might be too low for your school, in which case you need to use higher values.\n"
"Note: teacher not available and break are not counted as gaps.", 0));
        teacherTextLabel->setText(QApplication::translate("AddConstraintTeacherMaxGapsPerWeekForm_template", "Teacher", 0));
        textLabel1->setText(QApplication::translate("AddConstraintTeacherMaxGapsPerWeekForm_template", "Max gaps per week", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeacherMaxGapsPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeacherMaxGapsPerWeekForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeacherMaxGapsPerWeekForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeacherMaxGapsPerWeekForm_template: public Ui_AddConstraintTeacherMaxGapsPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERMAXGAPSPERWEEKFORM_TEMPLATE_H
