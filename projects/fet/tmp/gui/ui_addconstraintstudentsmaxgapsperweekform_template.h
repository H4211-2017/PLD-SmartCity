/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentsmaxgapsperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSMAXGAPSPERWEEKFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSMAXGAPSPERWEEKFORM_TEMPLATE_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintStudentsMaxGapsPerWeekForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *weightTextLabel_2;
    QSpacerItem *spacer6;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QLabel *textLabel1;
    QSpinBox *maxGapsSpinBox;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintStudentsMaxGapsPerWeekForm_template)
    {
        if (AddConstraintStudentsMaxGapsPerWeekForm_template->objectName().isEmpty())
            AddConstraintStudentsMaxGapsPerWeekForm_template->setObjectName(QStringLiteral("AddConstraintStudentsMaxGapsPerWeekForm_template"));
        AddConstraintStudentsMaxGapsPerWeekForm_template->resize(499, 281);
        gridLayout = new QGridLayout(AddConstraintStudentsMaxGapsPerWeekForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        weightTextLabel_2 = new QLabel(AddConstraintStudentsMaxGapsPerWeekForm_template);
        weightTextLabel_2->setObjectName(QStringLiteral("weightTextLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(weightTextLabel_2->sizePolicy().hasHeightForWidth());
        weightTextLabel_2->setSizePolicy(sizePolicy);
        weightTextLabel_2->setFrameShape(QFrame::NoFrame);
        weightTextLabel_2->setFrameShadow(QFrame::Plain);
        weightTextLabel_2->setWordWrap(true);

        gridLayout->addWidget(weightTextLabel_2, 0, 0, 1, 2);

        spacer6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer6, 1, 0, 1, 2);

        weightTextLabel = new QLabel(AddConstraintStudentsMaxGapsPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 2, 0, 1, 1);

        weightLineEdit = new QLineEdit(AddConstraintStudentsMaxGapsPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 2, 1, 1, 1);

        textLabel1 = new QLabel(AddConstraintStudentsMaxGapsPerWeekForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 3, 0, 1, 1);

        maxGapsSpinBox = new QSpinBox(AddConstraintStudentsMaxGapsPerWeekForm_template);
        maxGapsSpinBox->setObjectName(QStringLiteral("maxGapsSpinBox"));

        gridLayout->addWidget(maxGapsSpinBox, 3, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsMaxGapsPerWeekForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsMaxGapsPerWeekForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);


        retranslateUi(AddConstraintStudentsMaxGapsPerWeekForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsMaxGapsPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsMaxGapsPerWeekForm_template)
    {
        AddConstraintStudentsMaxGapsPerWeekForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsMaxGapsPerWeekForm_template", "Add students max gaps per week", 0));
        weightTextLabel_2->setText(QApplication::translate("AddConstraintStudentsMaxGapsPerWeekForm_template", "You have to use weight percentage 100%, because otherwise you will get poor timetables. Currently, the algorithm only accepts 100% weight percentage for this constraint (or no constraint).\n"
"Note: students set not available and break are not counted as gaps.", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsMaxGapsPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("AddConstraintStudentsMaxGapsPerWeekForm_template", "Max gaps per week", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsMaxGapsPerWeekForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsMaxGapsPerWeekForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsMaxGapsPerWeekForm_template: public Ui_AddConstraintStudentsMaxGapsPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSMAXGAPSPERWEEKFORM_TEMPLATE_H
