/********************************************************************************
** Form generated from reading UI file 'allspaceconstraintsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLSPACECONSTRAINTSFORM_TEMPLATE_H
#define UI_ALLSPACECONSTRAINTSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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

class Ui_AllSpaceConstraintsForm_template
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *constraintsTextLabel;
    QListWidget *constraintsListWidget;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *currentConstraintTextLabel;
    QPlainTextEdit *currentConstraintTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *modifyConstraintPushButton;
    QPushButton *removeConstraintPushButton;
    QPushButton *moveSpaceConstraintUpPushButton;
    QPushButton *activatePushButton;
    QPushButton *deactivatePushButton;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *filterCheckBox;
    QCheckBox *sortedCheckBox;
    QPushButton *moveSpaceConstraintDownPushButton;
    QPushButton *commentsPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AllSpaceConstraintsForm_template)
    {
        if (AllSpaceConstraintsForm_template->objectName().isEmpty())
            AllSpaceConstraintsForm_template->setObjectName(QStringLiteral("AllSpaceConstraintsForm_template"));
        AllSpaceConstraintsForm_template->resize(560, 520);
        gridLayout = new QGridLayout(AllSpaceConstraintsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(AllSpaceConstraintsForm_template);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        constraintsTextLabel = new QLabel(layoutWidget);
        constraintsTextLabel->setObjectName(QStringLiteral("constraintsTextLabel"));
        constraintsTextLabel->setWordWrap(false);

        verticalLayout_2->addWidget(constraintsTextLabel);

        constraintsListWidget = new QListWidget(layoutWidget);
        constraintsListWidget->setObjectName(QStringLiteral("constraintsListWidget"));

        verticalLayout_2->addWidget(constraintsListWidget);

        splitter->addWidget(layoutWidget);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        currentConstraintTextLabel = new QLabel(layoutWidget2);
        currentConstraintTextLabel->setObjectName(QStringLiteral("currentConstraintTextLabel"));
        currentConstraintTextLabel->setWordWrap(false);

        verticalLayout->addWidget(currentConstraintTextLabel);

        currentConstraintTextEdit = new QPlainTextEdit(layoutWidget2);
        currentConstraintTextEdit->setObjectName(QStringLiteral("currentConstraintTextEdit"));

        verticalLayout->addWidget(currentConstraintTextEdit);

        splitter->addWidget(layoutWidget2);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        modifyConstraintPushButton = new QPushButton(AllSpaceConstraintsForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(AllSpaceConstraintsForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        moveSpaceConstraintUpPushButton = new QPushButton(AllSpaceConstraintsForm_template);
        moveSpaceConstraintUpPushButton->setObjectName(QStringLiteral("moveSpaceConstraintUpPushButton"));

        horizontalLayout->addWidget(moveSpaceConstraintUpPushButton);

        activatePushButton = new QPushButton(AllSpaceConstraintsForm_template);
        activatePushButton->setObjectName(QStringLiteral("activatePushButton"));

        horizontalLayout->addWidget(activatePushButton);

        deactivatePushButton = new QPushButton(AllSpaceConstraintsForm_template);
        deactivatePushButton->setObjectName(QStringLiteral("deactivatePushButton"));

        horizontalLayout->addWidget(deactivatePushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        filterCheckBox = new QCheckBox(AllSpaceConstraintsForm_template);
        filterCheckBox->setObjectName(QStringLiteral("filterCheckBox"));

        horizontalLayout_2->addWidget(filterCheckBox);

        sortedCheckBox = new QCheckBox(AllSpaceConstraintsForm_template);
        sortedCheckBox->setObjectName(QStringLiteral("sortedCheckBox"));

        horizontalLayout_2->addWidget(sortedCheckBox);

        moveSpaceConstraintDownPushButton = new QPushButton(AllSpaceConstraintsForm_template);
        moveSpaceConstraintDownPushButton->setObjectName(QStringLiteral("moveSpaceConstraintDownPushButton"));

        horizontalLayout_2->addWidget(moveSpaceConstraintDownPushButton);

        commentsPushButton = new QPushButton(AllSpaceConstraintsForm_template);
        commentsPushButton->setObjectName(QStringLiteral("commentsPushButton"));

        horizontalLayout_2->addWidget(commentsPushButton);

        closePushButton = new QPushButton(AllSpaceConstraintsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_2->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(AllSpaceConstraintsForm_template);

        QMetaObject::connectSlotsByName(AllSpaceConstraintsForm_template);
    } // setupUi

    void retranslateUi(QDialog *AllSpaceConstraintsForm_template)
    {
        AllSpaceConstraintsForm_template->setWindowTitle(QApplication::translate("AllSpaceConstraintsForm_template", "All space constraints", 0));
        constraintsTextLabel->setText(QApplication::translate("AllSpaceConstraintsForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("AllSpaceConstraintsForm_template", "Current constraint", 0));
        modifyConstraintPushButton->setText(QApplication::translate("AllSpaceConstraintsForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("AllSpaceConstraintsForm_template", "Remove", 0));
        moveSpaceConstraintUpPushButton->setText(QApplication::translate("AllSpaceConstraintsForm_template", "Up", "It means move the item up in the list"));
        activatePushButton->setText(QApplication::translate("AllSpaceConstraintsForm_template", "Activate", "Refers to activating a space constraint"));
        deactivatePushButton->setText(QApplication::translate("AllSpaceConstraintsForm_template", "Deactivate", "Refers to deactivating a space constraint"));
        filterCheckBox->setText(QApplication::translate("AllSpaceConstraintsForm_template", "Filter", 0));
        sortedCheckBox->setText(QApplication::translate("AllSpaceConstraintsForm_template", "Sorted", "It refers to space constraints"));
        moveSpaceConstraintDownPushButton->setText(QApplication::translate("AllSpaceConstraintsForm_template", "Down", "It means move the item down in the list"));
        commentsPushButton->setText(QApplication::translate("AllSpaceConstraintsForm_template", "Comments", 0));
        closePushButton->setText(QApplication::translate("AllSpaceConstraintsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AllSpaceConstraintsForm_template: public Ui_AllSpaceConstraintsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLSPACECONSTRAINTSFORM_TEMPLATE_H
