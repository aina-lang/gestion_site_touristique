/********************************************************************************
** Form generated from reading UI file 'updatesitebox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATESITEBOX_H
#define UI_UPDATESITEBOX_H

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

class Ui_updateSiteBox
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
    QFrame *line;
    QLabel *label_4;

    void setupUi(QDialog *updateSiteBox)
    {
        if (updateSiteBox->objectName().isEmpty())
            updateSiteBox->setObjectName(QStringLiteral("updateSiteBox"));
        updateSiteBox->resize(466, 412);
        updateSiteBox->setMinimumSize(QSize(466, 0));
        updateSiteBox->setMaximumSize(QSize(466, 412));
        updateSiteBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color:#6b6b6b;\n"
"border:none;\n"
"border-radius:10px;"));
        confirmAddSiteBtn = new QPushButton(updateSiteBox);
        confirmAddSiteBtn->setObjectName(QStringLiteral("confirmAddSiteBtn"));
        confirmAddSiteBtn->setGeometry(QRect(350, 370, 87, 26));
        confirmAddSiteBtn->setStyleSheet(QLatin1String("background-color:#00A086;\n"
"color: rgb(255, 255, 255);"));
        Reset = new QPushButton(updateSiteBox);
        Reset->setObjectName(QStringLiteral("Reset"));
        Reset->setGeometry(QRect(150, 370, 181, 26));
        verticalLayoutWidget = new QWidget(updateSiteBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(29, 59, 411, 281));
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

        line = new QFrame(updateSiteBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(30, 30, 411, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(updateSiteBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 10, 231, 20));

        retranslateUi(updateSiteBox);

        QMetaObject::connectSlotsByName(updateSiteBox);
    } // setupUi

    void retranslateUi(QDialog *updateSiteBox)
    {
        updateSiteBox->setWindowTitle(QApplication::translate("updateSiteBox", "Dialog", Q_NULLPTR));
        confirmAddSiteBtn->setText(QApplication::translate("updateSiteBox", "Ajouter", Q_NULLPTR));
        Reset->setText(QApplication::translate("updateSiteBox", "Reiniatialser les champs", Q_NULLPTR));
        label_2->setText(QApplication::translate("updateSiteBox", "Nom du site :", Q_NULLPTR));
        messageNom->setText(QString());
        label->setText(QApplication::translate("updateSiteBox", "Lieu du site :", Q_NULLPTR));
        messageLieu->setText(QString());
        label_3->setText(QApplication::translate("updateSiteBox", "Tarif journalier :", Q_NULLPTR));
        messagetarif->setText(QString());
        label_4->setText(QApplication::translate("updateSiteBox", "Modifier une site touristiques", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class updateSiteBox: public Ui_updateSiteBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATESITEBOX_H
