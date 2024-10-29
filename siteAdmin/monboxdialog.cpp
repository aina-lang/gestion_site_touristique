#include "monboxdialog.h"
#include "ui_monboxdialog.h"

monBoxDialog::monBoxDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::monBoxDialog)
{
    ui->setupUi(this);
}

monBoxDialog::~monBoxDialog()
{
    delete ui;
}
