/********************************************************************************
** Form generated from reading UI file 'constraintteachersactivitytagmaxhourscontinuouslyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTTEACHERSACTIVITYTAGMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
#define UI_CONSTRAINTTEACHERSACTIVITYTAGMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H

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

class Ui_ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template
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
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QComboBox *activityTagsComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template)
    {
        if (ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template->objectName().isEmpty())
            ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template->setObjectName(QStringLiteral("ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template"));
        ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template->resize(537, 501);
        gridLayout_2 = new QGridLayout(ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textLabel1 = new QLabel(ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
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
        constraintsTextLabel = new QLabel(ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
        constraintsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout->addWidget(constraintsListWidget);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 2, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentConstraintTextLabel = new QLabel(ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout_2->addWidget(currentConstraintTextEdit);


        gridLayout_2->addLayout(verticalLayout_2, 1, 1, 1, 1);

        filterGroupBox = new QGroupBox(ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        activityTagsComboBox = new QComboBox(filterGroupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 0, 0, 1, 1);


        gridLayout_2->addWidget(filterGroupBox, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        modifyConstraintPushButton = new QPushButton(ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        closePushButton = new QPushButton(ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 2);


        retranslateUi(ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);

        QMetaObject::connectSlotsByName(ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template);
    } // setupUi

    void retranslateUi(QDialog *ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template)
    {
        ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template->setWindowTitle(QApplication::translate("ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template", "Constraints teachers activity tag max hours continuously", 0));
        textLabel1->setText(QApplication::translate("ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template", "This constraint ensures that all teachers do not have more than max hours continuously of activities with the specified activity tag", 0));
        constraintsTextLabel->setText(QApplication::translate("ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template", "Current constraint", 0));
        filterGroupBox->setTitle(QApplication::translate("ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template", "Filter", 0));
        addConstraintPushButton->setText(QApplication::translate("ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template", "Add", 0));
        modifyConstraintPushButton->setText(QApplication::translate("ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template", "Remove", 0));
        closePushButton->setText(QApplication::translate("ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template: public Ui_ConstraintTeachersActivityTagMaxHoursContinuouslyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTTEACHERSACTIVITYTAGMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
