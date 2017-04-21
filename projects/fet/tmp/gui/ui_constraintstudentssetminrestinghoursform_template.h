/********************************************************************************
** Form generated from reading UI file 'constraintstudentssetminrestinghoursform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTSTUDENTSSETMINRESTINGHOURSFORM_TEMPLATE_H
#define UI_CONSTRAINTSTUDENTSSETMINRESTINGHOURSFORM_TEMPLATE_H

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

class Ui_ConstraintStudentsSetMinRestingHoursForm_template
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
    QComboBox *studentsComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;
    QLabel *label;

    void setupUi(QDialog *ConstraintStudentsSetMinRestingHoursForm_template)
    {
        if (ConstraintStudentsSetMinRestingHoursForm_template->objectName().isEmpty())
            ConstraintStudentsSetMinRestingHoursForm_template->setObjectName(QStringLiteral("ConstraintStudentsSetMinRestingHoursForm_template"));
        ConstraintStudentsSetMinRestingHoursForm_template->resize(529, 517);
        gridLayout_2 = new QGridLayout(ConstraintStudentsSetMinRestingHoursForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        constraintsTextLabel = new QLabel(ConstraintStudentsSetMinRestingHoursForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintStudentsSetMinRestingHoursForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 2, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintStudentsSetMinRestingHoursForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintStudentsSetMinRestingHoursForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout_2->addLayout(verticalLayout_2, 1, 1, 1, 1);

        filterGroupBox = new QGroupBox(ConstraintStudentsSetMinRestingHoursForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        studentsComboBox = new QComboBox(filterGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 0, 0, 1, 1);


        gridLayout_2->addWidget(filterGroupBox, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintStudentsSetMinRestingHoursForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintStudentsSetMinRestingHoursForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintStudentsSetMinRestingHoursForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintStudentsSetMinRestingHoursForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 2);

        label = new QLabel(ConstraintStudentsSetMinRestingHoursForm_template);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);


        retranslateUi(ConstraintStudentsSetMinRestingHoursForm_template);

        QMetaObject::connectSlotsByName(ConstraintStudentsSetMinRestingHoursForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintStudentsSetMinRestingHoursForm_template)
    {
        ConstraintStudentsSetMinRestingHoursForm_template->setWindowTitle(QApplication::translate("ConstraintStudentsSetMinRestingHoursForm_template", "Constraints students set min resting hours", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintStudentsSetMinRestingHoursForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintStudentsSetMinRestingHoursForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintStudentsSetMinRestingHoursForm_template", "Filter", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintStudentsSetMinRestingHoursForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintStudentsSetMinRestingHoursForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintStudentsSetMinRestingHoursForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintStudentsSetMinRestingHoursForm_template", "Close", 0));
        label->setText(QApplication::translate("ConstraintStudentsSetMinRestingHoursForm_template", "This constraint ensures a minimum number of resting hours between the end of a day and the beginning of the next day. Circular means that the time between the end of the last day of the week and the beginning of the first day of the week is also considered.", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintStudentsSetMinRestingHoursForm_template: public Ui_ConstraintStudentsSetMinRestingHoursForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTSTUDENTSSETMINRESTINGHOURSFORM_TEMPLATE_H
