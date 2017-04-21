/********************************************************************************
** Form generated from reading UI file 'constrainttwoactivitiesconsecutiveform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTTWOACTIVITIESCONSECUTIVEFORM_TEMPLATE_H
#define UI_CONSTRAINTTWOACTIVITIESCONSECUTIVEFORM_TEMPLATE_H

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

class Ui_ConstraintTwoActivitiesConsecutiveForm_template
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

    void setupUi(QDialog *ConstraintTwoActivitiesConsecutiveForm_template)
    {
        if (ConstraintTwoActivitiesConsecutiveForm_template->objectName().isEmpty())
            ConstraintTwoActivitiesConsecutiveForm_template->setObjectName(QStringLiteral("ConstraintTwoActivitiesConsecutiveForm_template"));
        ConstraintTwoActivitiesConsecutiveForm_template->resize(538, 500);
        gridLayout = new QGridLayout(ConstraintTwoActivitiesConsecutiveForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textLabel1 = new QLabel(ConstraintTwoActivitiesConsecutiveForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);
        textLabel1->setWordWrap(true);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 2);

        textLabel1_2 = new QLabel(ConstraintTwoActivitiesConsecutiveForm_template);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));
        sizePolicy.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
        textLabel1_2->setSizePolicy(sizePolicy);
        textLabel1_2->setWordWrap(true);

        gridLayout->addWidget(textLabel1_2, 1, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintTwoActivitiesConsecutiveForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintTwoActivitiesConsecutiveForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout_2->addWidget(constraintsListWidget);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentConstraintTextLabel = new QLabel(ConstraintTwoActivitiesConsecutiveForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintTwoActivitiesConsecutiveForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout->addWidget(currentConstraintTextEdit);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintTwoActivitiesConsecutiveForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintTwoActivitiesConsecutiveForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintTwoActivitiesConsecutiveForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintTwoActivitiesConsecutiveForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);


        retranslateUi(ConstraintTwoActivitiesConsecutiveForm_template);

        QMetaObject::connectSlotsByName(ConstraintTwoActivitiesConsecutiveForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintTwoActivitiesConsecutiveForm_template)
    {
        ConstraintTwoActivitiesConsecutiveForm_template->setWindowTitle(QApplication::translate("ConstraintTwoActivitiesConsecutiveForm_template", "Constraints two activies consecutive", 0));
        textLabel1->setText(QApplication::translate("ConstraintTwoActivitiesConsecutiveForm_template", "This constraint forces two activities A1 and A2: A2 to be immediately after A1, same day, possibly separated by breaks", 0));
        textLabel1_2->setText(QApplication::translate("ConstraintTwoActivitiesConsecutiveForm_template", "It is a good practice NOT to add this type of constraint to activities which are constrained to be in different days by min days between activities constraints. Please read Help/Important tips, tip number 3).", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintTwoActivitiesConsecutiveForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintTwoActivitiesConsecutiveForm_template", "Current constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintTwoActivitiesConsecutiveForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintTwoActivitiesConsecutiveForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintTwoActivitiesConsecutiveForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintTwoActivitiesConsecutiveForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintTwoActivitiesConsecutiveForm_template: public Ui_ConstraintTwoActivitiesConsecutiveForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTTWOACTIVITIESCONSECUTIVEFORM_TEMPLATE_H
