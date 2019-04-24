#ifndef VERBSMENU_H
#define VERBSMENU_H

#include <QDialog>

namespace Ui {
class VerbsMenu;
}

class VerbsMenu : public QDialog
{
    Q_OBJECT

signals:
    void MainMenu();

public:
    explicit VerbsMenu(QWidget *parent = nullptr);
    ~VerbsMenu();

private slots:
    void on_menu_back_Button_clicked();

    void on_dic_show_Button_clicked();

    void on_hide_dic_Button_clicked();

private:
    Ui::VerbsMenu *ui;
};

#endif // VERBSMENU_H
