/********************************************************************************
** Form generated from reading UI file 'updatevisiteurbox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEVISITEURBOX_H
#define UI_UPDATEVISITEURBOX_H

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

class Ui_updateVisiteurBox
{
public:
    QLabel *label_4;
    QFrame *line;
    QPushButton *Reset;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *nomVisiteurEdit;
    QLabel *messageNomVisiteur;
    QLabel *label;
    QLineEdit *adresseVisiteurEdit;
    QLabel *MsgAddresse;
    QLabel *label_3;
    QLineEdit *provenance;
    QLabel *MsgProvenance;
    QPushButton *confirmUpdateSiteBtn;

    void setupUi(QDialog *updateVisiteurBox)
    {
        if (updateVisiteurBox->objectName().isEmpty())
            updateVisiteurBox->setObjectName(QStringLiteral("updateVisiteurBox"));
        updateVisiteurBox->resize(453, 401);
        updateVisiteurBox->setMinimumSize(QSize(453, 401));
        updateVisiteurBox->setMaximumSize(QSize(453, 401));
        updateVisiteurBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color:#6b6b6b;\n"
"border:none;\n"
"border-radius:10px;"));
        label_4 = new QLabel(updateVisiteurBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 20, 231, 20));
        line = new QFrame(updateVisiteurBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 40, 411, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        Reset = new QPushButton(updateVisiteurBox);
        Reset->setObjectName(QStringLiteral("Reset"));
        Reset->setGeometry(QRect(140, 360, 181, 26));
        verticalLayoutWidget = new QWidget(updateVisiteurBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 70, 411, 281));
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

        adresseVisiteurEdit = new QLineEdit(verticalLayoutWidget);
        adresseVisiteurEdit->setObjectName(QStringLiteral("adresseVisiteurEdit"));
        adresseVisiteurEdit->setStyleSheet(QLatin1String("border-top:none;\n"
"                  border-left:none;\n"
"                  border-right:none;\n"
"                  border-bottom:1.5px solid #00a086;\n"
"                  margin-bottom:15px;\n"
"                  padding-bottom:5px;\n"
"                  min-height:24px;\n"
"border-radius:0;"));

        verticalLayout->addWidget(adresseVisiteurEdit);

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

        confirmUpdateSiteBtn = new QPushButton(updateVisiteurBox);
        confirmUpdateSiteBtn->setObjectName(QStringLiteral("confirmUpdateSiteBtn"));
        confirmUpdateSiteBtn->setGeometry(QRect(340, 360, 87, 26));
        confirmUpdateSiteBtn->setStyleSheet(QLatin1String("background-color:#00A086;\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(updateVisiteurBox);

        QMetaObject::connectSlotsByName(updateVisiteurBox);
    } // setupUi

    void retranslateUi(QDialog *updateVisiteurBox)
    {
        updateVisiteurBox->setWindowTitle(QApplication::translate("updateVisiteurBox", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("updateVisiteurBox", "<html><head/><body><p align=\"center\">Boite de modification</p></body></html>", Q_NULLPTR));
        Reset->setText(QApplication::translate("updateVisiteurBox", "Reiniatialser les champs", Q_NULLPTR));
        label_2->setText(QApplication::translate("updateVisiteurBox", "Nom du visiteur :", Q_NULLPTR));
        messageNomVisiteur->setText(QString());
        label->setText(QApplication::translate("updateVisiteurBox", "Adresse :", Q_NULLPTR));
        MsgAddresse->setText(QString());
        label_3->setText(QApplication::translate("updateVisiteurBox", "Provenance :", Q_NULLPTR));
        MsgProvenance->setText(QString());
        confirmUpdateSiteBtn->setText(QApplication::translate("updateVisiteurBox", "Confirmer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class updateVisiteurBox: public Ui_updateVisiteurBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEVISITEURBOX_H
