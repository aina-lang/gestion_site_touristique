#ifndef VOIRPLUSVISITEUR_H
#define VOIRPLUSVISITEUR_H

#include <QDialog>
#include "qsqlquery.h"
#include <QString>

namespace Ui {
class voirPlusVisiteur;
}

class voirPlusVisiteur : public QDialog
{
    Q_OBJECT

public:
    explicit voirPlusVisiteur(QString nomVisiteur,QString id_visiteur, QWidget *parent = 0);
    void getInfoVisiteur(QString id,QString nom, QString adresse, QString Provenance,QString nb_site,QString effectif_visiteur);
    void reloadList();
    QString id_visiteur;
    QString nomVisiteur;
    QString getNomVisiteur(QString nom);
    QSqlQuery *model;
    ~voirPlusVisiteur();

private:
    Ui::voirPlusVisiteur *ui;
};

#endif // VOIRPLUSVISITEUR_H
