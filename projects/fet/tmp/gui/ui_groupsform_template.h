/********************************************************************************
** Form generated from reading UI file 'groupsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPSFORM_TEMPLATE_H
#define UI_GROUPSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupsForm_template
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *yearTextLabel;
    QListWidget *yearsListWidget;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *groupsTextLabel;
    QListWidget *groupsListWidget;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QLabel *groupTextLabel;
    QPlainTextEdit *groupTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addGroupPushButton;
    QPushButton *modifyGroupPushButton;
    QPushButton *removeGroupPushButton;
    QPushButton *purgeGroupPushButton;
    QPushButton *activateStudentsPushButton;
    QPushButton *deactivateStudentsPushButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *commentsPushButton;
    QPushButton *moveGroupUpPushButton;
    QPushButton *moveGroupDownPushButton;
    QPushButton *sortGroupsPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *GroupsForm_template)
    {
        if (GroupsForm_template->objectName().isEmpty())
            GroupsForm_template->setObjectName(QStringLiteral("GroupsForm_template"));
        GroupsForm_template->resize(657, 498);
        gridLayout = new QGridLayout(GroupsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(GroupsForm_template);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        yearTextLabel = new QLabel(layoutWidget);
        yearTextLabel->setObjectName(QStringLiteral("yearTextLabel"));
        yearTextLabel->setWordWrap(false);

        verticalLayout->addWidget(yearTextLabel);

        yearsListWidget = new QListWidget(layoutWidget);
        yearsListWidget->setObjectName(QStringLiteral("yearsListWidget"));

        verticalLayout->addWidget(yearsListWidget);

        splitter->addWidget(layoutWidget);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupsTextLabel = new QLabel(layoutWidget2);
        groupsTextLabel->setObjectName(QStringLiteral("groupsTextLabel"));
        groupsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(groupsTextLabel);

        groupsListWidget = new QListWidget(layoutWidget2);
        groupsListWidget->setObjectName(QStringLiteral("groupsListWidget"));

        verticalLayout_2->addWidget(groupsListWidget);

        splitter->addWidget(layoutWidget2);
        layoutWidget3 = new QWidget(splitter);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupTextLabel = new QLabel(layoutWidget3);
        groupTextLabel->setObjectName(QStringLiteral("groupTextLabel"));
        groupTextLabel->setWordWrap(false);

        verticalLayout_3->addWidget(groupTextLabel);

        groupTextEdit = new QPlainTextEdit(layoutWidget3);
        groupTextEdit->setObjectName(QStringLiteral("groupTextEdit"));

        verticalLayout_3->addWidget(groupTextEdit);

        splitter->addWidget(layoutWidget3);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addGroupPushButton = new QPushButton(GroupsForm_template);
        addGroupPushButton->setObjectName(QStringLiteral("addGroupPushButton"));

        horizontalLayout_2->addWidget(addGroupPushButton);

        modifyGroupPushButton = new QPushButton(GroupsForm_template);
        modifyGroupPushButton->setObjectName(QStringLiteral("modifyGroupPushButton"));

        horizontalLayout_2->addWidget(modifyGroupPushButton);

        removeGroupPushButton = new QPushButton(GroupsForm_template);
        removeGroupPushButton->setObjectName(QStringLiteral("removeGroupPushButton"));

        horizontalLayout_2->addWidget(removeGroupPushButton);

        purgeGroupPushButton = new QPushButton(GroupsForm_template);
        purgeGroupPushButton->setObjectName(QStringLiteral("purgeGroupPushButton"));

        horizontalLayout_2->addWidget(purgeGroupPushButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        activateStudentsPushButton = new QPushButton(GroupsForm_template);
        activateStudentsPushButton->setObjectName(QStringLiteral("activateStudentsPushButton"));

        gridLayout->addWidget(activateStudentsPushButton, 2, 0, 1, 1);

        deactivateStudentsPushButton = new QPushButton(GroupsForm_template);
        deactivateStudentsPushButton->setObjectName(QStringLiteral("deactivateStudentsPushButton"));

        gridLayout->addWidget(deactivateStudentsPushButton, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        commentsPushButton = new QPushButton(GroupsForm_template);
        commentsPushButton->setObjectName(QStringLiteral("commentsPushButton"));

        horizontalLayout->addWidget(commentsPushButton);

        moveGroupUpPushButton = new QPushButton(GroupsForm_template);
        moveGroupUpPushButton->setObjectName(QStringLiteral("moveGroupUpPushButton"));

        horizontalLayout->addWidget(moveGroupUpPushButton);

        moveGroupDownPushButton = new QPushButton(GroupsForm_template);
        moveGroupDownPushButton->setObjectName(QStringLiteral("moveGroupDownPushButton"));

        horizontalLayout->addWidget(moveGroupDownPushButton);

        sortGroupsPushButton = new QPushButton(GroupsForm_template);
        sortGroupsPushButton->setObjectName(QStringLiteral("sortGroupsPushButton"));

        horizontalLayout->addWidget(sortGroupsPushButton);

        closePushButton = new QPushButton(GroupsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);


        retranslateUi(GroupsForm_template);

        QMetaObject::connectSlotsByName(GroupsForm_template);
    } // setupUi

    void retranslateUi(QDialog *GroupsForm_template)
    {
        GroupsForm_template->setWindowTitle(QApplication::translate("GroupsForm_template", "FET - groups of students", 0));
        yearTextLabel->setText(QApplication::translate("GroupsForm_template", "Year", 0));
        groupsTextLabel->setText(QApplication::translate("GroupsForm_template", "Group", 0));
        groupTextLabel->setText(QApplication::translate("GroupsForm_template", "Details", 0));
        addGroupPushButton->setText(QApplication::translate("GroupsForm_template", "Add", 0));
        modifyGroupPushButton->setText(QApplication::translate("GroupsForm_template", "Modify", 0));
        removeGroupPushButton->setText(QApplication::translate("GroupsForm_template", "Remove here", "It means \"Remove from here\" (but I want to keep the field shorter), remove the group only from the current year. Please keep the translation short."));
        purgeGroupPushButton->setText(QApplication::translate("GroupsForm_template", "Remove everywhere", "It means \"Remove from everywhere\" (but I want to keep the field shorter), remove the group from all the years in which it appears. Please keep the translation short."));
        activateStudentsPushButton->setText(QApplication::translate("GroupsForm_template", "Activate all activities for selected group", 0));
        deactivateStudentsPushButton->setText(QApplication::translate("GroupsForm_template", "Deactivate all activities for selected group", 0));
        commentsPushButton->setText(QApplication::translate("GroupsForm_template", "Comments", 0));
        moveGroupUpPushButton->setText(QApplication::translate("GroupsForm_template", "Up", "It means move the item up in the list"));
        moveGroupDownPushButton->setText(QApplication::translate("GroupsForm_template", "Down", "It means move the item down in the list"));
        sortGroupsPushButton->setText(QApplication::translate("GroupsForm_template", "Sort", 0));
        closePushButton->setText(QApplication::translate("GroupsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class GroupsForm_template: public Ui_GroupsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPSFORM_TEMPLATE_H
