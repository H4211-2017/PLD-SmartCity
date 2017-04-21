/********************************************************************************
** Form generated from reading UI file 'addconstraintteachersminrestinghoursform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTTEACHERSMINRESTINGHOURSFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTTEACHERSMINRESTINGHOURSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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

class Ui_AddConstraintTeachersMinRestingHoursForm_template
{
public:
    QGridLayout *gridLayout;
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
    QSpacerItem *spacer2;

    void setupUi(QDialog *AddConstraintTeachersMinRestingHoursForm_template)
    {
        if (AddConstraintTeachersMinRestingHoursForm_template->objectName().isEmpty())
            AddConstraintTeachersMinRestingHoursForm_template->setObjectName(QStringLiteral("AddConstraintTeachersMinRestingHoursForm_template"));
        AddConstraintTeachersMinRestingHoursForm_template->resize(589, 276);
        gridLayout = new QGridLayout(AddConstraintTeachersMinRestingHoursForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textLabel1 = new QLabel(AddConstraintTeachersMinRestingHoursForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setWordWrap(false);

        horizontalLayout->addWidget(textLabel1);

        minRestingHoursSpinBox = new QSpinBox(AddConstraintTeachersMinRestingHoursForm_template);
        minRestingHoursSpinBox->setObjectName(QStringLiteral("minRestingHoursSpinBox"));

        horizontalLayout->addWidget(minRestingHoursSpinBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(AddConstraintTeachersMinRestingHoursForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintTeachersMinRestingHoursForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintTeachersMinRestingHoursForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintTeachersMinRestingHoursForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);

        circularCheckBox = new QCheckBox(AddConstraintTeachersMinRestingHoursForm_template);
        circularCheckBox->setObjectName(QStringLiteral("circularCheckBox"));

        gridLayout->addWidget(circularCheckBox, 3, 0, 1, 2);

        spacer2 = new QSpacerItem(20, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer2, 0, 0, 1, 2);


        retranslateUi(AddConstraintTeachersMinRestingHoursForm_template);

        QMetaObject::connectSlotsByName(AddConstraintTeachersMinRestingHoursForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintTeachersMinRestingHoursForm_template)
    {
        AddConstraintTeachersMinRestingHoursForm_template->setWindowTitle(QApplication::translate("AddConstraintTeachersMinRestingHoursForm_template", "Add teachers min resting hours", 0));
        textLabel1->setText(QApplication::translate("AddConstraintTeachersMinRestingHoursForm_template", "Min resting hours", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintTeachersMinRestingHoursForm_template", "Weight percentage (necessary: 100%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintTeachersMinRestingHoursForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintTeachersMinRestingHoursForm_template", "Close", 0));
        circularCheckBox->setText(QApplication::translate("AddConstraintTeachersMinRestingHoursForm_template", "Circular", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintTeachersMinRestingHoursForm_template: public Ui_AddConstraintTeachersMinRestingHoursForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTTEACHERSMINRESTINGHOURSFORM_TEMPLATE_H
