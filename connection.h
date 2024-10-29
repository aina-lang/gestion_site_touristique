#ifndef CONNECTION_H
#define CONNECTION_H
#include <QtSql>
class Connection{

    public:
        Connection();
        QSqlDatabase mydb;
        void connClose(){
            mydb.close();
            mydb.removeDatabase(QSqlDatabase::defaultConnection);
        }

        bool connOpen(){
            mydb = QSqlDatabase::addDatabase("QSQLITE");
            mydb.setDatabaseName("D:\\projet_qt\\GESTION_SITE_TOURISTIQUES\\database.db");
            if (!mydb.open()){
               // qDebug() << "echec d'ouverture de bdd"<<mydb.databaseName();
                return false;
             }else{
                //qDebug()<<"Connected..."<<mydb.databaseName();
                QSqlQuery * query=new QSqlQuery(this->mydb);
                QString Qvisiteur="CREATE TABLE IF NOT EXISTS 'visiteur' ("
                                  "'id_visiteur'	INTEGER NOT NULL,"
                                  "'nom_visiteur'	VARCHAR(250),"
                                  "'addresse'	VARCHAR(250),"
                                  "'provenance'	VARCHAR(250),"
                                  "PRIMARY KEY('id_visiteur' AUTOINCREMENT));";

                QString Qvisite="CREATE TABLE IF NOT EXISTS 'visite' (\
                            'id_visiteur'	INTEGER,\
                            'id_site'	INTEGER,\
                            'nb_jours'	INTEGER,\
                            'date_visite'	VARCHAR(250),\
                            FOREIGN KEY('id_visiteur') REFERENCES 'visiteur'('id_visiteur'),\
                            FOREIGN KEY('id_site') REFERENCES 'site'('id_site')\
                        )";

                QString Qsite="CREATE TABLE IF NOT EXISTS 'site' ("
                              "'id_site'	INTEGER NOT NULL,"
                              "'nom_site'	VARCHAR(250),'lieu_site' VARCHAR(250),'tarif_journalier'"
                              "	FLOAT,PRIMARY KEY('id_site' AUTOINCREMENT));";


                QString QAction="CREATE TABLE IF NOT EXISTS 'action' ("
                                "'id_droit'	INTEGER NOT NULL ,"
                                "'id_action' INTEGER NOT NULL ,"
                                "'nom_action'	VARCHAR(250),"
                                "'statue_action' BIT,"
                                " PRIMARY KEY('id_action' AUTOINCREMENT),"
                                "FOREIGN KEY('id_droit') REFERENCES 'droit_accees'('id_droit')"
                                ");";

                QString Quser="CREATE TABLE IF NOT EXISTS 'user' ("
                              "'id_user' INTEGER NOT NULL,"
                              "'pseudo_user' VARCHAR(250),"
                              "'passwd_user' VARCHAR(250),"
                              "PRIMARY KEY('id_user' AUTOINCREMENT));";

                QString QDroitDacees="CREATE TABLE IF NOT EXISTS 'droit_accees' ("
                                    "'id_user'	INTEGER NOT NULL ,"
                                    "'id_droit'	INTEGER NOT NULL ,"
                                    "'nom_droit'	VARCHAR(250),"
                                    "'statue_droit' BIT,"
                                    " PRIMARY KEY('id_droit'  AUTOINCREMENT),"
                                    "FOREIGN KEY('id_user') REFERENCES 'user'('id_user'));";


                

                if(query->exec(Qvisite)){
                 //   qDebug() <<"Table visite bien créee";
                }else{
                //    qDebug() <<query->lastError()<<"Echec de creration de la table visite";
                }
                if(query->exec(Qsite)){
                 //   qDebug() <<"Table bien créee site";
                }else{
                //    qDebug() <<query->lastError()<<"Echec de creration de la table site";
                }

                if(query->exec(Qvisiteur)){
                //    qDebug() <<"Table bien créee visiteur";
                }else{
                //    qDebug() <<query->lastError()<<"Echec de creration de la table visiteur";
                }

                if(query->exec(Quser)){
                   // qDebug() <<"Table User bien créee";
                }else{
                    //() <<query->lastError()<<"Echec de creration de la table user";
                }

                if(query->exec(QDroitDacees)){
                    qDebug() <<"Table bien créee DroitDacees";
                }else{
                   qDebug() <<query->lastError()<<"Echec de creration de la table DroitDacees";
                }

                if(query->exec(QAction)){
                    qDebug() <<"Table bien ACTION créee ";
                }else{
                    qDebug() <<query->lastError()<<"Echec de creration de la table ";
                }

                return true;
           }
      }
};




#endif // CONNECTION_H
