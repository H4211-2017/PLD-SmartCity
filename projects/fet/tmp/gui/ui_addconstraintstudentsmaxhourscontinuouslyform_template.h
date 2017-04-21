/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentsmaxhourscontinuouslyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H

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
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintStudentsMaxHoursContinuouslyForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *maxHoursTextLabel;
    QSpinBox *maxHoursSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintStudentsMaxHoursContinuouslyForm_template)
    {
        if (AddConstraintStudentsMaxHoursContinuouslyForm_template->objectName().isEmpty())
            AddConstraintStudentsMaxHoursContinuouslyForm_template->setObjectName(QStringLiteral("AddConstraintStudentsMaxHoursContinuouslyForm_template"));
        AddConstraintStudentsMaxHoursContinuouslyForm_template->resize(454, 171);
        gridLayout = new QGridLayout(AddConstraintStudentsMaxHoursContinuouslyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(AddConstraintStudentsMaxHoursContinuouslyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintStudentsMaxHoursContinuouslyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        maxHoursTextLabel = new QLabel(AddConstraintStudentsMaxHoursContinuouslyForm_template);
        maxHoursTextLabel->setObjectName(QStringLiteral("maxHoursTextLabel"));
        maxHoursTextLabel->setFrameShape(QFrame::NoFrame);
        maxHoursTextLabel->setFrameShadow(QFrame::Plain);
        maxHoursTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(maxHoursTextLabel);

        maxHoursSpinBox = new QSpinBox(AddConstraintStudentsMaxHoursContinuouslyForm_template);
        maxHoursSpinBox->setObjectName(QStringLiteral("maxHoursSpinBox"));

        horizontalLayout_2->addWidget(maxHoursSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsMaxHoursContinuouslyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout_3->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsMaxHoursContinuouslyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_3->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(AddConstraintStudentsMaxHoursContinuouslyForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsMaxHoursContinuouslyForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsMaxHoursContinuouslyForm_template)
    {
        AddConstraintStudentsMaxHoursContinuouslyForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsMaxHoursContinuouslyForm_template", "Add students max hours continuously", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsMaxHoursContinuouslyForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        maxHoursTextLabel->setText(QApplication::translate("AddConstraintStudentsMaxHoursContinuouslyForm_template", "Max hours continuously", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsMaxHoursContinuouslyForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsMaxHoursContinuouslyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsMaxHoursContinuouslyForm_template: public Ui_AddConstraintStudentsMaxHoursContinuouslyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
