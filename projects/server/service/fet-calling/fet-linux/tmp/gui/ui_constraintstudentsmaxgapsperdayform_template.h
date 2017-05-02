/********************************************************************************
** Form generated from reading UI file 'constraintstudentsmaxgapsperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTSTUDENTSMAXGAPSPERDAYFORM_TEMPLATE_H
#define UI_CONSTRAINTSTUDENTSMAXGAPSPERDAYFORM_TEMPLATE_H

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

class Ui_ConstraintStudentsMaxGapsPerDayForm_template
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
    QPushButton *helpPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintStudentsMaxGapsPerDayForm_template)
    {
        if (ConstraintStudentsMaxGapsPerDayForm_template->objectName().isEmpty())
            ConstraintStudentsMaxGapsPerDayForm_template->setObjectName(QStringLiteral("ConstraintStudentsMaxGapsPerDayForm_template"));
        ConstraintStudentsMaxGapsPerDayForm_template->resize(532, 514);
        gridLayout = new QGridLayout(ConstraintStudentsMaxGapsPerDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ConstraintStudentsMaxGapsPerDayForm_template);
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
        constraintsTextLabel = new QLabel(ConstraintStudentsMaxGapsPerDayForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintStudentsMaxGapsPerDayForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintStudentsMaxGapsPerDayForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintStudentsMaxGapsPerDayForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintStudentsMaxGapsPerDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintStudentsMaxGapsPerDayForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintStudentsMaxGapsPerDayForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        helpPushButton = new QPushButton(ConstraintStudentsMaxGapsPerDayForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout->addWidget(helpPushButton);

        closePushButton = new QPushButton(ConstraintStudentsMaxGapsPerDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(ConstraintStudentsMaxGapsPerDayForm_template);

        QMetaObject::connectSlotsByName(ConstraintStudentsMaxGapsPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintStudentsMaxGapsPerDayForm_template)
    {
        ConstraintStudentsMaxGapsPerDayForm_template->setWindowTitle(QApplication::translate("ConstraintStudentsMaxGapsPerDayForm_template", "Constraints students max gaps per day", 0));
        label->setText(QApplication::translate("ConstraintStudentsMaxGapsPerDayForm_template", "IMPORTANT: this constraint is not perfectly optimized. Press Help button for more information. Use with caution, as explained.", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintStudentsMaxGapsPerDayForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintStudentsMaxGapsPerDayForm_template", "Current constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintStudentsMaxGapsPerDayForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintStudentsMaxGapsPerDayForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintStudentsMaxGapsPerDayForm_template", "Remove", 0));
        helpPushButton->setText(QApplication::translate("ConstraintStudentsMaxGapsPerDayForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("ConstraintStudentsMaxGapsPerDayForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintStudentsMaxGapsPerDayForm_template: public Ui_ConstraintStudentsMaxGapsPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTSTUDENTSMAXGAPSPERDAYFORM_TEMPLATE_H
