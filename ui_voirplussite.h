/********************************************************************************
** Form generated from reading UI file 'voirplussite.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOIRPLUSSITE_H
#define UI_VOIRPLUSSITE_H

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

class Ui_voirPlusSite
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *nomSiteLbl;
    QLabel *lieuLbl;
    QLabel *tarifLbl;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *effectVisLbl;
    QLabel *montantLbl;
    QLabel *adresseVisiteurLbl;
    QListView *listView;
    QLabel *nbrTotalVisLbl;

    void setupUi(QDialog *voirPlusSite)
    {
        if (voirPlusSite->objectName().isEmpty())
            voirPlusSite->setObjectName(QStringLiteral("voirPlusSite"));
        voirPlusSite->resize(730, 500);
        voirPlusSite->setMinimumSize(QSize(730, 500));
        voirPlusSite->setMaximumSize(QSize(730, 500));
        voirPlusSite->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color:#00A086;\n"
"border:none;\n"
"border-radius:10px;"));
        horizontalLayoutWidget = new QWidget(voirPlusSite);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 10, 701, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        nomSiteLbl = new QLabel(horizontalLayoutWidget);
        nomSiteLbl->setObjectName(QStringLiteral("nomSiteLbl"));

        horizontalLayout->addWidget(nomSiteLbl);

        lieuLbl = new QLabel(horizontalLayoutWidget);
        lieuLbl->setObjectName(QStringLiteral("lieuLbl"));

        horizontalLayout->addWidget(lieuLbl);

        tarifLbl = new QLabel(horizontalLayoutWidget);
        tarifLbl->setObjectName(QStringLiteral("tarifLbl"));

        horizontalLayout->addWidget(tarifLbl);

        horizontalLayoutWidget_2 = new QWidget(voirPlusSite);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 110, 701, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        effectVisLbl = new QLabel(horizontalLayoutWidget_2);
        effectVisLbl->setObjectName(QStringLiteral("effectVisLbl"));

        horizontalLayout_2->addWidget(effectVisLbl);

        montantLbl = new QLabel(horizontalLayoutWidget_2);
        montantLbl->setObjectName(QStringLiteral("montantLbl"));

        horizontalLayout_2->addWidget(montantLbl);

        adresseVisiteurLbl = new QLabel(horizontalLayoutWidget_2);
        adresseVisiteurLbl->setObjectName(QStringLiteral("adresseVisiteurLbl"));

        horizontalLayout_2->addWidget(adresseVisiteurLbl);

        listView = new QListView(voirPlusSite);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(15, 221, 701, 261));
        nbrTotalVisLbl = new QLabel(voirPlusSite);
        nbrTotalVisLbl->setObjectName(QStringLiteral("nbrTotalVisLbl"));
        nbrTotalVisLbl->setGeometry(QRect(340, 230, 168, 69));

        retranslateUi(voirPlusSite);

        QMetaObject::connectSlotsByName(voirPlusSite);
    } // setupUi

    void retranslateUi(QDialog *voirPlusSite)
    {
        voirPlusSite->setWindowTitle(QApplication::translate("voirPlusSite", "Dialog", Q_NULLPTR));
        nomSiteLbl->setText(QString());
        lieuLbl->setText(QString());
        tarifLbl->setText(QString());
        effectVisLbl->setText(QString());
        montantLbl->setText(QString());
        adresseVisiteurLbl->setText(QString());
        nbrTotalVisLbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class voirPlusSite: public Ui_voirPlusSite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOIRPLUSSITE_H
