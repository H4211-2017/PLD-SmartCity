/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentsmaxspanperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSMAXSPANPERDAYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSMAXSPANPERDAYFORM_TEMPLATE_H

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

class Ui_AddConstraintStudentsMaxSpanPerDayForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *weightTextLabel;
    QSpacerItem *spacer6;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;
    QLineEdit *weightLineEdit;
    QLabel *textLabel1;
    QSpinBox *maxSpanSpinBox;

    void setupUi(QDialog *AddConstraintStudentsMaxSpanPerDayForm_template)
    {
        if (AddConstraintStudentsMaxSpanPerDayForm_template->objectName().isEmpty())
            AddConstraintStudentsMaxSpanPerDayForm_template->setObjectName(QStringLiteral("AddConstraintStudentsMaxSpanPerDayForm_template"));
        AddConstraintStudentsMaxSpanPerDayForm_template->resize(592, 227);
        gridLayout = new QGridLayout(AddConstraintStudentsMaxSpanPerDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        weightTextLabel = new QLabel(AddConstraintStudentsMaxSpanPerDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 1, 0, 1, 1);

        spacer6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer6, 0, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsMaxSpanPerDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsMaxSpanPerDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 2);

        weightLineEdit = new QLineEdit(AddConstraintStudentsMaxSpanPerDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 1, 1, 1, 1);

        textLabel1 = new QLabel(AddConstraintStudentsMaxSpanPerDayForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 2, 0, 1, 1);

        maxSpanSpinBox = new QSpinBox(AddConstraintStudentsMaxSpanPerDayForm_template);
        maxSpanSpinBox->setObjectName(QStringLiteral("maxSpanSpinBox"));

        gridLayout->addWidget(maxSpanSpinBox, 2, 1, 1, 1);


        retranslateUi(AddConstraintStudentsMaxSpanPerDayForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsMaxSpanPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsMaxSpanPerDayForm_template)
    {
        AddConstraintStudentsMaxSpanPerDayForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsMaxSpanPerDayForm_template", "Add students max span per day", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsMaxSpanPerDayForm_template", "Weight percentage (necessary: 100%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsMaxSpanPerDayForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsMaxSpanPerDayForm_template", "Close", 0));
        textLabel1->setText(QApplication::translate("AddConstraintStudentsMaxSpanPerDayForm_template", "Max span per day", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsMaxSpanPerDayForm_template: public Ui_AddConstraintStudentsMaxSpanPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSMAXSPANPERDAYFORM_TEMPLATE_H
