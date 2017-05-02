/********************************************************************************
** Form generated from reading UI file 'subgroupsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBGROUPSFORM_TEMPLATE_H
#define UI_SUBGROUPSFORM_TEMPLATE_H

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

class Ui_SubgroupsForm_template
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *yearTextLabel;
    QListWidget *yearsListWidget;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *groupsTextLabel;
    QListWidget *groupsListWidget;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_2;
    QLabel *subgroupsTextLabel;
    QListWidget *subgroupsListWidget;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout;
    QLabel *subgroupTextLabel;
    QPlainTextEdit *subgroupTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addSubgroupPushButton;
    QPushButton *modifySubgroupPushButton;
    QPushButton *removeSubgroupPushButton;
    QPushButton *purgeSubgroupPushButton;
    QPushButton *activateStudentsPushButton;
    QPushButton *deactivateStudentsPushButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *commentsPushButton;
    QPushButton *moveSubgroupUpPushButton;
    QPushButton *moveSubgroupDownPushButton;
    QPushButton *sortSubgroupsPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *SubgroupsForm_template)
    {
        if (SubgroupsForm_template->objectName().isEmpty())
            SubgroupsForm_template->setObjectName(QStringLiteral("SubgroupsForm_template"));
        SubgroupsForm_template->resize(680, 500);
        gridLayout = new QGridLayout(SubgroupsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(SubgroupsForm_template);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        yearTextLabel = new QLabel(layoutWidget);
        yearTextLabel->setObjectName(QStringLiteral("yearTextLabel"));
        yearTextLabel->setWordWrap(false);

        verticalLayout_4->addWidget(yearTextLabel);

        yearsListWidget = new QListWidget(layoutWidget);
        yearsListWidget->setObjectName(QStringLiteral("yearsListWidget"));

        verticalLayout_4->addWidget(yearsListWidget);

        splitter->addWidget(layoutWidget);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupsTextLabel = new QLabel(layoutWidget2);
        groupsTextLabel->setObjectName(QStringLiteral("groupsTextLabel"));
        groupsTextLabel->setWordWrap(false);

        verticalLayout_3->addWidget(groupsTextLabel);

        groupsListWidget = new QListWidget(layoutWidget2);
        groupsListWidget->setObjectName(QStringLiteral("groupsListWidget"));

        verticalLayout_3->addWidget(groupsListWidget);

        splitter->addWidget(layoutWidget2);
        layoutWidget3 = new QWidget(splitter);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        subgroupsTextLabel = new QLabel(layoutWidget3);
        subgroupsTextLabel->setObjectName(QStringLiteral("subgroupsTextLabel"));
        subgroupsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(subgroupsTextLabel);

        subgroupsListWidget = new QListWidget(layoutWidget3);
        subgroupsListWidget->setObjectName(QStringLiteral("subgroupsListWidget"));

        verticalLayout_2->addWidget(subgroupsListWidget);

        splitter->addWidget(layoutWidget3);
        layoutWidget4 = new QWidget(splitter);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        verticalLayout = new QVBoxLayout(layoutWidget4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        subgroupTextLabel = new QLabel(layoutWidget4);
        subgroupTextLabel->setObjectName(QStringLiteral("subgroupTextLabel"));
        subgroupTextLabel->setWordWrap(false);

        verticalLayout->addWidget(subgroupTextLabel);

        subgroupTextEdit = new QPlainTextEdit(layoutWidget4);
        subgroupTextEdit->setObjectName(QStringLiteral("subgroupTextEdit"));

        verticalLayout->addWidget(subgroupTextEdit);

        splitter->addWidget(layoutWidget4);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addSubgroupPushButton = new QPushButton(SubgroupsForm_template);
        addSubgroupPushButton->setObjectName(QStringLiteral("addSubgroupPushButton"));

        horizontalLayout_2->addWidget(addSubgroupPushButton);

        modifySubgroupPushButton = new QPushButton(SubgroupsForm_template);
        modifySubgroupPushButton->setObjectName(QStringLiteral("modifySubgroupPushButton"));

        horizontalLayout_2->addWidget(modifySubgroupPushButton);

        removeSubgroupPushButton = new QPushButton(SubgroupsForm_template);
        removeSubgroupPushButton->setObjectName(QStringLiteral("removeSubgroupPushButton"));

        horizontalLayout_2->addWidget(removeSubgroupPushButton);

        purgeSubgroupPushButton = new QPushButton(SubgroupsForm_template);
        purgeSubgroupPushButton->setObjectName(QStringLiteral("purgeSubgroupPushButton"));

        horizontalLayout_2->addWidget(purgeSubgroupPushButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        activateStudentsPushButton = new QPushButton(SubgroupsForm_template);
        activateStudentsPushButton->setObjectName(QStringLiteral("activateStudentsPushButton"));

        gridLayout->addWidget(activateStudentsPushButton, 2, 0, 1, 1);

        deactivateStudentsPushButton = new QPushButton(SubgroupsForm_template);
        deactivateStudentsPushButton->setObjectName(QStringLiteral("deactivateStudentsPushButton"));

        gridLayout->addWidget(deactivateStudentsPushButton, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        commentsPushButton = new QPushButton(SubgroupsForm_template);
        commentsPushButton->setObjectName(QStringLiteral("commentsPushButton"));

        horizontalLayout->addWidget(commentsPushButton);

        moveSubgroupUpPushButton = new QPushButton(SubgroupsForm_template);
        moveSubgroupUpPushButton->setObjectName(QStringLiteral("moveSubgroupUpPushButton"));

        horizontalLayout->addWidget(moveSubgroupUpPushButton);

        moveSubgroupDownPushButton = new QPushButton(SubgroupsForm_template);
        moveSubgroupDownPushButton->setObjectName(QStringLiteral("moveSubgroupDownPushButton"));

        horizontalLayout->addWidget(moveSubgroupDownPushButton);

        sortSubgroupsPushButton = new QPushButton(SubgroupsForm_template);
        sortSubgroupsPushButton->setObjectName(QStringLiteral("sortSubgroupsPushButton"));

        horizontalLayout->addWidget(sortSubgroupsPushButton);

        closePushButton = new QPushButton(SubgroupsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);


        retranslateUi(SubgroupsForm_template);

        QMetaObject::connectSlotsByName(SubgroupsForm_template);
    } // setupUi

    void retranslateUi(QDialog *SubgroupsForm_template)
    {
        SubgroupsForm_template->setWindowTitle(QApplication::translate("SubgroupsForm_template", "Subgroups of students", 0));
        yearTextLabel->setText(QApplication::translate("SubgroupsForm_template", "Year", 0));
        groupsTextLabel->setText(QApplication::translate("SubgroupsForm_template", "Group", 0));
        subgroupsTextLabel->setText(QApplication::translate("SubgroupsForm_template", "Subgroup", 0));
        subgroupTextLabel->setText(QApplication::translate("SubgroupsForm_template", "Details", 0));
        addSubgroupPushButton->setText(QApplication::translate("SubgroupsForm_template", "Add", 0));
        modifySubgroupPushButton->setText(QApplication::translate("SubgroupsForm_template", "Modify", 0));
        removeSubgroupPushButton->setText(QApplication::translate("SubgroupsForm_template", "Remove here", "It means \"Remove from here\" (but I want to keep the field shorter), remove the subgroup only from the current year/group. Please keep the translation short."));
        purgeSubgroupPushButton->setText(QApplication::translate("SubgroupsForm_template", "Remove everywhere", "It means \"Remove from everywhere\" (but I want to keep the field shorter), remove the subgroup from all the years/groups in which it appears. Please keep the translation short."));
        activateStudentsPushButton->setText(QApplication::translate("SubgroupsForm_template", "Activate all activities for selected subgroup", 0));
        deactivateStudentsPushButton->setText(QApplication::translate("SubgroupsForm_template", "Deactivate all activities for selected subgroup", 0));
        commentsPushButton->setText(QApplication::translate("SubgroupsForm_template", "Comments", 0));
        moveSubgroupUpPushButton->setText(QApplication::translate("SubgroupsForm_template", "Up", "It means move the item up in the list"));
        moveSubgroupDownPushButton->setText(QApplication::translate("SubgroupsForm_template", "Down", "It means move the item down in the list"));
        sortSubgroupsPushButton->setText(QApplication::translate("SubgroupsForm_template", "Sort", 0));
        closePushButton->setText(QApplication::translate("SubgroupsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class SubgroupsForm_template: public Ui_SubgroupsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBGROUPSFORM_TEMPLATE_H
