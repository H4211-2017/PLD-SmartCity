/********************************************************************************
** Form generated from reading UI file 'subjectsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECTSFORM_TEMPLATE_H
#define UI_SUBJECTSFORM_TEMPLATE_H

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

class Ui_SubjectsForm_template
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QListWidget *subjectsListWidget;
    QPlainTextEdit *currentSubjectTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addSubjectPushButton;
    QPushButton *renameSubjectPushButton;
    QPushButton *removeSubjectPushButton;
    QPushButton *commentsPushButton;
    QPushButton *activateSubjectPushButton;
    QPushButton *deactivateSubjectPushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *moveSubjectUpPushButton;
    QPushButton *moveSubjectDownPushButton;
    QPushButton *sortSubjectsPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *SubjectsForm_template)
    {
        if (SubjectsForm_template->objectName().isEmpty())
            SubjectsForm_template->setObjectName(QStringLiteral("SubjectsForm_template"));
        SubjectsForm_template->resize(507, 489);
        gridLayout = new QGridLayout(SubjectsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(SubjectsForm_template);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        subjectsListWidget = new QListWidget(splitter);
        subjectsListWidget->setObjectName(QStringLiteral("subjectsListWidget"));
        splitter->addWidget(subjectsListWidget);
        currentSubjectTextEdit = new QPlainTextEdit(splitter);
        currentSubjectTextEdit->setObjectName(QStringLiteral("currentSubjectTextEdit"));
        splitter->addWidget(currentSubjectTextEdit);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addSubjectPushButton = new QPushButton(SubjectsForm_template);
        addSubjectPushButton->setObjectName(QStringLiteral("addSubjectPushButton"));

        horizontalLayout->addWidget(addSubjectPushButton);

        renameSubjectPushButton = new QPushButton(SubjectsForm_template);
        renameSubjectPushButton->setObjectName(QStringLiteral("renameSubjectPushButton"));

        horizontalLayout->addWidget(renameSubjectPushButton);

        removeSubjectPushButton = new QPushButton(SubjectsForm_template);
        removeSubjectPushButton->setObjectName(QStringLiteral("removeSubjectPushButton"));

        horizontalLayout->addWidget(removeSubjectPushButton);

        commentsPushButton = new QPushButton(SubjectsForm_template);
        commentsPushButton->setObjectName(QStringLiteral("commentsPushButton"));

        horizontalLayout->addWidget(commentsPushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        activateSubjectPushButton = new QPushButton(SubjectsForm_template);
        activateSubjectPushButton->setObjectName(QStringLiteral("activateSubjectPushButton"));

        gridLayout->addWidget(activateSubjectPushButton, 2, 0, 1, 1);

        deactivateSubjectPushButton = new QPushButton(SubjectsForm_template);
        deactivateSubjectPushButton->setObjectName(QStringLiteral("deactivateSubjectPushButton"));

        gridLayout->addWidget(deactivateSubjectPushButton, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        moveSubjectUpPushButton = new QPushButton(SubjectsForm_template);
        moveSubjectUpPushButton->setObjectName(QStringLiteral("moveSubjectUpPushButton"));

        horizontalLayout_2->addWidget(moveSubjectUpPushButton);

        moveSubjectDownPushButton = new QPushButton(SubjectsForm_template);
        moveSubjectDownPushButton->setObjectName(QStringLiteral("moveSubjectDownPushButton"));

        horizontalLayout_2->addWidget(moveSubjectDownPushButton);

        sortSubjectsPushButton = new QPushButton(SubjectsForm_template);
        sortSubjectsPushButton->setObjectName(QStringLiteral("sortSubjectsPushButton"));

        horizontalLayout_2->addWidget(sortSubjectsPushButton);

        closePushButton = new QPushButton(SubjectsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_2->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);


        retranslateUi(SubjectsForm_template);

        QMetaObject::connectSlotsByName(SubjectsForm_template);
    } // setupUi

    void retranslateUi(QDialog *SubjectsForm_template)
    {
        SubjectsForm_template->setWindowTitle(QApplication::translate("SubjectsForm_template", "Subjects", 0));
        addSubjectPushButton->setText(QApplication::translate("SubjectsForm_template", "Add", 0));
        renameSubjectPushButton->setText(QApplication::translate("SubjectsForm_template", "Rename", 0));
        removeSubjectPushButton->setText(QApplication::translate("SubjectsForm_template", "Remove", 0));
        commentsPushButton->setText(QApplication::translate("SubjectsForm_template", "Comments", 0));
        activateSubjectPushButton->setText(QApplication::translate("SubjectsForm_template", "Activate all activities for selected subject", 0));
        deactivateSubjectPushButton->setText(QApplication::translate("SubjectsForm_template", "Deactivate all activities for selected subject", 0));
        moveSubjectUpPushButton->setText(QApplication::translate("SubjectsForm_template", "Up", "It means move the item up in the list"));
        moveSubjectDownPushButton->setText(QApplication::translate("SubjectsForm_template", "Down", "It means move the item down in the list"));
        sortSubjectsPushButton->setText(QApplication::translate("SubjectsForm_template", "Sort", 0));
        closePushButton->setText(QApplication::translate("SubjectsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class SubjectsForm_template: public Ui_SubjectsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTSFORM_TEMPLATE_H
