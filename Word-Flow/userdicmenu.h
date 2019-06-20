#ifndef USERDICMENU_H
#define USERDICMENU_H

#include <QDialog>
#include "newword.h"
#include "delword.h"

namespace Ui {
class UserDicMenu;
}

class UserDicMenu : public QDialog
{
    Q_OBJECT

signals:
    void MainMenu();

public:
    explicit UserDicMenu(QWidget *parent = nullptr);
    ~UserDicMenu();

private slots:
    void on_menu_back_Button_clicked();

    void on_add_Button_clicked();

    void on_delete_Button_clicked();

private:
    Ui::UserDicMenu *ui;
    NewWord *newword;
    DelWord *delword;
};

#endif // USERDICMENU_H
