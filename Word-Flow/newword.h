#ifndef NEWWORD_H
#define NEWWORD_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class NewWord;
}

class NewWord : public QDialog
{
    Q_OBJECT

signals:
    void UserDicMenu();

public:
    explicit NewWord(QWidget *parent = nullptr);
    ~NewWord();

private slots:
    void on_cancel_Button_clicked();

    void on_save_Button_clicked();

    void on_info_Button_clicked();

private:
    Ui::NewWord *ui;
    QSqlDatabase db;
};

#endif // NEWWORD_H
