#include "addvisiteurbox.h"
#include "ui_addvisiteurbox.h"
#include "connection.h"
#include "qdebug.h"
addVisiteurBox::addVisiteurBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addVisiteurBox)
{
    ui->setupUi(this);
      ui->confirmAddVisiteurBtn->setDisabled(true);
}

addVisiteurBox::~addVisiteurBox()
{
    delete ui;
}



void addVisiteurBox::on_confirmAddVisiteurBtn_clicked()
{
    QString  nom_visiteur=ui->nomVisiteurEdit->text();
    QString  addresse=ui->addresseEdit->text();
    QString  provenance=ui->provenance->text();

    Connection conn;
    if (!conn.connOpen()){
        qDebug() <<"Echec d'ouverture de base donnée";
        return ;
    }
    conn.connOpen();
    QSqlQuery query;
    if(nom_visiteur.isEmpty() || addresse.isEmpty() ||provenance.isEmpty()){
        ui->confirmAddVisiteurBtn->setDisabled(true);
   }else{
            query.prepare("INSERT INTO visiteur(nom_visiteur,addresse,provenance) VALUES(:nom_visiteur,:addresse,:provenance);");
            query.bindValue(":nom_visiteur", nom_visiteur);
            query.bindValue(":addresse", addresse);
            query.bindValue(":provenance",provenance);
            qDebug()<<query.exec();
            conn.connClose();
            this->close();
        }

    }

void addVisiteurBox::on_nomVisiteurEdit_textChanged(const QString &arg1)
{
    if(arg1 == ""){
           ui->messageNomVisiteur->setText("ce champ ne doit pas être vide");
           ui->confirmAddVisiteurBtn->setDisabled(true);
    }else if(arg1.contains(QRegularExpression("^[^a-zA-Z]+"))){
        ui->confirmAddVisiteurBtn->setDisabled(true);
        ui->messageNomVisiteur->setText("En commencant par des lettres s'il vous plait");
    }else if(arg1.contains(QRegularExpression("[^\\w\\s]+$"))){
        ui->messageNomVisiteur->setText("ne doit pas etre contenir des caracteres speciaux");
        ui->confirmAddVisiteurBtn->setDisabled(true);
    }else{
        ui->messageNomVisiteur->setText(" ");
          ui->confirmAddVisiteurBtn->setDisabled(false);
    }
}

void addVisiteurBox::on_addresseEdit_textChanged(const QString &arg1)
{
    if(arg1 == ""){
         ui->MsgAddresse->setText("ce champ ne doit pas être vide");
         ui->confirmAddVisiteurBtn->setDisabled(true);
    }else if(arg1.contains(QRegularExpression("^[^a-zA-Z]+"))){
        ui->MsgAddresse->setText("En commencant par des lettres s'il vous plait");
        ui->confirmAddVisiteurBtn->setDisabled(true);
    }else if(arg1.contains(QRegularExpression("[^\\w\\s]+$"))){
        ui->MsgAddresse->setText("ne doit pas etre contenir des caracteres speciaux");
        ui->confirmAddVisiteurBtn->setDisabled(true);
    }else{
        ui->MsgAddresse->setText(" ");
          ui->confirmAddVisiteurBtn->setDisabled(false);
    }
}

void addVisiteurBox::on_provenance_textChanged(const QString &arg1)
{
    if(arg1 == ""){
           ui->MsgProvenance->setText("ce champ ne doit pas être vide");
           ui->confirmAddVisiteurBtn->setDisabled(true);
    }else if(arg1.contains(QRegularExpression("^[^a-zA-Z]+"))){
        ui->MsgProvenance->setText("En commencant par des lettres s'il vous plait");
        ui->confirmAddVisiteurBtn->setDisabled(true);
    }else if(arg1.contains(QRegularExpression("[^\\w\\s]+$"))){
        ui->MsgProvenance->setText("ne doit pas etre contenir des caracteres speciaux");
        ui->confirmAddVisiteurBtn->setDisabled(true);
    }else{
        ui->MsgProvenance->setText(" ");
          ui->confirmAddVisiteurBtn->setDisabled(false);
    }
}
