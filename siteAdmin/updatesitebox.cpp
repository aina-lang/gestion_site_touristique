#include "updatesitebox.h"
#include "ui_updatesitebox.h"
#include "connection.h"
#include <QMessageBox>

updateSiteBox::updateSiteBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updateSiteBox)
{
    ui->setupUi(this);
     ui->confirmAddSiteBtn->setDisabled(true);
}

updateSiteBox::~updateSiteBox()
{
    delete ui;
}
void updateSiteBox::getInfoSite(QString nom, QString lieu, QString tarif){
    ui->nomSiteEdit->setText(nom);
    ui->lieuSiteEdit->setText(lieu);
    ui->tarifSiteEdit->setText(tarif);
}
QString updateSiteBox::getIdSIte(QString id){
    return id;
}

void updateSiteBox::on_confirmAddSiteBtn_clicked()
{
    Connection conn;
    conn.connOpen();
    QString nom_site = ui->nomSiteEdit->text();
    QString lieu = ui->lieuSiteEdit->text();
    QString tarif = ui->tarifSiteEdit->text();
    if(nom_site.isEmpty() || lieu.isEmpty() ||tarif.isEmpty()){
        ui->confirmAddSiteBtn->setDisabled(true);
   }else{

        if(nom_site.contains(QRegularExpression("[^a-zA-Z]+\\w*\\d*$"))){
            ui->messageNom->setText("ce champ ne doit pas contenir des caractères spéciaux");
             ui->confirmAddSiteBtn->setDisabled(true);
        }
        if(lieu.contains(QRegularExpression("[^a-zA-Z]+\\w*\\d*$")) ){
            ui->messageLieu->setText("ce champ ne doit pas contenir des caractères spéciaux");
             ui->confirmAddSiteBtn->setDisabled(true);
        }
        QRegularExpression regex("^\\d+(,\\d+)?$");
        if(!tarif.contains(regex)){
            ui->messagetarif->setText("ce champ ne doit contenir que des chiffres");
             ui->confirmAddSiteBtn->setDisabled(true);
        }else{
        QSqlQuery q;
        q.prepare("UPDATE site set nom_site = :nom_site, lieu_site = :lieu_site, tarif_journalier = :tarif WHERE id_site ="+this->Id_site+"");
        q.bindValue(":nom_site",nom_site);
        q.bindValue(":lieu_site",lieu);
        q.bindValue(":tarif",tarif);
        q.exec();
        this->close();
    }
    conn.connClose();
    }
}

void updateSiteBox::on_nomSiteEdit_textChanged(const QString &arg1)
{

    if(arg1 == ""){
         ui->confirmAddSiteBtn->setDisabled(true);
        ui->messageNom->setText("ce champ ne doit pas être vide");
    }else if(arg1.contains(QRegularExpression("^[^a-zA-Z]+"))){
         ui->confirmAddSiteBtn->setDisabled(true);
        ui->messageNom->setText("En commencant par des lettres s'il vous plait");
    }else if(arg1.contains(QRegularExpression("[^\\w\\s]+$"))){
         ui->confirmAddSiteBtn->setDisabled(true);
        ui->messageNom->setText("ne doit pas etre contenir des caracteres speciaux");
    }else{
         ui->confirmAddSiteBtn->setDisabled(false);
        ui->messageNom->setText(" ");
    }
}

void updateSiteBox::on_lieuSiteEdit_textChanged(const QString &arg1)
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

void updateSiteBox::on_tarifSiteEdit_textChanged(const QString &arg1)
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
