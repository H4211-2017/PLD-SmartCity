/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentsearlymaxbeginningsatsecondhourform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSEARLYMAXBEGINNINGSATSECONDHOURFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSEARLYMAXBEGINNINGSATSECONDHOURFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *weightTextLabel_2_2;
    QSpacerItem *spacer20_2;
    QLabel *weightTextLabel_2;
    QSpacerItem *spacer20;
    QLabel *maxBeginningsTextLabel;
    QSpinBox *maxBeginningsSpinBox;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template)
    {
        if (ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template->objectName().isEmpty())
            ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template"));
        ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template->resize(589, 403);
        gridLayout = new QGridLayout(ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        weightTextLabel_2_2 = new QLabel(ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        weightTextLabel_2_2->setObjectName(QStringLiteral("weightTextLabel_2_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(weightTextLabel_2_2->sizePolicy().hasHeightForWidth());
        weightTextLabel_2_2->setSizePolicy(sizePolicy);
        weightTextLabel_2_2->setFrameShape(QFrame::NoFrame);
        weightTextLabel_2_2->setFrameShadow(QFrame::Plain);
        weightTextLabel_2_2->setWordWrap(true);

        gridLayout->addWidget(weightTextLabel_2_2, 0, 0, 1, 3);

        spacer20_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer20_2, 1, 0, 1, 1);

        weightTextLabel_2 = new QLabel(ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        weightTextLabel_2->setObjectName(QStringLiteral("weightTextLabel_2"));
        sizePolicy.setHeightForWidth(weightTextLabel_2->sizePolicy().hasHeightForWidth());
        weightTextLabel_2->setSizePolicy(sizePolicy);
        weightTextLabel_2->setFrameShape(QFrame::NoFrame);
        weightTextLabel_2->setFrameShadow(QFrame::Plain);
        weightTextLabel_2->setWordWrap(true);

        gridLayout->addWidget(weightTextLabel_2, 2, 0, 1, 3);

        spacer20 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer20, 3, 0, 1, 1);

        maxBeginningsTextLabel = new QLabel(ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        maxBeginningsTextLabel->setObjectName(QStringLiteral("maxBeginningsTextLabel"));
        maxBeginningsTextLabel->setFrameShape(QFrame::NoFrame);
        maxBeginningsTextLabel->setFrameShadow(QFrame::Plain);
        maxBeginningsTextLabel->setWordWrap(false);

        gridLayout->addWidget(maxBeginningsTextLabel, 4, 0, 1, 2);

        maxBeginningsSpinBox = new QSpinBox(ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        maxBeginningsSpinBox->setObjectName(QStringLiteral("maxBeginningsSpinBox"));

        gridLayout->addWidget(maxBeginningsSpinBox, 4, 2, 1, 1);

        weightTextLabel = new QLabel(ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 5, 0, 1, 1);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 5, 1, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 3);


        retranslateUi(ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template)
    {
        ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template", "Modify students early max beginnings at second hour", 0));
        weightTextLabel_2_2->setText(QApplication::translate("ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template", "This represents the maximum allowed beginnings at the second available hour (in a week). You might want to allow your students to begin in some days later, at the second available hour, so you might put \"max beginnings at second hour\" greater than 0 (the timetable will be easier for FET). You might want to choose a greater value and lower it as you find new timetables", 0));
        weightTextLabel_2->setText(QApplication::translate("ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template", "You have to use weight percentage 100%, because otherwise you will get poor timetables. Currently, the algorithm only accepts 100% weight percentage for this constraint (or no constraint).\n"
"Note: students set not available and break are not counted as gaps (early gaps).", 0));
        maxBeginningsTextLabel->setText(QApplication::translate("ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template", "Max beginnings at second hour (per week)", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template", "Weight percentage (necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template: public Ui_ModifyConstraintStudentsEarlyMaxBeginningsAtSecondHourForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSEARLYMAXBEGINNINGSATSECONDHOURFORM_TEMPLATE_H
