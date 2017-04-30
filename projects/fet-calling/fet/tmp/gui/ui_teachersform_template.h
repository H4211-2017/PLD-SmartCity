/********************************************************************************
** Form generated from reading UI file 'teachersform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERSFORM_TEMPLATE_H
#define UI_TEACHERSFORM_TEMPLATE_H

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

class Ui_TeachersForm_template
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QListWidget *teachersListWidget;
    QPlainTextEdit *currentTeacherTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addTeacherPushButton;
    QPushButton *renameTeacherPushButton;
    QPushButton *removeTeacherPushButton;
    QPushButton *commentsPushButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *targetNumberOfHoursPushButton;
    QPushButton *qualifiedSubjectsPushButton;
    QPushButton *activateTeacherPushButton;
    QPushButton *deactivateTeacherPushButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *moveTeacherUpPushButton;
    QPushButton *moveTeacherDownPushButton;
    QPushButton *sortTeachersPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *TeachersForm_template)
    {
        if (TeachersForm_template->objectName().isEmpty())
            TeachersForm_template->setObjectName(QStringLiteral("TeachersForm_template"));
        TeachersForm_template->resize(520, 502);
        gridLayout = new QGridLayout(TeachersForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(TeachersForm_template);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        teachersListWidget = new QListWidget(splitter);
        teachersListWidget->setObjectName(QStringLiteral("teachersListWidget"));
        splitter->addWidget(teachersListWidget);
        currentTeacherTextEdit = new QPlainTextEdit(splitter);
        currentTeacherTextEdit->setObjectName(QStringLiteral("currentTeacherTextEdit"));
        splitter->addWidget(currentTeacherTextEdit);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addTeacherPushButton = new QPushButton(TeachersForm_template);
        addTeacherPushButton->setObjectName(QStringLiteral("addTeacherPushButton"));

        horizontalLayout_2->addWidget(addTeacherPushButton);

        renameTeacherPushButton = new QPushButton(TeachersForm_template);
        renameTeacherPushButton->setObjectName(QStringLiteral("renameTeacherPushButton"));

        horizontalLayout_2->addWidget(renameTeacherPushButton);

        removeTeacherPushButton = new QPushButton(TeachersForm_template);
        removeTeacherPushButton->setObjectName(QStringLiteral("removeTeacherPushButton"));

        horizontalLayout_2->addWidget(removeTeacherPushButton);

        commentsPushButton = new QPushButton(TeachersForm_template);
        commentsPushButton->setObjectName(QStringLiteral("commentsPushButton"));

        horizontalLayout_2->addWidget(commentsPushButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        targetNumberOfHoursPushButton = new QPushButton(TeachersForm_template);
        targetNumberOfHoursPushButton->setObjectName(QStringLiteral("targetNumberOfHoursPushButton"));

        horizontalLayout_3->addWidget(targetNumberOfHoursPushButton);

        qualifiedSubjectsPushButton = new QPushButton(TeachersForm_template);
        qualifiedSubjectsPushButton->setObjectName(QStringLiteral("qualifiedSubjectsPushButton"));

        horizontalLayout_3->addWidget(qualifiedSubjectsPushButton);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        activateTeacherPushButton = new QPushButton(TeachersForm_template);
        activateTeacherPushButton->setObjectName(QStringLiteral("activateTeacherPushButton"));

        gridLayout->addWidget(activateTeacherPushButton, 3, 0, 1, 1);

        deactivateTeacherPushButton = new QPushButton(TeachersForm_template);
        deactivateTeacherPushButton->setObjectName(QStringLiteral("deactivateTeacherPushButton"));

        gridLayout->addWidget(deactivateTeacherPushButton, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        moveTeacherUpPushButton = new QPushButton(TeachersForm_template);
        moveTeacherUpPushButton->setObjectName(QStringLiteral("moveTeacherUpPushButton"));

        horizontalLayout->addWidget(moveTeacherUpPushButton);

        moveTeacherDownPushButton = new QPushButton(TeachersForm_template);
        moveTeacherDownPushButton->setObjectName(QStringLiteral("moveTeacherDownPushButton"));

        horizontalLayout->addWidget(moveTeacherDownPushButton);

        sortTeachersPushButton = new QPushButton(TeachersForm_template);
        sortTeachersPushButton->setObjectName(QStringLiteral("sortTeachersPushButton"));

        horizontalLayout->addWidget(sortTeachersPushButton);

        closePushButton = new QPushButton(TeachersForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);


        retranslateUi(TeachersForm_template);

        QMetaObject::connectSlotsByName(TeachersForm_template);
    } // setupUi

    void retranslateUi(QDialog *TeachersForm_template)
    {
        TeachersForm_template->setWindowTitle(QApplication::translate("TeachersForm_template", "Teachers", 0));
        addTeacherPushButton->setText(QApplication::translate("TeachersForm_template", "Add", 0));
        renameTeacherPushButton->setText(QApplication::translate("TeachersForm_template", "Rename", 0));
        removeTeacherPushButton->setText(QApplication::translate("TeachersForm_template", "Remove", 0));
        commentsPushButton->setText(QApplication::translate("TeachersForm_template", "Comments", 0));
        targetNumberOfHoursPushButton->setText(QApplication::translate("TeachersForm_template", "Target hours", "It means the target number of hours for a teacher, but keep translation short"));
        qualifiedSubjectsPushButton->setText(QApplication::translate("TeachersForm_template", "Qualified subjects", "It means a list of qualified (allowed) subjects for the teacher. Keep translation short."));
        activateTeacherPushButton->setText(QApplication::translate("TeachersForm_template", "Activate all activities for selected teacher", 0));
        deactivateTeacherPushButton->setText(QApplication::translate("TeachersForm_template", "Deactivate all activities for selected teacher", 0));
        moveTeacherUpPushButton->setText(QApplication::translate("TeachersForm_template", "Up", "It means move the item up in the list"));
        moveTeacherDownPushButton->setText(QApplication::translate("TeachersForm_template", "Down", "It means move the item down in the list"));
        sortTeachersPushButton->setText(QApplication::translate("TeachersForm_template", "Sort", 0));
        closePushButton->setText(QApplication::translate("TeachersForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class TeachersForm_template: public Ui_TeachersForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERSFORM_TEMPLATE_H
