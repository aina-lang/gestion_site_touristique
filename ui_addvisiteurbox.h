/********************************************************************************
** Form generated from reading UI file 'addvisiteurbox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVISITEURBOX_H
#define UI_ADDVISITEURBOX_H

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

class Ui_addVisiteurBox
{
public:
    QPushButton *Reset;
    QFrame *line;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *nomVisiteurEdit;
    QLabel *messageNomVisiteur;
    QLabel *label;
    QLineEdit *addresseEdit;
    QLabel *MsgAddresse;
    QLabel *label_3;
    QLineEdit *provenance;
    QLabel *MsgProvenance;
    QPushButton *confirmAddVisiteurBtn;
    QLabel *label_4;

    void setupUi(QDialog *addVisiteurBox)
    {
        if (addVisiteurBox->objectName().isEmpty())
            addVisiteurBox->setObjectName(QStringLiteral("addVisiteurBox"));
        addVisiteurBox->resize(436, 381);
        addVisiteurBox->setMinimumSize(QSize(436, 381));
        addVisiteurBox->setMaximumSize(QSize(436, 381));
        addVisiteurBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color:#6b6b6b;\n"
"border:none;\n"
"border-radius:10px;"));
        Reset = new QPushButton(addVisiteurBox);
        Reset->setObjectName(QStringLiteral("Reset"));
        Reset->setGeometry(QRect(130, 340, 181, 26));
        line = new QFrame(addVisiteurBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 20, 411, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(addVisiteurBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 49, 411, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        nomVisiteurEdit = new QLineEdit(verticalLayoutWidget);
        nomVisiteurEdit->setObjectName(QStringLiteral("nomVisiteurEdit"));
        nomVisiteurEdit->setStyleSheet(QLatin1String("border-top:none;\n"
"                  border-left:none;\n"
"                  border-right:none;\n"
"                  border-bottom:1.5px solid #00a086;\n"
"                  margin-bottom:15px;\n"
"                  padding-bottom:5px;\n"
"                  min-height:24px;\n"
"border-radius:0;"));

        verticalLayout->addWidget(nomVisiteurEdit);

        messageNomVisiteur = new QLabel(verticalLayoutWidget);
        messageNomVisiteur->setObjectName(QStringLiteral("messageNomVisiteur"));
        messageNomVisiteur->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        verticalLayout->addWidget(messageNomVisiteur);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        addresseEdit = new QLineEdit(verticalLayoutWidget);
        addresseEdit->setObjectName(QStringLiteral("addresseEdit"));
        addresseEdit->setStyleSheet(QLatin1String("border-top:none;\n"
"                  border-left:none;\n"
"                  border-right:none;\n"
"                  border-bottom:1.5px solid #00a086;\n"
"                  margin-bottom:15px;\n"
"                  padding-bottom:5px;\n"
"                  min-height:24px;\n"
"border-radius:0;"));

        verticalLayout->addWidget(addresseEdit);

        MsgAddresse = new QLabel(verticalLayoutWidget);
        MsgAddresse->setObjectName(QStringLiteral("MsgAddresse"));
        MsgAddresse->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        verticalLayout->addWidget(MsgAddresse);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        provenance = new QLineEdit(verticalLayoutWidget);
        provenance->setObjectName(QStringLiteral("provenance"));
        provenance->setStyleSheet(QLatin1String("border-top:none;\n"
"                  border-left:none;\n"
"                  border-right:none;\n"
"                  border-bottom:1.5px solid #00a086;\n"
"                  margin-bottom:15px;\n"
"                  padding-bottom:5px;\n"
"                  min-height:24px;\n"
"border-radius:0;"));

        verticalLayout->addWidget(provenance);

        MsgProvenance = new QLabel(verticalLayoutWidget);
        MsgProvenance->setObjectName(QStringLiteral("MsgProvenance"));
        MsgProvenance->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        verticalLayout->addWidget(MsgProvenance);

        confirmAddVisiteurBtn = new QPushButton(addVisiteurBox);
        confirmAddVisiteurBtn->setObjectName(QStringLiteral("confirmAddVisiteurBtn"));
        confirmAddVisiteurBtn->setGeometry(QRect(330, 340, 87, 26));
        confirmAddVisiteurBtn->setStyleSheet(QLatin1String("background-color:#00A086;\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(addVisiteurBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 0, 231, 20));

        retranslateUi(addVisiteurBox);

        QMetaObject::connectSlotsByName(addVisiteurBox);
    } // setupUi

    void retranslateUi(QDialog *addVisiteurBox)
    {
        addVisiteurBox->setWindowTitle(QApplication::translate("addVisiteurBox", "Dialog", Q_NULLPTR));
        Reset->setText(QApplication::translate("addVisiteurBox", "Reiniatialser les champs", Q_NULLPTR));
        label_2->setText(QApplication::translate("addVisiteurBox", "Nom du visiteur :", Q_NULLPTR));
        messageNomVisiteur->setText(QString());
        label->setText(QApplication::translate("addVisiteurBox", "Adresse : ", Q_NULLPTR));
        MsgAddresse->setText(QString());
        label_3->setText(QApplication::translate("addVisiteurBox", "Provenance : ", Q_NULLPTR));
        MsgProvenance->setText(QString());
        confirmAddVisiteurBtn->setText(QApplication::translate("addVisiteurBox", "Ajouter", Q_NULLPTR));
        label_4->setText(QApplication::translate("addVisiteurBox", "<html><head/><body><p align=\"center\">Ajouter un nouveau visiteur</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addVisiteurBox: public Ui_addVisiteurBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVISITEURBOX_H
