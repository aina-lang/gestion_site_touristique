#include "voirplussite.h"
#include "ui_voirplussite.h"
#include "connection.h"
voirPlusSite::voirPlusSite(QString id_site,QString nom_site,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::voirPlusSite)
{
    ui->setupUi(this);
    this->id_site = id_site;
    this->nom_site = nom_site;
    this->setWindowTitle("A propos du site "+this->nom_site);
    reloadListSite();
}

void voirPlusSite::getInfoSite(QString id, QString nomSite, QString lieu, QString tarif, QString nbT_visites, QString effects, QString montant){
    ui->nomSiteLbl->setText("Nom du site : "+nomSite);
    ui->lieuLbl->setText("Lieu : "+lieu);
    ui->tarifLbl->setText("Tarif journalier  : "+tarif);
    ui->nbrTotalVisLbl->setText("Nombre total des visites : "+nbT_visites);
    ui->effectVisLbl->setText("Effectif total des visiteurs : "+effects);
    ui->montantLbl->setText("Montant total : "+montant);
}

voirPlusSite::~voirPlusSite()
{
    delete ui;
}
void voirPlusSite::reloadListSite(){
    Connection conn;
    conn.connOpen();
    QSqlQueryModel *model = new QSqlQueryModel();
       QString sql;
       qDebug()<<this->id_site;
       sql = "SELECT DISTINCT visiteur.nom_visiteur FROM site,visiteur INNER JOIN visite ON site.id_site=visite.id_site AND visiteur.id_visiteur=visite.id_visiteur AND site.id_site='"+id_site+"';";
       QSqlQuery* q = new QSqlQuery(conn.mydb);
       q->prepare(sql);
       if(!q->exec()){
           qDebug () << "Query Erorr: " << q->lastError();
       }else{
           qDebug () << "Query Successful: " << q->lastQuery();
       }
       model->setQuery(*q);
       ui->listView->setModel(model);
}
