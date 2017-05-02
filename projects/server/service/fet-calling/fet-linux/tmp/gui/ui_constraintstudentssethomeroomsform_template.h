/********************************************************************************
** Form generated from reading UI file 'constraintstudentssethomeroomsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTSTUDENTSSETHOMEROOMSFORM_TEMPLATE_H
#define UI_CONSTRAINTSTUDENTSSETHOMEROOMSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ConstraintStudentsSetHomeRoomsForm_template
{
public:
    QGridLayout *gridLayout_2;
    QLabel *textLabel1;
    QLabel *constraintsTextLabel;
    QLabel *currentConstraintTextLabel;
    QListWidget *constraintsListWidget;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QComboBox *studentsComboBox;
    QComboBox *roomsComboBox;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintStudentsSetHomeRoomsForm_template)
    {
        if (ConstraintStudentsSetHomeRoomsForm_template->objectName().isEmpty())
            ConstraintStudentsSetHomeRoomsForm_template->setObjectName(QStringLiteral("ConstraintStudentsSetHomeRoomsForm_template"));
        ConstraintStudentsSetHomeRoomsForm_template->resize(567, 496);
        gridLayout_2 = new QGridLayout(ConstraintStudentsSetHomeRoomsForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textLabel1 = new QLabel(ConstraintStudentsSetHomeRoomsForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);
        textLabel1->setWordWrap(true);

        gridLayout_2->addWidget(textLabel1, 0, 0, 1, 4);

        constraintsTextLabel = new QLabel(ConstraintStudentsSetHomeRoomsForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(constraintsTextLabel, 1, 0, 1, 1);

        currentConstraintTextLabel = new QLabel(ConstraintStudentsSetHomeRoomsForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        gridLayout_2->addWidget(currentConstraintTextLabel, 1, 2, 1, 1);

        constraintsListWidget = new QListWidget(ConstraintStudentsSetHomeRoomsForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        gridLayout_2->addWidget(constraintsListWidget, 2, 0, 2, 2);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintStudentsSetHomeRoomsForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        gridLayout_2->addWidget(currentConstraintTextEdit, 2, 2, 1, 2);

        filterGroupBox = new QGroupBox(ConstraintStudentsSetHomeRoomsForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        studentsComboBox = new QComboBox(filterGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 0, 0, 1, 1);

        roomsComboBox = new QComboBox(filterGroupBox);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        gridLayout->addWidget(roomsComboBox, 1, 0, 1, 1);


        gridLayout_2->addWidget(filterGroupBox, 3, 2, 1, 2);

        addConstraintPushButton = new QPushButton(ConstraintStudentsSetHomeRoomsForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        gridLayout_2->addWidget(addConstraintPushButton, 4, 0, 1, 1);

        modifyConstraintPushButton = new QPushButton(ConstraintStudentsSetHomeRoomsForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        gridLayout_2->addWidget(modifyConstraintPushButton, 4, 1, 1, 1);

        removeConstraintPushButton = new QPushButton(ConstraintStudentsSetHomeRoomsForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        gridLayout_2->addWidget(removeConstraintPushButton, 4, 2, 1, 1);

        closePushButton = new QPushButton(ConstraintStudentsSetHomeRoomsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout_2->addWidget(closePushButton, 4, 3, 1, 1);


        retranslateUi(ConstraintStudentsSetHomeRoomsForm_template);

        QMetaObject::connectSlotsByName(ConstraintStudentsSetHomeRoomsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintStudentsSetHomeRoomsForm_template)
    {
        ConstraintStudentsSetHomeRoomsForm_template->setWindowTitle(QApplication::translate("ConstraintStudentsSetHomeRoomsForm_template", "Constraints students set home rooms", 0));
        textLabel1->setText(QApplication::translate("ConstraintStudentsSetHomeRoomsForm_template", "Note: a home room for a students set means that every activity which has this and ONLY this students set will have these home rooms (not other superior or inferior set). You can add home rooms for a group, for a year or for a subgroup, careful not to make impossible timetables. Preferred rooms override the home rooms.", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintStudentsSetHomeRoomsForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintStudentsSetHomeRoomsForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintStudentsSetHomeRoomsForm_template", "Filter", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintStudentsSetHomeRoomsForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintStudentsSetHomeRoomsForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintStudentsSetHomeRoomsForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintStudentsSetHomeRoomsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintStudentsSetHomeRoomsForm_template: public Ui_ConstraintStudentsSetHomeRoomsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTSTUDENTSSETHOMEROOMSFORM_TEMPLATE_H
