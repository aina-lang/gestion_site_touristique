/********************************************************************************
** Form generated from reading UI file 'showprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWPROFILE_H
#define UI_SHOWPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showProfile
{
public:
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *pseudoLabel;
    QLineEdit *pseudoEdit;
    QLabel *passwdLabel;
    QLineEdit *passwdEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_4;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *line;
    QLabel *label_7;
    QFrame *line_2;
    QFrame *line_5;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *restoreBtn;
    QPushButton *updateUserBtn;

    void setupUi(QDialog *showProfile)
    {
        if (showProfile->objectName().isEmpty())
            showProfile->setObjectName(QStringLiteral("showProfile"));
        showProfile->resize(500, 600);
        showProfile->setMinimumSize(QSize(500, 480));
        showProfile->setMaximumSize(QSize(500, 600));
        frame = new QFrame(showProfile);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 500, 600));
        frame->setMinimumSize(QSize(500, 600));
        frame->setMaximumSize(QSize(500, 600));
        frame->setStyleSheet(QLatin1String("background-color: rgb(86, 98, 112);\n"
"color: rgb(255, 255, 243);"));
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 90, 481, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pseudoLabel = new QLabel(verticalLayoutWidget);
        pseudoLabel->setObjectName(QStringLiteral("pseudoLabel"));

        verticalLayout->addWidget(pseudoLabel);

        pseudoEdit = new QLineEdit(verticalLayoutWidget);
        pseudoEdit->setObjectName(QStringLiteral("pseudoEdit"));

        verticalLayout->addWidget(pseudoEdit);

        passwdLabel = new QLabel(verticalLayoutWidget);
        passwdLabel->setObjectName(QStringLiteral("passwdLabel"));

        verticalLayout->addWidget(passwdLabel);

        passwdEdit = new QLineEdit(verticalLayoutWidget);
        passwdEdit->setObjectName(QStringLiteral("passwdEdit"));

        verticalLayout->addWidget(passwdEdit);

        horizontalLayoutWidget_2 = new QWidget(frame);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 340, 481, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox_2 = new QCheckBox(horizontalLayoutWidget_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_2->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(horizontalLayoutWidget_2);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        horizontalLayout_2->addWidget(checkBox_3);

        checkBox = new QCheckBox(horizontalLayoutWidget_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_2->addWidget(checkBox);

        checkBox_4 = new QCheckBox(horizontalLayoutWidget_2);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        horizontalLayout_2->addWidget(checkBox_4);

        horizontalLayoutWidget_3 = new QWidget(frame);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 420, 481, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        checkBox_6 = new QCheckBox(horizontalLayoutWidget_3);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        horizontalLayout_3->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(horizontalLayoutWidget_3);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));

        horizontalLayout_3->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(horizontalLayoutWidget_3);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));

        horizontalLayout_3->addWidget(checkBox_8);

        horizontalLayoutWidget_4 = new QWidget(frame);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 500, 481, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        checkBox_12 = new QCheckBox(horizontalLayoutWidget_4);
        checkBox_12->setObjectName(QStringLiteral("checkBox_12"));

        horizontalLayout_4->addWidget(checkBox_12);

        checkBox_5 = new QCheckBox(horizontalLayoutWidget_4);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        horizontalLayout_4->addWidget(checkBox_5);

        checkBox_9 = new QCheckBox(horizontalLayoutWidget_4);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));

        horizontalLayout_4->addWidget(checkBox_9);

        checkBox_10 = new QCheckBox(horizontalLayoutWidget_4);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));

        horizontalLayout_4->addWidget(checkBox_10);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 320, 66, 18));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 400, 66, 18));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 480, 66, 18));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(180, 260, 141, 20));
        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 280, 461, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 40, 161, 20));
        line_2 = new QFrame(frame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 60, 471, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(frame);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(-10, 600, 461, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_6 = new QWidget(frame);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(10, 550, 481, 41));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        restoreBtn = new QPushButton(horizontalLayoutWidget_6);
        restoreBtn->setObjectName(QStringLiteral("restoreBtn"));

        horizontalLayout_6->addWidget(restoreBtn);

        updateUserBtn = new QPushButton(horizontalLayoutWidget_6);
        updateUserBtn->setObjectName(QStringLiteral("updateUserBtn"));

        horizontalLayout_6->addWidget(updateUserBtn);


        retranslateUi(showProfile);

        QMetaObject::connectSlotsByName(showProfile);
    } // setupUi

    void retranslateUi(QDialog *showProfile)
    {
        showProfile->setWindowTitle(QApplication::translate("showProfile", "Dialog", Q_NULLPTR));
        pseudoLabel->setText(QApplication::translate("showProfile", "Pseudo de l'utisateur :", Q_NULLPTR));
        passwdLabel->setText(QApplication::translate("showProfile", "Mot de passe de l'utilisateur :", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("showProfile", "CheckBox", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("showProfile", "CheckBox", Q_NULLPTR));
        checkBox->setText(QApplication::translate("showProfile", "CheckBox", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("showProfile", "Ajouter un ", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("showProfile", "CheckBox", Q_NULLPTR));
        checkBox_7->setText(QApplication::translate("showProfile", "CheckBox", Q_NULLPTR));
        checkBox_8->setText(QApplication::translate("showProfile", "Ajouter un ", Q_NULLPTR));
        checkBox_12->setText(QApplication::translate("showProfile", "Ajouter un ", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("showProfile", "CheckBox", Q_NULLPTR));
        checkBox_9->setText(QApplication::translate("showProfile", "CheckBox", Q_NULLPTR));
        checkBox_10->setText(QApplication::translate("showProfile", "CheckBox", Q_NULLPTR));
        label->setText(QApplication::translate("showProfile", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("showProfile", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("showProfile", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("showProfile", "<html><head/><body><p align=\"center\">DROIT D'ACCEES</p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("showProfile", "<html><head/><body><p align=\"center\">IDENTIFIANT</p></body></html>", Q_NULLPTR));
        restoreBtn->setText(QApplication::translate("showProfile", "R\303\251initialiser", Q_NULLPTR));
        updateUserBtn->setText(QApplication::translate("showProfile", "Modifier", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class showProfile: public Ui_showProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWPROFILE_H
