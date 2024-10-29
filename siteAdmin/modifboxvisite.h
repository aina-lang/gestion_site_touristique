#ifndef MODIFBOXVISITE_H
#define MODIFBOXVISITE_H

#include <QDialog>

namespace Ui {
class modifBoxVisite;
}

class modifBoxVisite : public QDialog
{
    Q_OBJECT

public:
    explicit modifBoxVisite(QString date_visite,QString id_visite,QString id_site,QString id_visiteur,QWidget *parent = 0);
    QStringList list_id_site;
    void getNbj(QString nbj);
    QString date_visite;
    QStringList list_id_visiteur;
    QString index_visite;
    QString id_visiteur;
    QString id_site;
    QString id_visiteur_2;
    QString id_site_2;

    ~modifBoxVisite();

private slots:
    void on_confirmUpdatevisiteBtn_clicked();

    void on_comboBox_2_activated(int index);



    void on_comboBox_activated(int index);

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_nbjrEdit_textChanged(const QString &arg1);

private:
    Ui::modifBoxVisite *ui;
};

#endif // MODIFBOXVISITE_H
