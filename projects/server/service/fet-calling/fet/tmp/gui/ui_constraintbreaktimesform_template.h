/********************************************************************************
** Form generated from reading UI file 'constraintbreaktimesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTBREAKTIMESFORM_TEMPLATE_H
#define UI_CONSTRAINTBREAKTIMESFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConstraintBreakTimesForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QVBoxLayout *verticalLayout;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintBreakTimesForm_template)
    {
        if (ConstraintBreakTimesForm_template->objectName().isEmpty())
            ConstraintBreakTimesForm_template->setObjectName(QStringLiteral("ConstraintBreakTimesForm_template"));
        ConstraintBreakTimesForm_template->resize(522, 473);
        gridLayout = new QGridLayout(ConstraintBreakTimesForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textLabel1 = new QLabel(ConstraintBreakTimesForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);
        textLabel1->setWordWrap(true);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        constraintsTextLabel = new QLabel(ConstraintBreakTimesForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintBreakTimesForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintBreakTimesForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintBreakTimesForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintBreakTimesForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintBreakTimesForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintBreakTimesForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintBreakTimesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(ConstraintBreakTimesForm_template);

        QMetaObject::connectSlotsByName(ConstraintBreakTimesForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintBreakTimesForm_template)
    {
        ConstraintBreakTimesForm_template->setWindowTitle(QApplication::translate("ConstraintBreakTimesForm_template", "Constraints break times", 0));
        textLabel1->setText(QApplication::translate("ConstraintBreakTimesForm_template", "Note: An activity with duration greater than 1 cannot be split over a break. Also, the activities constrained by min days between activities constraints with 'consecutive if same day' = true cannot spread over a break.", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintBreakTimesForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintBreakTimesForm_template", "Current constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintBreakTimesForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintBreakTimesForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintBreakTimesForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintBreakTimesForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintBreakTimesForm_template: public Ui_ConstraintBreakTimesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTBREAKTIMESFORM_TEMPLATE_H
