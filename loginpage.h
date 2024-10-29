#ifndef LOGINPAGE_H
#define LOGINPAGE_H



#include "siteAdmin/mainwindowsite.h"
#include "userAdmin/mainwindowuser.h"
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class loginPage; }
QT_END_NAMESPACE

class loginPage : public QDialog
{
    Q_OBJECT

public:
    loginPage(QWidget *parent = nullptr);
    void setIdLogged(QString id);
    QString id_user_logged;
    ~loginPage();

private slots:
    void on_loginBtn_clicked();

private:
    Ui::loginPage *ui;
};
#endif // LOGINPAGE_H
