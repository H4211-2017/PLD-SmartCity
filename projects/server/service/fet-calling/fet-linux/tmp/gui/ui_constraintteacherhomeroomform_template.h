/********************************************************************************
** Form generated from reading UI file 'constraintteacherhomeroomform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTTEACHERHOMEROOMFORM_TEMPLATE_H
#define UI_CONSTRAINTTEACHERHOMEROOMFORM_TEMPLATE_H

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

class Ui_ConstraintTeacherHomeRoomForm_template
{
public:
    QGridLayout *gridLayout_2;
    QLabel *textLabel1;
    QVBoxLayout *verticalLayout;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *filterGroupBox_2;
    QGridLayout *gridLayout;
    QComboBox *teachersComboBox;
    QComboBox *roomsComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintTeacherHomeRoomForm_template)
    {
        if (ConstraintTeacherHomeRoomForm_template->objectName().isEmpty())
            ConstraintTeacherHomeRoomForm_template->setObjectName(QStringLiteral("ConstraintTeacherHomeRoomForm_template"));
        ConstraintTeacherHomeRoomForm_template->resize(540, 496);
        gridLayout_2 = new QGridLayout(ConstraintTeacherHomeRoomForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textLabel1 = new QLabel(ConstraintTeacherHomeRoomForm_template);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);
        textLabel1->setWordWrap(true);

        gridLayout_2->addWidget(textLabel1, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        constraintsTextLabel = new QLabel(ConstraintTeacherHomeRoomForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintTeacherHomeRoomForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 2, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintTeacherHomeRoomForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintTeacherHomeRoomForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout_2->addLayout(verticalLayout_2, 1, 1, 1, 1);

        filterGroupBox_2 = new QGroupBox(ConstraintTeacherHomeRoomForm_template);
        filterGroupBox_2->setObjectName(QStringLiteral("filterGroupBox_2"));
        gridLayout = new QGridLayout(filterGroupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersComboBox = new QComboBox(filterGroupBox_2);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 0, 0, 1, 1);

        roomsComboBox = new QComboBox(filterGroupBox_2);
        roomsComboBox->setObjectName(QStringLiteral("roomsComboBox"));

        gridLayout->addWidget(roomsComboBox, 1, 0, 1, 1);


        gridLayout_2->addWidget(filterGroupBox_2, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintTeacherHomeRoomForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintTeacherHomeRoomForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintTeacherHomeRoomForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintTeacherHomeRoomForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 2);


        retranslateUi(ConstraintTeacherHomeRoomForm_template);

        QMetaObject::connectSlotsByName(ConstraintTeacherHomeRoomForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintTeacherHomeRoomForm_template)
    {
        ConstraintTeacherHomeRoomForm_template->setWindowTitle(QApplication::translate("ConstraintTeacherHomeRoomForm_template", "Constraints teacher home room", 0));
        textLabel1->setText(QApplication::translate("ConstraintTeacherHomeRoomForm_template", "Note: a home room for a teacher means that every activity which has this and ONLY this teacher will have this as home room. Preferred rooms override the home rooms.", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintTeacherHomeRoomForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintTeacherHomeRoomForm_template", "Current constraint", 0));
        filterGroupBox_2->setTitle(QApplication::translate("ConstraintTeacherHomeRoomForm_template", "Filter", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintTeacherHomeRoomForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintTeacherHomeRoomForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintTeacherHomeRoomForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintTeacherHomeRoomForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintTeacherHomeRoomForm_template: public Ui_ConstraintTeacherHomeRoomForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTTEACHERHOMEROOMFORM_TEMPLATE_H
