#ifndef EDITFILE_H
#define EDITFILE_H

#include <QDialog>
#include "QFontDialog"

namespace Ui {
class EditFile;
}

class EditFile : public QDialog
{
    Q_OBJECT

public:
    explicit EditFile(QWidget *parent = nullptr);
    ~EditFile();

    QString StyleFont; //value for sending stule font
    QString text; //sending text in mainwindow

    int SizeFont = 12; //default size text

signals:
    void green(QString, QString, int); //sending a signal

public slots:
    void pink(QString); //slot that takes a value
    void line_edit(); //channel through which the signal is transmitted pink

private slots:
    void on_Font_edit_clicked();

private:
    Ui::EditFile *ui;
};

#endif // EDITFILE_H
