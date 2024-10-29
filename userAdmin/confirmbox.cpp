#include "confirmbox.h"
#include "loginpage.h"
#include "ui_confirmbox.h"

confirmBox::confirmBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirmBox)
{
    ui->setupUi(this);

}

confirmBox::~confirmBox()
{
    delete ui;
}

void confirmBox::on_buttonBox_accepted()
{
    loginPage * loginpage=new loginPage;
    loginpage->show();
    this->parentWidget()->close();
}


void confirmBox::on_buttonBox_rejected()
{

}

