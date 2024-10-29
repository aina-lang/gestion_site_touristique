/********************************************************************************
** Form generated from reading UI file 'mainwindowsite.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWSITE_H
#define UI_MAINWINDOWSITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mainwindowsite
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *ajoutVisiteBtn;
    QPushButton *addSiteBtn;
    QPushButton *updateSiteBtn;
    QPushButton *deleteSiteBtn;
    QPushButton *exportToPdfBtn;
    QFrame *frame_2;
    QLabel *label_2;
    QFrame *line_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *nomSiteLabel;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *lieuSiteLabel;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *tarifSiteLbl;
    QLabel *id_site_lbl;
    QFrame *frame_5;
    QWidget *horizontalLayoutWidget_16;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_21;
    QLabel *effectifTotalVisiteurlbl;
    QWidget *horizontalLayoutWidget_19;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_24;
    QLabel *label_25;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLabel *nb_totalVisiteurLbl;
    QWidget *horizontalLayoutWidget_18;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_8;
    QLabel *montantTotalLbl;
    QPushButton *voirPlusSiteBtn;
    QWidget *tab_2;
    QTableView *tableView_2;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *ajoutVisiteBtn_2;
    QPushButton *addVisiteurBtn;
    QPushButton *updateVisiteurBtn;
    QPushButton *deleteVisiteurBtn;
    QPushButton *exportToPdfBtn_2;
    QFrame *frame_3;
    QLabel *label_9;
    QFrame *line_4;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QLabel *nomVisiteurlbl;
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QLabel *adresseVisiteurlbl_2;
    QWidget *horizontalLayoutWidget_10;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLabel *provenancelbl;
    QWidget *horizontalLayoutWidget_11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QLabel *nbrTotalSiteVisitelbl;
    QLabel *label_15;
    QLabel *montantTotallbl;
    QLabel *id_label;
    QFrame *frame_4;
    QWidget *horizontalLayoutWidget_12;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_16;
    QLabel *effectifTotalVisiteurlbl_2;
    QWidget *horizontalLayoutWidget_13;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_17;
    QWidget *horizontalLayoutWidget_14;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_18;
    QWidget *horizontalLayoutWidget_15;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *voirPlusVisiteur;
    QWidget *tab_5;
    QTableView *tableView_3;
    QWidget *horizontalLayoutWidget_21;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *ajoutVisitePrincipalBtn;
    QPushButton *modifVisiteBtn;
    QPushButton *supprVisiteBtn;
    QPushButton *exportPdfVisiteBtn;
    QFrame *frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *toUserAdministrationBtn;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_20;
    QLabel *searchlbl;
    QLineEdit *searchEdit;
    QPushButton *pushButton;
    QPushButton *logoutBtn;

    void setupUi(QWidget *Mainwindowsite)
    {
        if (Mainwindowsite->objectName().isEmpty())
            Mainwindowsite->setObjectName(QStringLiteral("Mainwindowsite"));
        Mainwindowsite->resize(1250, 650);
        Mainwindowsite->setMinimumSize(QSize(1250, 650));
        Mainwindowsite->setMaximumSize(QSize(1250, 650));
        Mainwindowsite->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tabWidget = new QTabWidget(Mainwindowsite);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 90, 1231, 521));
        tabWidget->setStyleSheet(QLatin1String("border:none;\n"
"border-radius:0px 10px 10px 10px ;\n"
"background-color:#f1f7f0;\n"
"color:#515d5a;\n"
"selection-background-color: rgb(0, 212, 177);"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setUsesScrollButtons(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 10, 881, 421));
        tableView->setStyleSheet(QLatin1String("border-radius:10px;\n"
"background-color: rgb(255, 255, 255);"));
        tableView->setFrameShape(QFrame::Panel);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setShowGrid(true);
        tableView->setCornerButtonEnabled(true);
        tableView->horizontalHeader()->setDefaultSectionSize(250);
        tableView->horizontalHeader()->setMinimumSectionSize(20);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setDefaultSectionSize(40);
        tableView->verticalHeader()->setHighlightSections(false);
        tableView->verticalHeader()->setMinimumSectionSize(40);
        horizontalLayoutWidget_5 = new QWidget(tab);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 440, 891, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        ajoutVisiteBtn = new QPushButton(horizontalLayoutWidget_5);
        ajoutVisiteBtn->setObjectName(QStringLiteral("ajoutVisiteBtn"));
        ajoutVisiteBtn->setStyleSheet(QStringLiteral("padding:10px 5px;"));

        horizontalLayout_5->addWidget(ajoutVisiteBtn);

        addSiteBtn = new QPushButton(horizontalLayoutWidget_5);
        addSiteBtn->setObjectName(QStringLiteral("addSiteBtn"));
        addSiteBtn->setStyleSheet(QStringLiteral("padding:10px 5px;"));

        horizontalLayout_5->addWidget(addSiteBtn);

        updateSiteBtn = new QPushButton(horizontalLayoutWidget_5);
        updateSiteBtn->setObjectName(QStringLiteral("updateSiteBtn"));
        updateSiteBtn->setStyleSheet(QStringLiteral("padding:10px 5px;"));

        horizontalLayout_5->addWidget(updateSiteBtn);

        deleteSiteBtn = new QPushButton(horizontalLayoutWidget_5);
        deleteSiteBtn->setObjectName(QStringLiteral("deleteSiteBtn"));
        deleteSiteBtn->setStyleSheet(QStringLiteral("padding:10px 5px;"));

        horizontalLayout_5->addWidget(deleteSiteBtn);

        exportToPdfBtn = new QPushButton(horizontalLayoutWidget_5);
        exportToPdfBtn->setObjectName(QStringLiteral("exportToPdfBtn"));

        horizontalLayout_5->addWidget(exportToPdfBtn);

        frame_2 = new QFrame(tab);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(910, 10, 311, 251));
        frame_2->setStyleSheet(QLatin1String("background-color:#00A086;\n"
"color:#ffffff;\n"
"border:none;\n"
"border-radius:10px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 30, 66, 18));
        line_3 = new QFrame(frame_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(17, 50, 281, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_2 = new QWidget(frame_2);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 70, 281, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        nomSiteLabel = new QLabel(horizontalLayoutWidget_2);
        nomSiteLabel->setObjectName(QStringLiteral("nomSiteLabel"));

        horizontalLayout_2->addWidget(nomSiteLabel);

        horizontalLayoutWidget_3 = new QWidget(frame_2);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 130, 281, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lieuSiteLabel = new QLabel(horizontalLayoutWidget_3);
        lieuSiteLabel->setObjectName(QStringLiteral("lieuSiteLabel"));

        horizontalLayout_3->addWidget(lieuSiteLabel);

        horizontalLayoutWidget_4 = new QWidget(frame_2);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(20, 190, 281, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        tarifSiteLbl = new QLabel(horizontalLayoutWidget_4);
        tarifSiteLbl->setObjectName(QStringLiteral("tarifSiteLbl"));

        horizontalLayout_4->addWidget(tarifSiteLbl);

        id_site_lbl = new QLabel(frame_2);
        id_site_lbl->setObjectName(QStringLiteral("id_site_lbl"));
        id_site_lbl->setGeometry(QRect(20, 20, 21, 16));
        frame_5 = new QFrame(tab);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(910, 270, 311, 211));
        frame_5->setStyleSheet(QLatin1String("background-color:#00A086;\n"
"color:#ffffff;\n"
"border:none;\n"
"border-radius:10px;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget_16 = new QWidget(frame_5);
        horizontalLayoutWidget_16->setObjectName(QStringLiteral("horizontalLayoutWidget_16"));
        horizontalLayoutWidget_16->setGeometry(QRect(20, 60, 281, 41));
        horizontalLayout_16 = new QHBoxLayout(horizontalLayoutWidget_16);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(horizontalLayoutWidget_16);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_16->addWidget(label_21);

        effectifTotalVisiteurlbl = new QLabel(horizontalLayoutWidget_16);
        effectifTotalVisiteurlbl->setObjectName(QStringLiteral("effectifTotalVisiteurlbl"));

        horizontalLayout_16->addWidget(effectifTotalVisiteurlbl);

        horizontalLayoutWidget_19 = new QWidget(frame_5);
        horizontalLayoutWidget_19->setObjectName(QStringLiteral("horizontalLayoutWidget_19"));
        horizontalLayoutWidget_19->setGeometry(QRect(20, 250, 251, 41));
        horizontalLayout_19 = new QHBoxLayout(horizontalLayoutWidget_19);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(horizontalLayoutWidget_19);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_19->addWidget(label_24);

        label_25 = new QLabel(frame_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(20, 300, 249, 39));
        horizontalLayoutWidget_7 = new QWidget(frame_5);
        horizontalLayoutWidget_7->setObjectName(QStringLiteral("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(20, 10, 281, 41));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_7);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);

        nb_totalVisiteurLbl = new QLabel(horizontalLayoutWidget_7);
        nb_totalVisiteurLbl->setObjectName(QStringLiteral("nb_totalVisiteurLbl"));

        horizontalLayout_7->addWidget(nb_totalVisiteurLbl);

        horizontalLayoutWidget_18 = new QWidget(frame_5);
        horizontalLayoutWidget_18->setObjectName(QStringLiteral("horizontalLayoutWidget_18"));
        horizontalLayoutWidget_18->setGeometry(QRect(20, 110, 281, 41));
        horizontalLayout_18 = new QHBoxLayout(horizontalLayoutWidget_18);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(horizontalLayoutWidget_18);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_18->addWidget(label_8);

        montantTotalLbl = new QLabel(horizontalLayoutWidget_18);
        montantTotalLbl->setObjectName(QStringLiteral("montantTotalLbl"));

        horizontalLayout_18->addWidget(montantTotalLbl);

        voirPlusSiteBtn = new QPushButton(frame_5);
        voirPlusSiteBtn->setObjectName(QStringLiteral("voirPlusSiteBtn"));
        voirPlusSiteBtn->setGeometry(QRect(60, 160, 191, 31));
        voirPlusSiteBtn->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 160, 134);\n"
"border-radius:10px;"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(20, 10, 881, 421));
        tableView_2->setStyleSheet(QLatin1String("border:none;\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);"));
        tableView_2->setFrameShape(QFrame::Box);
        tableView_2->setFrameShadow(QFrame::Plain);
        tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_2->setShowGrid(true);
        tableView_2->setCornerButtonEnabled(true);
        tableView_2->horizontalHeader()->setDefaultSectionSize(250);
        tableView_2->horizontalHeader()->setMinimumSectionSize(20);
        tableView_2->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableView_2->horizontalHeader()->setStretchLastSection(true);
        tableView_2->verticalHeader()->setVisible(false);
        tableView_2->verticalHeader()->setDefaultSectionSize(40);
        tableView_2->verticalHeader()->setHighlightSections(false);
        tableView_2->verticalHeader()->setMinimumSectionSize(40);
        tableView_2->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableView_2->verticalHeader()->setStretchLastSection(false);
        horizontalLayoutWidget_6 = new QWidget(tab_2);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(10, 440, 891, 41));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        ajoutVisiteBtn_2 = new QPushButton(horizontalLayoutWidget_6);
        ajoutVisiteBtn_2->setObjectName(QStringLiteral("ajoutVisiteBtn_2"));
        ajoutVisiteBtn_2->setStyleSheet(QLatin1String("padding:10px 5px;\n"
""));

        horizontalLayout_6->addWidget(ajoutVisiteBtn_2);

        addVisiteurBtn = new QPushButton(horizontalLayoutWidget_6);
        addVisiteurBtn->setObjectName(QStringLiteral("addVisiteurBtn"));
        addVisiteurBtn->setStyleSheet(QStringLiteral("padding:10px 5px;"));

        horizontalLayout_6->addWidget(addVisiteurBtn);

        updateVisiteurBtn = new QPushButton(horizontalLayoutWidget_6);
        updateVisiteurBtn->setObjectName(QStringLiteral("updateVisiteurBtn"));
        updateVisiteurBtn->setStyleSheet(QStringLiteral("padding:10px 5px;"));

        horizontalLayout_6->addWidget(updateVisiteurBtn);

        deleteVisiteurBtn = new QPushButton(horizontalLayoutWidget_6);
        deleteVisiteurBtn->setObjectName(QStringLiteral("deleteVisiteurBtn"));
        deleteVisiteurBtn->setStyleSheet(QStringLiteral("padding:10px 5px;"));

        horizontalLayout_6->addWidget(deleteVisiteurBtn);

        exportToPdfBtn_2 = new QPushButton(horizontalLayoutWidget_6);
        exportToPdfBtn_2->setObjectName(QStringLiteral("exportToPdfBtn_2"));

        horizontalLayout_6->addWidget(exportToPdfBtn_2);

        frame_3 = new QFrame(tab_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(910, 10, 311, 361));
        frame_3->setStyleSheet(QLatin1String("background-color:#00A086;\n"
"color:#ffffff;\n"
"border:none;\n"
"border-radius:10px;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 30, 66, 18));
        line_4 = new QFrame(frame_3);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(17, 50, 281, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_8 = new QWidget(frame_3);
        horizontalLayoutWidget_8->setObjectName(QStringLiteral("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(20, 70, 281, 41));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(horizontalLayoutWidget_8);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_8->addWidget(label_10);

        nomVisiteurlbl = new QLabel(horizontalLayoutWidget_8);
        nomVisiteurlbl->setObjectName(QStringLiteral("nomVisiteurlbl"));

        horizontalLayout_8->addWidget(nomVisiteurlbl);

        horizontalLayoutWidget_9 = new QWidget(frame_3);
        horizontalLayoutWidget_9->setObjectName(QStringLiteral("horizontalLayoutWidget_9"));
        horizontalLayoutWidget_9->setGeometry(QRect(20, 130, 281, 41));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(horizontalLayoutWidget_9);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_9->addWidget(label_11);

        adresseVisiteurlbl_2 = new QLabel(horizontalLayoutWidget_9);
        adresseVisiteurlbl_2->setObjectName(QStringLiteral("adresseVisiteurlbl_2"));

        horizontalLayout_9->addWidget(adresseVisiteurlbl_2);

        horizontalLayoutWidget_10 = new QWidget(frame_3);
        horizontalLayoutWidget_10->setObjectName(QStringLiteral("horizontalLayoutWidget_10"));
        horizontalLayoutWidget_10->setGeometry(QRect(20, 190, 281, 41));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_10);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(horizontalLayoutWidget_10);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_10->addWidget(label_12);

        provenancelbl = new QLabel(horizontalLayoutWidget_10);
        provenancelbl->setObjectName(QStringLiteral("provenancelbl"));

        horizontalLayout_10->addWidget(provenancelbl);

        horizontalLayoutWidget_11 = new QWidget(frame_3);
        horizontalLayoutWidget_11->setObjectName(QStringLiteral("horizontalLayoutWidget_11"));
        horizontalLayoutWidget_11->setGeometry(QRect(20, 250, 281, 41));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(horizontalLayoutWidget_11);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_11->addWidget(label_13);

        nbrTotalSiteVisitelbl = new QLabel(horizontalLayoutWidget_11);
        nbrTotalSiteVisitelbl->setObjectName(QStringLiteral("nbrTotalSiteVisitelbl"));

        horizontalLayout_11->addWidget(nbrTotalSiteVisitelbl);

        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 300, 249, 39));
        montantTotallbl = new QLabel(frame_3);
        montantTotallbl->setObjectName(QStringLiteral("montantTotallbl"));
        montantTotallbl->setGeometry(QRect(100, 310, 47, 21));
        id_label = new QLabel(frame_3);
        id_label->setObjectName(QStringLiteral("id_label"));
        id_label->setGeometry(QRect(30, 20, 47, 13));
        frame_4 = new QFrame(tab_2);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(910, 380, 311, 101));
        frame_4->setStyleSheet(QLatin1String("background-color:#00A086;\n"
"color:#ffffff;\n"
"border:none;\n"
"border-radius:10px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget_12 = new QWidget(frame_4);
        horizontalLayoutWidget_12->setObjectName(QStringLiteral("horizontalLayoutWidget_12"));
        horizontalLayoutWidget_12->setGeometry(QRect(20, 10, 281, 41));
        horizontalLayout_12 = new QHBoxLayout(horizontalLayoutWidget_12);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(horizontalLayoutWidget_12);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_12->addWidget(label_16);

        effectifTotalVisiteurlbl_2 = new QLabel(horizontalLayoutWidget_12);
        effectifTotalVisiteurlbl_2->setObjectName(QStringLiteral("effectifTotalVisiteurlbl_2"));

        horizontalLayout_12->addWidget(effectifTotalVisiteurlbl_2);

        horizontalLayoutWidget_13 = new QWidget(frame_4);
        horizontalLayoutWidget_13->setObjectName(QStringLiteral("horizontalLayoutWidget_13"));
        horizontalLayoutWidget_13->setGeometry(QRect(20, 130, 251, 41));
        horizontalLayout_13 = new QHBoxLayout(horizontalLayoutWidget_13);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(horizontalLayoutWidget_13);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_13->addWidget(label_17);

        horizontalLayoutWidget_14 = new QWidget(frame_4);
        horizontalLayoutWidget_14->setObjectName(QStringLiteral("horizontalLayoutWidget_14"));
        horizontalLayoutWidget_14->setGeometry(QRect(20, 190, 251, 41));
        horizontalLayout_14 = new QHBoxLayout(horizontalLayoutWidget_14);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(horizontalLayoutWidget_14);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_14->addWidget(label_18);

        horizontalLayoutWidget_15 = new QWidget(frame_4);
        horizontalLayoutWidget_15->setObjectName(QStringLiteral("horizontalLayoutWidget_15"));
        horizontalLayoutWidget_15->setGeometry(QRect(20, 250, 251, 41));
        horizontalLayout_15 = new QHBoxLayout(horizontalLayoutWidget_15);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(horizontalLayoutWidget_15);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_15->addWidget(label_19);

        label_20 = new QLabel(frame_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(20, 300, 249, 39));
        voirPlusVisiteur = new QPushButton(frame_4);
        voirPlusVisiteur->setObjectName(QStringLiteral("voirPlusVisiteur"));
        voirPlusVisiteur->setGeometry(QRect(80, 60, 161, 31));
        voirPlusVisiteur->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 160, 134);\n"
"border-radius:10px;"));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tableView_3 = new QTableView(tab_5);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(20, 10, 791, 421));
        tableView_3->setStyleSheet(QLatin1String("\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);"));
        tableView_3->setFrameShape(QFrame::Box);
        tableView_3->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_3->setShowGrid(true);
        tableView_3->setCornerButtonEnabled(true);
        tableView_3->horizontalHeader()->setDefaultSectionSize(250);
        tableView_3->horizontalHeader()->setHighlightSections(false);
        tableView_3->horizontalHeader()->setMinimumSectionSize(20);
        tableView_3->verticalHeader()->setVisible(false);
        tableView_3->verticalHeader()->setDefaultSectionSize(40);
        tableView_3->verticalHeader()->setMinimumSectionSize(40);
        horizontalLayoutWidget_21 = new QWidget(tab_5);
        horizontalLayoutWidget_21->setObjectName(QStringLiteral("horizontalLayoutWidget_21"));
        horizontalLayoutWidget_21->setGeometry(QRect(10, 440, 801, 41));
        horizontalLayout_21 = new QHBoxLayout(horizontalLayoutWidget_21);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        ajoutVisitePrincipalBtn = new QPushButton(horizontalLayoutWidget_21);
        ajoutVisitePrincipalBtn->setObjectName(QStringLiteral("ajoutVisitePrincipalBtn"));
        ajoutVisitePrincipalBtn->setStyleSheet(QStringLiteral("padding:10px 5px;"));

        horizontalLayout_21->addWidget(ajoutVisitePrincipalBtn);

        modifVisiteBtn = new QPushButton(horizontalLayoutWidget_21);
        modifVisiteBtn->setObjectName(QStringLiteral("modifVisiteBtn"));
        modifVisiteBtn->setStyleSheet(QStringLiteral("padding:10px 5px;"));

        horizontalLayout_21->addWidget(modifVisiteBtn);

        supprVisiteBtn = new QPushButton(horizontalLayoutWidget_21);
        supprVisiteBtn->setObjectName(QStringLiteral("supprVisiteBtn"));
        supprVisiteBtn->setStyleSheet(QStringLiteral("padding:10px 5px;"));

        horizontalLayout_21->addWidget(supprVisiteBtn);

        exportPdfVisiteBtn = new QPushButton(horizontalLayoutWidget_21);
        exportPdfVisiteBtn->setObjectName(QStringLiteral("exportPdfVisiteBtn"));
        exportPdfVisiteBtn->setStyleSheet(QLatin1String("background-color: rgb(226, 226, 226);\n"
"           color: #ffffff;\n"
"               border:none;\n"
"                border-radius:10px;\n"
"                min-width:130px;\n"
"               padding:10px 5px;"));

        horizontalLayout_21->addWidget(exportPdfVisiteBtn);

        frame = new QFrame(tab_5);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(819, 9, 401, 471));
        frame->setStyleSheet(QLatin1String("border:none;\n"
"border-radius:10px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tabWidget->addTab(tab_5, QString());
        horizontalLayoutWidget = new QWidget(Mainwindowsite);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 1231, 54));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toUserAdministrationBtn = new QPushButton(horizontalLayoutWidget);
        toUserAdministrationBtn->setObjectName(QStringLiteral("toUserAdministrationBtn"));
        toUserAdministrationBtn->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 160, 134);"));

        horizontalLayout->addWidget(toUserAdministrationBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        searchlbl = new QLabel(horizontalLayoutWidget);
        searchlbl->setObjectName(QStringLiteral("searchlbl"));
        searchlbl->setMinimumSize(QSize(30, 30));
        searchlbl->setMaximumSize(QSize(30, 30));
        searchlbl->setStyleSheet(QLatin1String("\n"
"color: #00A086;"));
        searchlbl->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons8-google-web-search-50.png")));
        searchlbl->setScaledContents(true);

        horizontalLayout_20->addWidget(searchlbl);

        searchEdit = new QLineEdit(horizontalLayoutWidget);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));
        searchEdit->setStyleSheet(QLatin1String(" border-top:none;\n"
"                  border-left:none;\n"
"                  border-right:none;\n"
"                  border-bottom:1.5px solid #00A086;\n"
"  \n"
"                  padding-bottom:5px;\n"
"                  min-height:24px;\n"
"color:#116D5C;"));

        horizontalLayout_20->addWidget(searchEdit);


        horizontalLayout->addLayout(horizontalLayout_20);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("background-color: #00a086;\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton);

        logoutBtn = new QPushButton(horizontalLayoutWidget);
        logoutBtn->setObjectName(QStringLiteral("logoutBtn"));
        logoutBtn->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color:#00a086;"));

        horizontalLayout->addWidget(logoutBtn);


        retranslateUi(Mainwindowsite);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Mainwindowsite);
    } // setupUi

    void retranslateUi(QWidget *Mainwindowsite)
    {
        Mainwindowsite->setWindowTitle(QApplication::translate("Mainwindowsite", "Form", Q_NULLPTR));
        ajoutVisiteBtn->setText(QApplication::translate("Mainwindowsite", "Ajouter une visite", Q_NULLPTR));
        addSiteBtn->setText(QApplication::translate("Mainwindowsite", "Ajouter", Q_NULLPTR));
        updateSiteBtn->setText(QApplication::translate("Mainwindowsite", "Modifier", Q_NULLPTR));
        deleteSiteBtn->setText(QApplication::translate("Mainwindowsite", "Supprimer", Q_NULLPTR));
        exportToPdfBtn->setText(QApplication::translate("Mainwindowsite", "Exporter en Pdf", Q_NULLPTR));
        label_2->setText(QApplication::translate("Mainwindowsite", "Rapport", Q_NULLPTR));
        label_3->setText(QApplication::translate("Mainwindowsite", "Nom du site :", Q_NULLPTR));
        nomSiteLabel->setText(QString());
        label_4->setText(QApplication::translate("Mainwindowsite", "Lieu du site :", Q_NULLPTR));
        lieuSiteLabel->setText(QString());
        label_5->setText(QApplication::translate("Mainwindowsite", "Tarif journalier :", Q_NULLPTR));
        tarifSiteLbl->setText(QString());
        id_site_lbl->setText(QString());
        label_21->setText(QApplication::translate("Mainwindowsite", "Effectif total des visiteurs :", Q_NULLPTR));
        effectifTotalVisiteurlbl->setText(QString());
        label_24->setText(QApplication::translate("Mainwindowsite", "Nombre total des sites visit\303\251es:", Q_NULLPTR));
        label_25->setText(QApplication::translate("Mainwindowsite", "Montant total :", Q_NULLPTR));
        label_6->setText(QApplication::translate("Mainwindowsite", "Nombre total des visites :", Q_NULLPTR));
        nb_totalVisiteurLbl->setText(QString());
        label_8->setText(QApplication::translate("Mainwindowsite", "Montant total :", Q_NULLPTR));
        montantTotalLbl->setText(QString());
        voirPlusSiteBtn->setText(QApplication::translate("Mainwindowsite", "Voir Plus d'information sur cette site", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Mainwindowsite", "Les sites touristiques ", Q_NULLPTR));
        ajoutVisiteBtn_2->setText(QApplication::translate("Mainwindowsite", "Ajouter une visite", Q_NULLPTR));
        addVisiteurBtn->setText(QApplication::translate("Mainwindowsite", "Ajouter", Q_NULLPTR));
        updateVisiteurBtn->setText(QApplication::translate("Mainwindowsite", "Modifier", Q_NULLPTR));
        deleteVisiteurBtn->setText(QApplication::translate("Mainwindowsite", "Supprimer", Q_NULLPTR));
        exportToPdfBtn_2->setText(QApplication::translate("Mainwindowsite", "Exporter en Pdf", Q_NULLPTR));
        label_9->setText(QApplication::translate("Mainwindowsite", "Rapport", Q_NULLPTR));
        label_10->setText(QApplication::translate("Mainwindowsite", "Nom du visiteur :", Q_NULLPTR));
        nomVisiteurlbl->setText(QString());
        label_11->setText(QApplication::translate("Mainwindowsite", "Adresse du visiteur :", Q_NULLPTR));
        adresseVisiteurlbl_2->setText(QString());
        label_12->setText(QApplication::translate("Mainwindowsite", "Provenance :", Q_NULLPTR));
        provenancelbl->setText(QString());
        label_13->setText(QApplication::translate("Mainwindowsite", "Nombre total des sites visit\303\251es:", Q_NULLPTR));
        nbrTotalSiteVisitelbl->setText(QString());
        label_15->setText(QApplication::translate("Mainwindowsite", "Montant total :", Q_NULLPTR));
        montantTotallbl->setText(QString());
        id_label->setText(QString());
        label_16->setText(QApplication::translate("Mainwindowsite", "Effectif total des visiteurs :", Q_NULLPTR));
        effectifTotalVisiteurlbl_2->setText(QString());
        label_17->setText(QApplication::translate("Mainwindowsite", "Adresse du visiteur :", Q_NULLPTR));
        label_18->setText(QApplication::translate("Mainwindowsite", "Provenance :", Q_NULLPTR));
        label_19->setText(QApplication::translate("Mainwindowsite", "Nombre total des sites visit\303\251es:", Q_NULLPTR));
        label_20->setText(QApplication::translate("Mainwindowsite", "Montant total :", Q_NULLPTR));
        voirPlusVisiteur->setText(QApplication::translate("Mainwindowsite", "Voir plus", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Mainwindowsite", "les visiteurs de chaques sites", Q_NULLPTR));
        ajoutVisitePrincipalBtn->setText(QApplication::translate("Mainwindowsite", "Ajouter une visite", Q_NULLPTR));
        modifVisiteBtn->setText(QApplication::translate("Mainwindowsite", "Modifier", Q_NULLPTR));
        supprVisiteBtn->setText(QApplication::translate("Mainwindowsite", "Supprimer", Q_NULLPTR));
        exportPdfVisiteBtn->setText(QApplication::translate("Mainwindowsite", "Exporter en pdf", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Mainwindowsite", "Les  visites", Q_NULLPTR));
        toUserAdministrationBtn->setText(QApplication::translate("Mainwindowsite", "Administrer les utilisateurs", Q_NULLPTR));
        searchlbl->setText(QString());
        pushButton->setText(QApplication::translate("Mainwindowsite", "Profile", Q_NULLPTR));
        logoutBtn->setText(QApplication::translate("Mainwindowsite", "Deconnecter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Mainwindowsite: public Ui_Mainwindowsite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWSITE_H
