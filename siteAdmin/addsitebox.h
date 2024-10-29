#ifndef ADDSITEBOX_H
#define ADDSITEBOX_H

#include <QDialog>

namespace Ui {
class addSiteBox;
}

class addSiteBox : public QDialog
{
    Q_OBJECT

public:
    explicit addSiteBox(QWidget *parent = nullptr);
    ~addSiteBox();

private slots:
    void on_addSiteBox_accepted();

    void on_confirmAddSiteBtn_clicked();

    void on_nomSiteEdit_textChanged(const QString &arg1);

    void on_lieuSiteEdit_textChanged(const QString &arg1);

    void on_tarifSiteEdit_textChanged(const QString &arg1);

    void on_Reset_clicked();

private:
    Ui::addSiteBox *ui;
};

#endif // ADDSITEBOX_H
