/********************************************************************************
** Form generated from reading UI file 'constraintroomnotavailabletimesform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTROOMNOTAVAILABLETIMESFORM_TEMPLATE_H
#define UI_CONSTRAINTROOMNOTAVAILABLETIMESFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConstraintRoomNotAvailableTimesForm_template
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QComboBox *roomsComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintRoomNotAvailableTimesForm_template)
    {
        if (ConstraintRoomNotAvailableTimesForm_template->objectName().isEmpty())
            ConstraintRoomNotAvailableTimesForm_template->setObjectName(QStringLiteral("ConstraintRoomNotAvailableTimesForm_template"));
        ConstraintRoomNotAvailableTimesForm_template->resize(550, 500);
        gridLayout_2 = new QGridLayout(ConstraintRoomNotAvailableTimesForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        constraintsTextLabel = new QLabel(ConstraintRoomNotAvailableTimesForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintRoomNotAvailableTimesForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 2, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintRoomNotAvailableTimesForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintRoomNotAvailableTimesForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout_2->addLayout(verticalLayout_2, 0, 1, 1, 1);

        filterGroupBox = new QGroupBox(ConstraintRoomNotAvailableTimesForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        roomsComboBox = new QComboBox(filterGroupBox);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        gridLayout->addWidget(roomsComboBox, 0, 0, 1, 1);


        gridLayout_2->addWidget(filterGroupBox, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintRoomNotAvailableTimesForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintRoomNotAvailableTimesForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintRoomNotAvailableTimesForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintRoomNotAvailableTimesForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(ConstraintRoomNotAvailableTimesForm_template);

        QMetaObject::connectSlotsByName(ConstraintRoomNotAvailableTimesForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintRoomNotAvailableTimesForm_template)
    {
        ConstraintRoomNotAvailableTimesForm_template->setWindowTitle(QApplication::translate("ConstraintRoomNotAvailableTimesForm_template", "Constraints room not available times", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintRoomNotAvailableTimesForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintRoomNotAvailableTimesForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintRoomNotAvailableTimesForm_template", "Filter", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintRoomNotAvailableTimesForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintRoomNotAvailableTimesForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintRoomNotAvailableTimesForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintRoomNotAvailableTimesForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintRoomNotAvailableTimesForm_template: public Ui_ConstraintRoomNotAvailableTimesForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTROOMNOTAVAILABLETIMESFORM_TEMPLATE_H
