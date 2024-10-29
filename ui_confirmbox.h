/********************************************************************************
** Form generated from reading UI file 'confirmbox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMBOX_H
#define UI_CONFIRMBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_confirmBox
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QFrame *line;

    void setupUi(QDialog *confirmBox)
    {
        if (confirmBox->objectName().isEmpty())
            confirmBox->setObjectName(QStringLiteral("confirmBox"));
        confirmBox->resize(319, 168);
        confirmBox->setMinimumSize(QSize(319, 168));
        confirmBox->setMaximumSize(QSize(319, 168));
        buttonBox = new QDialogButtonBox(confirmBox);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(90, 130, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(confirmBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 60, 121, 20));
        line = new QFrame(confirmBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 110, 301, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(confirmBox);
        QObject::connect(buttonBox, SIGNAL(accepted()), confirmBox, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), confirmBox, SLOT(reject()));

        QMetaObject::connectSlotsByName(confirmBox);
    } // setupUi

    void retranslateUi(QDialog *confirmBox)
    {
        confirmBox->setWindowTitle(QApplication::translate("confirmBox", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("confirmBox", "Se deconnecter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class confirmBox: public Ui_confirmBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMBOX_H
