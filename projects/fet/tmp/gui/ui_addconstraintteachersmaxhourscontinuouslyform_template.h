/********************************************************************************
** Form generated from reading UI file 'addconstraintteachersmaxhourscontinuouslyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERSMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERSMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H

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

class Ui_AddConstraintTeachersMaxHoursContinuouslyForm_template
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

    void setupUi(QDialog *AddConstraintTeachersMaxHoursContinuouslyForm_template)
    {
        if (AddConstraintTeachersMaxHoursContinuouslyForm_template->objectName().isEmpty())
            AddConstraintTeachersMaxHoursContinuouslyForm_template->setObjectName(QStringLiteral("AddConstraintTeachersMaxHoursContinuouslyForm_template"));
        AddConstraintTeachersMaxHoursContinuouslyForm_template->resize(452, 184);
        gridLayout = new QGridLayout(AddConstraintTeachersMaxHoursContinuouslyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(AddConstraintTeachersMaxHoursContinuouslyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeachersMaxHoursContinuouslyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        maxHoursTextLabel = new QLabel(AddConstraintTeachersMaxHoursContinuouslyForm_template);
        maxHoursTextLabel->setObjectName(QStringLiteral("maxHoursTextLabel"));
        maxHoursTextLabel->setFrameShape(QFrame::NoFrame);
        maxHoursTextLabel->setFrameShadow(QFrame::Plain);
        maxHoursTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(maxHoursTextLabel);

        maxHoursSpinBox = new QSpinBox(AddConstraintTeachersMaxHoursContinuouslyForm_template);
        maxHoursSpinBox->setObjectName(QStringLiteral("maxHoursSpinBox"));

        horizontalLayout_2->addWidget(maxHoursSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        addConstraintPushButton = new QPushButton(AddConstraintTeachersMaxHoursContinuouslyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout_3->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeachersMaxHoursContinuouslyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_3->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(AddConstraintTeachersMaxHoursContinuouslyForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeachersMaxHoursContinuouslyForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeachersMaxHoursContinuouslyForm_template)
    {
        AddConstraintTeachersMaxHoursContinuouslyForm_template->setWindowTitle(QApplication::translate("AddConstraintTeachersMaxHoursContinuouslyForm_template", "Add teachers max hours continuously", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeachersMaxHoursContinuouslyForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        maxHoursTextLabel->setText(QApplication::translate("AddConstraintTeachersMaxHoursContinuouslyForm_template", "Max hours continuously", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeachersMaxHoursContinuouslyForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeachersMaxHoursContinuouslyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeachersMaxHoursContinuouslyForm_template: public Ui_AddConstraintTeachersMaxHoursContinuouslyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERSMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
