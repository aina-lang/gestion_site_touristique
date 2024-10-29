#include "loginpage.h"
#include "ui_loginpage.h"
#include "stylesheet.cpp"
#include "userAdmin/mainwindowuser.h"
#include "connection.h"
#include <QtWidgets>

loginPage::loginPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::loginPage)
{
    ui->setupUi(this);
    this->setWindowTitle("Authentification");
    this->setStyleSheet("QDialog{border-radius:50px;}");
    stylesheet css;
    QPixmap pic(":/icons/user");
    ui->labelIcon->setPixmap(pic.scaled(100,100,Qt::KeepAspectRatio));
    ui->nomLabel->setStyleSheet(css.label);
    ui->nomEdit->setStyleSheet(css.edit);
    ui->passwdEdit->setStyleSheet(css.edit);
    ui->loginBtn->setStyleSheet(css.addBtn);
    ui->passwdEdit->setEchoMode(QLineEdit::Password);
//    Connection *conn=new Connection();
//    conn->connOpen();
//    QSqlQuery query;
//    qDebug()<<query.exec();
//    if(!query.first()){
//        query.prepare("INSERT INTO user(pseudo_user,passwd_user) VALUES(:pseudo_user,:passwd_user);");
//        query.bindValue(":pseudo_user","admin");
//        query.bindValue(":passwd_user", "admin");
//        qDebug()<<query.exec();



//        QSqlQuery *queryDroit=new QSqlQuery();
//        QString lastIdUser;
//        lastIdUser=query.lastInsertId().toString();
//         qDebug()<<"ID DERNIER ENREGISTREAMENT "+lastIdUser;

//        QString lastIdDroit;
//        if(queryDroit->exec("INSERT INTO droit_accees (id_user,nom_droit,statue_droit)  VALUES("+lastIdUser+",'administrer user',1);")){
//           lastIdDroit=queryDroit->lastInsertId().toString();
//            qDebug()<<"ID DROIT "+lastIdDroit;
//        }


//        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'CREATE',1);")){
//            qDebug()<<query.lastError();
//        }
//        QString lastIdActionCreate;

//        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'READ',1);")){
//            qDebug()<<query.lastError();
//        }
//        QString lastIdActionRead;

//        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'UPDATE',1);")){
//            qDebug()<<query.lastError();
//        }
//        QString lastIdActionUpdate;

//        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'DELETE',1);")){
//            qDebug()<<query.lastError();
//        }
//        QString lastIdAction;



//        if(queryDroit->exec("INSERT INTO droit_accees (id_user,nom_droit,statue_droit)  VALUES("+lastIdUser+",'administrer site',1);")){
//            lastIdDroit=queryDroit->lastInsertId().toString();
//             qDebug()<<"ID DROIT "+lastIdDroit;
//        }

//        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'CREATE',1);")){
//            qDebug()<<query.lastError();
//        }
//        QString lastIdActionCreates;

//        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'READ',1);")){
//            qDebug()<<query.lastError();
//        }
//        QString lastIdActionReads;

//        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'UPDATE',1);")){
//            qDebug()<<query.lastError();
//        }
//        QString lastIdActionUpdates;

//        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'DELETE',1);")){
//            qDebug()<<query.lastError();
//        }
//        QString lastIdActions;
//    }else{
//        qDebug()<<"Utlisateur existe déja";
//    }
}

loginPage::~loginPage()
{
    delete ui;
}


void loginPage::on_loginBtn_clicked()
{
    Connection *conn=new Connection();
    conn->connOpen();
    QSqlQuery *query=new QSqlQuery();

    QString pseudo=ui->nomEdit->text();
    QString passwd=ui->passwdEdit->text();
    QString queryPrepared="SELECT * FROM user WHERE pseudo_user= ? ;";

    query->prepare(queryPrepared);
    query->addBindValue(pseudo);

    if(!query->exec()){
        qDebug() <<query->lastError();
    }else{
        if(query->first()){
            QString passwdVerify=query->value(2).toString();
            qDebug() <<"LE MOT DE PASSE EST "+passwdVerify;
            if(passwd==passwdVerify){
                this->setIdLogged(query->value(0).toString());
                qDebug() <<"ID DE L'UTILISATEUR  "+query->value(0).toString();
                QSqlQuery q;
                if(q.exec("SELECT * FROM user INNER JOIN droit_accees ON user.id_user='"+query->value(0).toString()+"' AND droit_accees.id_user=user.id_user;")){

                    while(q.next()){
                         qDebug() <<"NOM DU DROIT EST :"+ q.value(5).toString();
                        if(q.value(5).toString()=="administrer user" && q.value(6).toString()=="1"){
                            MainwindowUser * user=new MainwindowUser(query->value(0).toString());
                            user->setIdLogged(query->value(0).toString());
                            user->setWidget();
                            user->show();
//                            QRect screenGeometry = QApplication::desktop()->screenGeometry();
//                                int x = (screenGeometry.width() - user->width()) / 2;
//                                int y = (screenGeometry.height() - user->height()) / 2;
//                                  user->move(x, y);
                        }else if(q.value(5).toString()=="administrer user" && q.value(6).toString()=="0"){
                            Mainwindowsite * site=new Mainwindowsite(query->value(0).toString());
                            site->setIdLogged(id_user_logged);
                            site->setWidget();
                            site->show();

//                            QRect screenGeometry = QApplication::desktop()->screenGeometry();
//                                int x = (screenGeometry.width() - site->width()) / 2;
//                                int y = (screenGeometry.height() - site->height()) / 3.5;
//                                  site->move(x, y);
                        }
                    }
                }
                this->close();
            }else{
                  qDebug() <<"Votre mot de passe est incorrect";
            }
        }else{

            qDebug() <<"Pseudo n'existe pas";
        }
    }
    
   conn->connClose();
}



void loginPage::setIdLogged(QString id){
    this->id_user_logged=id;
}


