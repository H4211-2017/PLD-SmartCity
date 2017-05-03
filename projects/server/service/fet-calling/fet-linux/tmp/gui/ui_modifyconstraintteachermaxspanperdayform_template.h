/********************************************************************************
** Form generated from reading UI file 'modifyconstraintteachermaxspanperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTTEACHERMAXSPANPERDAYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTTEACHERMAXSPANPERDAYFORM_TEMPLATE_H

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

class Ui_ModifyConstraintTeacherMaxSpanPerDayForm_template
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *spacer4;
    QVBoxLayout *verticalLayout;
    QLabel *teacherTextLabel;
    QComboBox *teachersComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel1;
    QSpinBox *maxSpanSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintTeacherMaxSpanPerDayForm_template)
    {
        if (ModifyConstraintTeacherMaxSpanPerDayForm_template->objectName().isEmpty())
            ModifyConstraintTeacherMaxSpanPerDayForm_template->setObjectName(QStringLiteral("ModifyConstraintTeacherMaxSpanPerDayForm_template"));
        ModifyConstraintTeacherMaxSpanPerDayForm_template->resize(633, 284);
        verticalLayout_2 = new QVBoxLayout(ModifyConstraintTeacherMaxSpanPerDayForm_template);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        spacer4 = new QSpacerItem(99, 99, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacer4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        teacherTextLabel = new QLabel(ModifyConstraintTeacherMaxSpanPerDayForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        verticalLayout->addWidget(teacherTextLabel);

        teachersComboBox = new QComboBox(ModifyConstraintTeacherMaxSpanPerDayForm_template);
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
        textLabel1 = new QLabel(ModifyConstraintTeacherMaxSpanPerDayForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout->addWidget(textLabel1);

        maxSpanSpinBox = new QSpinBox(ModifyConstraintTeacherMaxSpanPerDayForm_template);
        maxSpanSpinBox->setObjectName(QStringLiteral("maxSpanSpinBox"));

        horizontalLayout->addWidget(maxSpanSpinBox);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(ModifyConstraintTeacherMaxSpanPerDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintTeacherMaxSpanPerDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintTeacherMaxSpanPerDayForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintTeacherMaxSpanPerDayForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        verticalLayout_2->addLayout(hboxLayout);


        retranslateUi(ModifyConstraintTeacherMaxSpanPerDayForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintTeacherMaxSpanPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintTeacherMaxSpanPerDayForm_template)
    {
        ModifyConstraintTeacherMaxSpanPerDayForm_template->setWindowTitle(QApplication::translate("ModifyConstraintTeacherMaxSpanPerDayForm_template", "Modify teacher max span per day", 0));
        teacherTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMaxSpanPerDayForm_template", "Teacher", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintTeacherMaxSpanPerDayForm_template", "Max span per day", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintTeacherMaxSpanPerDayForm_template", "Weight percentage (necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintTeacherMaxSpanPerDayForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintTeacherMaxSpanPerDayForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintTeacherMaxSpanPerDayForm_template: public Ui_ModifyConstraintTeacherMaxSpanPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTTEACHERMAXSPANPERDAYFORM_TEMPLATE_H
