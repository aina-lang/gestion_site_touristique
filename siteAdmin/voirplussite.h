#ifndef VOIRPLUSSITE_H
#define VOIRPLUSSITE_H

#include <QDialog>

namespace Ui {
class voirPlusSite;
}

class voirPlusSite : public QDialog
{
    Q_OBJECT

public:
    explicit voirPlusSite(QString nom_site,QString id_site,QWidget *parent = 0);
    void getInfoSite(QString id,QString nomSite,QString lieu,QString tarif,QString nbT_visites, QString effects,QString montant);
    QString id_site;
    QString nom_site;
    void reloadListSite();
    ~voirPlusSite();

private:
    Ui::voirPlusSite *ui;
};

#endif // VOIRPLUSSITE_H
