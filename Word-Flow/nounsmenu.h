#ifndef NOUNSMENU_H
#define NOUNSMENU_H

#include <QDialog>
#include "random.h"

namespace Ui {
class NounsMenu;
}

class NounsMenu : public QDialog
{
    Q_OBJECT

signals:
    void MainMenu();

public:
    explicit NounsMenu(QWidget *parent = nullptr);
    ~NounsMenu();

private slots:
    void on_menu_back_Button_clicked();

    void on_dic_show_Button_clicked();

    void on_hide_dic_Button_clicked();

    void on_lets_test_Button_clicked();

private:
    Ui::NounsMenu *ui;
    Random *random;
};

#endif // NOUNSMENU_H
