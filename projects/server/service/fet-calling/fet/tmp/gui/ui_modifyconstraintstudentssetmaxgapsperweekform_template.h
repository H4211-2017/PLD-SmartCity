/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentssetmaxgapsperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSSETMAXGAPSPERWEEKFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSSETMAXGAPSPERWEEKFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsSetMaxGapsPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *weightTextLabel_2;
    QSpacerItem *spacer9;
    QVBoxLayout *verticalLayout;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textLabel1;
    QSpinBox *maxGapsSpinBox;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintStudentsSetMaxGapsPerWeekForm_template)
    {
        if (ModifyConstraintStudentsSetMaxGapsPerWeekForm_template->objectName().isEmpty())
            ModifyConstraintStudentsSetMaxGapsPerWeekForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsSetMaxGapsPerWeekForm_template"));
        ModifyConstraintStudentsSetMaxGapsPerWeekForm_template->resize(610, 323);
        gridLayout = new QGridLayout(ModifyConstraintStudentsSetMaxGapsPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        weightTextLabel_2 = new QLabel(ModifyConstraintStudentsSetMaxGapsPerWeekForm_template);
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

        spacer9 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer9, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        studentsTextLabel = new QLabel(ModifyConstraintStudentsSetMaxGapsPerWeekForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(studentsTextLabel);

        studentsComboBox = new QComboBox(ModifyConstraintStudentsSetMaxGapsPerWeekForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));
        studentsComboBox->setEditable(false);
        studentsComboBox->setInsertPolicy(QComboBox::NoInsert);
        studentsComboBox->setAutoCompletion(false);
        studentsComboBox->setDuplicatesEnabled(false);

        verticalLayout->addWidget(studentsComboBox);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsSetMaxGapsPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsSetMaxGapsPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textLabel1 = new QLabel(ModifyConstraintStudentsSetMaxGapsPerWeekForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout_2->addWidget(textLabel1);

        maxGapsSpinBox = new QSpinBox(ModifyConstraintStudentsSetMaxGapsPerWeekForm_template);
        maxGapsSpinBox->setObjectName(QStringLiteral("maxGapsSpinBox"));

        horizontalLayout_2->addWidget(maxGapsSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintStudentsSetMaxGapsPerWeekForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsSetMaxGapsPerWeekForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 1);


        retranslateUi(ModifyConstraintStudentsSetMaxGapsPerWeekForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsSetMaxGapsPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsSetMaxGapsPerWeekForm_template)
    {
        ModifyConstraintStudentsSetMaxGapsPerWeekForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsSetMaxGapsPerWeekForm_template", "Modify students set max gaps per week", 0));
        weightTextLabel_2->setText(QApplication::translate("ModifyConstraintStudentsSetMaxGapsPerWeekForm_template", "You have to use weight percentage 100%, because otherwise you will get poor timetables. Currently, the algorithm only accepts 100% weight percentage for this constraint (or no constraint).\n"
"Note: students set not available and break are not counted as gaps.", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetMaxGapsPerWeekForm_template", "Students", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetMaxGapsPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintStudentsSetMaxGapsPerWeekForm_template", "Max gaps per week", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetMaxGapsPerWeekForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetMaxGapsPerWeekForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsSetMaxGapsPerWeekForm_template: public Ui_ModifyConstraintStudentsSetMaxGapsPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSSETMAXGAPSPERWEEKFORM_TEMPLATE_H
