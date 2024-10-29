#include "updatevisiteurbox.h"
#include "ui_updatevisiteurbox.h"
#include "connection.h"
#include "qdebug.h"
#include <QSqlError>

updateVisiteurBox::updateVisiteurBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updateVisiteurBox)
{
    ui->setupUi(this);
     ui->confirmUpdateSiteBtn->setDisabled(true);
}

updateVisiteurBox::~updateVisiteurBox()
{
    delete ui;
}
void updateVisiteurBox::getInfoVisiteur(QString nom, QString adresse, QString provenance){
    ui->nomVisiteurEdit->setText(nom);
    ui->adresseVisiteurEdit->setText(adresse);
    ui->provenance->setText(provenance);
}
QString updateVisiteurBox::getIdVisiteur(QString id){
    return id;
}



void updateVisiteurBox::on_confirmUpdateSiteBtn_clicked()
{
    Connection conn;
    conn.connOpen();
    QString nom_visiteur = ui->nomVisiteurEdit->text();
    QString adresse = ui->adresseVisiteurEdit->text();
    QString provenance = ui->provenance->text();

    if(nom_visiteur.isEmpty() || adresse.isEmpty() || provenance.isEmpty()){
         ui->confirmUpdateSiteBtn->setDisabled(true);
   }else{

        if(!nom_visiteur.contains(QRegularExpression("[^a-zA-Z]+\\w*\\d*$"))){
             ui->confirmUpdateSiteBtn->setDisabled(true);
            ui->messageNomVisiteur->setText("ce champ ne doit pas contenir des caractères spéciaux");
        }
        if(!adresse.contains(QRegularExpression("[^a-zA-Z]+\\w*\\d*$")) ){
            ui->confirmUpdateSiteBtn->setDisabled(true);
            ui->MsgAddresse->setText("ce champ ne doit pas contenir des caractères spéciaux");
        }
        if(provenance.contains(QRegularExpression("[^a-zA-Z]+\\w*\\d*$")) ){
            ui->confirmUpdateSiteBtn->setDisabled(true);
            ui->MsgProvenance->setText("lettres(_ ou espace) des chiffres uniquement");
        }else{
        QSqlQuery q;
        q.prepare("UPDATE visiteur set nom_visiteur = :nom_visiteur, addresse = :adress, provenance = :provenance WHERE id_visiteur = "+id_visiteur+"");
        q.bindValue(":nom_visiteur", nom_visiteur);
        q.bindValue(":adress", adresse);
        q.bindValue(":provenance", provenance);
       qDebug()<<q.exec();
       qDebug()<<q.lastError();

        this->close();
    }
    conn.connClose();
    }
}

void updateVisiteurBox::on_nomVisiteurEdit_textChanged(const QString &arg1)
{
    if(arg1 == ""){
        ui->confirmUpdateSiteBtn->setDisabled(true);
           ui->messageNomVisiteur->setText("ce champ ne doit pas être vide");
    }else if(arg1.contains(QRegularExpression("^[^a-zA-Z]+"))){
        ui->confirmUpdateSiteBtn->setDisabled(true);
        ui->messageNomVisiteur->setText("En commencant par des lettres s'il vous plait");
    }else if(arg1.contains(QRegularExpression("[^\\w\\s]+$"))){
        ui->confirmUpdateSiteBtn->setDisabled(true);
        ui->messageNomVisiteur->setText("ne doit pas etre contenir des caracteres speciaux");
    }else{
        ui->messageNomVisiteur->setText(" ");
        ui->confirmUpdateSiteBtn->setDisabled(false);
    }
}

void updateVisiteurBox::on_adresseVisiteurEdit_textChanged(const QString &arg1)
{
    if(arg1 == ""){
           ui->MsgAddresse->setText("ce champ ne doit pas être vide");
           ui->confirmUpdateSiteBtn->setDisabled(true);
    }else if(arg1.contains(QRegularExpression("^[^a-zA-Z]+"))){
        ui->MsgAddresse->setText("En commencant par des lettres s'il vous plait");
        ui->confirmUpdateSiteBtn->setDisabled(true);
    }else if(arg1.contains(QRegularExpression("[^\\w\\s]+$"))){
        ui->MsgAddresse->setText("ne doit pas etre contenir des caracteres speciaux");
        ui->confirmUpdateSiteBtn->setDisabled(true);
    }else{
        ui->MsgAddresse->setText(" ");
        ui->confirmUpdateSiteBtn->setDisabled(false);
    }
}

void updateVisiteurBox::on_provenance_textChanged(const QString &arg1)
{
    if(arg1 == ""){
           ui->MsgProvenance->setText("ce champ ne doit pas être vide");
           ui->confirmUpdateSiteBtn->setDisabled(true);
    }else if(arg1.contains(QRegularExpression("^[^a-zA-Z]+"))){
        ui->MsgProvenance->setText("En commencant par des lettres s'il vous plait");
        ui->confirmUpdateSiteBtn->setDisabled(true);
    }else if(arg1.contains(QRegularExpression("[^\\w\\s]+$"))){
        ui->MsgProvenance->setText("ne doit pas etre contenir des caracteres speciaux");
        ui->confirmUpdateSiteBtn->setDisabled(true);
    }else{
        ui->MsgProvenance->setText(" ");
        ui->confirmUpdateSiteBtn->setDisabled(false);
    }
}
