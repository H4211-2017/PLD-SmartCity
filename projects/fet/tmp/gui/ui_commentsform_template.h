/********************************************************************************
** Form generated from reading UI file 'commentsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTSFORM_TEMPLATE_H
#define UI_COMMENTSFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CommentsForm_template
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *commentsTextEdit;
    QPushButton *okPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *CommentsForm_template)
    {
        if (CommentsForm_template->objectName().isEmpty())
            CommentsForm_template->setObjectName(QStringLiteral("CommentsForm_template"));
        CommentsForm_template->resize(560, 345);
        gridLayout = new QGridLayout(CommentsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        commentsTextEdit = new QPlainTextEdit(CommentsForm_template);
        commentsTextEdit->setObjectName(QStringLiteral("commentsTextEdit"));

        gridLayout->addWidget(commentsTextEdit, 0, 0, 1, 2);

        okPushButton = new QPushButton(CommentsForm_template);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        gridLayout->addWidget(okPushButton, 1, 0, 1, 1);

        cancelPushButton = new QPushButton(CommentsForm_template);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        gridLayout->addWidget(cancelPushButton, 1, 1, 1, 1);


        retranslateUi(CommentsForm_template);

        QMetaObject::connectSlotsByName(CommentsForm_template);
    } // setupUi

    void retranslateUi(QDialog *CommentsForm_template)
    {
        CommentsForm_template->setWindowTitle(QApplication::translate("CommentsForm_template", "Comments", 0));
        okPushButton->setText(QApplication::translate("CommentsForm_template", "Ok", 0));
        cancelPushButton->setText(QApplication::translate("CommentsForm_template", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class CommentsForm_template: public Ui_CommentsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTSFORM_TEMPLATE_H
