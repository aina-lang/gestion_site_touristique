#ifndef ADDVISITEURBOX_H
#define ADDVISITEURBOX_H

#include <QDialog>

namespace Ui {
class addVisiteurBox;
}

class addVisiteurBox : public QDialog
{
    Q_OBJECT

public:
    explicit addVisiteurBox(QWidget *parent = 0);
    ~addVisiteurBox();

private slots:

    void on_confirmAddVisiteurBtn_clicked();

    void on_nomVisiteurEdit_textChanged(const QString &arg1);

    void on_addresseEdit_textChanged(const QString &arg1);

    void on_provenance_textChanged(const QString &arg1);

private:
    Ui::addVisiteurBox *ui;
};

#endif // ADDVISITEURBOX_H
