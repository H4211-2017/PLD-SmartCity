/********************************************************************************
** Form generated from reading UI file 'constraintstudentssetearlymaxbeginningsatsecondhourform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTSTUDENTSSETEARLYMAXBEGINNINGSATSECONDHOURFORM_TEMPLATE_H
#define UI_CONSTRAINTSTUDENTSSETEARLYMAXBEGINNINGSATSECONDHOURFORM_TEMPLATE_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout_2;
    QComboBox *studentsComboBox;
    QGridLayout *gridLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template)
    {
        if (ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template->objectName().isEmpty())
            ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template->setObjectName(QStringLiteral("ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template"));
        ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template->resize(537, 471);
        gridLayout_3 = new QGridLayout(ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        constraintsTextLabel = new QLabel(ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 2, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout_3->addLayout(verticalLayout_2, 0, 1, 1, 1);

        filterGroupBox = new QGroupBox(ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout_2 = new QGridLayout(filterGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        studentsComboBox = new QComboBox(filterGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout_2->addWidget(studentsComboBox, 0, 0, 1, 1);


        gridLayout_3->addWidget(filterGroupBox, 1, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        addConstraintPushButton = new QPushButton(ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        gridLayout->addWidget(addConstraintPushButton, 0, 0, 1, 1);

        modifyConstraintPushButton = new QPushButton(ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        gridLayout->addWidget(modifyConstraintPushButton, 0, 1, 1, 1);

        removeConstraintPushButton = new QPushButton(ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        gridLayout->addWidget(removeConstraintPushButton, 0, 2, 1, 1);

        closePushButton = new QPushButton(ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        gridLayout->addWidget(closePushButton, 0, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 2);


        retranslateUi(ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);

        QMetaObject::connectSlotsByName(ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template)
    {
        ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template->setWindowTitle(QApplication::translate("ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template", "Constraints students set early max beginnings at second hour", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template", "Filter", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template: public Ui_ConstraintStudentsSetEarlyMaxBeginningsAtSecondHourForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTSTUDENTSSETEARLYMAXBEGINNINGSATSECONDHOURFORM_TEMPLATE_H
