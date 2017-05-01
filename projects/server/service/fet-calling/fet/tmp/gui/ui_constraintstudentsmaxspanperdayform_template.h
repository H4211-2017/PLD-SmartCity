/********************************************************************************
** Form generated from reading UI file 'constraintstudentsmaxspanperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTSTUDENTSMAXSPANPERDAYFORM_TEMPLATE_H
#define UI_CONSTRAINTSTUDENTSMAXSPANPERDAYFORM_TEMPLATE_H

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

class Ui_ConstraintStudentsMaxSpanPerDayForm_template
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

    void setupUi(QDialog *ConstraintStudentsMaxSpanPerDayForm_template)
    {
        if (ConstraintStudentsMaxSpanPerDayForm_template->objectName().isEmpty())
            ConstraintStudentsMaxSpanPerDayForm_template->setObjectName(QStringLiteral("ConstraintStudentsMaxSpanPerDayForm_template"));
        ConstraintStudentsMaxSpanPerDayForm_template->resize(541, 496);
        gridLayout = new QGridLayout(ConstraintStudentsMaxSpanPerDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ConstraintStudentsMaxSpanPerDayForm_template);
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
        constraintsTextLabel = new QLabel(ConstraintStudentsMaxSpanPerDayForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintStudentsMaxSpanPerDayForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintStudentsMaxSpanPerDayForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintStudentsMaxSpanPerDayForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintStudentsMaxSpanPerDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintStudentsMaxSpanPerDayForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintStudentsMaxSpanPerDayForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintStudentsMaxSpanPerDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(ConstraintStudentsMaxSpanPerDayForm_template);

        QMetaObject::connectSlotsByName(ConstraintStudentsMaxSpanPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintStudentsMaxSpanPerDayForm_template)
    {
        ConstraintStudentsMaxSpanPerDayForm_template->setWindowTitle(QApplication::translate("ConstraintStudentsMaxSpanPerDayForm_template", "Constraints students max span per day", 0));
        label->setText(QApplication::translate("ConstraintStudentsMaxSpanPerDayForm_template", "This constraint ensures a maximum span of activities on each day. Span means the count of slots (free or occupied) starting with the first occupied slot of the day and ending with the last occupied slot of the day.", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintStudentsMaxSpanPerDayForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintStudentsMaxSpanPerDayForm_template", "Current constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintStudentsMaxSpanPerDayForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintStudentsMaxSpanPerDayForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintStudentsMaxSpanPerDayForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintStudentsMaxSpanPerDayForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintStudentsMaxSpanPerDayForm_template: public Ui_ConstraintStudentsMaxSpanPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTSTUDENTSMAXSPANPERDAYFORM_TEMPLATE_H
