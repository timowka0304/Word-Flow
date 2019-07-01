#ifndef ALLMENU_H
#define ALLMENU_H

#include <QDialog>
#include "testall.h"

namespace Ui {
class AllMenu;
}

class AllMenu : public QDialog
{
    Q_OBJECT

signals:
    void MainMenu();

public:
    explicit AllMenu(QWidget *parent = nullptr);
    ~AllMenu();

private slots:
    void on_menu_back_Button_clicked();

    void on_dic_show_Button_clicked();

    void on_hide_dic_Button_clicked();

    void on_lets_test_Button_clicked();

private:
    Ui::AllMenu *ui;
    TestAll *testall;
};

#endif // ALLMENU_H
