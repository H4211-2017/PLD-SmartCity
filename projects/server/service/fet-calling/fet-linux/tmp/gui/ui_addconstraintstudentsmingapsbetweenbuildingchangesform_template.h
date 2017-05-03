/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentsmingapsbetweenbuildingchangesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H

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

class Ui_AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel1;
    QSpinBox *minGapsSpinBox;
    QHBoxLayout *hboxLayout2;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template)
    {
        if (AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template->objectName().isEmpty())
            AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template->setObjectName(QStringLiteral("AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template"));
        AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template->resize(439, 204);
        gridLayout = new QGridLayout(AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        weightTextLabel = new QLabel(AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        hboxLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        hboxLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        textLabel1 = new QLabel(AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout1->addWidget(textLabel1);

        minGapsSpinBox = new QSpinBox(AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template);
        minGapsSpinBox->setObjectName(QStringLiteral("minGapsSpinBox"));

        hboxLayout1->addWidget(minGapsSpinBox);


        gridLayout->addLayout(hboxLayout1, 1, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout2->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout2->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout2, 2, 0, 1, 2);


        retranslateUi(AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template)
    {
        AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template", "Add students min gaps between building changes", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template", "Weight percentage\n"
"(necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template", "Min gaps between building changes", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template: public Ui_AddConstraintStudentsMinGapsBetweenBuildingChangesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSMINGAPSBETWEENBUILDINGCHANGESFORM_TEMPLATE_H
