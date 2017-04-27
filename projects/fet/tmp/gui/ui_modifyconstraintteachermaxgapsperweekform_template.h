/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachermaxgapsperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERMAXGAPSPERWEEKFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERMAXGAPSPERWEEKFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeacherMaxGapsPerWeekForm_template
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *weightTextLabel_2;
    QSpacerItem *spacer4;
    QVBoxLayout *verticalLayout;
    QLabel *teacherTextLabel;
    QComboBox *teachersComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel1;
    QSpinBox *maxGapsSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintTeacherMaxGapsPerWeekForm_template)
    {
        if (ModifyConstraintTeacherMaxGapsPerWeekForm_template->objectName().isEmpty())
            ModifyConstraintTeacherMaxGapsPerWeekForm_template->setObjectName(QStringLiteral("ModifyConstraintTeacherMaxGapsPerWeekForm_template"));
        ModifyConstraintTeacherMaxGapsPerWeekForm_template->resize(610, 324);
        verticalLayout_2 = new QVBoxLayout(ModifyConstraintTeacherMaxGapsPerWeekForm_template);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        weightTextLabel_2 = new QLabel(ModifyConstraintTeacherMaxGapsPerWeekForm_template);
        weightTextLabel_2->setObjectName(QStringLiteral("weightTextLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(weightTextLabel_2->sizePolicy().hasHeightForWidth());
        weightTextLabel_2->setSizePolicy(sizePolicy);
        weightTextLabel_2->setFrameShape(QFrame::NoFrame);
        weightTextLabel_2->setFrameShadow(QFrame::Plain);
        weightTextLabel_2->setWordWrap(true);

        verticalLayout_2->addWidget(weightTextLabel_2);

        spacer4 = new QSpacerItem(20, 59, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacer4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        teacherTextLabel = new QLabel(ModifyConstraintTeacherMaxGapsPerWeekForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        verticalLayout->addWidget(teacherTextLabel);

        teachersComboBox = new QComboBox(ModifyConstraintTeacherMaxGapsPerWeekForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        verticalLayout->addWidget(teachersComboBox);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel1 = new QLabel(ModifyConstraintTeacherMaxGapsPerWeekForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout->addWidget(textLabel1);

        maxGapsSpinBox = new QSpinBox(ModifyConstraintTeacherMaxGapsPerWeekForm_template);
        maxGapsSpinBox->setObjectName(QStringLiteral("maxGapsSpinBox"));

        horizontalLayout->addWidget(maxGapsSpinBox);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(ModifyConstraintTeacherMaxGapsPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeacherMaxGapsPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintTeacherMaxGapsPerWeekForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeacherMaxGapsPerWeekForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        verticalLayout_2->addLayout(hboxLayout);


        retranslateUi(ModifyConstraintTeacherMaxGapsPerWeekForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeacherMaxGapsPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeacherMaxGapsPerWeekForm_template)
    {
        ModifyConstraintTeacherMaxGapsPerWeekForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeacherMaxGapsPerWeekForm_template", "Modify teacher max gaps per week", 0));
        weightTextLabel_2->setText(QApplication::translate("ModifyConstraintTeacherMaxGapsPerWeekForm_template", "You must use weight percentage 100%, because otherwise you will get poor timetables. Try to fix firstly a rather large value for max gaps per week and lower it as you find new timetables.\n"
"Note: teacher not available and break are not counted as gaps.", 0));
        teacherTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMaxGapsPerWeekForm_template", "Teacher", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintTeacherMaxGapsPerWeekForm_template", "Max gaps per week", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMaxGapsPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeacherMaxGapsPerWeekForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeacherMaxGapsPerWeekForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeacherMaxGapsPerWeekForm_template: public Ui_ModifyConstraintTeacherMaxGapsPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERMAXGAPSPERWEEKFORM_TEMPLATE_H
