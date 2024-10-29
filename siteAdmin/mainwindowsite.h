#ifndef MAINWINDOWSITE_H
#define MAINWINDOWSITE_H

#include "qsqlquerymodel.h"
#include "qtableview.h"
#include "siteAdmin/addsitebox.h"
#include "stylesheet.h"
#include "userAdmin/confirmbox.h"
#include "userAdmin/showprofile.h"
#include <QWidget>
#include "stylesheet.h"

namespace Ui {
class Mainwindowsite;
}

class Mainwindowsite : public  QWidget
{
    Q_OBJECT

public:
    explicit Mainwindowsite(QString id, QWidget *parent = nullptr);

    void reloadData(QTableView *table);
    void reloadDataVisiteur(QTableView *table);
    void reloadDataVisite(QTableView *table);
    void setIdLogged(QString id);
    void setWidget();
    stylesheet css;
    int index_tab;
    int index_site;
    int index_visiteur;
    int index_visite;
    QString id_site_visite;
    QString id_visite;
    QString nbj_visite;
    QString nom_visiteur_visite;
    QString site_visiteur_visite;
    QString date_visite;
    QString id_user;
    QString id_site;
    QString nom_site;
    QString lieu_site;
    QString tarif_site;
    QString id_visiteur;
    QString nom_visiteur;
    QString adresse_visiteur;
    QString provenance;
    QString tabnames;
    QString nomTable_site;
    QString id_site_search;
    QString nom_site_search;
    QString nomTable_visiteur;
    QString id_visiteur_search;
    QString nom_visiteur_search;
    QString current_text_site_search;
    QString current_text_visiteur_search;
    QSqlQueryModel * model;
    confirmBox * confirmbox=new confirmBox(this);
    showProfile *showprofile=new showProfile(this);
    addSiteBox *addsitebox=new  addSiteBox(this);
    QString id_user_logged;
    ~Mainwindowsite();

private slots:
    void on_addUserBtn_clicked();

    void on_updateUserBtn_clicked();

    void on_deleteUserBtn_clicked();

    void on_exportToPdfBtn_clicked();

    void on_logoutBtn_clicked();

    void on_pushButton_clicked();

    void on_toUserAdministrationBtn_clicked();

    void tabWidget_tabBarClicked(int index);

    void on_addSiteBtn_clicked();

    void on_addVisiteurBtn_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_ajoutVisiteBtn_clicked();


    void on_tableView_2_clicked(const QModelIndex &index);

    void on_voirPlusVisiteur_clicked();

    void on_searchEdit_textChanged(const QString &arg1);

    void on_updateSiteBtn_clicked();

    void on_deleteSiteBtn_clicked();


    void on_updateVisiteurBtn_clicked();
    
    void on_deleteVisiteurBtn_clicked();

    void on_ajoutVisiteBtn_2_clicked();

    void on_ajoutVisitePrincipalBtn_clicked();

    void on_tableView_3_clicked(const QModelIndex &index);

    void on_modifVisiteBtn_clicked();

    void on_supprVisiteBtn_clicked();

    void on_voirPlusSiteBtn_clicked();

private:
    Ui::Mainwindowsite *ui;
};

#endif // MAINWINDOWSITE_H
