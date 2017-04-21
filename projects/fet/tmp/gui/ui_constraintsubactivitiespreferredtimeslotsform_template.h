/********************************************************************************
** Form generated from reading UI file 'constraintsubactivitiespreferredtimeslotsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTSUBACTIVITIESPREFERREDTIMESLOTSFORM_TEMPLATE_H
#define UI_CONSTRAINTSUBACTIVITIESPREFERREDTIMESLOTSFORM_TEMPLATE_H

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

class Ui_ConstraintSubactivitiesPreferredTimeSlotsForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *instructionsTextLabel_2;
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
    QHBoxLayout *horizontalLayout_2;
    QPushButton *helpPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintSubactivitiesPreferredTimeSlotsForm_template)
    {
        if (ConstraintSubactivitiesPreferredTimeSlotsForm_template->objectName().isEmpty())
            ConstraintSubactivitiesPreferredTimeSlotsForm_template->setObjectName(QStringLiteral("ConstraintSubactivitiesPreferredTimeSlotsForm_template"));
        ConstraintSubactivitiesPreferredTimeSlotsForm_template->resize(540, 510);
        gridLayout = new QGridLayout(ConstraintSubactivitiesPreferredTimeSlotsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        instructionsTextLabel_2 = new QLabel(ConstraintSubactivitiesPreferredTimeSlotsForm_template);
        instructionsTextLabel_2->setObjectName(QStringLiteral("instructionsTextLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(instructionsTextLabel_2->sizePolicy().hasHeightForWidth());
        instructionsTextLabel_2->setSizePolicy(sizePolicy);
        instructionsTextLabel_2->setWordWrap(true);

        gridLayout->addWidget(instructionsTextLabel_2, 0, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintSubactivitiesPreferredTimeSlotsForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintSubactivitiesPreferredTimeSlotsForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout_2->addWidget(constraintsListWidget);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentConstraintTextLabel = new QLabel(ConstraintSubactivitiesPreferredTimeSlotsForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintSubactivitiesPreferredTimeSlotsForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout->addWidget(currentConstraintTextEdit);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintSubactivitiesPreferredTimeSlotsForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintSubactivitiesPreferredTimeSlotsForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintSubactivitiesPreferredTimeSlotsForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        helpPushButton = new QPushButton(ConstraintSubactivitiesPreferredTimeSlotsForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout_2->addWidget(helpPushButton);

        closePushButton = new QPushButton(ConstraintSubactivitiesPreferredTimeSlotsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_2->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 2);


        retranslateUi(ConstraintSubactivitiesPreferredTimeSlotsForm_template);

        QMetaObject::connectSlotsByName(ConstraintSubactivitiesPreferredTimeSlotsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintSubactivitiesPreferredTimeSlotsForm_template)
    {
        ConstraintSubactivitiesPreferredTimeSlotsForm_template->setWindowTitle(QApplication::translate("ConstraintSubactivitiesPreferredTimeSlotsForm_template", "Constraints subactivities preferred time slots", 0));
        instructionsTextLabel_2->setText(QApplication::translate("ConstraintSubactivitiesPreferredTimeSlotsForm_template", "This constraint is useful to constrain only the n-th component for activities. Please click Help button for details.", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintSubactivitiesPreferredTimeSlotsForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintSubactivitiesPreferredTimeSlotsForm_template", "Current constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintSubactivitiesPreferredTimeSlotsForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintSubactivitiesPreferredTimeSlotsForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintSubactivitiesPreferredTimeSlotsForm_template", "Remove", 0));
        helpPushButton->setText(QApplication::translate("ConstraintSubactivitiesPreferredTimeSlotsForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("ConstraintSubactivitiesPreferredTimeSlotsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintSubactivitiesPreferredTimeSlotsForm_template: public Ui_ConstraintSubactivitiesPreferredTimeSlotsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTSUBACTIVITIESPREFERREDTIMESLOTSFORM_TEMPLATE_H
