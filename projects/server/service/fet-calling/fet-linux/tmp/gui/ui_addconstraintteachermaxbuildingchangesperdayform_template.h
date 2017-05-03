/********************************************************************************
** Form generated from reading UI file 'addconstraintteachermaxbuildingchangesperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintTeacherMaxBuildingChangesPerDayForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;
    QVBoxLayout *vboxLayout;
    QLabel *studentsTextLabel;
    QComboBox *teachersComboBox;
    QHBoxLayout *hboxLayout1;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel1;
    QSpinBox *maxChangesSpinBox;
    QSpacerItem *spacer1;

    void setupUi(QDialog *AddConstraintTeacherMaxBuildingChangesPerDayForm_template)
    {
        if (AddConstraintTeacherMaxBuildingChangesPerDayForm_template->objectName().isEmpty())
            AddConstraintTeacherMaxBuildingChangesPerDayForm_template->setObjectName(QStringLiteral("AddConstraintTeacherMaxBuildingChangesPerDayForm_template"));
        AddConstraintTeacherMaxBuildingChangesPerDayForm_template->resize(524, 246);
        gridLayout = new QGridLayout(AddConstraintTeacherMaxBuildingChangesPerDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeacherMaxBuildingChangesPerDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeacherMaxBuildingChangesPerDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        studentsTextLabel = new QLabel(AddConstraintTeacherMaxBuildingChangesPerDayForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        vboxLayout->addWidget(studentsTextLabel);

        teachersComboBox = new QComboBox(AddConstraintTeacherMaxBuildingChangesPerDayForm_template);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));
        teachersComboBox->setEditable(false);
        teachersComboBox->setInsertPolicy(QComboBox::NoInsert);
        teachersComboBox->setAutoCompletion(false);
        teachersComboBox->setDuplicatesEnabled(false);

        vboxLayout->addWidget(teachersComboBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        weightTextLabel = new QLabel(AddConstraintTeacherMaxBuildingChangesPerDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeacherMaxBuildingChangesPerDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout1->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        textLabel1 = new QLabel(AddConstraintTeacherMaxBuildingChangesPerDayForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout2->addWidget(textLabel1);

        maxChangesSpinBox = new QSpinBox(AddConstraintTeacherMaxBuildingChangesPerDayForm_template);
        maxChangesSpinBox->setObjectName(QStringLiteral("maxChangesSpinBox"));

        hboxLayout2->addWidget(maxChangesSpinBox);


        gridLayout->addLayout(hboxLayout2, 3, 0, 1, 1);

        spacer1 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 1, 0, 1, 1);


        retranslateUi(AddConstraintTeacherMaxBuildingChangesPerDayForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeacherMaxBuildingChangesPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeacherMaxBuildingChangesPerDayForm_template)
    {
        AddConstraintTeacherMaxBuildingChangesPerDayForm_template->setWindowTitle(QApplication::translate("AddConstraintTeacherMaxBuildingChangesPerDayForm_template", "Add teacher max building changes per day", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeacherMaxBuildingChangesPerDayForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeacherMaxBuildingChangesPerDayForm_template", "Close", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintTeacherMaxBuildingChangesPerDayForm_template", "Teacher", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeacherMaxBuildingChangesPerDayForm_template", "Weight percentage (necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("AddConstraintTeacherMaxBuildingChangesPerDayForm_template", "Max building changes per day", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeacherMaxBuildingChangesPerDayForm_template: public Ui_AddConstraintTeacherMaxBuildingChangesPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERMAXBUILDINGCHANGESPERDAYFORM_TEMPLATE_H
