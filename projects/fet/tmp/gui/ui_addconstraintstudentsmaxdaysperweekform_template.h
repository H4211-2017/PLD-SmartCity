/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentsmaxdaysperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSMAXDAYSPERWEEKFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSMAXDAYSPERWEEKFORM_TEMPLATE_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintStudentsMaxDaysPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;
    QSpacerItem *spacer1;
    QHBoxLayout *hboxLayout1;
    QLabel *maxDaysTextLabel;
    QSpinBox *maxDaysSpinBox;
    QHBoxLayout *hboxLayout2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QSpacerItem *spacer1_2;

    void setupUi(QDialog *AddConstraintStudentsMaxDaysPerWeekForm_template)
    {
        if (AddConstraintStudentsMaxDaysPerWeekForm_template->objectName().isEmpty())
            AddConstraintStudentsMaxDaysPerWeekForm_template->setObjectName(QStringLiteral("AddConstraintStudentsMaxDaysPerWeekForm_template"));
        AddConstraintStudentsMaxDaysPerWeekForm_template->resize(472, 298);
        gridLayout = new QGridLayout(AddConstraintStudentsMaxDaysPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsMaxDaysPerWeekForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsMaxDaysPerWeekForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);

        spacer1 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 2, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        maxDaysTextLabel = new QLabel(AddConstraintStudentsMaxDaysPerWeekForm_template);
        maxDaysTextLabel->setObjectName(QStringLiteral("maxDaysTextLabel"));
        maxDaysTextLabel->setFrameShape(QFrame::NoFrame);
        maxDaysTextLabel->setFrameShadow(QFrame::Plain);
        maxDaysTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(maxDaysTextLabel);

        maxDaysSpinBox = new QSpinBox(AddConstraintStudentsMaxDaysPerWeekForm_template);
        maxDaysSpinBox->setObjectName(QStringLiteral("maxDaysSpinBox"));

        hboxLayout1->addWidget(maxDaysSpinBox);


        gridLayout->addLayout(hboxLayout1, 1, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        weightTextLabel = new QLabel(AddConstraintStudentsMaxDaysPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintStudentsMaxDaysPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout2->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout2, 3, 0, 1, 1);

        spacer1_2 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1_2, 0, 0, 1, 1);


        retranslateUi(AddConstraintStudentsMaxDaysPerWeekForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsMaxDaysPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsMaxDaysPerWeekForm_template)
    {
        AddConstraintStudentsMaxDaysPerWeekForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsMaxDaysPerWeekForm_template", "Add students max days per week", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsMaxDaysPerWeekForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsMaxDaysPerWeekForm_template", "Close", 0));
        maxDaysTextLabel->setText(QApplication::translate("AddConstraintStudentsMaxDaysPerWeekForm_template", "Max days per week", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsMaxDaysPerWeekForm_template", "Weight percentage\n"
"(necessary: 100%)", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsMaxDaysPerWeekForm_template: public Ui_AddConstraintStudentsMaxDaysPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSMAXDAYSPERWEEKFORM_TEMPLATE_H
