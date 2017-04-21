/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentssetmaxgapsperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSSETMAXGAPSPERWEEKFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSSETMAXGAPSPERWEEKFORM_TEMPLATE_H

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

class Ui_AddConstraintStudentsSetMaxGapsPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *weightTextLabel_2;
    QSpacerItem *spacer1;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QLabel *textLabel1;
    QSpinBox *maxGapsSpinBox;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintStudentsSetMaxGapsPerWeekForm_template)
    {
        if (AddConstraintStudentsSetMaxGapsPerWeekForm_template->objectName().isEmpty())
            AddConstraintStudentsSetMaxGapsPerWeekForm_template->setObjectName(QStringLiteral("AddConstraintStudentsSetMaxGapsPerWeekForm_template"));
        AddConstraintStudentsSetMaxGapsPerWeekForm_template->resize(527, 328);
        gridLayout = new QGridLayout(AddConstraintStudentsSetMaxGapsPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        weightTextLabel_2 = new QLabel(AddConstraintStudentsSetMaxGapsPerWeekForm_template);
        weightTextLabel_2->setObjectName(QStringLiteral("weightTextLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(weightTextLabel_2->sizePolicy().hasHeightForWidth());
        weightTextLabel_2->setSizePolicy(sizePolicy);
        weightTextLabel_2->setFrameShape(QFrame::NoFrame);
        weightTextLabel_2->setFrameShadow(QFrame::Plain);
        weightTextLabel_2->setWordWrap(true);

        gridLayout->addWidget(weightTextLabel_2, 0, 0, 1, 3);

        spacer1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 1, 0, 1, 1);

        studentsTextLabel = new QLabel(AddConstraintStudentsSetMaxGapsPerWeekForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel, 2, 0, 1, 3);

        studentsComboBox = new QComboBox(AddConstraintStudentsSetMaxGapsPerWeekForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));
        studentsComboBox->setEditable(false);
        studentsComboBox->setInsertPolicy(QComboBox::NoInsert);
        studentsComboBox->setAutoCompletion(false);
        studentsComboBox->setDuplicatesEnabled(false);

        gridLayout->addWidget(studentsComboBox, 3, 0, 1, 3);

        weightTextLabel = new QLabel(AddConstraintStudentsSetMaxGapsPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 4, 0, 1, 1);

        weightLineEdit = new QLineEdit(AddConstraintStudentsSetMaxGapsPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 4, 1, 1, 2);

        textLabel1 = new QLabel(AddConstraintStudentsSetMaxGapsPerWeekForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 5, 0, 1, 2);

        maxGapsSpinBox = new QSpinBox(AddConstraintStudentsSetMaxGapsPerWeekForm_template);
        maxGapsSpinBox->setObjectName(QStringLiteral("maxGapsSpinBox"));

        gridLayout->addWidget(maxGapsSpinBox, 5, 2, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsSetMaxGapsPerWeekForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsSetMaxGapsPerWeekForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 3);


        retranslateUi(AddConstraintStudentsSetMaxGapsPerWeekForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsSetMaxGapsPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsSetMaxGapsPerWeekForm_template)
    {
        AddConstraintStudentsSetMaxGapsPerWeekForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsSetMaxGapsPerWeekForm_template", "Add students set max gaps per week", 0));
        weightTextLabel_2->setText(QApplication::translate("AddConstraintStudentsSetMaxGapsPerWeekForm_template", "You have to use weight percentage 100%, because otherwise you will get poor timetables. Currently, the algorithm only accepts 100% weight percentage for this constraint (or no constraint).\n"
"Note: students set not available and break are not counted as gaps.", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMaxGapsPerWeekForm_template", "Students set", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMaxGapsPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("AddConstraintStudentsSetMaxGapsPerWeekForm_template", "Max gaps per week", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsSetMaxGapsPerWeekForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsSetMaxGapsPerWeekForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsSetMaxGapsPerWeekForm_template: public Ui_AddConstraintStudentsSetMaxGapsPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSSETMAXGAPSPERWEEKFORM_TEMPLATE_H
