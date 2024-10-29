#include "modifboxvisite.h"
#include "ui_modifboxvisite.h"
#include "connection.h"
#include "qtableview.h"
#include <QSqlError>
#include <QDateTime>
#include <QtSql>

modifBoxVisite::modifBoxVisite(QString date_visite,QString id_visite,QString id_site,QString id_visiteur,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifBoxVisite)
{
    ui->setupUi(this);
    this->date_visite=date_visite;
    ui->confirmUpdatevisiteBtn->setDisabled(true);
    QString date = QDateTime::currentDateTime().toString("dd/MM/yyyy");
    ui->dateVisiteEdit->setText(date);
    Connection conn;
    conn.connOpen();
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQueryModel *model2 = new QSqlQueryModel();
    QSqlQuery *q = new QSqlQuery(conn.mydb);
    QString sql;
     sql = "SELECT id_visiteur FROM visiteur;";
    q->prepare(sql);
    q->exec();
    while(q->next()){
        list_id_visiteur.append(q->value(0).toString());
        qDebug()<<list_id_visiteur;
    }

    sql = "SELECT id_site FROM site;";
    q->prepare(sql);
    q->exec();
    while(q->next()){
        list_id_site.append(q->value(0).toString());
        qDebug()<<list_id_site;
    }

    sql = "SELECT nom_visiteur FROM visiteur;";
    q->prepare(sql);
    q->exec();
    model->setQuery(*q);
    ui->comboBox->setModel(model);

    sql = "SELECT * FROM visiteur";
    q->prepare(sql);
    q->exec();
//    ui->comboBox->setCurrentText(q->value(0).toString());


    while (q->next()) {

       if (q->value(0).toString() == id_visiteur) {
           qDebug()<<q->value(0).toString() ;
            ui->comboBox->setCurrentText(q->value(1).toString());
          break;
       }
    }





    sql = "SELECT nom_site FROM site;";
    q->prepare(sql);
    q->exec();
    model2->setQuery(*q);
    ui->comboBox_2->setModel(model2);

    sql = "SELECT * FROM site;";
    q->prepare(sql);
    q->exec();
    while (q->next()) {
       if (q->value(0).toString() == id_site) {
           ui->comboBox_2->setCurrentText(q->value(1).toString());
          break;
       }
    }





}

void modifBoxVisite::getNbj(QString nbj){
    ui->nbjrEdit->setText(nbj);
}

modifBoxVisite::~modifBoxVisite()
{
    delete ui;
}



void modifBoxVisite::on_confirmUpdatevisiteBtn_clicked()
{
    Connection conn;
    conn.connOpen();

    QString nbj = ui->nbjrEdit->text();
    if(nbj.isEmpty() ){
   }else{
    if(!nbj.contains(QRegularExpression("[0_9]")) ){
        ui->msgNbj->setText("ce champ ne doit contenir que des chiffres");
    }
    else{
        qDebug()<<this->id_site;
        qDebug()<<this->id_visiteur;


        QSqlQuery *q = new QSqlQuery(conn.mydb);
//        QString s="SELECT * FROM site,visiteur INNER JOIN visite ON visiteur.id_visiteur = visite.id_visiteur AND site.id_site = visite.id_site";
        q->prepare("UPDATE visite SET id_visiteur = ?,id_site =?, nb_jours=? WHERE date_visite='"+date_visite+"';");
        q->addBindValue(this->id_visiteur);
        q->addBindValue(this->id_site);
        q->addBindValue(nbj);
//        q.addBindValue(nbj);
//        q.addBindValue(date);
       qDebug()<<q->exec();
       qDebug()<<q->lastError();

        this->close();
    }
    conn.connClose();
    }
}


void modifBoxVisite::on_comboBox_2_activated(int index)
{
    this->id_site=list_id_site[index];
    qDebug()<<id_site;

}


void modifBoxVisite::on_comboBox_activated(int index)
{

    this->id_visiteur=list_id_visiteur[index];
    qDebug()<<"CECEI EST LE VISITEUR "+list_id_visiteur[index];
}

void modifBoxVisite::on_comboBox_currentIndexChanged(int index)
{
    this->id_visiteur=list_id_visiteur[index];
    qDebug()<<"CECEI EST LE VISITEUR "+list_id_visiteur[index];
}

void modifBoxVisite::on_comboBox_2_currentIndexChanged(int index)
{
    this->id_site=list_id_site[index];
    qDebug()<<id_site;
}

void modifBoxVisite::on_nbjrEdit_textChanged(const QString &arg1)
{
    QRegularExpression regex("^\\d+$");
    if(!arg1.contains(regex)){
        ui->msgNbj->setText("ce champ doit etre uniquement contenir par des chiffres");
        ui->confirmUpdatevisiteBtn->setDisabled(true);
    }else if(arg1 == ""){
        ui->msgNbj->setText("ce champ ne doit pas être vide");
        ui->confirmUpdatevisiteBtn->setDisabled(true);
    }else{
        ui->msgNbj->setText(" ");
        ui->confirmUpdatevisiteBtn->setDisabled(false);
    }
}
