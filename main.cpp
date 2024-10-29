#include "loginpage.h"

#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen splash;
    QPixmap pic(":/icons/splashscreen1.png");
    splash.setPixmap(pic.scaled(500,500,Qt::KeepAspectRatio));
//    splash.showMessage("GESTION SITES ",Qt::AlignCenter);
    splash.show();
    loginPage w;
    QTimer::singleShot(2500,&splash,SLOT(close()));
    QTimer::singleShot(2500,&w,SLOT(show()));
//    w.show();

    return a.exec();
}
