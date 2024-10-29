/********************************************************************************
** Form generated from reading UI file 'voirplusvisiteur.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOIRPLUSVISITEUR_H
#define UI_VOIRPLUSVISITEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_voirPlusVisiteur
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *nomVisiteurlbl;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *adresselbl;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *provenancelbl;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *nbsitelbl;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLabel *effectVisiteurlbl;
    QListView *listView;
    QLabel *id_label;

    void setupUi(QDialog *voirPlusVisiteur)
    {
        if (voirPlusVisiteur->objectName().isEmpty())
            voirPlusVisiteur->setObjectName(QStringLiteral("voirPlusVisiteur"));
        voirPlusVisiteur->resize(720, 480);
        voirPlusVisiteur->setMinimumSize(QSize(720, 480));
        voirPlusVisiteur->setMaximumSize(QSize(760, 480));
        voirPlusVisiteur->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color:#00A086;\n"
"border:none;\n"
"border-radius:10px;"));
        horizontalLayoutWidget = new QWidget(voirPlusVisiteur);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 20, 160, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        nomVisiteurlbl = new QLabel(horizontalLayoutWidget);
        nomVisiteurlbl->setObjectName(QStringLiteral("nomVisiteurlbl"));

        horizontalLayout->addWidget(nomVisiteurlbl);

        horizontalLayoutWidget_2 = new QWidget(voirPlusVisiteur);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(50, 60, 160, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        adresselbl = new QLabel(horizontalLayoutWidget_2);
        adresselbl->setObjectName(QStringLiteral("adresselbl"));

        horizontalLayout_2->addWidget(adresselbl);

        horizontalLayoutWidget_3 = new QWidget(voirPlusVisiteur);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(50, 110, 160, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        provenancelbl = new QLabel(horizontalLayoutWidget_3);
        provenancelbl->setObjectName(QStringLiteral("provenancelbl"));

        horizontalLayout_3->addWidget(provenancelbl);

        horizontalLayoutWidget_4 = new QWidget(voirPlusVisiteur);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(410, 60, 233, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        nbsitelbl = new QLabel(horizontalLayoutWidget_4);
        nbsitelbl->setObjectName(QStringLiteral("nbsitelbl"));

        horizontalLayout_4->addWidget(nbsitelbl);

        horizontalLayoutWidget_6 = new QWidget(voirPlusVisiteur);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(410, 20, 188, 41));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(horizontalLayoutWidget_6);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_6->addWidget(label_11);

        effectVisiteurlbl = new QLabel(horizontalLayoutWidget_6);
        effectVisiteurlbl->setObjectName(QStringLiteral("effectVisiteurlbl"));

        horizontalLayout_6->addWidget(effectVisiteurlbl);

        listView = new QListView(voirPlusVisiteur);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(30, 180, 661, 271));
        id_label = new QLabel(voirPlusVisiteur);
        id_label->setObjectName(QStringLiteral("id_label"));
        id_label->setGeometry(QRect(40, 100, 47, 13));

        retranslateUi(voirPlusVisiteur);

        QMetaObject::connectSlotsByName(voirPlusVisiteur);
    } // setupUi

    void retranslateUi(QDialog *voirPlusVisiteur)
    {
        voirPlusVisiteur->setWindowTitle(QApplication::translate("voirPlusVisiteur", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("voirPlusVisiteur", "Nom du visiteur :", Q_NULLPTR));
        nomVisiteurlbl->setText(QString());
        label_3->setText(QApplication::translate("voirPlusVisiteur", "Adresse : ", Q_NULLPTR));
        adresselbl->setText(QString());
        label_5->setText(QApplication::translate("voirPlusVisiteur", "Provenance : ", Q_NULLPTR));
        provenancelbl->setText(QString());
        label_7->setText(QApplication::translate("voirPlusVisiteur", "Nombre Total des sites visit\303\251s : ", Q_NULLPTR));
        nbsitelbl->setText(QString());
        label_11->setText(QApplication::translate("voirPlusVisiteur", "Effectif total des visiteurs : ", Q_NULLPTR));
        effectVisiteurlbl->setText(QString());
        id_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class voirPlusVisiteur: public Ui_voirPlusVisiteur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOIRPLUSVISITEUR_H
