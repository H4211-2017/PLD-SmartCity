/********************************************************************************
** Form generated from reading UI file 'addconstraintbreaktimesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTBREAKTIMESFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTBREAKTIMESFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintBreakTimesForm_template
{
public:
    QGridLayout *gridLayout_2;
    QLabel *textLabel1;
    QHBoxLayout *weightBoxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QTableWidget *notAllowedTimesTable;
    QGridLayout *buttonsGridLayout;
    QPushButton *setAllAllowedPushButton;
    QLabel *label;
    QPushButton *setAllBreakPushButton;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintBreakTimesForm_template)
    {
        if (AddConstraintBreakTimesForm_template->objectName().isEmpty())
            AddConstraintBreakTimesForm_template->setObjectName(QStringLiteral("AddConstraintBreakTimesForm_template"));
        AddConstraintBreakTimesForm_template->resize(646, 566);
        gridLayout_2 = new QGridLayout(AddConstraintBreakTimesForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textLabel1 = new QLabel(AddConstraintBreakTimesForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);
        textLabel1->setWordWrap(true);

        gridLayout_2->addWidget(textLabel1, 0, 0, 1, 1);

        weightBoxLayout = new QHBoxLayout();
        weightBoxLayout->setSpacing(6);
        weightBoxLayout->setObjectName(QStringLiteral("weightBoxLayout"));
        weightTextLabel = new QLabel(AddConstraintBreakTimesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        weightBoxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintBreakTimesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        weightBoxLayout->addWidget(weightLineEdit);


        gridLayout_2->addLayout(weightBoxLayout, 1, 0, 1, 1);

        notAllowedTimesTable = new QTableWidget(AddConstraintBreakTimesForm_template);
        notAllowedTimesTable->setObjectName(QStringLiteral("notAllowedTimesTable"));

        gridLayout_2->addWidget(notAllowedTimesTable, 2, 0, 1, 1);

        buttonsGridLayout = new QGridLayout();
        buttonsGridLayout->setSpacing(6);
        buttonsGridLayout->setObjectName(QStringLiteral("buttonsGridLayout"));
        setAllAllowedPushButton = new QPushButton(AddConstraintBreakTimesForm_template);
        setAllAllowedPushButton->setObjectName(QStringLiteral("setAllAllowedPushButton"));

        buttonsGridLayout->addWidget(setAllAllowedPushButton, 0, 0, 1, 1);

        label = new QLabel(AddConstraintBreakTimesForm_template);
        label->setObjectName(QStringLiteral("label"));

        buttonsGridLayout->addWidget(label, 0, 1, 1, 2);

        setAllBreakPushButton = new QPushButton(AddConstraintBreakTimesForm_template);
        setAllBreakPushButton->setObjectName(QStringLiteral("setAllBreakPushButton"));

        buttonsGridLayout->addWidget(setAllBreakPushButton, 1, 0, 1, 1);

        addConstraintPushButton = new QPushButton(AddConstraintBreakTimesForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        buttonsGridLayout->addWidget(addConstraintPushButton, 1, 1, 1, 1);

        closePushButton = new QPushButton(AddConstraintBreakTimesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        buttonsGridLayout->addWidget(closePushButton, 1, 2, 1, 1);


        gridLayout_2->addLayout(buttonsGridLayout, 3, 0, 1, 1);


        retranslateUi(AddConstraintBreakTimesForm_template);

        QMetaObject::connectSlotsByName(AddConstraintBreakTimesForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintBreakTimesForm_template)
    {
        AddConstraintBreakTimesForm_template->setWindowTitle(QApplication::translate("AddConstraintBreakTimesForm_template", "Add break times", 0));
        textLabel1->setText(QApplication::translate("AddConstraintBreakTimesForm_template", "The important thing is that a break does not induce gaps for teachers or students", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintBreakTimesForm_template", "Weight percentage (necessary: 100%)", 0));
        setAllAllowedPushButton->setText(QApplication::translate("AddConstraintBreakTimesForm_template", "Set all allowed", "It refers to time slots"));
        label->setText(QApplication::translate("AddConstraintBreakTimesForm_template", "X=not allowed, empty=allowed", 0));
        setAllBreakPushButton->setText(QApplication::translate("AddConstraintBreakTimesForm_template", "Set all break", "It refers to time slots"));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintBreakTimesForm_template", "Add", 0));
        closePushButton->setText(QApplication::translate("AddConstraintBreakTimesForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintBreakTimesForm_template: public Ui_AddConstraintBreakTimesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTBREAKTIMESFORM_TEMPLATE_H
