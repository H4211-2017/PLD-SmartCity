/********************************************************************************
** Form generated from reading UI file 'constraintteachersminrestinghoursform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTTEACHERSMINRESTINGHOURSFORM_TEMPLATE_H
#define UI_CONSTRAINTTEACHERSMINRESTINGHOURSFORM_TEMPLATE_H

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

class Ui_ConstraintTeachersMinRestingHoursForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
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

    void setupUi(QDialog *ConstraintTeachersMinRestingHoursForm_template)
    {
        if (ConstraintTeachersMinRestingHoursForm_template->objectName().isEmpty())
            ConstraintTeachersMinRestingHoursForm_template->setObjectName(QStringLiteral("ConstraintTeachersMinRestingHoursForm_template"));
        ConstraintTeachersMinRestingHoursForm_template->resize(541, 496);
        gridLayout = new QGridLayout(ConstraintTeachersMinRestingHoursForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ConstraintTeachersMinRestingHoursForm_template);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        constraintsTextLabel = new QLabel(ConstraintTeachersMinRestingHoursForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintTeachersMinRestingHoursForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintTeachersMinRestingHoursForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintTeachersMinRestingHoursForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintTeachersMinRestingHoursForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintTeachersMinRestingHoursForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintTeachersMinRestingHoursForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintTeachersMinRestingHoursForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(ConstraintTeachersMinRestingHoursForm_template);

        QMetaObject::connectSlotsByName(ConstraintTeachersMinRestingHoursForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintTeachersMinRestingHoursForm_template)
    {
        ConstraintTeachersMinRestingHoursForm_template->setWindowTitle(QApplication::translate("ConstraintTeachersMinRestingHoursForm_template", "Constraints teachers min resting hours", 0));
        label->setText(QApplication::translate("ConstraintTeachersMinRestingHoursForm_template", "This constraint ensures a minimum number of resting hours between the end of a day and the beginning of the next day. Circular means that the time between the end of the last day of the week and the beginning of the first day of the week is also considered.", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintTeachersMinRestingHoursForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintTeachersMinRestingHoursForm_template", "Current constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintTeachersMinRestingHoursForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintTeachersMinRestingHoursForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintTeachersMinRestingHoursForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintTeachersMinRestingHoursForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintTeachersMinRestingHoursForm_template: public Ui_ConstraintTeachersMinRestingHoursForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTTEACHERSMINRESTINGHOURSFORM_TEMPLATE_H
