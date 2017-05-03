/********************************************************************************
** Form generated from reading UI file 'constraintbasiccompulsorytimeform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTBASICCOMPULSORYTIMEFORM_TEMPLATE_H
#define UI_CONSTRAINTBASICCOMPULSORYTIMEFORM_TEMPLATE_H

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

class Ui_ConstraintBasicCompulsoryTimeForm_template
{
public:
    QGridLayout *gridLayout;
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

    void setupUi(QDialog *ConstraintBasicCompulsoryTimeForm_template)
    {
        if (ConstraintBasicCompulsoryTimeForm_template->objectName().isEmpty())
            ConstraintBasicCompulsoryTimeForm_template->setObjectName(QStringLiteral("ConstraintBasicCompulsoryTimeForm_template"));
        ConstraintBasicCompulsoryTimeForm_template->resize(465, 367);
        gridLayout = new QGridLayout(ConstraintBasicCompulsoryTimeForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintBasicCompulsoryTimeForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintBasicCompulsoryTimeForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout_2->addWidget(constraintsListWidget);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentConstraintTextLabel = new QLabel(ConstraintBasicCompulsoryTimeForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintBasicCompulsoryTimeForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout->addWidget(currentConstraintTextEdit);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintBasicCompulsoryTimeForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintBasicCompulsoryTimeForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintBasicCompulsoryTimeForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintBasicCompulsoryTimeForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);


        retranslateUi(ConstraintBasicCompulsoryTimeForm_template);

        QMetaObject::connectSlotsByName(ConstraintBasicCompulsoryTimeForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintBasicCompulsoryTimeForm_template)
    {
        ConstraintBasicCompulsoryTimeForm_template->setWindowTitle(QApplication::translate("ConstraintBasicCompulsoryTimeForm_template", "Constraints basic compulsory time", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintBasicCompulsoryTimeForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintBasicCompulsoryTimeForm_template", "Current constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintBasicCompulsoryTimeForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintBasicCompulsoryTimeForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintBasicCompulsoryTimeForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintBasicCompulsoryTimeForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintBasicCompulsoryTimeForm_template: public Ui_ConstraintBasicCompulsoryTimeForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTBASICCOMPULSORYTIMEFORM_TEMPLATE_H
