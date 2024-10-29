#include "mainwindowsite.h"
#include <QSqlError>
#include "connection.h"
#include "siteAdmin/addsitebox.h"
#include "siteAdmin/addvisiteurbox.h"
#include "siteAdmin/ajoutvisite.h"
#include "ui_mainwindowsite.h"
#include "siteAdmin/voirplusvisiteur.h"
#include "siteAdmin/updatesitebox.h"
#include "siteAdmin/updatevisiteurbox.h"
#include "userAdmin/confirmbox.h"
#include "userAdmin/mainwindowuser.h"
#include <QtWidgets>
#include "siteAdmin/modifboxvisite.h"
#include "voirplussite.h"

Mainwindowsite::Mainwindowsite(QString id,QWidget *parent) :
   QWidget(parent),
    ui(new Ui::Mainwindowsite)
{
    this->index_visite=-1;
    this->index_site=-1;
    this->index_visiteur=-1;
    this->id_user_logged=id;
    ui->setupUi(this);
    ui->ajoutVisiteBtn->hide();
    ui->ajoutVisiteBtn_2->hide();

    ui->addSiteBtn->setDisabled(false);

    ui->addSiteBtn->setStyleSheet(css.addBtn);
    ui->updateSiteBtn->setStyleSheet(css.updateBtn);
    ui->deleteSiteBtn->setStyleSheet(css.deleteBtn);


    ui->addVisiteurBtn->setStyleSheet(css.addBtn);
    ui->updateVisiteurBtn->setStyleSheet(css.updateBtn);
    ui->deleteVisiteurBtn->setStyleSheet(css.deleteBtn);
    ui->ajoutVisiteBtn_2->setStyleSheet(css.addBtn);
    ui->ajoutVisiteBtn->setStyleSheet(css.addBtn);
    ui->modifVisiteBtn->setStyleSheet(css.updateBtn);
    ui->supprVisiteBtn->setStyleSheet(css.deleteBtn);
    ui->ajoutVisitePrincipalBtn->setStyleSheet(css.addBtn);

//    ui->tabWidget->tabShape()->setStyleSheet("QTabWidget::tab-bar{ background-color: #32cd32 );}");
//    ui->tabWidget->setStyleSheet("QTabWidget::tab-bar{ background-color: #32cd32};");
//    QPropertyAnimation animation=new QPropertyAnimation(ui->addSiteBtn,"geometry");
//    animation.setDuration(200);
//    animation.setStartValue(QRect(0,0,100,30));
//    animation.setEndValue(QRect(0,0,150,50));
//    connect(ui->addSiteBtn,&QPushButton::hovered,animation,&QPropertyAnimation::start);

    connect(ui->tabWidget, SIGNAL(tabBarClicked(int)),this, SLOT(tabWidget_tabBarClicked(int)));
    tabWidget_tabBarClicked(ui->tabWidget->currentIndex());

//    ui->tabWidget->setStyleSheet("QTabWidget{border:none;background-color: rgb(255, 255, 255);}");
//    ui->tabWidget->setStyleSheet("QTabBar::tab { background-color: #515D5A;}");
//    ui->tableView->setStyleSheet("QTableView{border-radius:10px;background-color: #c9e7e0;}");
//    ui->tableView_2->setStyleSheet("QTableView{border-radius:10px;background-color: #c9e7e0;}");
//     ui->tableView_3->setStyleSheet("QTableView{border-radius:10px;background-color:#c9e7e0;}");
    ui->voirPlusSiteBtn->hide();
    ui->voirPlusVisiteur->hide();
    ui->ajoutVisiteBtn->hide();
    ui->ajoutVisiteBtn_2->hide();
    Connection conn;
    if (!conn.connOpen()){
        qDebug() <<"Echec d'ouverture de base donnée";
        return ;
    }
    conn.connOpen();
    QSqlQuery qu;
    if(qu.exec("SELECT * FROM user INNER JOIN droit_accees ON user.id_user='"+id_user_logged+"' AND droit_accees.id_user=user.id_user;")){

        while(qu.next()){
             qDebug() <<"NOM DU DROIT EST :"+ qu.value(5).toString();
            if(qu.value(5).toString()=="administrer user" && qu.value(6).toString()=="0"){
                ui->toUserAdministrationBtn->hide();
               }
        }
    }
    QSqlQuery q;
    if(q.exec("SELECT * FROM action INNER JOIN droit_accees ON droit_accees.id_user='"+id_user_logged+"' AND droit_accees.nom_droit='administrer site' AND action.id_droit=droit_accees.id_droit;")){
       if(q.first()){
          if(q.value(7).toString()=="1"){
              q.exec("SELECT * FROM action INNER JOIN droit_accees ON droit_accees.id_user='"+id_user_logged+"' AND droit_accees.nom_droit='administrer site' AND action.id_droit=droit_accees.id_droit;");
              while(q.next()){
                  if(q.value(2).toString()=="CREATE" ){
                      qDebug() <<"VOUS  POUVEZ FAIRE L'ACTION CREATE SITES "+q.value(3).toString();
                      if(q.value(3).toString()=="1"){
                      }else{
                         ui->addSiteBtn->hide();
                         ui->addVisiteurBtn->hide();
                         ui->ajoutVisiteBtn->hide();
                         ui->ajoutVisiteBtn_2->hide();
                         ui->ajoutVisitePrincipalBtn->hide();
                         qDebug() <<"VOUS  POUVEZ PAS FAIRE L'ACTION CREATE SITES "+q.value(3).toString();
                      }
                  }

                  if(q.value(2).toString()=="READ" ){
                      qDebug() <<"VOUS  POUVEZ FAIRE L'ACTION READ SITES "+q.value(3).toString();
                      if(q.value(3).toString()=="1"){

                      }else{


                      }
                  }

                  if(q.value(2).toString()=="UPDATE" ){
                      qDebug() <<"VOUS  POUVEZ FAIRE L'ACTION UPDATE SITES "+q.value(3).toString();
                      if(q.value(3).toString()=="1"){
                         ui->updateSiteBtn->setDisabled(true);
                         ui->modifVisiteBtn->setDisabled(true);
                         ui->updateVisiteurBtn->setDisabled(true);

                      }else{
                         ui->updateSiteBtn->hide();
                         ui->modifVisiteBtn->hide();
                         ui->updateVisiteurBtn->hide();

                      }
                  }

                  if(q.value(2).toString()=="DELETE" ){
                      qDebug() <<"VOUS  POUVEZ FAIRE L'ACTION DELETE SITES "+q.value(3).toString();
                      if(q.value(3).toString()=="1"){
                        ui->deleteSiteBtn->setDisabled(true);
                        ui->supprVisiteBtn->setDisabled(true);
                        ui->deleteVisiteurBtn->setDisabled(true);
                      }else{
                       ui->deleteSiteBtn->hide();
                       ui->supprVisiteBtn->hide();
                       ui->deleteVisiteurBtn->hide();
                      }
                  }
              }
          }else{
              qDebug() <<"VOUS NE POUVEZ PAS ADMINISTRER DES SITES";

          }
       }
    }else{
         qDebug() <<q.lastError();
         ui->toUserAdministrationBtn->setDisabled(true);
    }
    reloadData(ui->tableView);
    reloadDataVisiteur(ui->tableView_2);
    reloadDataVisite(ui->tableView_3);
    qDebug() <<"ID DE L'USER EST  "+id_user_logged;
}

Mainwindowsite::~Mainwindowsite()
{
    delete ui;
}

void Mainwindowsite::reloadData(QTableView *table){
    Connection conn;
    if (!conn.connOpen()){
        qDebug() <<"Echec d'ouverture de base donnée";
        return ;
    }
    conn.connOpen();
    model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM site");
    model->setHeaderData(0, Qt::Horizontal, tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, tr("Nom site"));
    model->setHeaderData(2, Qt::Horizontal, tr("Lieu du site"));
     model->setHeaderData(3, Qt::Horizontal, tr("Tarif journalier"));
//     ui->tableView->horizontalHeader()->setStyleSheet("QHeaderView::section { background-color:#ffffff;}");
//     ui->tableView->verticalHeader()->setStyleSheet("QHeaderView::section { background-color: #ffffff;}");
//     ui->tabWidget->setStyleSheet("QTabBar::tab { background-color: rgb(169,169,169);color:black; }");
//     ui->tabWidget->setStyleSheet("QTabBar::tab:selected { background-color: rgb(211,211,211); }");
     ui->tableView->setColumnWidth(0, 20);
     ui->tableView_2->setColumnWidth(0, 20);

    table->setModel(model);
    qDebug() <<"DATA RELOADED";
    qDebug() <<model->rowCount();
//    ui->tableView->setColumnHidden(0,true);
    conn.connClose();
}

void Mainwindowsite::reloadDataVisiteur(QTableView *table){
    Connection conn;
    if (!conn.connOpen()){
        qDebug() <<"Echec d'ouverture de base donnée";
        return ;
    }
    conn.connOpen();
    model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM visiteur");
    model->setHeaderData(0, Qt::Horizontal, tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, tr("Nom visiteur"));
    model->setHeaderData(2, Qt::Horizontal, tr("Adresse"));
    model->setHeaderData(3, Qt::Horizontal, tr("Provenance"));
    ui->tableView->setColumnWidth(0, 20);
    ui->tableView_2->setColumnWidth(0, 20);
//    ui->tableView_2->horizontalHeader()->setStyleSheet("QHeaderView::section { background-color: rgb(86, 98, 112);}");
//    ui->tableView_2->verticalHeader()->setStyleSheet("QHeaderView::section { background-color: rgb(86, 98, 112);}");
//    ui->tabWidget->setStyleSheet("QTabBar::tab { background-color: rgb(169,169,169);color:black; }");
//    ui->tabWidget->setStyleSheet("QTabBar::tab:selected { background-color: rgb(211,211,211); }");
    //ui->tableView->horizontalHeader()->setStyleSheet("QHeaderView::section { color: #32cd32 );}");
    //ui->tableView->horizontalHeader()->setStyleSheet("QHeaderView::section { color: #228b22 );}");

    table->setModel(model);
    qDebug() <<"DATA RELOADED";
    qDebug() <<model->rowCount();
//    ui->tableView_2->setColumnHidden(0,true);
    conn.connClose();
}

void Mainwindowsite::reloadDataVisite(QTableView *table)
{
    Connection conn;
    if (!conn.connOpen()){
        qDebug() <<"Echec d'ouverture de base donnée";
        return ;
    }
    conn.connOpen();
    model = new QSqlQueryModel();
    QSqlQuery q;
    QString sql ="SELECT * FROM Visiteur,site INNER JOIN visite ON site.id_site=visite.id_site AND visiteur.id_visiteur=visite.id_visiteur;";
    q.prepare(sql);
    model->setQuery(sql);
    model->setHeaderData(0, Qt::Horizontal, tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, tr("Nom du visiteur"));
    model->setHeaderData(1, Qt::Horizontal, tr("Nom du visiteur"));
    model->setHeaderData(1, Qt::Horizontal, tr("Nom du visiteur"));
    ui->tableView->setColumnWidth(0, 20);
    ui->tableView_2->setColumnWidth(0, 20);
//    ui->tableView_3->horizontalHeader()->setStyleSheet("QHeaderView::section { background-color: rgb(86, 98, 112);}");
//    ui->tableView_3->verticalHeader()->setStyleSheet("QHeaderView::section { background-color: rgb(86, 98, 112);}");
//    ui->tabWidget->setStyleSheet("QTabBar::tab { background-color: rgb(169,169,169);color:black; }");
//    ui->tabWidget->setStyleSheet("QTabBar::tab:selected { background-color: rgb(211,211,211); }");
    table->setModel(model);
    qDebug() <<"DATA RELOADED";
    qDebug() <<model->rowCount();
    while(q.next()){
        qDebug()<< q.value(2).toInt() +"bhdfkdfk";
    }
    ui->tableView_3->setColumnHidden(0,true);
    ui->tableView_3->setColumnHidden(4,true);
    ui->tableView_3->setColumnHidden(8,true);
    ui->tableView_3->setColumnHidden(9,true);
    conn.connClose();
}
void Mainwindowsite::on_addUserBtn_clicked()
{
   addsitebox->setModal(true);
   addsitebox->exec();
   reloadData(ui->tableView);
   reloadDataVisiteur(ui->tableView_2);
   reloadDataVisite(ui->tableView_3);
}


void Mainwindowsite::setIdLogged(QString id){
    id_user_logged=id;
}

void Mainwindowsite::on_updateUserBtn_clicked()
{

}


void Mainwindowsite::on_deleteUserBtn_clicked()
{

}


void Mainwindowsite::on_exportToPdfBtn_clicked()
{

}


void Mainwindowsite::on_logoutBtn_clicked()
{
    confirmbox->setModal(true);
    confirmbox->exec();
}


void Mainwindowsite::on_pushButton_clicked()
{
    showprofile->setModal(true);
    showprofile->exec();
}
void Mainwindowsite::on_toUserAdministrationBtn_clicked()
{

    this->close();
    MainwindowUser *user = new MainwindowUser(id_user_logged);
    user->setWidget();
    user->show();

//    QRect screenGeometry = QApplication::desktop()->screenGeometry();
//    int x = (screenGeometry.width() - user->width()) / 2;
//    int y = (screenGeometry.height() - user->height()) / 2;
//    user->move(x, y);
}


void Mainwindowsite::setWidget(){
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

void Mainwindowsite::on_addSiteBtn_clicked()
{
   addSiteBox *addsite = new addSiteBox(this);
   addsite->setModal(true);
   addsite->exec();
   ui->updateSiteBtn->setDisabled(true);
   ui->deleteSiteBtn->setDisabled(true);
   reloadData(ui->tableView);
   reloadDataVisiteur(ui->tableView_2);
   reloadDataVisite(ui->tableView_3);
}


void Mainwindowsite::on_addVisiteurBtn_clicked()
{
    addVisiteurBox *addvisiteur = new addVisiteurBox(this);
    addvisiteur->setModal(true);
    addvisiteur->exec();
    ui->updateVisiteurBtn->setDisabled(true);
    ui->ajoutVisiteBtn_2->hide();
    reloadDataVisiteur(ui->tableView_2);
}

void Mainwindowsite::on_tableView_clicked(const QModelIndex &index)
{
    int rowSelected=index.row();
    this->index_site = rowSelected;
    qDebug()<<this->index_site;
    QString id=ui->tableView->model()->data(ui->tableView->model()->index(rowSelected,0)).toString();
    //qDebug() <<id;

    this->id_site=ui->tableView->model()->data(ui->tableView->model()->index(rowSelected,0)).toString();
    this->nom_site=ui->tableView->model()->data(ui->tableView->model()->index(rowSelected,1)).toString();
    this->lieu_site=ui->tableView->model()->data(ui->tableView->model()->index(rowSelected,2)).toString();
    this->tarif_site=ui->tableView->model()->data(ui->tableView->model()->index(rowSelected,3)).toString();
    Connection conn;
    conn.connOpen();
    QSqlQuery q;
    q.prepare("SELECT * FROM site,visiteur INNER JOIN visite ON site.id_site=visite.id_site AND visiteur.id_visiteur=visite.id_visiteur AND site.id_site = "+id+";");
    QSqlQuery propos_site;
    propos_site.prepare("SELECT * FROM site WHERE id_site ="+id+";");
    QSqlQuery Montant;
    Montant.prepare("SELECT SUM(visite.nb_jours * site.tarif_journalier) FROM site,visiteur INNER JOIN visite ON site.id_site=visite.id_site AND visiteur.id_visiteur=visite.id_visiteur AND site.id_site = "+id+";");
    QSqlQuery nb_total_visite;
    nb_total_visite.prepare("SELECT COUNT(*) FROM visite");
        QSqlQuery effectVisiteur;
        effectVisiteur.prepare("SELECT COUNT(*) FROM site,visiteur INNER JOIN visite ON site.id_site=visite.id_site AND visiteur.id_visiteur=visite.id_visiteur AND site.id_site = "+id+";");
        effectVisiteur.exec();
    qDebug()<<propos_site.exec();
    qDebug()<<propos_site.lastError();
    qDebug()<<q.exec();
    qDebug()<<q.lastError();
    qDebug()<<nb_total_visite.exec();
    qDebug()<<nb_total_visite.lastError();
    qDebug()<<Montant.exec();
    qDebug()<<Montant.lastError();
    if(Montant.exec() && nb_total_visite.exec() && effectVisiteur.exec()){
        while (Montant.next()&& nb_total_visite.next() && effectVisiteur.next()) {
            QSqlQuery effectTotalVisiteur;
            effectTotalVisiteur.prepare("SELECT COUNT( DISTINCT visiteur.id_visiteur) FROM site,visiteur INNER JOIN visite ON site.id_site=visite.id_site AND visiteur.id_visiteur=visite.id_visiteur AND site.id_site = "+id+";");
          if(effectTotalVisiteur.exec()){
            while(effectTotalVisiteur.next()){
                ui->effectifTotalVisiteurlbl->setText(effectTotalVisiteur.value(0).toString());
            }

            qDebug()<<nb_total_visite.value(0).toInt();
            ui->nb_totalVisiteurLbl->setText(effectVisiteur.value(0).toString());
            ui->montantTotalLbl->setText(Montant.value(0).toString());


        }else{
            ui->effectifTotalVisiteurlbl->setText("0");
            ui->nb_totalVisiteurLbl->setText("0");
            ui->montantTotalLbl->setText("0");
    }

    while(propos_site.next()){
        qDebug()<<propos_site.value(1).toString()+"pledeprrhzero";
        ui->nomSiteLabel->setText(propos_site.value(1).toString());
        ui->lieuSiteLabel->setText(propos_site.value(2).toString());
        ui->tarifSiteLbl->setText(propos_site.value(3).toString());
    }

    conn.connClose();
    qDebug() <</*id_site+" "+*/nom_site+" "+lieu_site+" ";
    ui->ajoutVisiteBtn->show();
    ui->updateSiteBtn->setDisabled(false);
    ui->deleteSiteBtn->setDisabled(false);
    ui->voirPlusSiteBtn->show();

    }
}
}
void Mainwindowsite::on_tableView_2_clicked(const QModelIndex &index)
{
    int rowSelected=index.row();
    this->index_visiteur=rowSelected;
    qDebug()<<this->index_visiteur;
    QString id=ui->tableView_2->model()->data(ui->tableView_2->model()->index(rowSelected,0)).toString();
    //qDebug() <<id;

    Connection conn;
    conn.connOpen();
    this->id_visiteur=ui->tableView_2->model()->data(ui->tableView_2->model()->index(rowSelected,0)).toString();
    this->nom_visiteur=ui->tableView_2->model()->data(ui->tableView_2->model()->index(rowSelected,1)).toString();
    this->adresse_visiteur=ui->tableView_2->model()->data(ui->tableView_2->model()->index(rowSelected,2)).toString();
    this->provenance=ui->tableView_2->model()->data(ui->tableView_2->model()->index(rowSelected,3)).toString();
    qDebug()<<id;
    QSqlQuery q;
    q.prepare("SELECT * FROM site,visiteur INNER JOIN visite ON site.id_site=visite.id_site AND visiteur.id_visiteur=visite.id_visiteur AND visiteur.id_visiteur = "+id+";");
    q.exec();
    QSqlQuery effectVisiteur;
    effectVisiteur.prepare("SELECT COUNT(DISTINCT nom_visiteur) FROM visiteur;");
    effectVisiteur.exec();
    QSqlQuery nb_site_visite;
    nb_site_visite.prepare("SELECT COUNT( DISTINCT nom_site) FROM site,visiteur INNER JOIN visite ON site.id_site=visite.id_site AND visiteur.id_visiteur=visite.id_visiteur AND visiteur.id_visiteur = "+id+";");
    nb_site_visite.exec();
    while(q.next() && nb_site_visite.next() && effectVisiteur.next()){
        ui->effectifTotalVisiteurlbl_2->setText(effectVisiteur.value(0).toString());
        ui->nomVisiteurlbl->setText(q.value(5).toString());
        ui->id_label->setText(q.value(4).toString());
        ui->id_label->hide();
        ui->adresseVisiteurlbl_2->setText(q.value(6).toString());
        ui->provenancelbl->setText(q.value(7).toString());
        ui->nbrTotalSiteVisitelbl->setText(nb_site_visite.value(0).toString());
    }
    ui->voirPlusVisiteur->show();
    ui->ajoutVisiteBtn_2->show();
    ui->updateVisiteurBtn->setDisabled(false);
    ui->deleteVisiteurBtn->setDisabled(false);
    ui->addVisiteurBtn->setDisabled(false);
    conn.connClose();
}

void Mainwindowsite::on_ajoutVisiteBtn_clicked()
{
    ajoutVisite * ajout_visite = new ajoutVisite(this->index_site,this->index_visiteur,this);
    ajout_visite->setModal(true);
    ajout_visite->exec();
    ui->updateSiteBtn->setDisabled(true);
    ui->deleteSiteBtn->setDisabled(true);
    reloadData(ui->tableView);
    reloadDataVisiteur(ui->tableView_2);
    reloadDataVisite(ui->tableView_3);
}


void Mainwindowsite::on_voirPlusVisiteur_clicked()
{
    voirPlusVisiteur *voirVisiteur = new voirPlusVisiteur(ui->nomVisiteurlbl->text(),ui->id_label->text(),this);
    voirVisiteur->getInfoVisiteur(ui->id_label->text(),ui->nomVisiteurlbl->text(),ui->adresseVisiteurlbl_2->text(),ui->provenancelbl->text(),ui->nbrTotalSiteVisitelbl->text(),ui->effectifTotalVisiteurlbl_2->text());
    voirVisiteur->setModal(true);
    voirVisiteur->exec();
}
void Mainwindowsite::tabWidget_tabBarClicked(int index){

    QString tabname = ui->tabWidget->tabText(index);
    this->index_tab=index;
    if(index == 0 ){
        ui->searchEdit->setText(this->current_text_site_search);
        ui->ajoutVisiteBtn->hide();
        ui->updateSiteBtn->setDisabled(true);
        ui->deleteSiteBtn->setDisabled(true);

        ui->searchEdit->setPlaceholderText("Entrez un identifiant ou un nom ");
         reloadDataVisiteur(ui->tableView_2);
         reloadDataVisite(ui->tableView_3);
//         index=index+1;
    }

     else if(index == 1){
        ui->searchEdit->setText(this->current_text_visiteur_search);
        ui->ajoutVisiteBtn_2->hide();
        ui->updateVisiteurBtn->setDisabled(true);
        ui->deleteVisiteurBtn->setDisabled(true);
        ui->searchEdit->setPlaceholderText("Entrez un identifiant ou un nom ou provenance");
        reloadData(ui->tableView);
        reloadDataVisite(ui->tableView_3);
//        index=index-1;
    }else{
        qDebug()<<"yesss";
        ui->searchEdit->setText("");
        tabname = "liste des visites";

        ui->searchEdit->setPlaceholderText("");
//        ui->searchlbl->hide();
//        ui->searchEdit->hide();
//        ui->searchEdit->set
//        ui->comboBox->setView(new QListView);
//        connexion conn;
//        conn.bddOpen();
//        QSqlQueryModel *model = new QSqlQueryModel();
//           QString sql;
//           sql = "select pseudo_user From user;";
//           QSqlQuery* query = new QSqlQuery(conn.bdd);
//           query->prepare(sql);
//           if(!query->exec()){
//               qDebug () << "Query Erorr: " << query->lastError();
//           }else{
//               qDebug () << "Query Successful: " << query->lastQuery();
//           }
//           model->setQuery(*query);
//           ui->comboBox->setModel(model);

    }

}

void Mainwindowsite::on_searchEdit_textChanged(const QString &arg1)
{
    if(index_tab == 0){
        this->current_text_site_search = arg1;
    }else if(index_tab == 1){
        this->current_text_visiteur_search = arg1;
    }else if(index_tab == 2){
        ui->searchlbl->setText("");
        ui->searchEdit->hide();
    }
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
        reloadDataVisiteur(ui->tableView_2);
        reloadDataVisite(ui->tableView_3);
    }else{
            if(index_tab == 0){
               current_text_site_search=ui->searchEdit->text();
               model = new QSqlQueryModel();
               model->setQuery("SELECT * FROM site WHERE nom_site LIKE '%"+arg1+"%' OR id_site = '"+arg1+"';");
               model->setHeaderData(0, Qt::Horizontal, tr("Id"));
               model->setHeaderData(1, Qt::Horizontal, tr("Nom du site"));
               model->setHeaderData(2, Qt::Horizontal, tr("lieu"));
               model->setHeaderData(3, Qt::Horizontal, tr("tarif journalier"));
               ui->tableView->setModel(model);
//               ui->tableView->setColumnHidden(0,true);
            }if(index_tab == 1){
                current_text_visiteur_search = ui->searchEdit->text();;
                model = new QSqlQueryModel();
                model->setQuery("SELECT * FROM visiteur WHERE nom_visiteur LIKE '%"+arg1+"%' OR provenance LIKE '%"+arg1+"%' OR id_visiteur = '"+arg1+"';");

                model->setHeaderData(0, Qt::Horizontal, tr("Id"));
                model->setHeaderData(1, Qt::Horizontal, tr("Nom du visiteur"));
                model->setHeaderData(2, Qt::Horizontal, tr("Adresse"));
                model->setHeaderData(3, Qt::Horizontal, tr("Provenance"));
                ui->tableView_2->setModel(model);
//                ui->tableView_2->setColumnHidden(0,true);
            }
    }
    conn.connClose();
 }


void Mainwindowsite::on_updateSiteBtn_clicked()
{
    updateSiteBox *update = new updateSiteBox(this);
    update->getInfoSite(nom_site,lieu_site,tarif_site);
    update->Id_site=update->getIdSIte(id_site);
    update->setModal(true);
    update->exec();
    ui->updateSiteBtn->setDisabled(true);
    ui->deleteSiteBtn->setDisabled(true);
    ui->ajoutVisiteBtn->hide();
    reloadData(ui->tableView);
    reloadDataVisite(ui->tableView_3);
}

void Mainwindowsite::on_deleteSiteBtn_clicked()
{
    Connection conn;
    conn.connOpen();
    QSqlQuery q;
    q.prepare("DELETE FROM site WHERE id_site ="+id_site+" ");
    int ret = QMessageBox::question(this, tr("Confirm"), tr("Are you sure?"), QMessageBox::Yes | QMessageBox::No);
    if (ret == QMessageBox::Yes)
    {
        q.exec();
    }
    else
    {

    }
    reloadData(ui->tableView);
    reloadDataVisite(ui->tableView_3);
}



void Mainwindowsite::on_updateVisiteurBtn_clicked()
{
    updateVisiteurBox *update = new updateVisiteurBox(this);
    update->getInfoVisiteur(nom_visiteur,adresse_visiteur,provenance);
    update->id_visiteur = update->getIdVisiteur(id_visiteur);
    update->setModal(true);
    update->exec();
    ui->ajoutVisiteBtn_2->hide();
    ui->updateVisiteurBtn->setDisabled(true);
    ui->deleteVisiteurBtn->setDisabled(true);
    reloadDataVisiteur(ui->tableView_2);
    reloadDataVisite(ui->tableView_3);
}

void Mainwindowsite::on_deleteVisiteurBtn_clicked()
{
    Connection conn;
    conn.connOpen();
    QSqlQuery q;
    q.prepare("DELETE FROM visiteur WHERE id_visiteur = "+id_visiteur+"");
    int ret = QMessageBox::question(this, tr("Confirm"), tr("Are you sure?"), QMessageBox::Yes | QMessageBox::No);
    if (ret == QMessageBox::Yes)
    {
        q.exec();
    }
    else
    {

    }
    conn.connClose();
    reloadDataVisiteur(ui->tableView_2);
    reloadDataVisite(ui->tableView_3);
}

void Mainwindowsite::on_ajoutVisiteBtn_2_clicked()
{
    ajoutVisite * ajout_visite = new ajoutVisite(this->index_site,this->index_visiteur,this);
    ajout_visite->setModal(true);
    ajout_visite->exec();
    reloadData(ui->tableView);
    reloadDataVisiteur(ui->tableView_2);
    reloadDataVisite(ui->tableView_3);
}

void Mainwindowsite::on_ajoutVisitePrincipalBtn_clicked()
{
    ajoutVisite * ajout_visite = new ajoutVisite(this->index_site,this->index_visiteur,this);
    ajout_visite->setModal(true);
    ajout_visite->exec();
    reloadData(ui->tableView);
    reloadDataVisiteur(ui->tableView_2);
    reloadDataVisite(ui->tableView_3);
}

void Mainwindowsite::on_tableView_3_clicked(const QModelIndex &index)
{
    int rowSelected=index.row();
    qDebug()<<this->index_site;
    this->index_visite = rowSelected;

    this->id_visite=ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,0)).toString();
//    date_visite=ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,4)).toString();
    id_visiteur=ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,8)).toString();
    qDebug() <<"ID VISITEUR "+id_visiteur;
    this->id_site_visite=ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,4)).toString();

    this->nom_visiteur_visite=ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,1)).toString();
    this->site_visiteur_visite=ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,5)).toString();
    this->nbj_visite=ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,10)).toString();
    this->date_visite=ui->tableView_3->model()->data(ui->tableView_3->model()->index(rowSelected,11)).toString();
    qDebug() <<id_site_visite;
    ui->modifVisiteBtn->setDisabled(false);
    ui->supprVisiteBtn->setDisabled(false);
}

void Mainwindowsite::on_modifVisiteBtn_clicked()
{
    qDebug()<<this->id_visite;
     qDebug()<<"CECI EST L'ID SITE "+this->id_site;
    modifBoxVisite *modif_visite = new modifBoxVisite(this->date_visite,this->id_visite,this->id_site_visite,this->id_visiteur,this);
    modif_visite->setModal(true);
    modif_visite->getNbj(this->nbj_visite);
    modif_visite->exec();
    ui->modifVisiteBtn->setDisabled(true);
    ui->supprVisiteBtn->setDisabled(true);
    reloadData(ui->tableView);
    reloadDataVisiteur(ui->tableView_2);
    reloadDataVisite(ui->tableView_3);
}

void Mainwindowsite::on_supprVisiteBtn_clicked()
{
    Connection conn;
    conn.connOpen();

    QSqlQuery q;
    q.prepare("DELETE FROM visite WHERE date_visite='"+date_visite+"'");
    int ret = QMessageBox::question(this, tr("Confirm"), tr("Are you sure?"), QMessageBox::Yes | QMessageBox::No);
    if (ret == QMessageBox::Yes)
    {
        q.exec();
    }
    else
    {

    }

    reloadData(ui->tableView);
    reloadDataVisiteur(ui->tableView_2);
    reloadDataVisite(ui->tableView_3);
}

void Mainwindowsite::on_voirPlusSiteBtn_clicked()
{
    voirPlusSite *voirplussite = new voirPlusSite(this->id_site,this->nom_site,this);
    voirplussite->getInfoSite(ui->id_site_lbl->text(),ui->nomSiteLabel->text(),ui->lieuSiteLabel->text(),ui->tarifSiteLbl->text(),ui->nb_totalVisiteurLbl->text(),ui->effectifTotalVisiteurlbl->text(),ui->montantTotalLbl->text());
    voirplussite->setModal(true);
    voirplussite->exec();
    ui->voirPlusSiteBtn->hide();
}
