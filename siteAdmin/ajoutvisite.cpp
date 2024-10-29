#include "ajoutvisite.h"
#include "ui_ajoutvisite.h"
#include "connection.h"
#include "qtableview.h"
#include <QSqlError>
#include <QDateTime>

ajoutVisite::ajoutVisite(int index_site, int index_visiteur,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajoutVisite)
{
    ui->setupUi(this);
 ui->confirmAddvisiteBtn->setDisabled(true);
    QString date = QDateTime::currentDateTime().toString("dd/MM/yyyy  hh:mm:ss");
    ui->dateVisiteEdit->setText(date);
    Connection conn;
    conn.connOpen();

    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQueryModel *model2 = new QSqlQueryModel();
    QString sql;
    QSqlQuery* q = new QSqlQuery(conn.mydb);

    sql = "SELECT nom_visiteur FROM visiteur;";
    q->prepare(sql);
    q->exec();
    model->setQuery(*q);
    ui->comboBox->setModel(model);

    sql = "SELECT id_visiteur FROM visiteur;";
    q->prepare(sql);
    q->exec();
    while(q->next()){
        list_id_visiteur.append(q->value(0).toString());
    }







    sql = "SELECT nom_site FROM site;";
    q->prepare(sql);
    q->exec();
    model2->setQuery(*q);
    ui->comboBox_2->setModel(model2);

    sql = "SELECT id_site FROM site;";
    q->prepare(sql);
    q->exec();
    while(q->next()){
        list_id_site.append(q->value(0).toString());
    }

    if(index_site!=-1){
        ui->comboBox_2->setCurrentIndex(index_site);
    }
    if(index_visiteur!=-1){
        ui->comboBox->setCurrentIndex(index_visiteur);
    }
    this->id_site=this->list_id_site[ui->comboBox_2->currentIndex()];
    this->id_visiteur=this->list_id_visiteur[ui->comboBox->currentIndex()];

    qDebug()<<id_site+" "+id_visiteur;
}

ajoutVisite::~ajoutVisite()
{
    delete ui;
}



void ajoutVisite::on_comboBox_currentTextChanged()
{
//    combobox_curentText(ui->comboBox->currentText());
}

void ajoutVisite::on_comboBox_2_currentTextChanged()
{
//    combobox_2curentText(ui->comboBox_2->currentText());
}
void ajoutVisite::combobox_2curentText(QString currentText){


}

void ajoutVisite::combobox_curentText(QString currentText){


}

void ajoutVisite::on_comboBox_activated(int index)
{
    this->id_visiteur=list_id_visiteur[index];
}

void ajoutVisite::on_comboBox_2_activated(int index)
{
    this->id_site=list_id_site[index];
    qDebug()<<id_site;

}
void ajoutVisite::on_confirmAddvisiteBtn_clicked()
{



    qDebug()<<this->id_site;
    qDebug()<<this->id_visiteur;
    QString  nb_jours=ui->nbjrEdit->text();
    QString date_visite =ui->dateVisiteEdit->text();
    Connection conn;
    conn.connOpen();

    QSqlQuery query;
    QString nbj = ui->nbjrEdit->text();
    if(nbj.isEmpty() ){
        ui->confirmAddvisiteBtn->setDisabled(true);
   }else{
        QRegularExpression regex("^\\d+(,\\d+)?$");
        if(!nbj.contains(regex)){
        ui->msgNbj->setText("ce champ ne doit contenir que des chiffres");
        ui->confirmAddvisiteBtn->setDisabled(true);
    }
    else{
        query.prepare("INSERT INTO visite(id_visiteur,id_site,nb_jours,date_visite) VALUES(:id_visiteur,:id_site,:nb_jours,:date_visite);");
        query.bindValue(":id_visiteur", this->id_visiteur);
        query.bindValue(":id_site", this->id_site);
        query.bindValue(":nb_jours", nb_jours);
        query.bindValue(":date_visite",date_visite);
        qDebug()<<query.exec();
        qDebug()<<query.lastError();
        qDebug()<<"klkfnrrerere";
        qDebug()<<nb_jours;
        qDebug()<<date_visite;
        conn.connClose();
        this->close();

    }
}
}

void ajoutVisite::on_nbjrEdit_textChanged(const QString &arg1)
{
    QRegularExpression regex("^\\d+$");
    if(!arg1.contains(regex)){
        ui->msgNbj->setText("ce champ doit etre uniquement contenir par des chiffres");
         ui->confirmAddvisiteBtn->setDisabled(true);
    }else if(arg1 == ""){
        ui->msgNbj->setText("ce champ ne doit pas être vide");
         ui->confirmAddvisiteBtn->setDisabled(true);
    }

    else{
        ui->msgNbj->setText(" ");
         ui->confirmAddvisiteBtn->setDisabled(false);
    }
}

void ajoutVisite::on_dateVisiteEdit_textChanged(const QString &arg1)
{
//    if(arg1.contains(QRegularExpression("[^]"))){
//        ui->msgDate->setText("ce champ ne doit pas contenir des caractères spéciaux");
//    }else if(arg1 == ""){
//        ui->msgDate->setText("ce champ ne doit pas être vide");
//    }

//    else{
//        ui->msgDate->setText(" ");
//    }
}
