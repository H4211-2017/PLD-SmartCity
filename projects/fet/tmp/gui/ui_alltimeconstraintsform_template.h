/********************************************************************************
** Form generated from reading UI file 'alltimeconstraintsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLTIMECONSTRAINTSFORM_TEMPLATE_H
#define UI_ALLTIMECONSTRAINTSFORM_TEMPLATE_H

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

class Ui_AllTimeConstraintsForm_template
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
    QPushButton *moveTimeConstraintUpPushButton;
    QPushButton *activatePushButton;
    QPushButton *deactivatePushButton;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *filterCheckBox;
    QCheckBox *sortedCheckBox;
    QPushButton *moveTimeConstraintDownPushButton;
    QPushButton *commentsPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AllTimeConstraintsForm_template)
    {
        if (AllTimeConstraintsForm_template->objectName().isEmpty())
            AllTimeConstraintsForm_template->setObjectName(QStringLiteral("AllTimeConstraintsForm_template"));
        AllTimeConstraintsForm_template->resize(560, 520);
        gridLayout = new QGridLayout(AllTimeConstraintsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(AllTimeConstraintsForm_template);
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
        constraintsTextLabel->setFrameShape(QFrame::NoFrame);
        constraintsTextLabel->setFrameShadow(QFrame::Plain);
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
        modifyConstraintPushButton = new QPushButton(AllTimeConstraintsForm_template);
        modifyConstraintPushButton->setObjectName(QStringLiteral("modifyConstraintPushButton"));

        horizontalLayout->addWidget(modifyConstraintPushButton);

        removeConstraintPushButton = new QPushButton(AllTimeConstraintsForm_template);
        removeConstraintPushButton->setObjectName(QStringLiteral("removeConstraintPushButton"));

        horizontalLayout->addWidget(removeConstraintPushButton);

        moveTimeConstraintUpPushButton = new QPushButton(AllTimeConstraintsForm_template);
        moveTimeConstraintUpPushButton->setObjectName(QStringLiteral("moveTimeConstraintUpPushButton"));

        horizontalLayout->addWidget(moveTimeConstraintUpPushButton);

        activatePushButton = new QPushButton(AllTimeConstraintsForm_template);
        activatePushButton->setObjectName(QStringLiteral("activatePushButton"));

        horizontalLayout->addWidget(activatePushButton);

        deactivatePushButton = new QPushButton(AllTimeConstraintsForm_template);
        deactivatePushButton->setObjectName(QStringLiteral("deactivatePushButton"));

        horizontalLayout->addWidget(deactivatePushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        filterCheckBox = new QCheckBox(AllTimeConstraintsForm_template);
        filterCheckBox->setObjectName(QStringLiteral("filterCheckBox"));

        horizontalLayout_2->addWidget(filterCheckBox);

        sortedCheckBox = new QCheckBox(AllTimeConstraintsForm_template);
        sortedCheckBox->setObjectName(QStringLiteral("sortedCheckBox"));

        horizontalLayout_2->addWidget(sortedCheckBox);

        moveTimeConstraintDownPushButton = new QPushButton(AllTimeConstraintsForm_template);
        moveTimeConstraintDownPushButton->setObjectName(QStringLiteral("moveTimeConstraintDownPushButton"));

        horizontalLayout_2->addWidget(moveTimeConstraintDownPushButton);

        commentsPushButton = new QPushButton(AllTimeConstraintsForm_template);
        commentsPushButton->setObjectName(QStringLiteral("commentsPushButton"));

        horizontalLayout_2->addWidget(commentsPushButton);

        closePushButton = new QPushButton(AllTimeConstraintsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_2->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(AllTimeConstraintsForm_template);

        QMetaObject::connectSlotsByName(AllTimeConstraintsForm_template);
    } // setupUi

    void retranslateUi(QDialog *AllTimeConstraintsForm_template)
    {
        AllTimeConstraintsForm_template->setWindowTitle(QApplication::translate("AllTimeConstraintsForm_template", "All time constraints", 0));
        constraintsTextLabel->setText(QApplication::translate("AllTimeConstraintsForm_template", "Constraints", 0));
        currentConstraintTextLabel->setText(QApplication::translate("AllTimeConstraintsForm_template", "Current constraint", 0));
        modifyConstraintPushButton->setText(QApplication::translate("AllTimeConstraintsForm_template", "Modify", 0));
        removeConstraintPushButton->setText(QApplication::translate("AllTimeConstraintsForm_template", "Remove", 0));
        moveTimeConstraintUpPushButton->setText(QApplication::translate("AllTimeConstraintsForm_template", "Up", "It means move the item up in the list"));
        activatePushButton->setText(QApplication::translate("AllTimeConstraintsForm_template", "Activate", "Refers to activating a time constraint"));
        deactivatePushButton->setText(QApplication::translate("AllTimeConstraintsForm_template", "Deactivate", "Refers to deactivating a time constraint"));
        filterCheckBox->setText(QApplication::translate("AllTimeConstraintsForm_template", "Filter", 0));
        sortedCheckBox->setText(QApplication::translate("AllTimeConstraintsForm_template", "Sorted", "It refers to time constraints"));
        moveTimeConstraintDownPushButton->setText(QApplication::translate("AllTimeConstraintsForm_template", "Down", "It means move the item down in the list"));
        commentsPushButton->setText(QApplication::translate("AllTimeConstraintsForm_template", "Comments", 0));
        closePushButton->setText(QApplication::translate("AllTimeConstraintsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AllTimeConstraintsForm_template: public Ui_AllTimeConstraintsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLTIMECONSTRAINTSFORM_TEMPLATE_H
