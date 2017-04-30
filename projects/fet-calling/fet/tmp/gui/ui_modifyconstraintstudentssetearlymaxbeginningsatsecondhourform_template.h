/********************************************************************************
** Form generated from reading UI file 'modifyconstraintstudentssetearlymaxbeginningsatsecondhourform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYCONSTRAINTSTUDENTSSETEARLYMAXBEGINNINGSATSECONDHOURFORM_TEMPLATE_H
#define UI_MODIFYCONSTRAINTSTUDENTSSETEARLYMAXBEGINNINGSATSECONDHOURFORM_TEMPLATE_H

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

class Ui_ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *weightTextLabel_2_2;
    QSpacerItem *spacer20_2;
    QLabel *weightTextLabel_2;
    QSpacerItem *spacer20;
    QLabel *maxBeginningsTextLabel;
    QSpinBox *maxBeginningsSpinBox;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template)
    {
        if (ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template->objectName().isEmpty())
            ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template->setObjectName(QStringLiteral("ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template"));
        ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template->resize(606, 428);
        gridLayout = new QGridLayout(ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        weightTextLabel_2_2 = new QLabel(ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
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

        spacer20_2 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer20_2, 1, 0, 1, 1);

        weightTextLabel_2 = new QLabel(ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        weightTextLabel_2->setObjectName(QStringLiteral("weightTextLabel_2"));
        sizePolicy.setHeightForWidth(weightTextLabel_2->sizePolicy().hasHeightForWidth());
        weightTextLabel_2->setSizePolicy(sizePolicy);
        weightTextLabel_2->setFrameShape(QFrame::NoFrame);
        weightTextLabel_2->setFrameShadow(QFrame::Plain);
        weightTextLabel_2->setWordWrap(true);

        gridLayout->addWidget(weightTextLabel_2, 2, 0, 1, 3);

        spacer20 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer20, 3, 0, 1, 1);

        maxBeginningsTextLabel = new QLabel(ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        maxBeginningsTextLabel->setObjectName(QStringLiteral("maxBeginningsTextLabel"));
        maxBeginningsTextLabel->setFrameShape(QFrame::NoFrame);
        maxBeginningsTextLabel->setFrameShadow(QFrame::Plain);
        maxBeginningsTextLabel->setWordWrap(false);

        gridLayout->addWidget(maxBeginningsTextLabel, 4, 0, 1, 2);

        maxBeginningsSpinBox = new QSpinBox(ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        maxBeginningsSpinBox->setObjectName(QStringLiteral("maxBeginningsSpinBox"));

        gridLayout->addWidget(maxBeginningsSpinBox, 4, 2, 1, 1);

        studentsTextLabel = new QLabel(ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel, 5, 0, 1, 3);

        studentsComboBox = new QComboBox(ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));
        studentsComboBox->setEditable(false);
        studentsComboBox->setInsertPolicy(QComboBox::NoInsert);
        studentsComboBox->setAutoCompletion(false);
        studentsComboBox->setDuplicatesEnabled(false);

        gridLayout->addWidget(studentsComboBox, 6, 0, 1, 3);

        weightTextLabel = new QLabel(ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout->addWidget(weightTextLabel, 7, 0, 1, 1);

        weightLineEdit = new QLineEdit(ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout->addWidget(weightLineEdit, 7, 1, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        okPushButton = new QPushButton(ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        hboxLayout->addWidget(okPushButton);

        cancelPushButton = new QPushButton(ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        hboxLayout->addWidget(cancelPushButton);


        gridLayout->addLayout(hboxLayout, 8, 0, 1, 3);


        retranslateUi(ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);

        QMetaObject::connectSlotsByName(ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
    } // setupUi

    void retranslateUi(QDialog *ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template)
    {
        ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template->setWindowTitle(QApplication::translate("ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template", "Modify students set early max beginnings at second hour", 0));
        weightTextLabel_2_2->setText(QApplication::translate("ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template", "This represents the maximum allowed beginnings at the second available hour (in a week). You might want to allow your students to begin in some days later, at the second available hour, so you might put \"max beginnings at second hour\" greater than 0 (the timetable will be easier for FET). You might want to choose a greater value and lower it as you find new timetables", 0));
        weightTextLabel_2->setText(QApplication::translate("ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template", "You have to use weight percentage 100%, because otherwise you will get poor timetables. Currently, the algorithm only accepts 100% weight percentage for this constraint (or no constraint).\n"
"Note: students set not available and break are not counted as gaps (early gaps).", 0));
        maxBeginningsTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template", "Max beginnings at second hour (per week)", 0));
        studentsTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template", "Students set", 0));
        weightTextLabel->setText(QApplication::translate("ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template", "Weight percentage (necessary: 100%)", 0));
        okPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template: public Ui_ModifyConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYCONSTRAINTSTUDENTSSETEARLYMAXBEGINNINGSATSECONDHOURFORM_TEMPLATE_H
