#include "showprofile.h"
#include "connection.h"
#include "qsqlquery.h"
#include "ui_showprofile.h"

showProfile::showProfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::showProfile)
{
    ui->setupUi(this);
//      this->setWindowOpacity(0.5);
}

showProfile::~showProfile()
{
    delete ui;
}

void showProfile::setIdLogged(QString id){
    id_user_logged=id;
}

void showProfile::setWidget(){
    Connection conn;
    if (!conn.connOpen()){
        qDebug() <<"Echec d'ouverture de base donnée";
        return ;
    }

    conn.connOpen();

    QSqlQuery query;
    QString queryPrepared="SELECT * FROM user WHERE id_user= ? ;";
    query.prepare(queryPrepared);
    query.addBindValue(id_user_logged);
    qDebug()<<query.exec();
   if(query.first()){
       ui->pseudoEdit->setText(query.value(1).toString());
       ui->passwdEdit->setText(query.value(2).toString());
   }

    conn.connClose();
}


void showProfile::on_updateUserBtn_clicked()
{

    Connection conn;
    if (!conn.connOpen()){
        qDebug() <<"Echec d'ouverture de base donnée";
        return ;
    }

    conn.connOpen();

    QString  pseudo_user=ui->pseudoEdit->text();
    QString  passwd_user=ui->passwdEdit->text();

    QSqlQuery query;
    QString queryPrepared="SELECT * FROM user WHERE pseudo_user= ? ;";
    query.prepare(queryPrepared);
    query.addBindValue(pseudo_user);
    if(pseudo_user.contains(" ",Qt::CaseInsensitive)){
        qDebug()<<"pseudo n'est doit pas contenir de l'espace";
    }else{
        if(!pseudo_user.contains(QRegularExpression("[^a-zA-Z][0_9]"))){
            qDebug()<<"PSEUDO PARFAIT";
            if(pseudo_user!="" && passwd_user!="" ){
                 qDebug()<<query.exec();
                 if(query.first()){
                     qDebug()<<"Utlisateur existe déja";
                     if(query.value(0).toString()==id_user_logged){
                         query.prepare("UPDATE  user set pseudo_user=:pseudo_user,passwd_user=:passwd_user WHERE id_user='"+id_user_logged+"';");
                         query.bindValue(":pseudo_user", pseudo_user);
                         query.bindValue(":passwd_user", passwd_user);
                         qDebug()<<query.exec();
                         qDebug()<<"dernier id ajoutéé "+id_user_logged;
                     }else{
                         qDebug()<<"Utlisateur existe déja";
                     }
                 }else{
                     query.prepare("UPDATE  user set pseudo_user=:pseudo_user,passwd_user=:passwd_user WHERE id_user='"+id_user_logged+"';");
                     query.bindValue(":pseudo_user", pseudo_user);
                     query.bindValue(":passwd_user", passwd_user);
                     qDebug()<<query.exec();
                     qDebug()<<"dernier id ajoutéé "+id_user_logged;
                 }
              }else{
                qDebug()<<"Veuillez completer tous les champs ";
            }
        }
    }
    qDebug()<<query.lastError();
    conn.connClose();
    this->close();
}


void showProfile::on_restoreBtn_clicked()
{
    setWidget();
}

