/********************************************************************************
** Form generated from reading UI file 'addconstraintteachermaxspanperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERMAXSPANPERDAYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERMAXSPANPERDAYFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_AddConstraintTeacherMaxSpanPerDayForm_template
{
public:
    QGridLayout *gridLayout;
    QLineEdit *weightLineEdit;
    QLabel *teacherTextLabel;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;
    QSpacerItem *spacer1;
    QLabel *textLabel1;
    QSpinBox *maxSpanSpinBox;
    QLabel *weightTextLabel;
    QComboBox *teachersComboBox;

    void setupUi(QDialog *AddConstraintTeacherMaxSpanPerDayForm_template)
    {
        if (AddConstraintTeacherMaxSpanPerDayForm_template->objectName().isEmpty())
            AddConstraintTeacherMaxSpanPerDayForm_template->setObjectName(QStringLiteral("AddConstraintTeacherMaxSpanPerDayForm_template"));
        AddConstraintTeacherMaxSpanPerDayForm_template->resize(619, 232);
        gridLayout = new QGridLayout(AddConstraintTeacherMaxSpanPerDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        weightLineEdit = new QLineEdit(AddConstraintTeacherMaxSpanPerDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 4, 1, 1, 1);

        teacherTextLabel = new QLabel(AddConstraintTeacherMaxSpanPerDayForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        gridLayout->addWidget(teacherTextLabel, 1, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeacherMaxSpanPerDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeacherMaxSpanPerDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 2);

        spacer1 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 0, 0, 1, 2);

        textLabel1 = new QLabel(AddConstraintTeacherMaxSpanPerDayForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 3, 0, 1, 1);

        maxSpanSpinBox = new QSpinBox(AddConstraintTeacherMaxSpanPerDayForm_template);
        maxSpanSpinBox->setObjectName(QStringLiteral("maxSpanSpinBox"));

        gridLayout->addWidget(maxSpanSpinBox, 3, 1, 1, 1);

        weightTextLabel = new QLabel(AddConstraintTeacherMaxSpanPerDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 4, 0, 1, 1);

        teachersComboBox = new QComboBox(AddConstraintTeacherMaxSpanPerDayForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        gridLayout->addWidget(teachersComboBox, 2, 0, 1, 2);


        retranslateUi(AddConstraintTeacherMaxSpanPerDayForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeacherMaxSpanPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeacherMaxSpanPerDayForm_template)
    {
        AddConstraintTeacherMaxSpanPerDayForm_template->setWindowTitle(QApplication::translate("AddConstraintTeacherMaxSpanPerDayForm_template", "Add teacher max span per day", 0));
        teacherTextLabel->setText(QApplication::translate("AddConstraintTeacherMaxSpanPerDayForm_template", "Teacher", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeacherMaxSpanPerDayForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeacherMaxSpanPerDayForm_template", "Close", 0));
        textLabel1->setText(QApplication::translate("AddConstraintTeacherMaxSpanPerDayForm_template", "Max span per day", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeacherMaxSpanPerDayForm_template", "Weight percentage (necessary: 100%)", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeacherMaxSpanPerDayForm_template: public Ui_AddConstraintTeacherMaxSpanPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERMAXSPANPERDAYFORM_TEMPLATE_H
