/********************************************************************************
** Form generated from reading UI file 'addconstraintactivitypreferredroomform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTACTIVITYPREFERREDROOMFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTACTIVITYPREFERREDROOMFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintActivityPreferredRoomForm_template
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QLabel *teachersTextLabel_2;
    QLabel *studentsTextLabel_2;
    QComboBox *teachersComboBox;
    QComboBox *studentsComboBox;
    QLabel *subjectsTextLabel_2;
    QLabel *activityTagsTextLabel_2;
    QComboBox *subjectsComboBox;
    QComboBox *activityTagsComboBox;
    QLabel *activitiesTextLabel;
    QComboBox *activitiesComboBox;
    QLabel *roomsTextLabel;
    QComboBox *roomsComboBox;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QSpacerItem *spacer1;
    QCheckBox *permLockedCheckBox;
    QLabel *permTextLabel;
    QHBoxLayout *hboxLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintActivityPreferredRoomForm_template)
    {
        if (AddConstraintActivityPreferredRoomForm_template->objectName().isEmpty())
            AddConstraintActivityPreferredRoomForm_template->setObjectName(QStringLiteral("AddConstraintActivityPreferredRoomForm_template"));
        AddConstraintActivityPreferredRoomForm_template->resize(648, 545);
        gridLayout_2 = new QGridLayout(AddConstraintActivityPreferredRoomForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        filterGroupBox = new QGroupBox(AddConstraintActivityPreferredRoomForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersTextLabel_2 = new QLabel(filterGroupBox);
        teachersTextLabel_2->setObjectName(QStringLiteral("teachersTextLabel_2"));
        teachersTextLabel_2->setWordWrap(false);

        gridLayout->addWidget(teachersTextLabel_2, 0, 0, 1, 1);

        studentsTextLabel_2 = new QLabel(filterGroupBox);
        studentsTextLabel_2->setObjectName(QStringLiteral("studentsTextLabel_2"));
        studentsTextLabel_2->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel_2, 0, 1, 1, 1);

        teachersComboBox = new QComboBox(filterGroupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        studentsComboBox = new QComboBox(filterGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 1, 1, 1, 1);

        subjectsTextLabel_2 = new QLabel(filterGroupBox);
        subjectsTextLabel_2->setObjectName(QStringLiteral("subjectsTextLabel_2"));
        subjectsTextLabel_2->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel_2, 2, 0, 1, 1);

        activityTagsTextLabel_2 = new QLabel(filterGroupBox);
        activityTagsTextLabel_2->setObjectName(QStringLiteral("activityTagsTextLabel_2"));
        activityTagsTextLabel_2->setWordWrap(false);

        gridLayout->addWidget(activityTagsTextLabel_2, 2, 1, 1, 1);

        subjectsComboBox = new QComboBox(filterGroupBox);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 3, 0, 1, 1);

        activityTagsComboBox = new QComboBox(filterGroupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 3, 1, 1, 1);


        gridLayout_2->addWidget(filterGroupBox, 0, 0, 1, 1);

        activitiesTextLabel = new QLabel(AddConstraintActivityPreferredRoomForm_template);
        activitiesTextLabel->setObjectName(QStringLiteral("activitiesTextLabel"));
        activitiesTextLabel->setFrameShape(QFrame::NoFrame);
        activitiesTextLabel->setFrameShadow(QFrame::Plain);
        activitiesTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(activitiesTextLabel, 1, 0, 1, 1);

        activitiesComboBox = new QComboBox(AddConstraintActivityPreferredRoomForm_template);
        activitiesComboBox->setObjectName(QStringLiteral("activitiesComboBox"));

        gridLayout_2->addWidget(activitiesComboBox, 2, 0, 1, 1);

        roomsTextLabel = new QLabel(AddConstraintActivityPreferredRoomForm_template);
        roomsTextLabel->setObjectName(QStringLiteral("roomsTextLabel"));
        roomsTextLabel->setFrameShape(QFrame::NoFrame);
        roomsTextLabel->setFrameShadow(QFrame::Plain);
        roomsTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(roomsTextLabel, 3, 0, 1, 1);

        roomsComboBox = new QComboBox(AddConstraintActivityPreferredRoomForm_template);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        gridLayout_2->addWidget(roomsComboBox, 4, 0, 1, 1);

        weightTextLabel = new QLabel(AddConstraintActivityPreferredRoomForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(weightTextLabel, 5, 0, 1, 1);

        weightLineEdit = new QLineEdit(AddConstraintActivityPreferredRoomForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        gridLayout_2->addWidget(weightLineEdit, 6, 0, 1, 1);

        spacer1 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacer1, 7, 0, 1, 1);

        permLockedCheckBox = new QCheckBox(AddConstraintActivityPreferredRoomForm_template);
        permLockedCheckBox->setObjectName(QStringLiteral("permLockedCheckBox"));
        permLockedCheckBox->setChecked(true);

        gridLayout_2->addWidget(permLockedCheckBox, 8, 0, 1, 1);

        permTextLabel = new QLabel(AddConstraintActivityPreferredRoomForm_template);
        permTextLabel->setObjectName(QStringLiteral("permTextLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(permTextLabel->sizePolicy().hasHeightForWidth());
        permTextLabel->setSizePolicy(sizePolicy);
        permTextLabel->setAlignment(Qt::AlignVCenter);
        permTextLabel->setWordWrap(true);

        gridLayout_2->addWidget(permTextLabel, 9, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintActivityPreferredRoomForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        hboxLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintActivityPreferredRoomForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        hboxLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(hboxLayout, 10, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        activitiesTextLabel->setBuddy(roomsComboBox);
        roomsTextLabel->setBuddy(roomsComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(AddConstraintActivityPreferredRoomForm_template);

        QMetaObject::connectSlotsByName(AddConstraintActivityPreferredRoomForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintActivityPreferredRoomForm_template)
    {
        AddConstraintActivityPreferredRoomForm_template->setWindowTitle(QApplication::translate("AddConstraintActivityPreferredRoomForm_template", "Add activity preferred room", 0));
        filterGroupBox->setTitle(QApplication::translate("AddConstraintActivityPreferredRoomForm_template", "Filter", 0));
        teachersTextLabel_2->setText(QApplication::translate("AddConstraintActivityPreferredRoomForm_template", "Teacher", 0));
        studentsTextLabel_2->setText(QApplication::translate("AddConstraintActivityPreferredRoomForm_template", "Students set", 0));
        subjectsTextLabel_2->setText(QApplication::translate("AddConstraintActivityPreferredRoomForm_template", "Subject", 0));
        activityTagsTextLabel_2->setText(QApplication::translate("AddConstraintActivityPreferredRoomForm_template", "Activity tag", 0));
        activitiesTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredRoomForm_template", "Activity", 0));
        roomsTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredRoomForm_template", "Room", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredRoomForm_template", "Weight percentage (recommended: 0.0%-100.0%)", 0));
        permLockedCheckBox->setText(QApplication::translate("AddConstraintActivityPreferredRoomForm_template", "Permanently locked", 0));
        permTextLabel->setText(QApplication::translate("AddConstraintActivityPreferredRoomForm_template", "Select this if you want this constraint not to be unlockable from the 'Timetable' menu (recommended). You can always remove this constraint from the constraints dialogs or uncheck \"permanently locked\" checkbox by editing this constraint", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintActivityPreferredRoomForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintActivityPreferredRoomForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintActivityPreferredRoomForm_template: public Ui_AddConstraintActivityPreferredRoomForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTACTIVITYPREFERREDROOMFORM_TEMPLATE_H
