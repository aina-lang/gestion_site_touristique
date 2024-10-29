#ifndef UPDATESITEBOX_H
#define UPDATESITEBOX_H

#include <QDialog>

namespace Ui {
class updateSiteBox;
}

class updateSiteBox : public QDialog
{
    Q_OBJECT

public:
    explicit updateSiteBox(QWidget *parent = nullptr);
    void getInfoSite(QString nom, QString lieu, QString tarif);
    QString getIdSIte(QString id);
    QString Id_site;
    ~updateSiteBox();

private slots:
    void on_confirmAddSiteBtn_clicked();

    void on_nomSiteEdit_textChanged(const QString &arg1);

    void on_lieuSiteEdit_textChanged(const QString &arg1);

    void on_tarifSiteEdit_textChanged(const QString &arg1);

private:
    Ui::updateSiteBox *ui;
};

#endif // UPDATESITEBOX_H
