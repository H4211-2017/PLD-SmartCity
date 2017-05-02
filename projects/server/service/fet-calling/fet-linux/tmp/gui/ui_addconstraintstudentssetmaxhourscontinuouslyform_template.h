/********************************************************************************
** Form generated from reading UI file 'addconstraintstudentssetmaxhourscontinuouslyform_template.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONSTRAINTSTUDENTSSETMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
#define UI_ADDCONSTRAINTSTUDENTSSETMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddConstraintStudentsSetMaxHoursContinuouslyForm_template
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *studentsTextLabel;
    QComboBox *studentsComboBox;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weightTextLabel;
    QLineEdit *weightLineEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *maxHoursTextLabel;
    QSpinBox *maxHoursSpinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *addConstraintPushButton;
    QPushButton *closePushButton;

    void setupUi(QDialog *AddConstraintStudentsSetMaxHoursContinuouslyForm_template)
    {
        if (AddConstraintStudentsSetMaxHoursContinuouslyForm_template->objectName().isEmpty())
            AddConstraintStudentsSetMaxHoursContinuouslyForm_template->setObjectName(QStringLiteral("AddConstraintStudentsSetMaxHoursContinuouslyForm_template"));
        AddConstraintStudentsSetMaxHoursContinuouslyForm_template->resize(473, 259);
        gridLayout = new QGridLayout(AddConstraintStudentsSetMaxHoursContinuouslyForm_template);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        studentsTextLabel = new QLabel(AddConstraintStudentsSetMaxHoursContinuouslyForm_template);
        studentsTextLabel->setObjectName(QStringLiteral("studentsTextLabel"));
        studentsTextLabel->setFrameShape(QFrame::NoFrame);
        studentsTextLabel->setFrameShadow(QFrame::Plain);
        studentsTextLabel->setWordWrap(false);

        verticalLayout->addWidget(studentsTextLabel);

        studentsComboBox = new QComboBox(AddConstraintStudentsSetMaxHoursContinuouslyForm_template);
        studentsComboBox->setObjectName(QStringLiteral("studentsComboBox"));
        studentsComboBox->setEditable(false);
        studentsComboBox->setInsertPolicy(QComboBox::NoInsert);
        studentsComboBox->setAutoCompletion(false);
        studentsComboBox->setDuplicatesEnabled(false);

        verticalLayout->addWidget(studentsComboBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weightTextLabel = new QLabel(AddConstraintStudentsSetMaxHoursContinuouslyForm_template);
        weightTextLabel->setObjectName(QStringLiteral("weightTextLabel"));
        weightTextLabel->setFrameShape(QFrame::NoFrame);
        weightTextLabel->setFrameShadow(QFrame::Plain);
        weightTextLabel->setWordWrap(false);

        horizontalLayout_2->addWidget(weightTextLabel);

        weightLineEdit = new QLineEdit(AddConstraintStudentsSetMaxHoursContinuouslyForm_template);
        weightLineEdit->setObjectName(QStringLiteral("weightLineEdit"));
        weightLineEdit->setText(QStringLiteral("100"));

        horizontalLayout_2->addWidget(weightLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        maxHoursTextLabel = new QLabel(AddConstraintStudentsSetMaxHoursContinuouslyForm_template);
        maxHoursTextLabel->setObjectName(QStringLiteral("maxHoursTextLabel"));
        maxHoursTextLabel->setFrameShape(QFrame::NoFrame);
        maxHoursTextLabel->setFrameShadow(QFrame::Plain);
        maxHoursTextLabel->setWordWrap(false);

        horizontalLayout_3->addWidget(maxHoursTextLabel);

        maxHoursSpinBox = new QSpinBox(AddConstraintStudentsSetMaxHoursContinuouslyForm_template);
        maxHoursSpinBox->setObjectName(QStringLiteral("maxHoursSpinBox"));

        horizontalLayout_3->addWidget(maxHoursSpinBox);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addConstraintPushButton = new QPushButton(AddConstraintStudentsSetMaxHoursContinuouslyForm_template);
        addConstraintPushButton->setObjectName(QStringLiteral("addConstraintPushButton"));

        horizontalLayout->addWidget(addConstraintPushButton);

        closePushButton = new QPushButton(AddConstraintStudentsSetMaxHoursContinuouslyForm_template);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);


        retranslateUi(AddConstraintStudentsSetMaxHoursContinuouslyForm_template);

        QMetaObject::connectSlotsByName(AddConstraintStudentsSetMaxHoursContinuouslyForm_template);
    } // setupUi

    void retranslateUi(QDialog *AddConstraintStudentsSetMaxHoursContinuouslyForm_template)
    {
        AddConstraintStudentsSetMaxHoursContinuouslyForm_template->setWindowTitle(QApplication::translate("AddConstraintStudentsSetMaxHoursContinuouslyForm_template", "Add students set max hours continuously", 0));
        studentsTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMaxHoursContinuouslyForm_template", "Students set", 0));
        weightTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMaxHoursContinuouslyForm_template", "Weight percentage\n"
"(recommended: 0.0%-100.0%)", 0));
        maxHoursTextLabel->setText(QApplication::translate("AddConstraintStudentsSetMaxHoursContinuouslyForm_template", "Max hours continuously", 0));
        addConstraintPushButton->setText(QApplication::translate("AddConstraintStudentsSetMaxHoursContinuouslyForm_template", "Add constraint", 0));
        closePushButton->setText(QApplication::translate("AddConstraintStudentsSetMaxHoursContinuouslyForm_template", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddConstraintStudentsSetMaxHoursContinuouslyForm_template: public Ui_AddConstraintStudentsSetMaxHoursContinuouslyForm_template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONSTRAINTSTUDENTSSETMAXHOURSCONTINUOUSLYFORM_TEMPLATE_H
