#ifndef MAINMENU_H
#define MAINMENU_H

#include <QDialog>
#include "nounsmenu.h"
#include "adjmenu.h"
#include "verbsmenu.h"
#include "userdicmenu.h"
#include "allmenu.h"
#include "progresswindow.h"

namespace Ui {
class MainMenu;
}

class MainMenu : public QDialog
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

private slots:
    void on_exit_button_clicked();

    void on_nounc_category_button_clicked();

    void on_adjectives_catogory_button_clicked();

    void on_verbs_category_button_clicked();

    void on_user_dic_button_clicked();

    void on_all_category_button_clicked();

    void on_progress_Button_clicked();

private:
    Ui::MainMenu *ui;
    NounsMenu *nounsmenu;
    AdjMenu *adjmenu;
    VerbsMenu *verbsmenu;
    UserDicMenu *userdicmenu;
    AllMenu *allmenu;
    ProgressWindow *progresswindow;
};

#endif // MAINMENU_H
