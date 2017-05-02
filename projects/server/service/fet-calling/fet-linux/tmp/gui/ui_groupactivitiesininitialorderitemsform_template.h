/********************************************************************************
** Form generated from reading UI file 'groupactivitiesininitialorderitemsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPACTIVITIESININITIALORDERITEMSFORM_TEMPLATE_H
#define UI_GROUPACTIVITIESININITIALORDERITEMSFORM_TEMPLATE_H

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

class Ui_GroupActivitiesInInitialOrderItemsForm_template
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *itemsTextLabel;
    QListWidget *itemsListWidget;
    QVBoxLayout *verticalLayout;
    QLabel *currentItemTextLabel;
    QPlainTextEdit *currentItemTextEdit;
    QGroupBox *filterGroupBox;
    QGridLayout *gridLayout;
    QLabel *teachersTextLabel;
    QComboBox *teachersComboBox;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
    QLabel *subjectsTextLabel;
    QComboBox *subjectsComboBox;
    QLabel *activityTagsTextLabel;
    QComboBox *activityTagsComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *addItemPushButton;
    QPushButton *modifyItemPushButton;
    QPushButton *removeItemPushButton;
    QPushButton *commentsPushButton;
    QPushButton *sortByCommentsPushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *activatePushButton;
    QPushButton *deactivatePushButton;
    QPushButton *helpPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *GroupActivitiesInInitialOrderItemsForm_template)
    {
        if (GroupActivitiesInInitialOrderItemsForm_template->objectName().isEmpty())
            GroupActivitiesInInitialOrderItemsForm_template->setObjectName(QStringLiteral("GroupActivitiesInInitialOrderItemsForm_template"));
        GroupActivitiesInInitialOrderItemsForm_template->resize(584, 530);
        gridLayout_2 = new QGridLayout(GroupActivitiesInInitialOrderItemsForm_template);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        itemsTextLabel = new QLabel(GroupActivitiesInInitialOrderItemsForm_template);
        itemsTextLabel->setObjectName(QStringLiteral("itemsTextLabel"));
        itemsTextLabel->setFrameShape(QFrame::NoFrame);
        itemsTextLabel->setFrameShadow(QFrame::Plain);
        itemsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(itemsTextLabel);

        itemsListWidget = new QListWidget(GroupActivitiesInInitialOrderItemsForm_template);
        itemsListWidget->setObjectName(QStringLiteral("itemsListWidget"));

        verticalLayout_2->addWidget(itemsListWidget);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentItemTextLabel = new QLabel(GroupActivitiesInInitialOrderItemsForm_template);
        currentItemTextLabel->setObjectName(QStringLiteral("currentItemTextLabel"));
        currentItemTextLabel->setWordWrap(false);

        verticalLayout->addWidget(currentItemTextLabel);

        currentItemTextEdit = new QPlainTextEdit(GroupActivitiesInInitialOrderItemsForm_template);
        currentItemTextEdit->setObjectName(QStringLiteral("currentItemTextEdit"));

        verticalLayout->addWidget(currentItemTextEdit);

        filterGroupBox = new QGroupBox(GroupActivitiesInInitialOrderItemsForm_template);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        gridLayout = new QGridLayout(filterGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        teachersTextLabel = new QLabel(filterGroupBox);
        teachersTextLabel->setObjectName(QStringLiteral("teachersTextLabel"));
        teachersTextLabel->setWordWrap(false);

        gridLayout->addWidget(teachersTextLabel, 0, 0, 1, 1);

        teachersComboBox = new QComboBox(filterGroupBox);
        teachersComboBox->setObjectName(QStringLiteral("teachersComboBox"));

        gridLayout->addWidget(teachersComboBox, 1, 0, 1, 1);

        studentsTextLabel = new QLabel(filterGroupBox);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setWordWrap(false);

        gridLayout->addWidget(studentsTextLabel, 2, 0, 1, 1);

        studentsComboBox = new QComboBox(filterGroupBox);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));

        gridLayout->addWidget(studentsComboBox, 3, 0, 1, 1);

        subjectsTextLabel = new QLabel(filterGroupBox);
        subjectsTextLabel->setObjectName(QStringLiteral("subjectsTextLabel"));
        subjectsTextLabel->setWordWrap(false);

        gridLayout->addWidget(subjectsTextLabel, 4, 0, 1, 1);

        subjectsComboBox = new QComboBox(filterGroupBox);
        subjectsComboBox->setObjectName(QStringLiteral("subjectsComboBox"));

        gridLayout->addWidget(subjectsComboBox, 5, 0, 1, 1);

        activityTagsTextLabel = new QLabel(filterGroupBox);
        activityTagsTextLabel->setObjectName(QStringLiteral("activityTagsTextLabel"));
        activityTagsTextLabel->setWordWrap(false);

        gridLayout->addWidget(activityTagsTextLabel, 6, 0, 1, 1);

        activityTagsComboBox = new QComboBox(filterGroupBox);
        activityTagsComboBox->setObjectName(QStringLiteral("activityTagsComboBox"));

        gridLayout->addWidget(activityTagsComboBox, 7, 0, 1, 1);


        verticalLayout->addWidget(filterGroupBox);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addItemPushButton = new QPushButton(GroupActivitiesInInitialOrderItemsForm_template);
        addItemPushButton->setObjectName(QStringLiteral("addItemPushButton"));

        horizontalLayout->addWidget(addItemPushButton);

        modifyItemPushButton = new QPushButton(GroupActivitiesInInitialOrderItemsForm_template);
        modifyItemPushButton->setObjectName(QStringLiteral("modifyItemPushButton"));

        horizontalLayout->addWidget(modifyItemPushButton);

        removeItemPushButton = new QPushButton(GroupActivitiesInInitialOrderItemsForm_template);
        removeItemPushButton->setObjectName(QStringLiteral("removeItemPushButton"));

        horizontalLayout->addWidget(removeItemPushButton);

        commentsPushButton = new QPushButton(GroupActivitiesInInitialOrderItemsForm_template);
        commentsPushButton->setObjectName(QStringLiteral("commentsPushButton"));

        horizontalLayout->addWidget(commentsPushButton);

        sortByCommentsPushButton = new QPushButton(GroupActivitiesInInitialOrderItemsForm_template);
        sortByCommentsPushButton->setObjectName(QStringLiteral("sortByCommentsPushButton"));

        horizontalLayout->addWidget(sortByCommentsPushButton);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        activatePushButton = new QPushButton(GroupActivitiesInInitialOrderItemsForm_template);
        activatePushButton->setObjectName(QStringLiteral("activatePushButton"));

        horizontalLayout_2->addWidget(activatePushButton);

        deactivatePushButton = new QPushButton(GroupActivitiesInInitialOrderItemsForm_template);
        deactivatePushButton->setObjectName(QStringLiteral("deactivatePushButton"));

        horizontalLayout_2->addWidget(deactivatePushButton);

        helpPushButton = new QPushButton(GroupActivitiesInInitialOrderItemsForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout_2->addWidget(helpPushButton);

        closePushButton = new QPushButton(GroupActivitiesInInitialOrderItemsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_2->addWidget(closePushButton);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 2);


        retranslateUi(GroupActivitiesInInitialOrderItemsForm_template);

        QMetaObject::connectSlotsByName(GroupActivitiesInInitialOrderItemsForm_template);
    } // setupUi

    void retranslateUi(QDialog *GroupActivitiesInInitialOrderItemsForm_template)
    {
        GroupActivitiesInInitialOrderItemsForm_template->setWindowTitle(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Group activities in initial order items", 0));
        itemsTextLabel->setText(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Items", 0));
        currentItemTextLabel->setText(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Current item", 0));
        filterGroupBox->setTitle(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Filter", 0));
        teachersTextLabel->setText(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Teacher", 0));
        studentsTextLabel->setText(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Students set", 0));
        subjectsTextLabel->setText(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Subject", 0));
        activityTagsTextLabel->setText(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Activity tag", 0));
        addItemPushButton->setText(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Add", 0));
        modifyItemPushButton->setText(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Modify", 0));
        removeItemPushButton->setText(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Remove", 0));
        commentsPushButton->setText(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Comments", 0));
        sortByCommentsPushButton->setText(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Sort", 0));
        activatePushButton->setText(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Activate", "Refers to activating a time constraint"));
        deactivatePushButton->setText(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Deactivate", "Refers to deactivating a time constraint"));
        helpPushButton->setText(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("GroupActivitiesInInitialOrderItemsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class GroupActivitiesInInitialOrderItemsForm_template: public Ui_GroupActivitiesInInitialOrderItemsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPACTIVITIESININITIALORDERITEMSFORM_TEMPLATE_H
