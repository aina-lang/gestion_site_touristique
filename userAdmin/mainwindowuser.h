#ifndef MAINWINDOWUSER_H
#define MAINWINDOWUSER_H

#include "qsqlquerymodel.h"
#include "qtableview.h"
#include "stylesheet.h"
#include "userAdmin/confirmbox.h"
#include "userAdmin/showprofile.h"
#include <QWidget>
#include <QKeyEvent>


#include <QDialog>

namespace Ui {
class MainwindowUser;
}

class MainwindowUser : public  QWidget
{
    Q_OBJECT

public:
    MainwindowUser(QString id, QWidget *parent = nullptr);
    void reloadData(QTableView *table);
    void setIdLogged(QString id);
    void setWidget();
    QString id_user;
    QSqlQueryModel * model;
    stylesheet css;
    confirmBox * confirmbox=new confirmBox(this);
    showProfile *showprofile=new showProfile(this);
    QString id_user_logged;
    ~MainwindowUser();

private slots:
    void on_toSiteAdministrationBtn_clicked();
    void on_updateUserBtn_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_addUserBtn_clicked();

    void on_confirmAddUserBtn_clicked();

    void on_restoreBtn_clicked();

    void on_deleteUserBtn_clicked();

    void on_searchUserEdit_textChanged(const QString &arg1);

    void on_logoutBtn_clicked();

    void on_pushButton_clicked();

    void on_modifUserBtn_clicked();

    void on_toSiteGestionBtn_clicked();

private:
    Ui::MainwindowUser *ui;
};


#endif // MAINWINDOWUSER_H
