#ifndef MONBOXDIALOG_H
#define MONBOXDIALOG_H

#include <QDialog>

namespace Ui {
class monBoxDialog;
}

class monBoxDialog : public QDialog
{
    Q_OBJECT

public:
    explicit monBoxDialog(QWidget *parent = nullptr);
    ~monBoxDialog();

private:
    Ui::monBoxDialog *ui;
};

#endif // MONBOXDIALOG_H
