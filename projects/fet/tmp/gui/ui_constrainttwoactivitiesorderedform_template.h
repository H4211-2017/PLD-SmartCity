/********************************************************************************
** Form generated from reading UI file 'constrainttwoactivitiesorderedform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTTWOACTIVITIESORDEREDFORM_TEMPLATE_H
#define UI_CONSTRAINTTWOACTIVITIESORDEREDFORM_TEMPLATE_H

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

class Ui_ConstraintTwoActivitiesOrderedForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1;
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

    void setupUi(QDialog *ConstraintTwoActivitiesOrderedForm_template)
    {
        if (ConstraintTwoActivitiesOrderedForm_template->objectName().isEmpty())
            ConstraintTwoActivitiesOrderedForm_template->setObjectName(QStringLiteral("ConstraintTwoActivitiesOrderedForm_template"));
        ConstraintTwoActivitiesOrderedForm_template->resize(537, 488);
        gridLayout = new QGridLayout(ConstraintTwoActivitiesOrderedForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textLabel1 = new QLabel(ConstraintTwoActivitiesOrderedForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);
        textLabel1->setWordWrap(true);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintTwoActivitiesOrderedForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintTwoActivitiesOrderedForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout_2->addWidget(constraintsListWidget);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentConstraintTextLabel = new QLabel(ConstraintTwoActivitiesOrderedForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintTwoActivitiesOrderedForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout->addWidget(currentConstraintTextEdit);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintTwoActivitiesOrderedForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintTwoActivitiesOrderedForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintTwoActivitiesOrderedForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintTwoActivitiesOrderedForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(ConstraintTwoActivitiesOrderedForm_template);

        QMetaObject::connectSlotsByName(ConstraintTwoActivitiesOrderedForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintTwoActivitiesOrderedForm_template)
    {
        ConstraintTwoActivitiesOrderedForm_template->setWindowTitle(QApplication::translate("ConstraintTwoActivitiesOrderedForm_template", "Constraints two activies ordered", 0));
        textLabel1->setText(QApplication::translate("ConstraintTwoActivitiesOrderedForm_template", "This constraint forces two activities A1 and A2: A2 to be after A1, separated by any time interval in the week", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintTwoActivitiesOrderedForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintTwoActivitiesOrderedForm_template", "Current constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintTwoActivitiesOrderedForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintTwoActivitiesOrderedForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintTwoActivitiesOrderedForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintTwoActivitiesOrderedForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintTwoActivitiesOrderedForm_template: public Ui_ConstraintTwoActivitiesOrderedForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTTWOACTIVITIESORDEREDFORM_TEMPLATE_H
