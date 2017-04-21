/********************************************************************************
** Form generated from reading UI file 'activitytagsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVITYTAGSFORM_TEMPLATE_H
#define UI_ACTIVITYTAGSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_ActivityTagsForm_template
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QListWidget *activityTagsListWidget;
    QPlainTextEdit *currentActivityTagTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addActivityTagPushButton;
    QPushButton *renameActivityTagPushButton;
    QPushButton *removeActivityTagPushButton;
    QPushButton *commentsPushButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *printablePushButton;
    QPushButton *notPrintablePushButton;
    QPushButton *activateActivityTagPushButton;
    QPushButton *deactivateActivityTagPushButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *moveActivityTagUpPushButton;
    QPushButton *moveActivityTagDownPushButton;
    QPushButton *sortActivityTagsPushButton;
    QPushButton *helpPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *ActivityTagsForm_template)
    {
        if (ActivityTagsForm_template->objectName().isEmpty())
            ActivityTagsForm_template->setObjectName(QStringLiteral("ActivityTagsForm_template"));
        ActivityTagsForm_template->resize(493, 501);
        gridLayout = new QGridLayout(ActivityTagsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(ActivityTagsForm_template);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        activityTagsListWidget = new QListWidget(splitter);
        activityTagsListWidget->setObjectName(QStringLiteral("activityTagsListWidget"));
        splitter->addWidget(activityTagsListWidget);
        currentActivityTagTextEdit = new QPlainTextEdit(splitter);
        currentActivityTagTextEdit->setObjectName(QStringLiteral("currentActivityTagTextEdit"));
        splitter->addWidget(currentActivityTagTextEdit);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addActivityTagPushButton = new QPushButton(ActivityTagsForm_template);
        addActivityTagPushButton->setObjectName(QStringLiteral("addActivityTagPushButton"));

        horizontalLayout_2->addWidget(addActivityTagPushButton);

        renameActivityTagPushButton = new QPushButton(ActivityTagsForm_template);
        renameActivityTagPushButton->setObjectName(QStringLiteral("renameActivityTagPushButton"));

        horizontalLayout_2->addWidget(renameActivityTagPushButton);

        removeActivityTagPushButton = new QPushButton(ActivityTagsForm_template);
        removeActivityTagPushButton->setObjectName(QStringLiteral("removeActivityTagPushButton"));

        horizontalLayout_2->addWidget(removeActivityTagPushButton);

        commentsPushButton = new QPushButton(ActivityTagsForm_template);
        commentsPushButton->setObjectName(QStringLiteral("commentsPushButton"));

        horizontalLayout_2->addWidget(commentsPushButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        printablePushButton = new QPushButton(ActivityTagsForm_template);
        printablePushButton->setObjectName(QStringLiteral("printablePushButton"));

        horizontalLayout_3->addWidget(printablePushButton);

        notPrintablePushButton = new QPushButton(ActivityTagsForm_template);
        notPrintablePushButton->setObjectName(QStringLiteral("notPrintablePushButton"));

        horizontalLayout_3->addWidget(notPrintablePushButton);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        activateActivityTagPushButton = new QPushButton(ActivityTagsForm_template);
        activateActivityTagPushButton->setObjectName(QStringLiteral("activateActivityTagPushButton"));

        gridLayout->addWidget(activateActivityTagPushButton, 3, 0, 1, 1);

        deactivateActivityTagPushButton = new QPushButton(ActivityTagsForm_template);
        deactivateActivityTagPushButton->setObjectName(QStringLiteral("deactivateActivityTagPushButton"));

        gridLayout->addWidget(deactivateActivityTagPushButton, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        moveActivityTagUpPushButton = new QPushButton(ActivityTagsForm_template);
        moveActivityTagUpPushButton->setObjectName(QStringLiteral("moveActivityTagUpPushButton"));

        horizontalLayout->addWidget(moveActivityTagUpPushButton);

        moveActivityTagDownPushButton = new QPushButton(ActivityTagsForm_template);
        moveActivityTagDownPushButton->setObjectName(QStringLiteral("moveActivityTagDownPushButton"));

        horizontalLayout->addWidget(moveActivityTagDownPushButton);

        sortActivityTagsPushButton = new QPushButton(ActivityTagsForm_template);
        sortActivityTagsPushButton->setObjectName(QStringLiteral("sortActivityTagsPushButton"));

        horizontalLayout->addWidget(sortActivityTagsPushButton);

        helpPushButton = new QPushButton(ActivityTagsForm_template);
        helpPushButton->setObjectName(QStringLiteral("helpPushButton"));

        horizontalLayout->addWidget(helpPushButton);

        closePushButton = new QPushButton(ActivityTagsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);


        retranslateUi(ActivityTagsForm_template);

        QMetaObject::connectSlotsByName(ActivityTagsForm_template);
    } // setupUi

    void retranslateUi(QDialog *ActivityTagsForm_template)
    {
        ActivityTagsForm_template->setWindowTitle(QApplication::translate("ActivityTagsForm_template", "Activity tags", 0));
        addActivityTagPushButton->setText(QApplication::translate("ActivityTagsForm_template", "Add", 0));
        renameActivityTagPushButton->setText(QApplication::translate("ActivityTagsForm_template", "Rename", 0));
        removeActivityTagPushButton->setText(QApplication::translate("ActivityTagsForm_template", "Remove", 0));
        commentsPushButton->setText(QApplication::translate("ActivityTagsForm_template", "Comments", 0));
        printablePushButton->setText(QApplication::translate("ActivityTagsForm_template", "Printable", 0));
        notPrintablePushButton->setText(QApplication::translate("ActivityTagsForm_template", "Not printable", 0));
        activateActivityTagPushButton->setText(QApplication::translate("ActivityTagsForm_template", "Activate all activities for selected tag", 0));
        deactivateActivityTagPushButton->setText(QApplication::translate("ActivityTagsForm_template", "Deactivate all activities for selected tag", 0));
        moveActivityTagUpPushButton->setText(QApplication::translate("ActivityTagsForm_template", "Up", "It means move the item up in the list"));
        moveActivityTagDownPushButton->setText(QApplication::translate("ActivityTagsForm_template", "Down", "It means move the item down in the list"));
        sortActivityTagsPushButton->setText(QApplication::translate("ActivityTagsForm_template", "Sort", 0));
        helpPushButton->setText(QApplication::translate("ActivityTagsForm_template", "Help", 0));
        closePushButton->setText(QApplication::translate("ActivityTagsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ActivityTagsForm_template: public Ui_ActivityTagsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIVITYTAGSFORM_TEMPLATE_H
