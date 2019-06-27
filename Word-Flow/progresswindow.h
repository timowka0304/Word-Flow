#ifndef PROGRESSWINDOW_H
#define PROGRESSWINDOW_H

#include <QDialog>

namespace Ui {
class ProgressWindow;
}

class ProgressWindow : public QDialog
{
    Q_OBJECT

signals:
    void MainMenu();

public:
    explicit ProgressWindow(QWidget *parent = nullptr);
    ~ProgressWindow();
    void Show_db();

private slots:
    void on_back_to_menu_Button_clicked();

    void on_clear_db_Button_clicked();

    void on_max_Button_clicked();

    void on_min_Button_clicked();

private:
    Ui::ProgressWindow *ui;
   int size;
};

#endif // PROGRESSWINDOW_H
