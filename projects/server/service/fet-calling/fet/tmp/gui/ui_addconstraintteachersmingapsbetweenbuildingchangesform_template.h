/********************************************************************************
** Form generated from reading UI file 'addconstraintteachersmingapsbetweenbuildingchangesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERSMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERSMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H

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

class Ui_AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;
    QHBoxLayout *hboxLayout1;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel1;
    QSpinBox *minGapsSpinBox;

    void setupUi(QDialog *AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template)
    {
        if (AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template->objectName().isEmpty())
            AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template->setObjectName(QStringLiteral("AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template"));
        AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template->resize(473, 191);
        gridLayout = new QGridLayout(AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        weightTextLabel = new QLabel(AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout1->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout1, 0, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        textLabel1 = new QLabel(AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout2->addWidget(textLabel1);

        minGapsSpinBox = new QSpinBox(AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template);
        minGapsSpinBox->setObjectName(QStringLiteral("minGapsSpinBox"));

        hboxLayout2->addWidget(minGapsSpinBox);


        gridLayout->addLayout(hboxLayout2, 1, 0, 1, 1);


        retranslateUi(AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template)
    {
        AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template->setWindowTitle(QApplication::translate("AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template", "Add teachers min gaps between building changes", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template", "Close", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template", "Weight percentage (necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template", "Min gaps between building changes", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template: public Ui_AddConstraintTeachersMinGapsBetweenBuildingChangesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERSMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H
