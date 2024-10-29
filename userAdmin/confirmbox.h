#ifndef CONFIRMBOX_H
#define CONFIRMBOX_H

#include <QDialog>

namespace Ui {
class confirmBox;
}

class confirmBox : public QDialog
{
    Q_OBJECT

public:
    explicit confirmBox(QWidget *parent = nullptr);
    ~confirmBox();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::confirmBox *ui;
};

#endif // CONFIRMBOX_H
