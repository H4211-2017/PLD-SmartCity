/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentssetmaxgapsperdayform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSSETMAXGAPSPERDAYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSSETMAXGAPSPERDAYFORM_TEMPLATE_H

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

class Ui_AddConstraintStudentsSetMaxGapsPerDayForm_template
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

    void setupUi(QDialog *AddConstraintStudentsSetMaxGapsPerDayForm_template)
    {
        if (AddConstraintStudentsSetMaxGapsPerDayForm_template->objectName().isEmpty())
            AddConstraintStudentsSetMaxGapsPerDayForm_template->setObjectName(QStringLiteral("AddConstraintStudentsSetMaxGapsPerDayForm_template"));
        AddConstraintStudentsSetMaxGapsPerDayForm_template->resize(527, 328);
        gridLayout = new QGridLayout(AddConstraintStudentsSetMaxGapsPerDayForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        weightTextLabel_2 = new QLabel(AddConstraintStudentsSetMaxGapsPerDayForm_template);
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

        studentsTextLabel = new QLabel(AddConstraintStudentsSetMaxGapsPerDayForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel, 2, 0, 1, 3);

        studentsComboBox = new QComboBox(AddConstraintStudentsSetMaxGapsPerDayForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));
        studentsComboBox->setEditable(false);
        studentsComboBox->setInsertPolicy(QComboBox::NoInsert);
        studentsComboBox->setAutoCompletion(false);
        studentsComboBox->setDuplicatesEnabled(false);

        gridLayout->addWidget(studentsComboBox, 3, 0, 1, 3);

        weightTextLabel = new QLabel(AddConstraintStudentsSetMaxGapsPerDayForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 4, 0, 1, 1);

        weightLineEdit = new QLineEdit(AddConstraintStudentsSetMaxGapsPerDayForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 4, 1, 1, 2);

        textLabel1 = new QLabel(AddConstraintStudentsSetMaxGapsPerDayForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 5, 0, 1, 2);

        maxGapsSpinBox = new QSpinBox(AddConstraintStudentsSetMaxGapsPerDayForm_template);
        maxGapsSpinBox->setObjectName(QStringLiteral("maxGapsSpinBox"));

        gridLayout->addWidget(maxGapsSpinBox, 5, 2, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsSetMaxGapsPerDayForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsSetMaxGapsPerDayForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 3);


        retranslateUi(AddConstraintStudentsSetMaxGapsPerDayForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsSetMaxGapsPerDayForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsSetMaxGapsPerDayForm_template)
    {
        AddConstraintStudentsSetMaxGapsPerDayForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsSetMaxGapsPerDayForm_template", "Add students set max gaps per day", 0));
        weightTextLabel_2->setText(QApplication::translate("AddConstraintStudentsSetMaxGapsPerDayForm_template", "You have to use weight percentage 100%\n"
"Note: students set not available and break are not counted as gaps.\n"
"\n"
"IMPORTANT: if you want 0 total gaps, it is strongly recommended NOT to use this constraint, but instead use the safer/better max gaps per week.", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMaxGapsPerDayForm_template", "Students set", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMaxGapsPerDayForm_template", "Weight percentage (necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("AddConstraintStudentsSetMaxGapsPerDayForm_template", "Max gaps per day", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsSetMaxGapsPerDayForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsSetMaxGapsPerDayForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsSetMaxGapsPerDayForm_template: public Ui_AddConstraintStudentsSetMaxGapsPerDayForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSSETMAXGAPSPERDAYFORM_TEMPLATE_H
