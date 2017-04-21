/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentsmaxspanperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSMAXSPANPERDAYFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSMAXSPANPERDAYFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsMaxSpanPerDayForm_template
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacer5;
    QHBoxLayout *horizontalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textLabel1;
    QSpinBox *maxSpanSpinBox;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintStudentsMaxSpanPerDayForm_template)
    {
        if (ModifyConstraintStudentsMaxSpanPerDayForm_template->objectName().isEmpty())
            ModifyConstraintStudentsMaxSpanPerDayForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsMaxSpanPerDayForm_template"));
        ModifyConstraintStudentsMaxSpanPerDayForm_template->resize(629, 263);
        gridLayout = new QGridLayout(ModifyConstraintStudentsMaxSpanPerDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spacer5 = new QSpacerItem(20, 45, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer5, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsMaxSpanPerDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsMaxSpanPerDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textLabel1 = new QLabel(ModifyConstraintStudentsMaxSpanPerDayForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout_2->addWidget(textLabel1);

        maxSpanSpinBox = new QSpinBox(ModifyConstraintStudentsMaxSpanPerDayForm_template);
        maxSpanSpinBox->setObjectName(QStringLiteral("maxSpanSpinBox"));

        horizontalLayout_2->addWidget(maxSpanSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintStudentsMaxSpanPerDayForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsMaxSpanPerDayForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 1);


        retranslateUi(ModifyConstraintStudentsMaxSpanPerDayForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsMaxSpanPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsMaxSpanPerDayForm_template)
    {
        ModifyConstraintStudentsMaxSpanPerDayForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsMaxSpanPerDayForm_template", "Modify students max span per day", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsMaxSpanPerDayForm_template", "Weight percentage (necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintStudentsMaxSpanPerDayForm_template", "Max span per day", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsMaxSpanPerDayForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsMaxSpanPerDayForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsMaxSpanPerDayForm_template: public Ui_ModifyConstraintStudentsMaxSpanPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSMAXSPANPERDAYFORM_TEMPLATE_H
