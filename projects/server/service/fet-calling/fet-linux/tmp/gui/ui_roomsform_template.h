/********************************************************************************
** Form generated from reading UI file 'roomsform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMSFORM_TEMPLATE_H
#define UI_ROOMSFORM_TEMPLATE_H

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

QT_BEGIN_NAMESPACE

class Ui_RoomsForm_template
{
public:
    QGridLayout *gridLayout;
    QLabel *notesTextLabel;
    QSplitter *splitter;
    QListWidget *roomsListWidget;
    QPlainTextEdit *currentRoomTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addRoomPushButton;
    QPushButton *modifyRoomPushButton;
    QPushButton *removeRoomPushButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *moveRoomUpPushButton;
    QPushButton *moveRoomDownPushButton;
    QPushButton *commentsPushButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *sortRoomsPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *RoomsForm_template)
    {
        if (RoomsForm_template->objectName().isEmpty())
            RoomsForm_template->setObjectName(QStringLiteral("RoomsForm_template"));
        RoomsForm_template->resize(470, 478);
        gridLayout = new QGridLayout(RoomsForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        notesTextLabel = new QLabel(RoomsForm_template);
        notesTextLabel->setObjectName(QStringLiteral("notesTextLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(notesTextLabel->sizePolicy().hasHeightForWidth());
        notesTextLabel->setSizePolicy(sizePolicy);
        notesTextLabel->setTextFormat(Qt::RichText);
        notesTextLabel->setWordWrap(true);

        gridLayout->addWidget(notesTextLabel, 0, 0, 1, 1);

        splitter = new QSplitter(RoomsForm_template);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Horizontal);
        roomsListWidget = new QListWidget(splitter);
        roomsListWidget->setObjectName(QStringLiteral("roomsListWidget"));
        splitter->addWidget(roomsListWidget);
        currentRoomTextEdit = new QPlainTextEdit(splitter);
        currentRoomTextEdit->setObjectName(QStringLiteral("currentRoomTextEdit"));
        splitter->addWidget(currentRoomTextEdit);

        gridLayout->addWidget(splitter, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addRoomPushButton = new QPushButton(RoomsForm_template);
        addRoomPushButton->setObjectName(QStringLiteral("addRoomPushButton"));

        horizontalLayout_2->addWidget(addRoomPushButton);

        modifyRoomPushButton = new QPushButton(RoomsForm_template);
        modifyRoomPushButton->setObjectName(QStringLiteral("modifyRoomPushButton"));

        horizontalLayout_2->addWidget(modifyRoomPushButton);

        removeRoomPushButton = new QPushButton(RoomsForm_template);
        removeRoomPushButton->setObjectName(QStringLiteral("removeRoomPushButton"));

        horizontalLayout_2->addWidget(removeRoomPushButton);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        moveRoomUpPushButton = new QPushButton(RoomsForm_template);
        moveRoomUpPushButton->setObjectName(QStringLiteral("moveRoomUpPushButton"));

        horizontalLayout_3->addWidget(moveRoomUpPushButton);

        moveRoomDownPushButton = new QPushButton(RoomsForm_template);
        moveRoomDownPushButton->setObjectName(QStringLiteral("moveRoomDownPushButton"));

        horizontalLayout_3->addWidget(moveRoomDownPushButton);

        commentsPushButton = new QPushButton(RoomsForm_template);
        commentsPushButton->setObjectName(QStringLiteral("commentsPushButton"));

        horizontalLayout_3->addWidget(commentsPushButton);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sortRoomsPushButton = new QPushButton(RoomsForm_template);
        sortRoomsPushButton->setObjectName(QStringLiteral("sortRoomsPushButton"));

        horizontalLayout->addWidget(sortRoomsPushButton);

        closePushButton = new QPushButton(RoomsForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);


        retranslateUi(RoomsForm_template);

        QMetaObject::connectSlotsByName(RoomsForm_template);
    } // setupUi

    void retranslateUi(QDialog *RoomsForm_template)
    {
        RoomsForm_template->setWindowTitle(QApplication::translate("RoomsForm_template", "Rooms", 0));
        notesTextLabel->setText(QApplication::translate("RoomsForm_template", "NOTE: each room can hold a single activity at the same time (you can add more rooms representing a very large room)", 0));
        addRoomPushButton->setText(QApplication::translate("RoomsForm_template", "Add", 0));
        modifyRoomPushButton->setText(QApplication::translate("RoomsForm_template", "Modify", 0));
        removeRoomPushButton->setText(QApplication::translate("RoomsForm_template", "Remove", 0));
        moveRoomUpPushButton->setText(QApplication::translate("RoomsForm_template", "Up", "It means move the item up in the list"));
        moveRoomDownPushButton->setText(QApplication::translate("RoomsForm_template", "Down", "It means move the item down in the list"));
        commentsPushButton->setText(QApplication::translate("RoomsForm_template", "Comments", 0));
        sortRoomsPushButton->setText(QApplication::translate("RoomsForm_template", "Sort", 0));
        closePushButton->setText(QApplication::translate("RoomsForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class RoomsForm_template: public Ui_RoomsForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMSFORM_TEMPLATE_H
