#ifndef AJOUTVISITE_H
#define AJOUTVISITE_H

#include <QDialog>
#include <QString>

namespace Ui {
class ajoutVisite;
}

class ajoutVisite : public QDialog
{
    Q_OBJECT

public:
    explicit ajoutVisite(int index_site, int index_visiteur,QWidget *parent = 0);
    void combobox_curentText(QString currentText);
    void combobox_2curentText(QString currentText);
    QStringList list_id_site;
    QStringList list_id_visiteur;
    QString index_site;
    QString id_visiteur;
    QString id_site;
    ~ajoutVisite();

private slots:
    void on_confirmAddvisiteBtn_clicked();

    void on_comboBox_currentTextChanged();

    void on_comboBox_2_currentTextChanged();

    void on_comboBox_activated(int index);

    void on_comboBox_2_activated(int index);

    void on_nbjrEdit_textChanged(const QString &arg1);

    void on_dateVisiteEdit_textChanged(const QString &arg1);

private:
    Ui::ajoutVisite *ui;
};

#endif // AJOUTVISITE_H
