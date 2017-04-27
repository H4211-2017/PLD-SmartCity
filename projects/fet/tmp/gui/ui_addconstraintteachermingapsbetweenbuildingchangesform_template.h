/********************************************************************************
** Form generated from reading UI file 'addconstraintteachermingapsbetweenbuildingchangesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H

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

class Ui_AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template
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
    QSpinBox *minGapsSpinBox;
    QSpacerItem *spacer1;

    void setupUi(QDialog *AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template)
    {
        if (AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template->objectName().isEmpty())
            AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template->setObjectName(QStringLiteral("AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template"));
        AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template->resize(524, 257);
        gridLayout = new QGridLayout(AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        studentsTextLabel = new QLabel(AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        vboxLayout->addWidget(studentsTextLabel);

        teachersComboBox = new QComboBox(AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
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
        weightTextLabel = new QLabel(AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout1->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        textLabel1 = new QLabel(AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout2->addWidget(textLabel1);

        minGapsSpinBox = new QSpinBox(AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
        minGapsSpinBox->setObjectName(QStringLiteral("minGapsSpinBox"));

        hboxLayout2->addWidget(minGapsSpinBox);


        gridLayout->addLayout(hboxLayout2, 3, 0, 1, 1);

        spacer1 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 1, 0, 1, 1);


        retranslateUi(AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template)
    {
        AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template->setWindowTitle(QApplication::translate("AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template", "Add teacher min gaps between building changes", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template", "Close", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template", "Teacher", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template", "Weight percentage (necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template", "Min gaps between building changes", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template: public Ui_AddConstraintTeacherMinGapsBetweenBuildingChangesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H
