#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include<CBejeweledDlg.h>
#include<CRegist.h>
#include "CRankLogic.h"

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT//this is a test at 23.08

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();//test 23.49

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Login *ui;
    CBejeweledDlg *BejeweledDlg;
    CRegist *Regist;
    CRankLogic CRank;//this is a test by Xu
};

#endif // LOGIN_H
