#ifndef SHOWPROFILE_H
#define SHOWPROFILE_H

#include <QDialog>

namespace Ui {
class showProfile;
}

class showProfile : public QDialog
{
    Q_OBJECT

public:
    explicit showProfile(QWidget *parent = nullptr);
    void setIdLogged(QString id);
    void setWidget();
    QString id_user_logged;
    ~showProfile();

private slots:
    void on_updateUserBtn_clicked();

    void on_restoreBtn_clicked();

private:
    Ui::showProfile *ui;
};

#endif // SHOWPROFILE_H
