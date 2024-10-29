#include "addsitebox.h"
#include "connection.h"
#include "ui_addsitebox.h"

addSiteBox::addSiteBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addSiteBox)
{
    ui->setupUi(this);
    ui->confirmAddSiteBtn->setDisabled(true);
}

addSiteBox::~addSiteBox()
{
    delete ui;
}


void addSiteBox::on_confirmAddSiteBtn_clicked()
{

    QString  nom_site=ui->nomSiteEdit->text();
    QString  lieu_site=ui->lieuSiteEdit->text();
    QString  tarif_site=ui->tarifSiteEdit->text();

    if(nom_site.isEmpty() || lieu_site.isEmpty() || tarif_site.isEmpty()){
          ui->confirmAddSiteBtn->setDisabled(true);
   }else{

        Connection conn;
        if (!conn.connOpen()){
            qDebug() <<"Echec d'ouverture de base donnée";
            return ;
        }
        conn.connOpen();
        QSqlQuery query;
            query.prepare("INSERT INTO site(nom_site,lieu_site,tarif_journalier) VALUES(:nom_site,:lieu_site,:tarif_journalier);");
            query.bindValue(":nom_site", nom_site);
            query.bindValue(":lieu_site", lieu_site);
            query.bindValue(":tarif_journalier",tarif_site);
            qDebug()<<query.exec();
            conn.connClose();
            this->close();
        }
  }

void addSiteBox::on_nomSiteEdit_textChanged(const QString &arg1)
{
    if(arg1 == ""){
         ui->messageNom->setText("ce champ ne doit pas être vide");
         ui->confirmAddSiteBtn->setDisabled(true);
    }else if(arg1.contains(QRegularExpression("^[^a-zA-Z]+"))){
        ui->messageNom->setText("En commencant par des lettres s'il vous plait");
          ui->confirmAddSiteBtn->setDisabled(true);
    }else if(arg1.contains(QRegularExpression("[^\\w\\s]+$"))){
        ui->messageNom->setText("ne doit pas etre contenir des caracteres speciaux");
          ui->confirmAddSiteBtn->setDisabled(true);
    }else{
        ui->messageNom->setText(" ");
        ui->confirmAddSiteBtn->setDisabled(false);
    }

}

void addSiteBox::on_lieuSiteEdit_textChanged(const QString &arg1)
{
    if(arg1 == ""){
           ui->messageLieu->setText("ce champ ne doit pas être vide");
             ui->confirmAddSiteBtn->setDisabled(true);
    }else if(arg1.contains(QRegularExpression("^[^a-zA-Z]+"))){
        ui->messageLieu->setText("En commencant par des lettres s'il vous plait");
          ui->confirmAddSiteBtn->setDisabled(true);
    }else if(arg1.contains(QRegularExpression("[^\\w\\s]+$"))){
        ui->messageLieu->setText("ne doit pas etre contenir des caracteres speciaux");
          ui->confirmAddSiteBtn->setDisabled(true);
    }else{
        ui->messageLieu->setText(" ");
         ui->confirmAddSiteBtn->setDisabled(false);
    }
}

void addSiteBox::on_tarifSiteEdit_textChanged(const QString &arg1)
{
    QRegularExpression regex("^\\d+(,\\d+)?$");
    if(arg1 == ""){
           ui->messagetarif->setText("ce champ ne doit pas être vide");
             ui->confirmAddSiteBtn->setDisabled(true);
       }else if(!arg1.contains(regex)){
        ui->messagetarif->setText("ce champ doit etre contenir uniquement que des nombres");
          ui->confirmAddSiteBtn->setDisabled(true);
    }else{
        ui->messagetarif->setText(" ");
         ui->confirmAddSiteBtn->setDisabled(false);
    }
}

void addSiteBox::on_Reset_clicked()
{

}
