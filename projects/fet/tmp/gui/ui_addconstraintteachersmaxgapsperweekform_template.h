/********************************************************************************
** Form generated from reading UI file 'addconstraintteachersmaxgapsperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERSMAXGAPSPERWEEKFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERSMAXGAPSPERWEEKFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintTeachersMaxGapsPerWeekForm_template
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *weightTextLabel_2;
    QSpacerItem *spacer2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textLabel1;
    QSpinBox *maxGapsSpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintTeachersMaxGapsPerWeekForm_template)
    {
        if (AddConstraintTeachersMaxGapsPerWeekForm_template->objectName().isEmpty())
            AddConstraintTeachersMaxGapsPerWeekForm_template->setObjectName(QStringLiteral("AddConstraintTeachersMaxGapsPerWeekForm_template"));
        AddConstraintTeachersMaxGapsPerWeekForm_template->resize(611, 313);
        verticalLayout = new QVBoxLayout(AddConstraintTeachersMaxGapsPerWeekForm_template);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        weightTextLabel_2 = new QLabel(AddConstraintTeachersMaxGapsPerWeekForm_template);
        weightTextLabel_2->setObjectName(QStringLiteral("weightTextLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(weightTextLabel_2->sizePolicy().hasHeightForWidth());
        weightTextLabel_2->setSizePolicy(sizePolicy);
        weightTextLabel_2->setFrameShape(QFrame::NoFrame);
        weightTextLabel_2->setFrameShadow(QFrame::Plain);
        weightTextLabel_2->setWordWrap(true);

        verticalLayout->addWidget(weightTextLabel_2);

        spacer2 = new QSpacerItem(20, 52, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacer2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textLabel1 = new QLabel(AddConstraintTeachersMaxGapsPerWeekForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout_2->addWidget(textLabel1);

        maxGapsSpinBox = new QSpinBox(AddConstraintTeachersMaxGapsPerWeekForm_template);
        maxGapsSpinBox->setObjectName(QStringLiteral("maxGapsSpinBox"));

        horizontalLayout_2->addWidget(maxGapsSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(AddConstraintTeachersMaxGapsPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeachersMaxGapsPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeachersMaxGapsPerWeekForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeachersMaxGapsPerWeekForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(AddConstraintTeachersMaxGapsPerWeekForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeachersMaxGapsPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeachersMaxGapsPerWeekForm_template)
    {
        AddConstraintTeachersMaxGapsPerWeekForm_template->setWindowTitle(QApplication::translate("AddConstraintTeachersMaxGapsPerWeekForm_template", "Add teachers max gaps per week", 0));
        weightTextLabel_2->setText(QApplication::translate("AddConstraintTeachersMaxGapsPerWeekForm_template", "It is recommended to use only one constraint of this type. You must use weight percentage 100%, because otherwise you will get poor timetables. Try to fix firstly a rather large value for max gaps per week and lower it as you find new timetables. The default given here, 3, might be too low for your school and you might need to use higher values.\n"
"Note: teacher not available and break are not counted as gaps.", 0));
        textLabel1->setText(QApplication::translate("AddConstraintTeachersMaxGapsPerWeekForm_template", "Max gaps per week", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeachersMaxGapsPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeachersMaxGapsPerWeekForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeachersMaxGapsPerWeekForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeachersMaxGapsPerWeekForm_template: public Ui_AddConstraintTeachersMaxGapsPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERSMAXGAPSPERWEEKFORM_TEMPLATE_H
