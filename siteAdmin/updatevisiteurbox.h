#ifndef UPDATEVISITEURBOX_H
#define UPDATEVISITEURBOX_H

#include <QDialog>

namespace Ui {
class updateVisiteurBox;
}

class updateVisiteurBox : public QDialog
{
    Q_OBJECT

public:
    explicit updateVisiteurBox(QWidget *parent = 0);
    void getInfoVisiteur(QString nom, QString   adresse, QString provenance);
    QString getIdVisiteur(QString id);
    QString id_visiteur;
    ~updateVisiteurBox();

private slots:

    void on_confirmUpdateSiteBtn_clicked();

    void on_nomVisiteurEdit_textChanged(const QString &arg1);

    void on_adresseVisiteurEdit_textChanged(const QString &arg1);

    void on_provenance_textChanged(const QString &arg1);

private:
    Ui::updateVisiteurBox *ui;
};

#endif // UPDATEVISITEURBOX_H
