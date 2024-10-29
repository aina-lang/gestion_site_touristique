/********************************************************************************
** Form generated from reading UI file 'modifboxvisite.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFBOXVISITE_H
#define UI_MODIFBOXVISITE_H

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

class Ui_modifBoxVisite
{
public:
    QLabel *label_4;
    QFrame *line;
    QPushButton *confirmUpdatevisiteBtn;
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
    QPushButton *Reset;

    void setupUi(QDialog *modifBoxVisite)
    {
        if (modifBoxVisite->objectName().isEmpty())
            modifBoxVisite->setObjectName(QStringLiteral("modifBoxVisite"));
        modifBoxVisite->resize(440, 420);
        modifBoxVisite->setMinimumSize(QSize(440, 420));
        modifBoxVisite->setMaximumSize(QSize(440, 420));
        modifBoxVisite->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color:#6b6b6b;\n"
"border:none;\n"
"border-radius:10px;"));
        label_4 = new QLabel(modifBoxVisite);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 10, 231, 20));
        line = new QFrame(modifBoxVisite);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(30, 30, 411, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        confirmUpdatevisiteBtn = new QPushButton(modifBoxVisite);
        confirmUpdatevisiteBtn->setObjectName(QStringLiteral("confirmUpdatevisiteBtn"));
        confirmUpdatevisiteBtn->setGeometry(QRect(350, 360, 87, 26));
        confirmUpdatevisiteBtn->setStyleSheet(QLatin1String("background-color:#00A086;\n"
"color: rgb(255, 255, 255);"));
        verticalLayoutWidget = new QWidget(modifBoxVisite);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 30, 432, 318));
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

        Reset = new QPushButton(modifBoxVisite);
        Reset->setObjectName(QStringLiteral("Reset"));
        Reset->setGeometry(QRect(150, 360, 181, 26));

        retranslateUi(modifBoxVisite);

        QMetaObject::connectSlotsByName(modifBoxVisite);
    } // setupUi

    void retranslateUi(QDialog *modifBoxVisite)
    {
        modifBoxVisite->setWindowTitle(QApplication::translate("modifBoxVisite", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("modifBoxVisite", "<html><head/><body><p align=\"center\">Modifier cette visite</p></body></html>", Q_NULLPTR));
        confirmUpdatevisiteBtn->setText(QApplication::translate("modifBoxVisite", "Confirmer ", Q_NULLPTR));
        label_2->setText(QApplication::translate("modifBoxVisite", "Nom du visiteur :", Q_NULLPTR));
        label->setText(QApplication::translate("modifBoxVisite", "Nom du site:", Q_NULLPTR));
        label_3->setText(QApplication::translate("modifBoxVisite", "Nombre de jours:", Q_NULLPTR));
        msgNbj->setText(QString());
        label_5->setText(QApplication::translate("modifBoxVisite", "Date de visite : ", Q_NULLPTR));
        msgDate->setText(QString());
        Reset->setText(QApplication::translate("modifBoxVisite", "Reiniatialser les champs", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class modifBoxVisite: public Ui_modifBoxVisite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFBOXVISITE_H
