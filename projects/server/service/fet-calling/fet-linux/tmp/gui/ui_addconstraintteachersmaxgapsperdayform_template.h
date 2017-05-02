/********************************************************************************
** Form generated from reading UI file 'addconstraintteachersmaxgapsperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERSMAXGAPSPERDAYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERSMAXGAPSPERDAYFORM_TEMPLATE_H

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

class Ui_AddConstraintTeachersMaxGapsPerDayForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *weightTextLabel_2;
    QSpacerItem *spacer2;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel1;
    QSpinBox *maxGapsSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintTeachersMaxGapsPerDayForm_template)
    {
        if (AddConstraintTeachersMaxGapsPerDayForm_template->objectName().isEmpty())
            AddConstraintTeachersMaxGapsPerDayForm_template->setObjectName(QStringLiteral("AddConstraintTeachersMaxGapsPerDayForm_template"));
        AddConstraintTeachersMaxGapsPerDayForm_template->resize(670, 312);
        gridLayout = new QGridLayout(AddConstraintTeachersMaxGapsPerDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        weightTextLabel_2 = new QLabel(AddConstraintTeachersMaxGapsPerDayForm_template);
        weightTextLabel_2->setObjectName(QStringLiteral("weightTextLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(weightTextLabel_2->sizePolicy().hasHeightForWidth());
        weightTextLabel_2->setSizePolicy(sizePolicy);
        weightTextLabel_2->setFrameShape(QFrame::NoFrame);
        weightTextLabel_2->setFrameShadow(QFrame::Plain);
        weightTextLabel_2->setWordWrap(true);

        gridLayout->addWidget(weightTextLabel_2, 0, 0, 1, 1);

        spacer2 = new QSpacerItem(20, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel1 = new QLabel(AddConstraintTeachersMaxGapsPerDayForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout->addWidget(textLabel1);

        maxGapsSpinBox = new QSpinBox(AddConstraintTeachersMaxGapsPerDayForm_template);
        maxGapsSpinBox->setObjectName(QStringLiteral("maxGapsSpinBox"));

        horizontalLayout->addWidget(maxGapsSpinBox);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(AddConstraintTeachersMaxGapsPerDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeachersMaxGapsPerDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeachersMaxGapsPerDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeachersMaxGapsPerDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 1);


        retranslateUi(AddConstraintTeachersMaxGapsPerDayForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeachersMaxGapsPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeachersMaxGapsPerDayForm_template)
    {
        AddConstraintTeachersMaxGapsPerDayForm_template->setWindowTitle(QApplication::translate("AddConstraintTeachersMaxGapsPerDayForm_template", "Add teachers max gaps per day", 0));
        weightTextLabel_2->setText(QApplication::translate("AddConstraintTeachersMaxGapsPerDayForm_template", "It is recommended to use only one constraint of this type. You must use weight percentage 100%, because otherwise you will get poor timetables. Try to fix firstly a rather large value for max gaps per day and lower it as you find new timetables. The default given here, 1, might be too low for your school and you might need to use higher values.\n"
"Note: teacher not available and break are not counted as gaps.", 0));
        textLabel1->setText(QApplication::translate("AddConstraintTeachersMaxGapsPerDayForm_template", "Max gaps per day", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeachersMaxGapsPerDayForm_template", "Weight percentage (necessary: 100%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeachersMaxGapsPerDayForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeachersMaxGapsPerDayForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeachersMaxGapsPerDayForm_template: public Ui_AddConstraintTeachersMaxGapsPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERSMAXGAPSPERDAYFORM_TEMPLATE_H
