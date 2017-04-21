/********************************************************************************
** Form generated from reading UI file 'constraintthreeactivitiesgroupedform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTTHREEACTIVITIESGROUPEDFORM_TEMPLATE_H
#define UI_CONSTRAINTTHREEACTIVITIESGROUPEDFORM_TEMPLATE_H

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

class Ui_ConstraintThreeActivitiesGroupedForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLabel *textLabel1_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintThreeActivitiesGroupedForm_template)
    {
        if (ConstraintThreeActivitiesGroupedForm_template->objectName().isEmpty())
            ConstraintThreeActivitiesGroupedForm_template->setObjectName(QStringLiteral("ConstraintThreeActivitiesGroupedForm_template"));
        ConstraintThreeActivitiesGroupedForm_template->resize(527, 518);
        gridLayout = new QGridLayout(ConstraintThreeActivitiesGroupedForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textLabel1 = new QLabel(ConstraintThreeActivitiesGroupedForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);
        textLabel1->setWordWrap(true);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 2);

        textLabel1_2 = new QLabel(ConstraintThreeActivitiesGroupedForm_template);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));
        sizePolicy.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
        textLabel1_2->setSizePolicy(sizePolicy);
        textLabel1_2->setWordWrap(true);

        gridLayout->addWidget(textLabel1_2, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintThreeActivitiesGroupedForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintThreeActivitiesGroupedForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout_2->addWidget(constraintsListWidget);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentConstraintTextLabel = new QLabel(ConstraintThreeActivitiesGroupedForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintThreeActivitiesGroupedForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout->addWidget(currentConstraintTextEdit);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintThreeActivitiesGroupedForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintThreeActivitiesGroupedForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintThreeActivitiesGroupedForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintThreeActivitiesGroupedForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);


        retranslateUi(ConstraintThreeActivitiesGroupedForm_template);

        QMetaObject::connectSlotsByName(ConstraintThreeActivitiesGroupedForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintThreeActivitiesGroupedForm_template)
    {
        ConstraintThreeActivitiesGroupedForm_template->setWindowTitle(QApplication::translate("ConstraintThreeActivitiesGroupedForm_template", "Constraints three activies grouped", 0));
        textLabel1->setText(QApplication::translate("ConstraintThreeActivitiesGroupedForm_template", "This constraint forces 3 activities to be in the same day, one immediately following the other, as a block of 3 activities, in any order, possibly separated by breaks", 0));
        textLabel1_2->setText(QApplication::translate("ConstraintThreeActivitiesGroupedForm_template", "It is a good practice NOT to add this type of constraint to activities which are constrained to be in different days by min days between activities constraints. Please read Help/Important tips, tip number 3).", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintThreeActivitiesGroupedForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintThreeActivitiesGroupedForm_template", "Current constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintThreeActivitiesGroupedForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintThreeActivitiesGroupedForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintThreeActivitiesGroupedForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintThreeActivitiesGroupedForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintThreeActivitiesGroupedForm_template: public Ui_ConstraintThreeActivitiesGroupedForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTTHREEACTIVITIESGROUPEDFORM_TEMPLATE_H
