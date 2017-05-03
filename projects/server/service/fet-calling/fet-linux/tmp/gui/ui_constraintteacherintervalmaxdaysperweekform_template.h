/********************************************************************************
** Form generated from reading UI file 'constraintteacherintervalmaxdaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTTEACHERINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H
#define UI_CONSTRAINTTEACHERINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConstraintTeacherIntervalMaxDaysPerWeekForm_template
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QComboBox *teachersComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintTeacherIntervalMaxDaysPerWeekForm_template)
    {
        if (ConstraintTeacherIntervalMaxDaysPerWeekForm_template->objectName().isEmpty())
            ConstraintTeacherIntervalMaxDaysPerWeekForm_template->setObjectName(QStringLiteral("ConstraintTeacherIntervalMaxDaysPerWeekForm_template"));
        ConstraintTeacherIntervalMaxDaysPerWeekForm_template->resize(530, 465);
        gridLayout_2 = new QGridLayout(ConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout_2->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentConstraintTextLabel = new QLabel(ConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout->addWidget(currentConstraintTextEdit);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);

        filterGroupBox = new QGroupBox(ConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersComboBox = new QComboBox(filterGroupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 0, 0, 1, 1);


        gridLayout_2->addWidget(filterGroupBox, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintTeacherIntervalMaxDaysPerWeekForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(ConstraintTeacherIntervalMaxDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(ConstraintTeacherIntervalMaxDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintTeacherIntervalMaxDaysPerWeekForm_template)
    {
        ConstraintTeacherIntervalMaxDaysPerWeekForm_template->setWindowTitle(QApplication::translate("ConstraintTeacherIntervalMaxDaysPerWeekForm_template", "Constraints teacher interval max days per week", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintTeacherIntervalMaxDaysPerWeekForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintTeacherIntervalMaxDaysPerWeekForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintTeacherIntervalMaxDaysPerWeekForm_template", "Filter", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintTeacherIntervalMaxDaysPerWeekForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintTeacherIntervalMaxDaysPerWeekForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintTeacherIntervalMaxDaysPerWeekForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintTeacherIntervalMaxDaysPerWeekForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintTeacherIntervalMaxDaysPerWeekForm_template: public Ui_ConstraintTeacherIntervalMaxDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTTEACHERINTERVALMAXDAYSPERWEEKFORM_TEMPLATE_H
