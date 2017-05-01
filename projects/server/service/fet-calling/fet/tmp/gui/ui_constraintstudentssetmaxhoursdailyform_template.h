/********************************************************************************
** Form generated from reading UI file 'constraintstudentssetmaxhoursdailyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTSTUDENTSSETMAXHOURSDAILYFORM_TEMPLATE_H
#define UI_CONSTRAINTSTUDENTSSETMAXHOURSDAILYFORM_TEMPLATE_H

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

class Ui_ConstraintStudentsSetMaxHoursDailyForm_template
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
    QComboBox *studentsComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintStudentsSetMaxHoursDailyForm_template)
    {
        if (ConstraintStudentsSetMaxHoursDailyForm_template->objectName().isEmpty())
            ConstraintStudentsSetMaxHoursDailyForm_template->setObjectName(QStringLiteral("ConstraintStudentsSetMaxHoursDailyForm_template"));
        ConstraintStudentsSetMaxHoursDailyForm_template->resize(541, 481);
        gridLayout_2 = new QGridLayout(ConstraintStudentsSetMaxHoursDailyForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintStudentsSetMaxHoursDailyForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintStudentsSetMaxHoursDailyForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout_2->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentConstraintTextLabel = new QLabel(ConstraintStudentsSetMaxHoursDailyForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintStudentsSetMaxHoursDailyForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout->addWidget(currentConstraintTextEdit);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);

        filterGroupBox = new QGroupBox(ConstraintStudentsSetMaxHoursDailyForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        studentsComboBox = new QComboBox(filterGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 0, 0, 1, 1);


        gridLayout_2->addWidget(filterGroupBox, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintStudentsSetMaxHoursDailyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintStudentsSetMaxHoursDailyForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintStudentsSetMaxHoursDailyForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintStudentsSetMaxHoursDailyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(ConstraintStudentsSetMaxHoursDailyForm_template);

        QMetaObject::connectSlotsByName(ConstraintStudentsSetMaxHoursDailyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintStudentsSetMaxHoursDailyForm_template)
    {
        ConstraintStudentsSetMaxHoursDailyForm_template->setWindowTitle(QApplication::translate("ConstraintStudentsSetMaxHoursDailyForm_template", "Constraints students set max hours daily", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintStudentsSetMaxHoursDailyForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintStudentsSetMaxHoursDailyForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintStudentsSetMaxHoursDailyForm_template", "Filter", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintStudentsSetMaxHoursDailyForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintStudentsSetMaxHoursDailyForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintStudentsSetMaxHoursDailyForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintStudentsSetMaxHoursDailyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintStudentsSetMaxHoursDailyForm_template: public Ui_ConstraintStudentsSetMaxHoursDailyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTSTUDENTSSETMAXHOURSDAILYFORM_TEMPLATE_H
