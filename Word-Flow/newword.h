#ifndef NEWWORD_H
#define NEWWORD_H

#include <QDialog>

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

private:
    Ui::NewWord *ui;
};

#endif // NEWWORD_H
