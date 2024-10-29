/********************************************************************************
** Form generated from reading UI file 'mainwindowuser.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWUSER_H
#define UI_MAINWINDOWUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainwindowUser
{
public:
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *pseudoLabel;
    QLineEdit *pseudoEdit;
    QLabel *passwdLabel;
    QLineEdit *passwdEdit;
    QLabel *label_6;
    QFrame *line;
    QLabel *label_7;
    QFrame *line_2;
    QFrame *line_5;
    QFrame *line_6;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *restoreBtn;
    QPushButton *modifUserBtn;
    QPushButton *confirmAddUserBtn;
    QGroupBox *groupBox;
    QCheckBox *adminSiteActivateBtn;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *AjouterSite;
    QCheckBox *ModifierSite;
    QCheckBox *SupprimerSite;
    QCheckBox *VisualiserSite;
    QGroupBox *groupBox_2;
    QCheckBox *adminUserActivateBtn;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *AjouterUser;
    QCheckBox *ModifierUser;
    QCheckBox *SupprimerUser;
    QCheckBox *VisualiserUser;
    QTableView *tableView;
    QFrame *line_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *toSiteGestionBtn;
    QPushButton *toUserAdministrationBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *logoutBtn;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *addUserBtn;
    QPushButton *deleteUserBtn;
    QPushButton *exportToPdfBtn;
    QFrame *line_4;
    QFrame *line_7;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *searchUserEdit;

    void setupUi(QWidget *MainwindowUser)
    {
        if (MainwindowUser->objectName().isEmpty())
            MainwindowUser->setObjectName(QStringLiteral("MainwindowUser"));
        MainwindowUser->resize(1250, 670);
        MainwindowUser->setMinimumSize(QSize(1250, 670));
        MainwindowUser->setMaximumSize(QSize(1250, 670));
        MainwindowUser->setStyleSheet(QLatin1String("background-color: rgb(86, 98, 112);\n"
"color: rgb(255, 255, 243);"));
        frame = new QFrame(MainwindowUser);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(770, 60, 461, 591));
        frame->setStyleSheet(QLatin1String("background-color: rgb(86, 98, 112);\n"
"color: rgb(255, 255, 243);"));
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 90, 431, 161));
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

        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 260, 141, 20));
        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 280, 411, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(180, 40, 161, 20));
        line_2 = new QFrame(frame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 60, 411, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(frame);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(-10, 600, 461, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(frame);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(450, 0, 16, 611));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_6 = new QWidget(frame);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(10, 550, 441, 41));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        restoreBtn = new QPushButton(horizontalLayoutWidget_6);
        restoreBtn->setObjectName(QStringLiteral("restoreBtn"));

        horizontalLayout_6->addWidget(restoreBtn);

        modifUserBtn = new QPushButton(horizontalLayoutWidget_6);
        modifUserBtn->setObjectName(QStringLiteral("modifUserBtn"));

        horizontalLayout_6->addWidget(modifUserBtn);

        confirmAddUserBtn = new QPushButton(horizontalLayoutWidget_6);
        confirmAddUserBtn->setObjectName(QStringLiteral("confirmAddUserBtn"));

        horizontalLayout_6->addWidget(confirmAddUserBtn);

        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 290, 431, 121));
        adminSiteActivateBtn = new QCheckBox(groupBox);
        adminSiteActivateBtn->setObjectName(QStringLiteral("adminSiteActivateBtn"));
        adminSiteActivateBtn->setGeometry(QRect(10, 30, 241, 24));
        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 60, 421, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        AjouterSite = new QCheckBox(horizontalLayoutWidget_2);
        AjouterSite->setObjectName(QStringLiteral("AjouterSite"));

        horizontalLayout_2->addWidget(AjouterSite);

        ModifierSite = new QCheckBox(horizontalLayoutWidget_2);
        ModifierSite->setObjectName(QStringLiteral("ModifierSite"));

        horizontalLayout_2->addWidget(ModifierSite);

        SupprimerSite = new QCheckBox(horizontalLayoutWidget_2);
        SupprimerSite->setObjectName(QStringLiteral("SupprimerSite"));

        horizontalLayout_2->addWidget(SupprimerSite);

        VisualiserSite = new QCheckBox(horizontalLayoutWidget_2);
        VisualiserSite->setObjectName(QStringLiteral("VisualiserSite"));

        horizontalLayout_2->addWidget(VisualiserSite);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 420, 431, 111));
        adminUserActivateBtn = new QCheckBox(groupBox_2);
        adminUserActivateBtn->setObjectName(QStringLiteral("adminUserActivateBtn"));
        adminUserActivateBtn->setGeometry(QRect(10, 30, 251, 24));
        horizontalLayoutWidget_8 = new QWidget(groupBox_2);
        horizontalLayoutWidget_8->setObjectName(QStringLiteral("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(10, 70, 431, 41));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        AjouterUser = new QCheckBox(horizontalLayoutWidget_8);
        AjouterUser->setObjectName(QStringLiteral("AjouterUser"));

        horizontalLayout_8->addWidget(AjouterUser);

        ModifierUser = new QCheckBox(horizontalLayoutWidget_8);
        ModifierUser->setObjectName(QStringLiteral("ModifierUser"));

        horizontalLayout_8->addWidget(ModifierUser);

        SupprimerUser = new QCheckBox(horizontalLayoutWidget_8);
        SupprimerUser->setObjectName(QStringLiteral("SupprimerUser"));

        horizontalLayout_8->addWidget(SupprimerUser);

        VisualiserUser = new QCheckBox(horizontalLayoutWidget_8);
        VisualiserUser->setObjectName(QStringLiteral("VisualiserUser"));

        horizontalLayout_8->addWidget(VisualiserUser);

        tableView = new QTableView(MainwindowUser);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 190, 741, 391));
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->horizontalHeader()->setStretchLastSection(true);
        line_3 = new QFrame(MainwindowUser);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(760, 60, 20, 591));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(MainwindowUser);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 1231, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toSiteGestionBtn = new QPushButton(horizontalLayoutWidget);
        toSiteGestionBtn->setObjectName(QStringLiteral("toSiteGestionBtn"));

        horizontalLayout->addWidget(toSiteGestionBtn);

        toUserAdministrationBtn = new QPushButton(horizontalLayoutWidget);
        toUserAdministrationBtn->setObjectName(QStringLiteral("toUserAdministrationBtn"));

        horizontalLayout->addWidget(toUserAdministrationBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        logoutBtn = new QPushButton(horizontalLayoutWidget);
        logoutBtn->setObjectName(QStringLiteral("logoutBtn"));

        horizontalLayout->addWidget(logoutBtn);

        horizontalLayoutWidget_5 = new QWidget(MainwindowUser);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 589, 741, 71));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        addUserBtn = new QPushButton(horizontalLayoutWidget_5);
        addUserBtn->setObjectName(QStringLiteral("addUserBtn"));

        horizontalLayout_5->addWidget(addUserBtn);

        deleteUserBtn = new QPushButton(horizontalLayoutWidget_5);
        deleteUserBtn->setObjectName(QStringLiteral("deleteUserBtn"));

        horizontalLayout_5->addWidget(deleteUserBtn);

        exportToPdfBtn = new QPushButton(horizontalLayoutWidget_5);
        exportToPdfBtn->setObjectName(QStringLiteral("exportToPdfBtn"));

        horizontalLayout_5->addWidget(exportToPdfBtn);

        line_4 = new QFrame(MainwindowUser);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(770, 50, 451, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(MainwindowUser);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(780, 650, 441, 20));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_7 = new QWidget(MainwindowUser);
        horizontalLayoutWidget_7->setObjectName(QStringLiteral("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(289, 80, 451, 80));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        searchUserEdit = new QLineEdit(horizontalLayoutWidget_7);
        searchUserEdit->setObjectName(QStringLiteral("searchUserEdit"));

        horizontalLayout_7->addWidget(searchUserEdit);


        retranslateUi(MainwindowUser);

        QMetaObject::connectSlotsByName(MainwindowUser);
    } // setupUi

    void retranslateUi(QWidget *MainwindowUser)
    {
        MainwindowUser->setWindowTitle(QApplication::translate("MainwindowUser", "Form", Q_NULLPTR));
        pseudoLabel->setText(QApplication::translate("MainwindowUser", "Pseudo de l'utisateur :", Q_NULLPTR));
        passwdLabel->setText(QApplication::translate("MainwindowUser", "Mot de passe de l'utilisateur :", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainwindowUser", "DROIT D'ACCEES", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainwindowUser", "IDENTIFIANT", Q_NULLPTR));
        restoreBtn->setText(QApplication::translate("MainwindowUser", "R\303\251initialiser", Q_NULLPTR));
        modifUserBtn->setText(QApplication::translate("MainwindowUser", "Modifier", Q_NULLPTR));
        confirmAddUserBtn->setText(QApplication::translate("MainwindowUser", "Confirmer l'ajout", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainwindowUser", "Administrer les sites touristiques", Q_NULLPTR));
        adminSiteActivateBtn->setText(QApplication::translate("MainwindowUser", "Cliquer ici pour Activer", Q_NULLPTR));
        AjouterSite->setText(QApplication::translate("MainwindowUser", "Ajouter", Q_NULLPTR));
        ModifierSite->setText(QApplication::translate("MainwindowUser", "Modifier", Q_NULLPTR));
        SupprimerSite->setText(QApplication::translate("MainwindowUser", "Supprimer", Q_NULLPTR));
        VisualiserSite->setText(QApplication::translate("MainwindowUser", "Visualiser", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainwindowUser", "Administrer les utilisateurs", Q_NULLPTR));
        adminUserActivateBtn->setText(QApplication::translate("MainwindowUser", "Cliquer ici pour Activer", Q_NULLPTR));
        AjouterUser->setText(QApplication::translate("MainwindowUser", "Ajouter", Q_NULLPTR));
        ModifierUser->setText(QApplication::translate("MainwindowUser", "Modifier", Q_NULLPTR));
        SupprimerUser->setText(QApplication::translate("MainwindowUser", "Supprimer", Q_NULLPTR));
        VisualiserUser->setText(QApplication::translate("MainwindowUser", "Visualiser", Q_NULLPTR));
        toSiteGestionBtn->setText(QApplication::translate("MainwindowUser", "Administrer les sites", Q_NULLPTR));
        toUserAdministrationBtn->setText(QApplication::translate("MainwindowUser", "Administrer les utilisateurs", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainwindowUser", "Profile", Q_NULLPTR));
        logoutBtn->setText(QApplication::translate("MainwindowUser", "Deconnecter", Q_NULLPTR));
        addUserBtn->setText(QApplication::translate("MainwindowUser", "Ajouter", Q_NULLPTR));
        deleteUserBtn->setText(QApplication::translate("MainwindowUser", "Supprimer", Q_NULLPTR));
        exportToPdfBtn->setText(QApplication::translate("MainwindowUser", "Exporter en Pdf", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainwindowUser: public Ui_MainwindowUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWUSER_H
