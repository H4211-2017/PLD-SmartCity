/********************************************************************************
** Form generated from reading UI file 'constraintsubactivitiespreferredstartingtimesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTSUBACTIVITIESPREFERREDSTARTINGTIMESFORM_TEMPLATE_H
#define UI_CONSTRAINTSUBACTIVITIESPREFERREDSTARTINGTIMESFORM_TEMPLATE_H

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

class Ui_ConstraintSubactivitiesPreferredStartingTimesForm_template
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
    QHBoxLayout *horizontalLayout_2;
    QPushButton *helpPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintSubactivitiesPreferredStartingTimesForm_template)
    {
        if (ConstraintSubactivitiesPreferredStartingTimesForm_template->objectName().isEmpty())
            ConstraintSubactivitiesPreferredStartingTimesForm_template->setObjectName(QStringLiteral("ConstraintSubactivitiesPreferredStartingTimesForm_template"));
        ConstraintSubactivitiesPreferredStartingTimesForm_template->resize(542, 507);
        gridLayout = new QGridLayout(ConstraintSubactivitiesPreferredStartingTimesForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textLabel1 = new QLabel(ConstraintSubactivitiesPreferredStartingTimesForm_template);
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
        constraintsTextLabel = new QLabel(ConstraintSubactivitiesPreferredStartingTimesForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintSubactivitiesPreferredStartingTimesForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintSubactivitiesPreferredStartingTimesForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintSubactivitiesPreferredStartingTimesForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintSubactivitiesPreferredStartingTimesForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintSubactivitiesPreferredStartingTimesForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintSubactivitiesPreferredStartingTimesForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        helpPushButton = new QPushButton(ConstraintSubactivitiesPreferredStartingTimesForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout_2->addWidget(helpPushButton);

        closePushButton = new QPushButton(ConstraintSubactivitiesPreferredStartingTimesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_2->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 2);


        retranslateUi(ConstraintSubactivitiesPreferredStartingTimesForm_template);

        QMetaObject::connectSlotsByName(ConstraintSubactivitiesPreferredStartingTimesForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintSubactivitiesPreferredStartingTimesForm_template)
    {
        ConstraintSubactivitiesPreferredStartingTimesForm_template->setWindowTitle(QApplication::translate("ConstraintSubactivitiesPreferredStartingTimesForm_template", "Constraints subactivities preferred starting times", 0));
        textLabel1->setText(QApplication::translate("ConstraintSubactivitiesPreferredStartingTimesForm_template", "This constraint is useful to constrain only the n-th component for activities. Please click Help button for details.", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintSubactivitiesPreferredStartingTimesForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintSubactivitiesPreferredStartingTimesForm_template", "Current constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintSubactivitiesPreferredStartingTimesForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintSubactivitiesPreferredStartingTimesForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintSubactivitiesPreferredStartingTimesForm_template", "Remove", 0));
        helpPushButton->setText(QApplication::translate("ConstraintSubactivitiesPreferredStartingTimesForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("ConstraintSubactivitiesPreferredStartingTimesForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintSubactivitiesPreferredStartingTimesForm_template: public Ui_ConstraintSubactivitiesPreferredStartingTimesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTSUBACTIVITIESPREFERREDSTARTINGTIMESFORM_TEMPLATE_H
