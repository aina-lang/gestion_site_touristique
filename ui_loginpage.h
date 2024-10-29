/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginPage
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *nomLabel;
    QLineEdit *nomEdit;
    QLabel *passwordLabel;
    QLineEdit *passwdEdit;
    QLabel *message;
    QLabel *labelIcon;
    QLabel *label;
    QFrame *line;
    QPushButton *loginBtn;

    void setupUi(QDialog *loginPage)
    {
        if (loginPage->objectName().isEmpty())
            loginPage->setObjectName(QStringLiteral("loginPage"));
        loginPage->resize(600, 320);
        loginPage->setMinimumSize(QSize(600, 320));
        loginPage->setMaximumSize(QSize(600, 320));
        loginPage->setStyleSheet(QStringLiteral("background-color: rgb(86, 98, 112);"));
        verticalLayoutWidget = new QWidget(loginPage);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 70, 311, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        nomLabel = new QLabel(verticalLayoutWidget);
        nomLabel->setObjectName(QStringLiteral("nomLabel"));
        nomLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 243);"));

        verticalLayout->addWidget(nomLabel);

        nomEdit = new QLineEdit(verticalLayoutWidget);
        nomEdit->setObjectName(QStringLiteral("nomEdit"));

        verticalLayout->addWidget(nomEdit);

        passwordLabel = new QLabel(verticalLayoutWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 243);"));

        verticalLayout->addWidget(passwordLabel);

        passwdEdit = new QLineEdit(verticalLayoutWidget);
        passwdEdit->setObjectName(QStringLiteral("passwdEdit"));

        verticalLayout->addWidget(passwdEdit);

        message = new QLabel(verticalLayoutWidget);
        message->setObjectName(QStringLiteral("message"));

        verticalLayout->addWidget(message);

        labelIcon = new QLabel(loginPage);
        labelIcon->setObjectName(QStringLiteral("labelIcon"));
        labelIcon->setGeometry(QRect(30, 90, 211, 151));
        label = new QLabel(loginPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 181, 18));
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 243);"));
        line = new QFrame(loginPage);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 40, 561, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        loginBtn = new QPushButton(loginPage);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setGeometry(QRect(340, 260, 161, 41));
        loginBtn->setStyleSheet(QStringLiteral(""));

        retranslateUi(loginPage);

        QMetaObject::connectSlotsByName(loginPage);
    } // setupUi

    void retranslateUi(QDialog *loginPage)
    {
        loginPage->setWindowTitle(QApplication::translate("loginPage", "loginPage", Q_NULLPTR));
        nomLabel->setText(QApplication::translate("loginPage", "Nom :", Q_NULLPTR));
        passwordLabel->setText(QApplication::translate("loginPage", "Mot de passe :", Q_NULLPTR));
        message->setText(QString());
        labelIcon->setText(QString());
        label->setText(QApplication::translate("loginPage", "Veuillez vous identifier", Q_NULLPTR));
        loginBtn->setText(QApplication::translate("loginPage", "S'identifier", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class loginPage: public Ui_loginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
