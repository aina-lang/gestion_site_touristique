#include "voirplusvisiteur.h"
#include "ui_voirplusvisiteur.h"
#include "connection.h"

voirPlusVisiteur::voirPlusVisiteur(QString nomVisiteur,QString id_visiteur, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::voirPlusVisiteur)
{
    ui->setupUi(this);
    this->id_visiteur = id_visiteur;
    this->nomVisiteur = nomVisiteur;
    setWindowTitle("A propos de "+nomVisiteur);
    reloadList();
}
void voirPlusVisiteur::getInfoVisiteur(QString id, QString nom, QString adresse, QString Provenance, QString nb_site, QString effectif_visiteur){
    ui->id_label->setText(id);
    ui->id_label->hide();
    ui->nomVisiteurlbl->setText(nom);
    ui->adresselbl->setText(adresse);
    ui->provenancelbl->setText(Provenance);
    ui->nbsitelbl->setText(nb_site);
    ui->effectVisiteurlbl->setText(effectif_visiteur);
}
QString voirPlusVisiteur::getNomVisiteur(QString nom){
    return nom;
}

voirPlusVisiteur::~voirPlusVisiteur()
{
    delete ui;
}
void voirPlusVisiteur::reloadList(){
    Connection conn;
    conn.connOpen();
    QSqlQueryModel *model2 = new QSqlQueryModel();
       QString sql2;
       sql2 = "SELECT DISTINCT site.nom_site FROM site,visiteur INNER JOIN visite ON site.id_site=visite.id_site AND visiteur.id_visiteur=visite.id_visiteur AND visiteur.id_visiteur='"+id_visiteur+"';";
       QSqlQuery* q = new QSqlQuery(conn.mydb);
       q->prepare(sql2);
       if(!q->exec()){
           qDebug () << "Query Erorr: " << q->lastError();
       }else{
           qDebug () << "Query Successful: " << q->lastQuery();
       }
       model2->setQuery(*q);
       ui->listView->setModel(model2);
}
