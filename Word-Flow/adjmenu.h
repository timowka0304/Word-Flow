#ifndef ADJMENU_H
#define ADJMENU_H

#include <QDialog>
#include "testadj.h"

namespace Ui {
class AdjMenu;
}

class AdjMenu : public QDialog
{
    Q_OBJECT

private:
public:
    void MainMenu();

public:
    explicit AdjMenu(QWidget *parent = nullptr);
    ~AdjMenu();

private slots:
    void on_menu_back_Button_clicked();

    void on_dic_show_Button_clicked();

    void on_hide_dic_Button_clicked();

    void on_lets_test_Button_clicked();

private:
    Ui::AdjMenu *ui;
    TestAdj *testadj;
};

#endif // ADJMENU_H
