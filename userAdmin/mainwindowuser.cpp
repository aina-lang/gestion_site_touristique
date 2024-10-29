#include "mainwindowuser.h"
#include "connection.h"
#include "siteAdmin/mainwindowsite.h"
#include "ui_mainwindowuser.h"
#include "QStandardItemModel"
#include "QStandardItem"
#include <QtWidgets>

MainwindowUser::MainwindowUser(QString id,QWidget *parent) :
  QWidget(parent),
    ui(new Ui::MainwindowUser)
{
    ui->setupUi(this);
    this->id_user_logged=id;
    ui->addUserBtn->setStyleSheet(css.addBtn);
    ui->deleteUserBtn->setStyleSheet(css.disabledBtn);
    ui->restoreBtn->setStyleSheet(css.disabledBtn);
    ui->logoutBtn->setStyleSheet(css.addBtn);
    ui->toUserAdministrationBtn->setStyleSheet(css.disabledBtn);
    ui->toSiteGestionBtn->setStyleSheet(css.disabledBtn);
    ui->confirmAddUserBtn->setStyleSheet(css.addBtn);
    ui->modifUserBtn->setStyleSheet(css.disabledBtn);
    ui->exportToPdfBtn->setStyleSheet(css.disabledBtn);
    ui->modifUserBtn->close();
    ui->passwdEdit->setStyleSheet(css.edit);
    ui->pseudoEdit->setStyleSheet(css.edit);
    ui->searchUserEdit->setStyleSheet(css.edit);



    Connection conn;
    if (!conn.connOpen()){
        qDebug() <<"Echec d'ouverture de base donnée";
        return ;
    }
    conn.connOpen();

    QSqlQuery qu;
    if(qu.exec("SELECT * FROM action INNER JOIN droit_accees ON droit_accees.id_user='"+id_user_logged+"' AND droit_accees.nom_droit='administrer user' AND action.id_droit=droit_accees.id_droit;")){
        if(qu.first()){
            if(qu.value(7).toString()=="1"){
                qDebug() <<"VOUS POUVEZ ADMINISTRER LES USERS";
//                ui->adminUserActivateBtn->setChecked(true);
                qu.exec("SELECT * FROM action INNER JOIN droit_accees ON droit_accees.id_user='"+id_user_logged+"' AND droit_accees.nom_droit='administrer user' AND action.id_droit=droit_accees.id_droit;");
                while(qu.next()){
                    if(qu.value(2).toString()=="CREATE"){
                        if(qu.value(3).toString()=="1"){
                             qDebug() <<"VOUS POUVEZ CREE DES USERS  "+qu.value(3).toString();
                         //    ui->AjouterUser->setChecked(true);
                        }else{
                             qDebug() <<"VOUS NE POUVEZ FAIRE L'ACTION CREATE USER "+qu.value(3).toString();
//                             ui->AjouterUser->setChecked(false);
                             ui->addUserBtn->hide();
                        }
                    }
                    if(qu.value(2).toString()=="READ" ){
                        if(qu.value(3).toString()=="1"){
                             qDebug() <<"VOUS POUVEZ OBSERVER DES USERS "+qu.value(3).toString();
                         //    ui->VisualiserUser->setChecked(true);
                        }else{
                             qDebug() <<"VOUS NE POUVEZ FAIRE L'ACTION READ USER "+qu.value(3).toString();
//                             ui->VisualiserUser->setChecked(false);
//                             ui->VisualiserUser->setDisabled(true);

                        }
                    }
                    if(qu.value(2).toString()=="UPDATE" ){
                        if(qu.value(3).toString()=="1"){
                             qDebug() <<"VOUS POUVEZ MODIFIER DES USERS "+qu.value(3).toString();
                            // ui->ModifierUser->setChecked(true);
                        }else{
                             qDebug() <<"VOUS NE POUVEZ FAIRE L'ACTION UPDATE USER "+qu.value(3).toString();
//                              ui->ModifierUser->setChecked(false);
//                              ui->ModifierUser->setDisabled(true);
                                ui->modifUserBtn->hide();
                        }
                    }
                    if(qu.value(2).toString()=="DELETE"){
                        if(qu.value(3).toString()=="1"){
                           qDebug() <<"VOUS POUVEZ SUPRIMMER DES USERS "+qu.value(3).toString();
                          //   ui->SupprimerUser->setChecked(true);
                        }else{
                            qDebug() <<"VOUS NE POUVEZ FAIRE L'ACTION  DELETE USER "+qu.value(3).toString();
//                            ui->SupprimerUser->setChecked(false);
//                            ui->SupprimerUser->setDisabled(true);
                            ui->deleteUserBtn->hide();
                        }
                    }
                }
           }else{
                ui->adminUserActivateBtn->setChecked(false);
                 ui->adminUserActivateBtn->setDisabled(true);
                ui->AjouterUser->setChecked(false);
                ui->VisualiserUser->setChecked(false);
                ui->ModifierUser->setChecked(false);
                ui->SupprimerUser->setChecked(false);
            }
        }
    }else{
         qDebug() <<qu.lastError();
    }

    conn.connClose();

    qDebug() <<"ID DE L'USER EST  "+id_user_logged;

    reloadData(ui->tableView);
}

MainwindowUser::~MainwindowUser()
{
    delete ui;

}



void MainwindowUser::reloadData(QTableView *table){

    Connection conn;
    if (!conn.connOpen()){
        qDebug() <<"Echec d'ouverture de base donnée";
        return ;
    }
    conn.connOpen();
    model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM user");
    model->setHeaderData(0, Qt::Horizontal, tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, tr("Pseudo"));
   // model->removeColumns(1,true);
    model->setHeaderData(2, Qt::Horizontal, tr("Mot de passe"));
    table->setModel(model);
    qDebug() <<"DATA RELOADED";
    qDebug() <<model->rowCount();
    conn.connClose();
}


void MainwindowUser::on_tableView_clicked(const QModelIndex &index)
{

    ui->deleteUserBtn->setStyleSheet(css.deleteBtn);
    ui->modifUserBtn->setStyleSheet(css.updateBtn);
    int rowSelected = index.row();
    id_user=ui->tableView->model()->data(ui->tableView->model()->index(rowSelected,0)).toString();
    QString nom_user=ui->tableView->model()->data(ui->tableView->model()->index(rowSelected,1)).toString();
    qDebug() <<"  USER CLICKE "+id_user;
    QString passwd_user=ui->tableView->model()->data(ui->tableView->model()->index(rowSelected,2)).toString();
    ui->pseudoEdit->setText(nom_user);
    ui->passwdEdit->setText(passwd_user);

    ui->confirmAddUserBtn->close();
    Connection conn;
    if (!conn.connOpen()){
        qDebug() <<"Echec d'ouverture de base donnée";
        return ;
    }
    conn.connOpen();
    QSqlQuery q;
    QSqlQuery qu;
    if(qu.exec("SELECT * FROM action INNER JOIN droit_accees ON droit_accees.id_user='"+id_user_logged+"' AND droit_accees.nom_droit='administrer user' AND action.id_droit=droit_accees.id_droit;")){
        if(qu.first()){
            if(qu.value(7).toString()=="1"){
//                qDebug() <<"VOUS POUVEZ ADMINISTRER LES USERS";
                //ui->adminUserActivateBtn->setChecked(true);
                qu.exec("SELECT * FROM action INNER JOIN droit_accees ON droit_accees.id_user='"+id_user_logged+"' AND droit_accees.nom_droit='administrer user' AND action.id_droit=droit_accees.id_droit;");
                while(qu.next()){
                    if(qu.value(2).toString()=="CREATE"){
                        if(qu.value(3).toString()=="1"){
//                             qDebug() <<"VOUS POUVEZ CREE DES USERS  "+qu.value(3).toString();
                         //    ui->AjouterUser->setChecked(true);
                             ui->addUserBtn->show();
                        }else{
//                             qDebug() <<"VOUS NE POUVEZ FAIRE L'ACTION CREATE USER "+qu.value(3).toString();
//                             ui->AjouterUser->setChecked(false);
                             ui->addUserBtn->hide();
                        }
                    }
                    if(qu.value(2).toString()=="READ" ){
                        if(qu.value(3).toString()=="1"){
//                             qDebug() <<"VOUS POUVEZ OBSERVER DES USERS "+qu.value(3).toString();
                         //    ui->VisualiserUser->setChecked(true);
                        }else{
//                             qDebug() <<"VOUS NE POUVEZ FAIRE L'ACTION READ USER "+qu.value(3).toString();
//                             ui->VisualiserUser->setChecked(false);
//                             ui->VisualiserUser->setDisabled(true);

                        }
                    }
                    if(qu.value(2).toString()=="UPDATE" ){
                        if(qu.value(3).toString()=="1"){
//                             qDebug() <<"VOUS POUVEZ MODIFIER DES USERS "+qu.value(3).toString();
                            // ui->ModifierUser->setChecked(true);
                              ui->modifUserBtn->show();
                        }else{
//                             qDebug() <<"VOUS NE POUVEZ FAIRE L'ACTION UPDATE USER "+qu.value(3).toString();
//                              ui->ModifierUser->setChecked(false);
//                              ui->ModifierUser->setDisabled(true);
                                ui->modifUserBtn->hide();
                        }
                    }
                    if(qu.value(2).toString()=="DELETE"){
                        if(qu.value(3).toString()=="1"){
//                           qDebug() <<"VOUS POUVEZ SUPRIMMER DES USERS "+qu.value(3).toString();
                          //   ui->SupprimerUser->setChecked(true);
                           ui->deleteUserBtn->show();
                        }else{
//                            qDebug() <<"VOUS NE POUVEZ FAIRE L'ACTION  DELETE USER "+qu.value(3).toString();
//                            ui->SupprimerUser->setChecked(false);
//                            ui->SupprimerUser->setDisabled(true);
                            ui->deleteUserBtn->hide();
                        }
                    }
                }
           }else{
//                ui->adminUserActivateBtn->setChecked(false);
//                 ui->adminUserActivateBtn->setDisabled(true);
//                ui->AjouterUser->setChecked(false);
//                ui->VisualiserUser->setChecked(false);
//                ui->ModifierUser->setChecked(false);
//                ui->SupprimerUser->setChecked(false);
            }
        }
    }else{
         qDebug() <<qu.lastError();
    }

    if(q.exec("SELECT * FROM action INNER JOIN droit_accees ON droit_accees.id_user='"+id_user+"' AND droit_accees.nom_droit='administrer site' AND action.id_droit=droit_accees.id_droit;")){
       if(q.first()){
          if(q.value(7).toString()=="1"){
              ui->adminSiteActivateBtn->setChecked(true);
              q.exec("SELECT * FROM action INNER JOIN droit_accees ON droit_accees.id_user='"+id_user+"' AND droit_accees.nom_droit='administrer site' AND action.id_droit=droit_accees.id_droit;");
              while(q.next()){
                  if(q.value(2).toString()=="CREATE" ){
                      qDebug() <<"VOUS  POUVEZ FAIRE L'ACTION CREATE SITES "+q.value(3).toString();
                      if(q.value(3).toString()=="1"){
                           ui->AjouterSite->setChecked(true);
                      }else{
                          ui->AjouterSite->setChecked(false);
                      }
                  }

                  if(q.value(2).toString()=="READ" ){
                      qDebug() <<"VOUS  POUVEZ FAIRE L'ACTION READ SITES "+q.value(3).toString();
                      if(q.value(3).toString()=="1"){
                           ui->VisualiserSite->setChecked(true);
                      }else{
                          ui->VisualiserSite->setChecked(false);
                      }
                  }

                  if(q.value(2).toString()=="UPDATE" ){
                      qDebug() <<"VOUS  POUVEZ FAIRE L'ACTION UPDATE SITES "+q.value(3).toString();
                      if(q.value(3).toString()=="1"){
                           ui->ModifierSite->setChecked(true);
                      }else{
                          ui->ModifierSite->setChecked(false);
                      }
                  }

                  if(q.value(2).toString()=="DELETE" ){
                      qDebug() <<"VOUS  POUVEZ FAIRE L'ACTION DELETE SITES "+q.value(3).toString();
                      if(q.value(3).toString()=="1"){
                           ui->SupprimerSite->setChecked(true);
                      }else{
                          ui->SupprimerSite->setChecked(false);
                      }
                  }
              }
          }else{
              qDebug() <<"VOUS NE POUVEZ PAS ADMINISTRER DES SITES";
              ui->adminSiteActivateBtn->setChecked(false);
              ui->AjouterSite->setChecked(false);
              ui->VisualiserSite->setChecked(false);
              ui->ModifierSite->setChecked(false);
              ui->SupprimerSite->setChecked(false);
          }
       }
    }else{
         qDebug() <<q.lastError();
    }


    if(qu.exec("SELECT * FROM action INNER JOIN droit_accees ON droit_accees.id_user='"+id_user+"' AND droit_accees.nom_droit='administrer user' AND action.id_droit=droit_accees.id_droit;")){
        if(qu.first()){
            if(qu.value(7).toString()=="1"){
                qDebug() <<"VOUS POUVEZ ADMINISTRER LES USERS";
                ui->adminUserActivateBtn->setChecked(true);
                qu.exec("SELECT * FROM action INNER JOIN droit_accees ON droit_accees.id_user='"+id_user+"' AND droit_accees.nom_droit='administrer user' AND action.id_droit=droit_accees.id_droit;");
                while(qu.next()){
                    if(qu.value(2).toString()=="CREATE"){
                        if(qu.value(3).toString()=="1"){
                             qDebug() <<"VOUS POUVEZ CREE DES USERS  "+qu.value(3).toString();
                             ui->AjouterUser->setChecked(true);
                        }else{
                             qDebug() <<"VOUS NE POUVEZ FAIRE L'ACTION CREATE USER "+qu.value(3).toString();
                             ui->AjouterUser->setChecked(false);
                        }
                    }
                    if(qu.value(2).toString()=="READ" ){
                        if(qu.value(3).toString()=="1"){
                             qDebug() <<"VOUS POUVEZ OBSERVER DES USERS "+qu.value(3).toString();
                             ui->VisualiserUser->setChecked(true);
                        }else{
                             qDebug() <<"VOUS NE POUVEZ FAIRE L'ACTION READ USER "+qu.value(3).toString();
                             ui->VisualiserUser->setChecked(false);
                        }
                    }
                    if(qu.value(2).toString()=="UPDATE" ){
                        if(qu.value(3).toString()=="1"){
                             qDebug() <<"VOUS POUVEZ MODIFIER DES USERS "+qu.value(3).toString();
                             ui->ModifierUser->setChecked(true);
                        }else{
                             qDebug() <<"VOUS NE POUVEZ FAIRE L'ACTION UPDATE USER "+qu.value(3).toString();
                              ui->ModifierUser->setChecked(false);
                        }
                    }
                    if(qu.value(2).toString()=="DELETE"){
                        if(qu.value(3).toString()=="1"){
                           qDebug() <<"VOUS POUVEZ SUPRIMMER DES USERS "+qu.value(3).toString();
                             ui->SupprimerUser->setChecked(true);
                        }else{
                            qDebug() <<"VOUS NE POUVEZ FAIRE L'ACTION  DELETE USER "+qu.value(3).toString();
                            ui->SupprimerUser->setChecked(false);
                        }
                    }
                }
           }else{
                ui->adminUserActivateBtn->setChecked(false);
                ui->AjouterUser->setChecked(false);
                ui->VisualiserUser->setChecked(false);
                ui->ModifierUser->setChecked(false);
                ui->SupprimerUser->setChecked(false);
            }
        }
    }else{
         qDebug() <<qu.lastError();
    }

    conn.connClose();
}


void MainwindowUser::on_addUserBtn_clicked()
{
    ui->modifUserBtn->close();
    ui->confirmAddUserBtn->show();
    ui->pseudoEdit->setText("");
    ui->passwdEdit->setText("");
    ui->confirmAddUserBtn->setDisabled(false);
}


void MainwindowUser::on_confirmAddUserBtn_clicked()
{


    Connection conn;
    if (!conn.connOpen()){
        qDebug() <<"Echec d'ouverture de base donnée";
        return ;
    }

    conn.connOpen();

    QString  pseudo_user=ui->pseudoEdit->text();
    QString  passwd_user=ui->passwdEdit->text();
    //QString pseudoVerify;

    QSqlQuery query;
    QString queryPrepared="SELECT * FROM user WHERE pseudo_user= ? ;";

    query.prepare(queryPrepared);
    query.addBindValue(pseudo_user);


    if(pseudo_user.contains(" ",Qt::CaseInsensitive)){
        qDebug()<<"pseudo n'est pas etre contenir de l'espace";
    }else{
        if(!pseudo_user.contains(QRegularExpression("[^a-zA-Z][0_9]"))){
            qDebug()<<"Pseudo parfait";
            if(pseudo_user!="" && passwd_user!="" ){
                qDebug()<<query.exec();
                if(!query.first()){
                    query.prepare("INSERT INTO user(pseudo_user,passwd_user) VALUES(:pseudo_user,:passwd_user);");
                    query.bindValue(":pseudo_user", pseudo_user);
                    query.bindValue(":passwd_user", passwd_user);
                    qDebug()<<query.exec();
                    ui->modifUserBtn->show();
                    ui->modifUserBtn->setDisabled(false);
                    ui->modifUserBtn->setStyleSheet(css.updateBtn);
                    ui->confirmAddUserBtn->close();
                    ui->confirmAddUserBtn->setDisabled(true);
                    qDebug()<<model->rowCount();
                    id_user=ui->tableView->model()->data(ui->tableView->model()->index(model->rowCount()-1,0)).toString();


                    QSqlQuery *queryDroit=new QSqlQuery();
                    QString lastIdUser;
                    lastIdUser=query.lastInsertId().toString();
                     qDebug()<<"ID DERNIER ENREGISTREAMENT "+lastIdUser;

                    QString lastIdDroit;
                    if(ui->adminUserActivateBtn->isChecked()){
                        if(queryDroit->exec("INSERT INTO droit_accees (id_user,nom_droit,statue_droit)  VALUES("+lastIdUser+",'administrer user',1);")){
                           lastIdDroit=queryDroit->lastInsertId().toString();
                            qDebug()<<"ID DROIT "+lastIdDroit;
                        }
                    }else{
                        if(queryDroit->exec("INSERT INTO droit_accees (id_user,nom_droit,statue_droit)  VALUES("+lastIdUser+",'administrer user',0);")){
                           lastIdDroit=queryDroit->lastInsertId().toString();
                            qDebug()<<"ID DROIT "+lastIdDroit;
                        }
                    }


                   if(ui->AjouterUser->isChecked()){
                       if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'CREATE',1);")){
                           qDebug()<<query.lastError();
                       }
                   }else{
                       if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'CREATE',0);")){
                           qDebug()<<query.lastError();
                       }
                   }
                    QString lastIdActionCreate;


                    if(ui->VisualiserUser->isChecked()){
                        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'READ',1);")){
                            qDebug()<<query.lastError();
                        }
                    }else{
                        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'READ',0);")){
                            qDebug()<<query.lastError();
                        }
                    }
                    QString lastIdActionRead;

                    if(ui->ModifierUser->isChecked()){
                        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'UPDATE',1);")){
                            qDebug()<<query.lastError();
                        }
                    }else{
                        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'UPDATE',0);")){
                            qDebug()<<query.lastError();
                        }
                    }
                    QString lastIdActionUpdate;

                    if(ui->SupprimerUser->isChecked()){
                        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'DELETE',1);")){
                            qDebug()<<query.lastError();
                        }
                    }else{
                        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'DELETE',0);")){
                            qDebug()<<query.lastError();
                        }
                    }
                    QString lastIdAction;



                    if(ui->adminSiteActivateBtn->isChecked()){
                        if(queryDroit->exec("INSERT INTO droit_accees (id_user,nom_droit,statue_droit)  VALUES("+lastIdUser+",'administrer site',1);")){
                           lastIdDroit=queryDroit->lastInsertId().toString();
                            qDebug()<<"ID DROIT "+lastIdDroit;
                        }
                    }else{
                        if(queryDroit->exec("INSERT INTO droit_accees (id_user,nom_droit,statue_droit)  VALUES("+lastIdUser+",'administrer site',0);")){
                           lastIdDroit=queryDroit->lastInsertId().toString();
                            qDebug()<<"ID DROIT "+lastIdDroit;
                        }
                    }

                    if(ui->AjouterSite->isChecked()){
                        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'CREATE',1);")){
                            qDebug()<<query.lastError();
                        }
                    }else{
                        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'CREATE',0);")){
                            qDebug()<<query.lastError();
                        }
                    }
                    QString lastIdActionCreates;

                    if(ui->VisualiserSite->isChecked()){
                        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'READ',1);")){
                            qDebug()<<query.lastError();
                        }
                    }else{
                        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'READ',0);")){
                            qDebug()<<query.lastError();
                        }
                    }
                    QString lastIdActionReads;

                    if(ui->ModifierSite->isChecked()){
                        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'UPDATE',1);")){
                            qDebug()<<query.lastError();
                        }
                    }else{
                        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'UPDATE',0);")){
                            qDebug()<<query.lastError();
                        }
                    }
                    QString lastIdActionUpdates;

                    if(ui->SupprimerSite->isChecked()){
                        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'DELETE',1);")){
                            qDebug()<<query.lastError();
                        }
                    }else{
                        if(!query.exec("INSERT INTO  action(id_droit,nom_action,statue_action) VALUES("+lastIdDroit+",'DELETE',0);")){
                            qDebug()<<query.lastError();
                        }
                    }
                    QString lastIdActions;




                    qDebug()<<"dernier id ajoutéé "+id_user;
                    reloadData(ui->tableView);
                }else{
                    qDebug()<<"Utlisateur existe déja";
                }
            }else{
                    qDebug()<<"Veuillez completer tous les champs ";
            }
        }
    }

    QSqlQuery qu;
    if(qu.exec("SELECT * FROM action INNER JOIN droit_accees ON droit_accees.id_user='"+id_user_logged+"' AND droit_accees.nom_droit='administrer user' AND action.id_droit=droit_accees.id_droit;")){
        if(qu.first()){
            if(qu.value(7).toString()=="1"){
                qDebug() <<"VOUS POUVEZ ADMINISTRER LES USERS";
                ui->adminUserActivateBtn->setChecked(true);
                qu.exec("SELECT * FROM action INNER JOIN droit_accees ON droit_accees.id_user='"+id_user_logged+"' AND droit_accees.nom_droit='administrer user' AND action.id_droit=droit_accees.id_droit;");
                while(qu.next()){
                    if(qu.value(2).toString()=="CREATE"){
                        if(qu.value(3).toString()=="1"){
                             qDebug() <<"VOUS POUVEZ CREE DES USERS  "+qu.value(3).toString();
                         //    ui->AjouterUser->setChecked(true);
                             ui->addUserBtn->show();
                        }else{
                             qDebug() <<"VOUS NE POUVEZ FAIRE L'ACTION CREATE USER "+qu.value(3).toString();
//                             ui->AjouterUser->setChecked(false);
                             ui->addUserBtn->hide();
                        }
                    }
                    if(qu.value(2).toString()=="READ" ){
                        if(qu.value(3).toString()=="1"){
                             qDebug() <<"VOUS POUVEZ OBSERVER DES USERS "+qu.value(3).toString();
                         //    ui->VisualiserUser->setChecked(true);
                        }else{
                             qDebug() <<"VOUS NE POUVEZ FAIRE L'ACTION READ USER "+qu.value(3).toString();
//                             ui->VisualiserUser->setChecked(false);
//                             ui->VisualiserUser->setDisabled(true);

                        }
                    }
                    if(qu.value(2).toString()=="UPDATE" ){
                        if(qu.value(3).toString()=="1"){
                             qDebug() <<"VOUS POUVEZ MODIFIER DES USERS "+qu.value(3).toString();
                            // ui->ModifierUser->setChecked(true);
                              ui->modifUserBtn->show();
                        }else{
                             qDebug() <<"VOUS NE POUVEZ FAIRE L'ACTION UPDATE USER "+qu.value(3).toString();
//                              ui->ModifierUser->setChecked(false);
//                              ui->ModifierUser->setDisabled(true);
                                ui->modifUserBtn->hide();
                        }
                    }
                    if(qu.value(2).toString()=="DELETE"){
                        if(qu.value(3).toString()=="1"){
                           qDebug() <<"VOUS POUVEZ SUPRIMMER DES USERS "+qu.value(3).toString();
                          //   ui->SupprimerUser->setChecked(true);
                           ui->deleteUserBtn->show();
                        }else{
                            qDebug() <<"VOUS NE POUVEZ FAIRE L'ACTION  DELETE USER "+qu.value(3).toString();
//                            ui->SupprimerUser->setChecked(false);
//                            ui->SupprimerUser->setDisabled(true);
                            ui->deleteUserBtn->hide();
                        }
                    }
                }
           }else{
                ui->adminUserActivateBtn->setChecked(false);
                 ui->adminUserActivateBtn->setDisabled(true);
                ui->AjouterUser->setChecked(false);
                ui->VisualiserUser->setChecked(false);
                ui->ModifierUser->setChecked(false);
                ui->SupprimerUser->setChecked(false);
            }
        }
    }else{
         qDebug() <<qu.lastError();
    }
    qDebug()<<query.lastError();
    conn.connClose();

}


void MainwindowUser::on_restoreBtn_clicked()
{
    ui->confirmAddUserBtn->setDisabled(true);
}


void MainwindowUser::on_deleteUserBtn_clicked()
{

    Connection conn;
    if (!conn.connOpen()){
        qDebug() <<"Echec d'ouverture de base donnée";
        return ;
    }

    conn.connOpen();
    QSqlQuery query;
    qDebug()<<id_user;
    if(query.exec("DELETE  FROM user WHERE id_user='"+id_user+"';")){
        qDebug()<<"Utilsateur a ete bien suppriméé";
        reloadData(ui->tableView);
    };
    qDebug()<<query.lastError();
    conn.connClose();

}



void MainwindowUser::on_searchUserEdit_textChanged(const QString &arg1)
{
    qDebug()<<arg1;
    Connection conn;
    if (!conn.connOpen()){
        qDebug() <<"Echec d'ouverture de base donnée";
        return ;
    }

    conn.connOpen();

    if(arg1.isEmpty()){
        qDebug()<<" champ de recherche vide";
        reloadData(ui->tableView);
    }else{
        if(arg1.contains(QRegularExpression("[^0-9]"))){
            model = new QSqlQueryModel();
            model->setQuery("SELECT * FROM user WHERE pseudo_user LIKE '%"+arg1+"%';");
            model->setHeaderData(0, Qt::Horizontal, tr("Id"));
            model->setHeaderData(1, Qt::Horizontal, tr("Pseudo"));
            model->setHeaderData(2, Qt::Horizontal, tr("Mot de passe"));
            ui->tableView->setModel(model);
        }else{
            qDebug()<<"champ rempli "+arg1;
            model = new QSqlQueryModel();
            model->setQuery("SELECT * FROM user WHERE id_user ='"+arg1+"';");
            model->setHeaderData(0, Qt::Horizontal, tr("Id"));
            model->setHeaderData(1, Qt::Horizontal, tr("Pseudo"));
            model->setHeaderData(2, Qt::Horizontal, tr("Mot de passe"));
            ui->tableView->setModel(model);
        }
    }

    conn.connClose();
}


void MainwindowUser::on_logoutBtn_clicked()
{

    confirmbox->setModal(true);
    confirmbox->exec();
}


void MainwindowUser::on_pushButton_clicked()
{

    showprofile->setIdLogged(id_user_logged);
    showprofile->setWidget();
    showprofile->setModal(true);
    showprofile->exec();
    reloadData(ui->tableView);
}


 void  MainwindowUser::setIdLogged(QString id){
     id_user_logged=id;
     qDebug() <<"UTILISATEUR CONNECTER A l'IDENTIFIANT "+ id;
}


void MainwindowUser::on_modifUserBtn_clicked()
{
     qDebug()<<"utilisateur a modifier "+id_user;


     ui->modifUserBtn->show();
     ui->confirmAddUserBtn->close();
     ui->confirmAddUserBtn->setDisabled(true);

      qDebug()<<id_user;
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
                       if(query.value(0).toString()==id_user){
                           query.prepare("UPDATE  user set pseudo_user=:pseudo_user,passwd_user=:passwd_user WHERE id_user='"+id_user+"';");
                           query.bindValue(":pseudo_user", pseudo_user);
                           query.bindValue(":passwd_user", passwd_user);
                           qDebug()<<query.exec();
                           qDebug()<<"dernier id ajoutéé "+id_user;
                           QSqlQuery *queryDroit=new QSqlQuery();

                           QString lastIdDroit;
                           if(ui->adminUserActivateBtn->isChecked()){
                               if(queryDroit->exec("UPDATE droit_accees set id_user="+id_user+",nom_droit='administrer user',statue_droit=1 WHERE id_user="+id_user+" AND nom_droit='administrer user' ;")){
                                  qDebug()<<queryDroit->exec("SELECT id_droit FROM droit_accees WHERE id_user="+id_user+" AND nom_droit='administrer user'");
                                  if( queryDroit->first()){
                                     lastIdDroit=queryDroit->value(0).toString();
                                  }

                               }
                           }else{
                               ui->adminUserActivateBtn->setChecked(false);
                               ui->AjouterUser->setChecked(false);
                               ui->VisualiserUser->setChecked(false);
                               ui->ModifierUser->setChecked(false);
                               ui->SupprimerUser->setChecked(false);
                            qDebug()<<"BOUTON NO CHECKER CE CODE SUIVANT DOIT ETRE MARCHER";
                               if(queryDroit->exec("UPDATE droit_accees set id_user="+id_user+",nom_droit='administrer user',statue_droit=0 WHERE id_user="+id_user+" AND nom_droit='administrer user';")){
                                 queryDroit->exec("SELECT id_droit FROM droit_accees WHERE id_user="+id_user+" AND nom_droit='administrer user'");
                                 qDebug()<<"BOUTON NO CHECKER CE CODE SUIVANT DOIT ETRE MARCHER";
                                  if( queryDroit->first()){
                                     lastIdDroit=queryDroit->value(0).toString();
                                        qDebug()<<"BOUTON NO CHECKER CE CODE SUIVANT DOIT ETRE MARCHER";
//                                     if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'READ',statue_action=0 WHERE id_droit="+lastIdDroit+" AND nom_action='READ';")){
//                                         qDebug()<<query.lastError();
//                                     }
//                                     if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'UPDATE',statue_action=0 WHERE id_droit="+lastIdDroit+" AND nom_action='UPDATE';")){
//                                         qDebug()<<query.lastError();
//                                     }
//                                     if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'DELETE',statue_action=0 WHERE id_droit="+lastIdDroit+" AND nom_action='DELETE';")){
//                                         qDebug()<<query.lastError();
//                                     }
                                  }
                               }
                               if(!query.exec("UPDATE  action set nom_action='CREATE',statue_action=0 WHERE id_droit="+lastIdDroit+" AND nom_action='CREATE';")){
                                   qDebug()<<query.lastError();
                               }

                           }
                                 qDebug()<<"ID DROIT "+lastIdDroit;

                          if(ui->AjouterUser->isChecked()){
                              if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'CREATE',statue_action=1  WHERE id_droit="+lastIdDroit+" AND nom_action= 'CREATE';")){
                                  qDebug()<<query.lastError();
                              }
                          }else{
                              if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'CREATE',statue_action=0  WHERE id_droit="+lastIdDroit+" AND nom_action= 'CREATE';")){
                                  qDebug()<<query.lastError();
                              }
                          }
                           QString lastIdActionCreate;


                           if(ui->VisualiserUser->isChecked()){
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'READ',statue_action=1 WHERE id_droit="+lastIdDroit+" AND nom_action= 'READ';")){
                                   qDebug()<<query.lastError();
                               }
                           }else{
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'READ',statue_action=0 WHERE id_droit="+lastIdDroit+" AND nom_action= 'READ';")){
                                   qDebug()<<query.lastError();
                               }
                           }
                           QString lastIdActionRead;

                           if(ui->ModifierUser->isChecked()){
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'UPDATE',statue_action=1 WHERE id_droit="+lastIdDroit+" AND nom_action= 'UPDATE';")){
                                   qDebug()<<query.lastError();
                               }
                           }else{
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'UPDATE',statue_action=0 WHERE id_droit="+lastIdDroit+" AND nom_action= 'UPDATE';")){
                                   qDebug()<<query.lastError();
                               }
                           }
                           QString lastIdActionUpdate;

                           if(ui->SupprimerUser->isChecked()){
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'DELETE',statue_action=1 WHERE id_droit="+lastIdDroit+" AND nom_action= 'DELETE';")){
                                   qDebug()<<query.lastError();
                               }
                           }else{
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'DELETE',statue_action=0 WHERE id_droit="+lastIdDroit+" AND nom_action= 'DELETE';")){
                                   qDebug()<<query.lastError();
                               }
                           }
                           QString lastIdAction;



                           if(ui->adminSiteActivateBtn->isChecked()){
                               if(queryDroit->exec("UPDATE droit_accees set id_user="+id_user+",nom_droit='administrer site',statue_droit=1  WHERE id_user="+id_user+" AND nom_droit='administrer site';")){
                                   queryDroit->exec("SELECT id_droit FROM droit_accees WHERE id_user="+id_user+" AND nom_droit='administrer site'");
                                    if( queryDroit->first()){
                                       lastIdDroit=queryDroit->value(0).toString();
                                    }
                               }
                           }else{
                               ui->adminSiteActivateBtn->setChecked(false);
                               ui->AjouterSite->setChecked(false);
                               ui->VisualiserSite->setChecked(false);
                               ui->ModifierSite->setChecked(false);
                               ui->SupprimerSite->setChecked(false);
                               if(queryDroit->exec("UPDATE droit_accees set id_user="+id_user+",nom_droit='administrer site',statue_droit=0  WHERE id_user="+id_user+" AND nom_droit='administrer site';")){
                                   queryDroit->exec("SELECT id_droit FROM droit_accees WHERE id_user="+id_user+" AND nom_droit='administrer site'");
                                   if( queryDroit->first()){
                                      lastIdDroit=queryDroit->value(0).toString();
                                   }
                               }
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'CREATE',statue_action=0 WHERE id_droit="+lastIdDroit+" AND nom_action='CREATE';")){
                                   qDebug()<<query.lastError();
                               }
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'READ',statue_action=0 WHERE id_droit="+lastIdDroit+" AND nom_action='READ';")){
                                   qDebug()<<query.lastError();
                               }
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'UPDATE',statue_action=0 WHERE id_droit="+lastIdDroit+" AND nom_action='UPDATE';")){
                                   qDebug()<<query.lastError();
                               }
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'DELETE',statue_action=0 WHERE id_droit="+lastIdDroit+" AND nom_action='DELETE';")){
                                   qDebug()<<query.lastError();
                               }
                           }

                           if(ui->AjouterSite->isChecked()){
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'CREATE',statue_action=1 WHERE id_droit="+lastIdDroit+" AND nom_action='CREATE';")){
                                   qDebug()<<query.lastError();
                               }
                           }else{
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'CREATE',statue_action=0 WHERE id_droit="+lastIdDroit+" AND nom_action='CREATE';")){
                                   qDebug()<<query.lastError();
                               }
                           }
                           QString lastIdActionCreates;

                           if(ui->VisualiserSite->isChecked()){
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'READ',statue_action=1 WHERE id_droit="+lastIdDroit+" AND nom_action='READ';")){
                                   qDebug()<<query.lastError();
                               }
                           }else{
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'READ',statue_action=0 WHERE id_droit="+lastIdDroit+" AND nom_action='READ';")){
                                   qDebug()<<query.lastError();
                               }
                           }
                           QString lastIdActionReads;

                           if(ui->ModifierSite->isChecked()){
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'UPDATE',statue_action=1 WHERE id_droit="+lastIdDroit+" AND nom_action='UPDATE';")){
                                   qDebug()<<query.lastError();
                               }
                           }else{
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'UPDATE',statue_action=0 WHERE id_droit="+lastIdDroit+" AND nom_action='UPDATE';")){
                                   qDebug()<<query.lastError();
                               }
                           }
                           QString lastIdActionUpdates;

                           if(ui->SupprimerSite->isChecked()){
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'DELETE',statue_action=1 WHERE id_droit="+lastIdDroit+" AND nom_action='DELETE';")){
                                   qDebug()<<query.lastError();
                               }
                           }else{
                               if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'DELETE',statue_action=0 WHERE id_droit="+lastIdDroit+" AND nom_action='DELETE';")){
                                   qDebug()<<query.lastError();
                               }
                           }
                           QString lastIdActions;

                       }else{
                           qDebug()<<"Utlisateur existe déja";
                       }
                   }else{

                   }
                }else{
                  qDebug()<<"Veuillez completer tous les champs ";
              }
          }
      }

      conn.connClose();
      reloadData(ui->tableView);
}






void MainwindowUser::on_toSiteGestionBtn_clicked()
{
    qDebug() <<id_user_logged;
    Connection conn;
    if (!conn.connOpen()){
        qDebug() <<"Echec d'ouverture de base donnée";
        return ;
    }
    conn.connOpen();

    QSqlQuery q;
    if(q.exec("SELECT * FROM user INNER JOIN droit_accees ON user.id_user='"+id_user_logged+"' AND droit_accees.id_user=user.id_user;")){
        while(q.next()){
            if(q.value(5).toString()=="administrer site" && q.value(6).toString()=="1"){
                 qDebug() <<"VOUS POUVEZ ADMINISTRER LE SITES";
                Mainwindowsite *site=new Mainwindowsite(id_user_logged);
                site->setIdLogged(id_user_logged);
                site->setWidget();
                site->show();


//                QRect screenGeometry = QApplication::desktop()->screenGeometry();
//                    int x = (screenGeometry.width() - site->width()) / 2;
//                    int y = (screenGeometry.height() - site->height()) / 2;
//                      site->move(x, y);

            }else if(q.value(5).toString()=="administrer site" && q.value(6).toString()=="0"){
                qDebug() <<"VOUS NE POUVEZ PAS ADMINISTRER LE SITES";
                MainwindowUser *user=new MainwindowUser(id_user_logged);
                user->setIdLogged(id_user_logged);
                user->setWidget();
                user->show();

//                QRect screenGeometry = QApplication::desktop()->screenGeometry();
//                    int x = (screenGeometry.width() - user->width()) / 2;
//                    int y = (screenGeometry.height() - user->height()) / 2;
//                      user->move(x, y);
            }
        }
         this->close();
    }else{
         qDebug() <<q.lastError();
    }
}


void MainwindowUser::setWidget(){
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
       qDebug()<<query.value(0).toString();
   }

    conn.connClose();
}

/*
query.prepare("UPDATE  user set pseudo_user=:pseudo_user,passwd_user=:passwd_user WHERE id_user='"+id_user+"';");
query.bindValue(":pseudo_user", pseudo_user);
query.bindValue(":passwd_user", passwd_user);
qDebug()<<query.exec();
qDebug()<<"dernier id ajoutéé "+id_user;
QSqlQuery *queryDroit=new QSqlQuery();

QString lastIdDroit;
if(ui->adminUserActivateBtn->isChecked()){
    if(queryDroit->exec("UPDATE droit_accees set id_user="+id_user+",nom_droit='administrer user',statue_droit=1  WHERE id_user="+id_user+";")){
       lastIdDroit=queryDroit->lastInsertId().toString();
        qDebug()<<"ID DROIT "+lastIdDroit;
    }
}else{
    if(queryDroit->exec("UPDATE droit_accees set id_user="+id_user+",nom_droit='administrer user',statue_droit=0  WHERE id_user="+id_user+";")){
       lastIdDroit=queryDroit->lastInsertId().toString();
        qDebug()<<"ID DROIT "+lastIdDroit;
    }
}


if(ui->AjouterUser->isChecked()){
   if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'CREATE',statue_action=1);")){
       qDebug()<<query.lastError();
   }
}else{
   if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'CREATE',statue_action=0);")){
       qDebug()<<query.lastError();
   }
}
QString lastIdActionCreate;


if(ui->VisualiserUser->isChecked()){
    if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'READ',statue_action=1);")){
        qDebug()<<query.lastError();
    }
}else{
    if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'READ',statue_action=0);")){
        qDebug()<<query.lastError();
    }
}
QString lastIdActionRead;

if(ui->ModifierUser->isChecked()){
    if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'UPDATE',statue_action=1);")){
        qDebug()<<query.lastError();
    }
}else{
    if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'UPDATE',statue_action=0);")){
        qDebug()<<query.lastError();
    }
}
QString lastIdActionUpdate;

if(ui->SupprimerUser->isChecked()){
    if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'DELETE',statue_action=1);")){
        qDebug()<<query.lastError();
    }
}else{
    if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'DELETE',statue_action=0);")){
        qDebug()<<query.lastError();
    }
}
QString lastIdAction;



if(ui->adminSiteActivateBtn->isChecked()){
    if(queryDroit->exec("UPDATE droit_accees set id_user="+id_user+",nom_droit='administrer site',statue_droit=1  WHERE id_user="+id_user+";")){
       lastIdDroit=queryDroit->lastInsertId().toString();
        qDebug()<<"ID DROIT "+lastIdDroit;
    }
}else{
    if(queryDroit->exec("UPDATE droit_accees set id_user="+id_user+",nom_droit='administrer site',statue_droit=0  WHERE id_user="+id_user+";")){
       lastIdDroit=queryDroit->lastInsertId().toString();
        qDebug()<<"ID DROIT "+lastIdDroit;
    }
}

if(ui->AjouterSite->isChecked()){
    if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'CREATE',statue_action=1);")){
        qDebug()<<query.lastError();
    }
}else{
    if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'CREATE',statue_action=0);")){
        qDebug()<<query.lastError();
    }
}
QString lastIdActionCreates;

if(ui->VisualiserSite->isChecked()){
    if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'READ',statue_action=1);")){
        qDebug()<<query.lastError();
    }
}else{
    if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'READ',statue_action=0);")){
        qDebug()<<query.lastError();
    }
}
QString lastIdActionReads;

if(ui->ModifierSite->isChecked()){
    if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'UPDATE',statue_action=1);")){
        qDebug()<<query.lastError();
    }
}else{
    if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'UPDATE',statue_action=0);")){
        qDebug()<<query.lastError();
    }
}
QString lastIdActionUpdates;

if(ui->SupprimerSite->isChecked()){
    if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'DELETE',statue_action=1);")){
        qDebug()<<query.lastError();
    }
}else{
    if(!query.exec("UPDATE  action set id_droit="+lastIdDroit+",nom_action= 'DELETE',statue_action=0);")){
        qDebug()<<query.lastError();
    }
}
QString lastIdActions;*/
