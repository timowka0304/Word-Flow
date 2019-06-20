#ifndef DELWORD_H
#define DELWORD_H

#include <QDialog>

namespace Ui {
class DelWord;
}

class DelWord : public QDialog
{
    Q_OBJECT

signals:
    void UserDicMenu();

public:
    explicit DelWord(QWidget *parent = nullptr);
    ~DelWord();
    void Show_db();

private slots:
    void on_del_Button_clicked();

    void on_back_to_menu_Button_clicked();

private:
    Ui::DelWord *ui;
};

#endif // DELWORD_H
