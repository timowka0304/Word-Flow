#ifndef USERDICMENU_H
#define USERDICMENU_H

#include <QDialog>

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

private:
    Ui::UserDicMenu *ui;
};

#endif // USERDICMENU_H
