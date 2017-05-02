/********************************************************************************
** Form generated from reading UI file 'addconstraintteachersmaxspanperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERSMAXSPANPERDAYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERSMAXSPANPERDAYFORM_TEMPLATE_H

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

class Ui_AddConstraintTeachersMaxSpanPerDayForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel1;
    QSpinBox *maxSpanSpinBox;
    QSpacerItem *spacer2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;

    void setupUi(QDialog *AddConstraintTeachersMaxSpanPerDayForm_template)
    {
        if (AddConstraintTeachersMaxSpanPerDayForm_template->objectName().isEmpty())
            AddConstraintTeachersMaxSpanPerDayForm_template->setObjectName(QStringLiteral("AddConstraintTeachersMaxSpanPerDayForm_template"));
        AddConstraintTeachersMaxSpanPerDayForm_template->resize(591, 232);
        gridLayout = new QGridLayout(AddConstraintTeachersMaxSpanPerDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeachersMaxSpanPerDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeachersMaxSpanPerDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel1 = new QLabel(AddConstraintTeachersMaxSpanPerDayForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout->addWidget(textLabel1);

        maxSpanSpinBox = new QSpinBox(AddConstraintTeachersMaxSpanPerDayForm_template);
        maxSpanSpinBox->setObjectName(QStringLiteral("maxSpanSpinBox"));

        horizontalLayout->addWidget(maxSpanSpinBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        spacer2 = new QSpacerItem(20, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer2, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(AddConstraintTeachersMaxSpanPerDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeachersMaxSpanPerDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(AddConstraintTeachersMaxSpanPerDayForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeachersMaxSpanPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeachersMaxSpanPerDayForm_template)
    {
        AddConstraintTeachersMaxSpanPerDayForm_template->setWindowTitle(QApplication::translate("AddConstraintTeachersMaxSpanPerDayForm_template", "Add teachers max span per day", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeachersMaxSpanPerDayForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeachersMaxSpanPerDayForm_template", "Close", 0));
        textLabel1->setText(QApplication::translate("AddConstraintTeachersMaxSpanPerDayForm_template", "Max span per day", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeachersMaxSpanPerDayForm_template", "Weight percentage (necessary: 100%)", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeachersMaxSpanPerDayForm_template: public Ui_AddConstraintTeachersMaxSpanPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERSMAXSPANPERDAYFORM_TEMPLATE_H
