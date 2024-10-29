/********************************************************************************
** Form generated from reading UI file 'addsitebox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSITEBOX_H
#define UI_ADDSITEBOX_H

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

class Ui_addSiteBox
{
public:
    QPushButton *confirmAddSiteBtn;
    QPushButton *Reset;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *nomSiteEdit;
    QLabel *messageNom;
    QLabel *label;
    QLineEdit *lieuSiteEdit;
    QLabel *messageLieu;
    QLabel *label_3;
    QLineEdit *tarifSiteEdit;
    QLabel *messagetarif;
    QLabel *label_4;
    QFrame *line;

    void setupUi(QDialog *addSiteBox)
    {
        if (addSiteBox->objectName().isEmpty())
            addSiteBox->setObjectName(QStringLiteral("addSiteBox"));
        addSiteBox->resize(450, 430);
        addSiteBox->setMinimumSize(QSize(450, 430));
        addSiteBox->setMaximumSize(QSize(450, 430));
        addSiteBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color:#6b6b6b;\n"
"border:none;\n"
"border-radius:10px;"));
        confirmAddSiteBtn = new QPushButton(addSiteBox);
        confirmAddSiteBtn->setObjectName(QStringLiteral("confirmAddSiteBtn"));
        confirmAddSiteBtn->setGeometry(QRect(340, 380, 87, 26));
        confirmAddSiteBtn->setStyleSheet(QLatin1String("background-color:#00A086;\n"
"color: rgb(255, 255, 255);"));
        Reset = new QPushButton(addSiteBox);
        Reset->setObjectName(QStringLiteral("Reset"));
        Reset->setGeometry(QRect(130, 380, 181, 26));
        verticalLayoutWidget = new QWidget(addSiteBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(19, 79, 411, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        nomSiteEdit = new QLineEdit(verticalLayoutWidget);
        nomSiteEdit->setObjectName(QStringLiteral("nomSiteEdit"));
        nomSiteEdit->setStyleSheet(QLatin1String("border-top:none;\n"
"                  border-left:none;\n"
"                  border-right:none;\n"
"                  border-bottom:1.5px solid #00a086;\n"
"                  margin-bottom:15px;\n"
"                  padding-bottom:5px;\n"
"                  min-height:24px;\n"
"border-radius:0;"));

        verticalLayout->addWidget(nomSiteEdit);

        messageNom = new QLabel(verticalLayoutWidget);
        messageNom->setObjectName(QStringLiteral("messageNom"));
        messageNom->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        verticalLayout->addWidget(messageNom);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lieuSiteEdit = new QLineEdit(verticalLayoutWidget);
        lieuSiteEdit->setObjectName(QStringLiteral("lieuSiteEdit"));
        lieuSiteEdit->setStyleSheet(QLatin1String("border-top:none;\n"
"                  border-left:none;\n"
"                  border-right:none;\n"
"                  border-bottom:1.5px solid #00a086;\n"
"                  margin-bottom:15px;\n"
"                  padding-bottom:5px;\n"
"                  min-height:24px;\n"
"border-radius:0;"));

        verticalLayout->addWidget(lieuSiteEdit);

        messageLieu = new QLabel(verticalLayoutWidget);
        messageLieu->setObjectName(QStringLiteral("messageLieu"));
        messageLieu->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        verticalLayout->addWidget(messageLieu);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        tarifSiteEdit = new QLineEdit(verticalLayoutWidget);
        tarifSiteEdit->setObjectName(QStringLiteral("tarifSiteEdit"));
        tarifSiteEdit->setStyleSheet(QLatin1String("border-top:none;\n"
"                  border-left:none;\n"
"                  border-right:none;\n"
"                  border-bottom:1.5px solid #00a086;\n"
"                  margin-bottom:15px;\n"
"                  padding-bottom:5px;\n"
"                  min-height:24px;\n"
"border-radius:0;"));

        verticalLayout->addWidget(tarifSiteEdit);

        messagetarif = new QLabel(verticalLayoutWidget);
        messagetarif->setObjectName(QStringLiteral("messagetarif"));
        messagetarif->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        verticalLayout->addWidget(messagetarif);

        label_4 = new QLabel(addSiteBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 30, 231, 20));
        line = new QFrame(addSiteBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 50, 411, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(addSiteBox);

        QMetaObject::connectSlotsByName(addSiteBox);
    } // setupUi

    void retranslateUi(QDialog *addSiteBox)
    {
        addSiteBox->setWindowTitle(QApplication::translate("addSiteBox", "Dialog", Q_NULLPTR));
        confirmAddSiteBtn->setText(QApplication::translate("addSiteBox", "Ajouter", Q_NULLPTR));
        Reset->setText(QApplication::translate("addSiteBox", "Reiniatialser les champs", Q_NULLPTR));
        label_2->setText(QApplication::translate("addSiteBox", "Nom du site :", Q_NULLPTR));
        messageNom->setText(QString());
        label->setText(QApplication::translate("addSiteBox", "Lieu du site :", Q_NULLPTR));
        messageLieu->setText(QString());
        label_3->setText(QApplication::translate("addSiteBox", "Tarif journalier :", Q_NULLPTR));
        messagetarif->setText(QString());
        label_4->setText(QApplication::translate("addSiteBox", "Ajouter une site touristiques", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addSiteBox: public Ui_addSiteBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSITEBOX_H
