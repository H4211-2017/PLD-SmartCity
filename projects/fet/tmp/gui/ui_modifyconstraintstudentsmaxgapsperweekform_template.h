/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentsmaxgapsperweekform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSMAXGAPSPERWEEKFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSMAXGAPSPERWEEKFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModifyConstraintStudentsMaxGapsPerWeekForm_template
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *weightTextLabel_2;
    QSpacerItem *spacer5;
    QHBoxLayout *horizontalLayout;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textLabel1;
    QSpinBox *maxGapsSpinBox;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintStudentsMaxGapsPerWeekForm_template)
    {
        if (ModifyConstraintStudentsMaxGapsPerWeekForm_template->objectName().isEmpty())
            ModifyConstraintStudentsMaxGapsPerWeekForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsMaxGapsPerWeekForm_template"));
        ModifyConstraintStudentsMaxGapsPerWeekForm_template->resize(610, 286);
        verticalLayout = new QVBoxLayout(ModifyConstraintStudentsMaxGapsPerWeekForm_template);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        weightTextLabel_2 = new QLabel(ModifyConstraintStudentsMaxGapsPerWeekForm_template);
        weightTextLabel_2->setObjectName(QStringLiteral("weightTextLabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(weightTextLabel_2->sizePolicy().hasHeightForWidth());
        weightTextLabel_2->setSizePolicy(sizePolicy);
        weightTextLabel_2->setFrameShape(QFrame::NoFrame);
        weightTextLabel_2->setFrameShadow(QFrame::Plain);
        weightTextLabel_2->setWordWrap(true);

        verticalLayout->addWidget(weightTextLabel_2);

        spacer5 = new QSpacerItem(20, 65, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacer5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        weightTextLabel = new QLabel(ModifyConstraintStudentsMaxGapsPerWeekForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsMaxGapsPerWeekForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout->addWidget(weightLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textLabel1 = new QLabel(ModifyConstraintStudentsMaxGapsPerWeekForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout_2->addWidget(textLabel1);

        maxGapsSpinBox = new QSpinBox(ModifyConstraintStudentsMaxGapsPerWeekForm_template);
        maxGapsSpinBox->setObjectName(QStringLiteral("maxGapsSpinBox"));

        horizontalLayout_2->addWidget(maxGapsSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintStudentsMaxGapsPerWeekForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsMaxGapsPerWeekForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(ModifyConstraintStudentsMaxGapsPerWeekForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsMaxGapsPerWeekForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsMaxGapsPerWeekForm_template)
    {
        ModifyConstraintStudentsMaxGapsPerWeekForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsMaxGapsPerWeekForm_template", "Modify students max gaps per week", 0));
        weightTextLabel_2->setText(QApplication::translate("ModifyConstraintStudentsMaxGapsPerWeekForm_template", "You have to use weight percentage 100%, because otherwise you will get poor timetables. Currently, the algorithm only accepts 100% weight percentage for this constraint (or no constraint).\n"
"Note: students set not available and break are not counted as gaps.", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsMaxGapsPerWeekForm_template", "Weight percentage (necessary: 100%)", 0));
        textLabel1->setText(QApplication::translate("ModifyConstraintStudentsMaxGapsPerWeekForm_template", "Max gaps per week", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsMaxGapsPerWeekForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsMaxGapsPerWeekForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsMaxGapsPerWeekForm_template: public Ui_ModifyConstraintStudentsMaxGapsPerWeekForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSMAXGAPSPERWEEKFORM_TEMPLATE_H
