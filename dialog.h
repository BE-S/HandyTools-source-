#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

    QString StyleFont;
    int SizeFont = 12; //default size text

public slots:
    void line();
signals:
    void red(QString, QString, int); //sending a signal

private slots:
    void on_Font_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
