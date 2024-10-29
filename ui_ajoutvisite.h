/********************************************************************************
** Form generated from reading UI file 'ajoutvisite.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTVISITE_H
#define UI_AJOUTVISITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ajoutVisite
{
public:
    QFrame *line;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QLineEdit *nbjrEdit;
    QLabel *msgNbj;
    QLabel *label_5;
    QLineEdit *dateVisiteEdit;
    QLabel *msgDate;
    QLabel *label_4;
    QPushButton *Reset;
    QPushButton *confirmAddvisiteBtn;

    void setupUi(QDialog *ajoutVisite)
    {
        if (ajoutVisite->objectName().isEmpty())
            ajoutVisite->setObjectName(QStringLiteral("ajoutVisite"));
        ajoutVisite->resize(436, 420);
        ajoutVisite->setMinimumSize(QSize(436, 420));
        ajoutVisite->setMaximumSize(QSize(436, 420));
        ajoutVisite->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color:#6b6b6b;\n"
"border:none;\n"
"border-radius:10px;"));
        line = new QFrame(ajoutVisite);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 20, 411, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(ajoutVisite);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 50, 411, 318));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setStyleSheet(QLatin1String("border-top:none;\n"
"                  border-left:none;\n"
"                  border-right:none;\n"
"                  border-bottom:1.5px solid #00a086;\n"
"                  margin-bottom:15px;\n"
"                  padding-bottom:5px;\n"
"                  min-height:24px;\n"
"border-radius:0;"));

        verticalLayout->addWidget(comboBox);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        comboBox_2 = new QComboBox(verticalLayoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setStyleSheet(QLatin1String("border-top:none;\n"
"                  border-left:none;\n"
"                  border-right:none;\n"
"                  border-bottom:1.5px solid #00a086;\n"
"                  margin-bottom:15px;\n"
"                  padding-bottom:5px;\n"
"                  min-height:24px;\n"
"border-radius:0;"));

        verticalLayout->addWidget(comboBox_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        nbjrEdit = new QLineEdit(verticalLayoutWidget);
        nbjrEdit->setObjectName(QStringLiteral("nbjrEdit"));
        nbjrEdit->setStyleSheet(QLatin1String("border-top:none;\n"
"                  border-left:none;\n"
"                  border-right:none;\n"
"                  border-bottom:1.5px solid #00a086;\n"
"                  margin-bottom:15px;\n"
"                  padding-bottom:5px;\n"
"                  min-height:24px;\n"
"border-radius:0;"));

        verticalLayout->addWidget(nbjrEdit);

        msgNbj = new QLabel(verticalLayoutWidget);
        msgNbj->setObjectName(QStringLiteral("msgNbj"));
        msgNbj->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        verticalLayout->addWidget(msgNbj);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        dateVisiteEdit = new QLineEdit(verticalLayoutWidget);
        dateVisiteEdit->setObjectName(QStringLiteral("dateVisiteEdit"));
        dateVisiteEdit->setStyleSheet(QLatin1String("border-top:none;\n"
"                  border-left:none;\n"
"                  border-right:none;\n"
"                  border-bottom:1.5px solid #00a086;\n"
"                  margin-bottom:15px;\n"
"                  padding-bottom:5px;\n"
"                  min-height:24px;\n"
"border-radius:0;"));

        verticalLayout->addWidget(dateVisiteEdit);

        msgDate = new QLabel(verticalLayoutWidget);
        msgDate->setObjectName(QStringLiteral("msgDate"));
        msgDate->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        verticalLayout->addWidget(msgDate);

        label_4 = new QLabel(ajoutVisite);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 0, 231, 20));
        Reset = new QPushButton(ajoutVisite);
        Reset->setObjectName(QStringLiteral("Reset"));
        Reset->setGeometry(QRect(130, 370, 122, 31));
        confirmAddvisiteBtn = new QPushButton(ajoutVisite);
        confirmAddvisiteBtn->setObjectName(QStringLiteral("confirmAddvisiteBtn"));
        confirmAddvisiteBtn->setGeometry(QRect(280, 370, 141, 31));
        confirmAddvisiteBtn->setStyleSheet(QLatin1String("background-color:#00A086;\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(ajoutVisite);

        QMetaObject::connectSlotsByName(ajoutVisite);
    } // setupUi

    void retranslateUi(QDialog *ajoutVisite)
    {
        ajoutVisite->setWindowTitle(QApplication::translate("ajoutVisite", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("ajoutVisite", "Nom du visiteur :", Q_NULLPTR));
        label->setText(QApplication::translate("ajoutVisite", "Nom du site:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ajoutVisite", "Nombre de jours:", Q_NULLPTR));
        msgNbj->setText(QString());
        label_5->setText(QApplication::translate("ajoutVisite", "Date de visite : ", Q_NULLPTR));
        msgDate->setText(QString());
        label_4->setText(QApplication::translate("ajoutVisite", "<html><head/><body><p align=\"center\">Ajouter une nouvelle visite</p></body></html>", Q_NULLPTR));
        Reset->setText(QApplication::translate("ajoutVisite", "Reiniatialser les champs", Q_NULLPTR));
        confirmAddvisiteBtn->setText(QApplication::translate("ajoutVisite", "Ajouter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ajoutVisite: public Ui_ajoutVisite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTVISITE_H
