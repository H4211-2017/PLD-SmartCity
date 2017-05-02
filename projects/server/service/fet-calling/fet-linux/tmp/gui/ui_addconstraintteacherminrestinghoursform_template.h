/********************************************************************************
** Form generated from reading UI file 'addconstraintteacherminrestinghoursform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERMINRESTINGHOURSFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERMINRESTINGHOURSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintTeacherMinRestingHoursForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *teacherTextLabel;
    QComboBox *teachersComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel1;
    QSpinBox *minRestingHoursSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;
    QCheckBox *circularCheckBox;
    QSpacerItem *spacer1;

    void setupUi(QDialog *AddConstraintTeacherMinRestingHoursForm_template)
    {
        if (AddConstraintTeacherMinRestingHoursForm_template->objectName().isEmpty())
            AddConstraintTeacherMinRestingHoursForm_template->setObjectName(QStringLiteral("AddConstraintTeacherMinRestingHoursForm_template"));
        AddConstraintTeacherMinRestingHoursForm_template->resize(619, 294);
        gridLayout = new QGridLayout(AddConstraintTeacherMinRestingHoursForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        teacherTextLabel = new QLabel(AddConstraintTeacherMinRestingHoursForm_template);
        teacherTextLabel->setObjectName(QStringLiteral("teacherTextLabel"));
        teacherTextLabel->setFrameShape(QFrame::NoFrame);
        teacherTextLabel->setFrameShadow(QFrame::Plain);
        teacherTextLabel->setWordWrap(false);

        verticalLayout->addWidget(teacherTextLabel);

        teachersComboBox = new QComboBox(AddConstraintTeacherMinRestingHoursForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        verticalLayout->addWidget(teachersComboBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel1 = new QLabel(AddConstraintTeacherMinRestingHoursForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout->addWidget(textLabel1);

        minRestingHoursSpinBox = new QSpinBox(AddConstraintTeacherMinRestingHoursForm_template);
        minRestingHoursSpinBox->setObjectName(QStringLiteral("minRestingHoursSpinBox"));

        horizontalLayout->addWidget(minRestingHoursSpinBox);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(AddConstraintTeacherMinRestingHoursForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeacherMinRestingHoursForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeacherMinRestingHoursForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeacherMinRestingHoursForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 2);

        circularCheckBox = new QCheckBox(AddConstraintTeacherMinRestingHoursForm_template);
        circularCheckBox->setObjectName(QStringLiteral("circularCheckBox"));

        gridLayout->addWidget(circularCheckBox, 4, 0, 1, 2);

        spacer1 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 0, 0, 1, 2);


        retranslateUi(AddConstraintTeacherMinRestingHoursForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeacherMinRestingHoursForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeacherMinRestingHoursForm_template)
    {
        AddConstraintTeacherMinRestingHoursForm_template->setWindowTitle(QApplication::translate("AddConstraintTeacherMinRestingHoursForm_template", "Add teacher min resting hours", 0));
        teacherTextLabel->setText(QApplication::translate("AddConstraintTeacherMinRestingHoursForm_template", "Teacher", 0));
        textLabel1->setText(QApplication::translate("AddConstraintTeacherMinRestingHoursForm_template", "Min resting hours", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeacherMinRestingHoursForm_template", "Weight percentage (necessary: 100%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeacherMinRestingHoursForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeacherMinRestingHoursForm_template", "Close", 0));
        circularCheckBox->setText(QApplication::translate("AddConstraintTeacherMinRestingHoursForm_template", "Circular", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeacherMinRestingHoursForm_template: public Ui_AddConstraintTeacherMinRestingHoursForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERMINRESTINGHOURSFORM_TEMPLATE_H
