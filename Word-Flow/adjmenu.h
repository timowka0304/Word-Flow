#ifndef ADJMENU_H
#define ADJMENU_H

#include <QDialog>

namespace Ui {
class AdjMenu;
}

class AdjMenu : public QDialog
{
    Q_OBJECT

signals:
    void MainMenu();

public:
    explicit AdjMenu(QWidget *parent = nullptr);
    ~AdjMenu();

private slots:
    void on_menu_back_Button_clicked();

    void on_dic_show_Button_clicked();

    void on_hide_dic_Button_clicked();

private:
    Ui::AdjMenu *ui;
};

#endif // ADJMENU_H
