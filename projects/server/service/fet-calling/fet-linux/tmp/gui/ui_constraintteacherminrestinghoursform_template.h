/********************************************************************************
** Form generated from reading UI file 'constraintteacherminrestinghoursform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTTEACHERMINRESTINGHOURSFORM_TEMPLATE_H
#define UI_CONSTRAINTTEACHERMINRESTINGHOURSFORM_TEMPLATE_H

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

class Ui_ConstraintTeacherMinRestingHoursForm_template
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QComboBox *teachersComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;

    void setupUi(QDialog *ConstraintTeacherMinRestingHoursForm_template)
    {
        if (ConstraintTeacherMinRestingHoursForm_template->objectName().isEmpty())
            ConstraintTeacherMinRestingHoursForm_template->setObjectName(QStringLiteral("ConstraintTeacherMinRestingHoursForm_template"));
        ConstraintTeacherMinRestingHoursForm_template->resize(554, 506);
        gridLayout_2 = new QGridLayout(ConstraintTeacherMinRestingHoursForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(ConstraintTeacherMinRestingHoursForm_template);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentConstraintTextLabel = new QLabel(ConstraintTeacherMinRestingHoursForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintTeacherMinRestingHoursForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout->addWidget(currentConstraintTextEdit);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);

        filterGroupBox = new QGroupBox(ConstraintTeacherMinRestingHoursForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersComboBox = new QComboBox(filterGroupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 0, 0, 1, 1);


        gridLayout_2->addWidget(filterGroupBox, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintTeacherMinRestingHoursForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintTeacherMinRestingHoursForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintTeacherMinRestingHoursForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintTeacherMinRestingHoursForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        constraintsTextLabel = new QLabel(ConstraintTeacherMinRestingHoursForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintTeacherMinRestingHoursForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout_2->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout_2, 1, 0, 2, 1);


        retranslateUi(ConstraintTeacherMinRestingHoursForm_template);

        QMetaObject::connectSlotsByName(ConstraintTeacherMinRestingHoursForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintTeacherMinRestingHoursForm_template)
    {
        ConstraintTeacherMinRestingHoursForm_template->setWindowTitle(QApplication::translate("ConstraintTeacherMinRestingHoursForm_template", "Constraints teacher min resting hours", 0));
        label->setText(QApplication::translate("ConstraintTeacherMinRestingHoursForm_template", "This constraint ensures a minimum number of resting hours between the end of a day and the beginning of the next day. Circular means that the time between the end of the last day of the week and the beginning of the first day of the week is also considered.", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintTeacherMinRestingHoursForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintTeacherMinRestingHoursForm_template", "Filter", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintTeacherMinRestingHoursForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintTeacherMinRestingHoursForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintTeacherMinRestingHoursForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintTeacherMinRestingHoursForm_template", "Close", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintTeacherMinRestingHoursForm_template", "Constraints", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintTeacherMinRestingHoursForm_template: public Ui_ConstraintTeacherMinRestingHoursForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTTEACHERMINRESTINGHOURSFORM_TEMPLATE_H
