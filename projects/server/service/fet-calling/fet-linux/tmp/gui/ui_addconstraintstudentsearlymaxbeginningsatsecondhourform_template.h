/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentsearlymaxbeginningsatsecondhourform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSEARLYMAXBEGINNINGSATSECONDHOURFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSEARLYMAXBEGINNINGSATSECONDHOURFORM_TEMPLATE_H

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

class Ui_AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *instructions1TextLabel;
    QSpacerItem *spacer11_2;
    QLabel *instructions2TextLabel;
    QSpacerItem *spacer11;
    QLabel *maxBeginningsTextLabel;
    QSpinBox *maxBeginningsSpinBox;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template)
    {
        if (AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template->objectName().isEmpty())
            AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template->setObjectName(QStringLiteral("AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template"));
        AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template->resize(670, 404);
        gridLayout = new QGridLayout(AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        instructions1TextLabel = new QLabel(AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        instructions1TextLabel->setObjectName(QStringLiteral("instructions1TextLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(instructions1TextLabel->sizePolicy().hasHeightForWidth());
        instructions1TextLabel->setSizePolicy(sizePolicy);
        instructions1TextLabel->setFrameShape(QFrame::NoFrame);
        instructions1TextLabel->setFrameShadow(QFrame::Plain);
        instructions1TextLabel->setWordWrap(true);

        gridLayout->addWidget(instructions1TextLabel, 0, 0, 1, 3);

        spacer11_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer11_2, 1, 0, 1, 3);

        instructions2TextLabel = new QLabel(AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        instructions2TextLabel->setObjectName(QStringLiteral("instructions2TextLabel"));
        sizePolicy.setHeightForWidth(instructions2TextLabel->sizePolicy().hasHeightForWidth());
        instructions2TextLabel->setSizePolicy(sizePolicy);
        instructions2TextLabel->setFrameShape(QFrame::NoFrame);
        instructions2TextLabel->setFrameShadow(QFrame::Plain);
        instructions2TextLabel->setWordWrap(true);

        gridLayout->addWidget(instructions2TextLabel, 2, 0, 1, 3);

        spacer11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer11, 3, 0, 1, 3);

        maxBeginningsTextLabel = new QLabel(AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        maxBeginningsTextLabel->setObjectName(QStringLiteral("maxBeginningsTextLabel"));
        maxBeginningsTextLabel->setFrameShape(QFrame::NoFrame);
        maxBeginningsTextLabel->setFrameShadow(QFrame::Plain);
        maxBeginningsTextLabel->setWordWrap(false);

        gridLayout->addWidget(maxBeginningsTextLabel, 4, 0, 1, 2);

        maxBeginningsSpinBox = new QSpinBox(AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        maxBeginningsSpinBox->setObjectName(QStringLiteral("maxBeginningsSpinBox"));

        gridLayout->addWidget(maxBeginningsSpinBox, 4, 2, 1, 1);

        weightTextLabel = new QLabel(AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 5, 0, 1, 1);

        weightLineEdit = new QLineEdit(AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 5, 1, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 3);


        retranslateUi(AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template)
    {
        AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template", "Add students early max beginnings at second hour", 0));
        instructions1TextLabel->setText(QApplication::translate("AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template", "This represents the maximum allowed beginnings at the second available hour (in a week). You might want to allow your students to begin in some days later, at the second available hour, so you might put \"max beginnings at second hour\" greater than 0 (the timetable will be easier for FET). Default 0 is given for students which need to begin all classes at the first available hour. You might want to choose a greater value and lower it as you find new timetables", 0));
        instructions2TextLabel->setText(QApplication::translate("AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template", "You have to use weight percentage 100%, because otherwise you will get poor timetables. Currently, the algorithm only accepts 100% weight percentage for this constraint (or no constraint).\n"
"Note: students set not available and break are not counted as gaps (early gaps).", 0));
        maxBeginningsTextLabel->setText(QApplication::translate("AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template", "Max beginnings at second hour (per week)", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template", "Weight percentage (necessary: 100%)", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template: public Ui_AddConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSEARLYMAXBEGINNINGSATSECONDHOURFORM_TEMPLATE_H
