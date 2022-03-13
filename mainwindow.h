#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include "editfile.h"
#include "instruction.h"
#include "QDebug"
#include "QString"

#include "QPainter"
#include "QPrinter"
#include "QPrintDialog"
#include "QFileDialog"
#include "QMessageBox"
#include "QFontDialog"
#include "iostream"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Dialog;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QString text;
    QString file;

    MainWindow(QWidget *parent = nullptr);
    int GetValue();
    ~MainWindow();

    Dialog *mwindow;
    EditFile *ewindow;
    Instruction *iwindow;

    void Convert_to_int(QString x,QString y,QString w,QString h) //converter string to int
    {
        this->x = x.toInt();
        this->y = y.toInt();
        this->width = w.toInt();
        this->heigth = h.toInt();
    }

    void Convert_to_centimeter() //converter digital value in centimeter
    {
         if (x > 0)
             x *= 45.300;
         if (y > 0)
             y *= 42;
         if (width > 0)
             width *= 45.300;
         if (heigth > 0)
             heigth *= 42;
    }

    int check_value(QString a) { //check value on forbidden symbols
        for (int i = 0; i < a.length(); ++i) {
            if (a[i] < 48 || a[i] > 57) { //if encoding user value less 48 or many 57
                return false;
                break;
            }
        }
        return true;
    }

    void set(QString style, int size) { //seter
        M_StyleFont = style;
        M_SizeFont = size;
    }

    int Print(QString text) // Function for printer
    {
        Convert_to_centimeter(); //call function for convert digital value in centimeter

        if (heigth == 0 || width == 0)  // if height and width == 0 Print Error
              check = 1; //Error
        else if (x > 952 || y > 1218 || heigth > 1218 || width > 952 ) // 1345 = 29 centimeter and 952 = 21 centimeter
            check = 2; //Error
        else if (x == width) // if X is out of bounds width print Error
            check = 3; //Error
        else if (text == "")
            check = 4;
        else if (x >= 0 && y >= 0 && width > 0 && heigth > 0) //if value more null
            {
            QPrinter printer; //call object QPrinter

                QPrintDialog * prevDlg = new QPrintDialog(&printer); //call object QPrintDialog
                prevDlg->exec(); //call window print
                QPainter painter; //call object QPainter
                painter.begin(&printer); //call window choise file or make file for save
                QFont font(M_StyleFont, M_SizeFont); //Set style font for printer
                painter.setFont(font);  //Add a combination of characters that will mean the end of the text.
                text += text_end;

                while(text[i] != '\0')  //reading commands user
                {
                    if(text[i] != 'S' && text[i + 1] != '|')
                    {
                        if (text[i] != '$')
                        {
                            text_first[j] = text[i];
                            ++j;
                            qDebug() << text[i];
                        }
                    }
                    else if (text[i] == 'S' && text[i + 1] == '|')
                    {
                        if (text[i - 2] != '$')
                        {
                            painter.drawText(x,y,width,heigth,Qt::AlignLeft|Qt::AlignTop, text_first);
                            text[i++];
                        }
                    }
                    else if (text[i] != '$')
                    {
                        painter.drawText(x,y,width,heigth,Qt::AlignLeft|Qt::AlignTop, text_first);
                        printer.newPage();
                        text_first = "";
                        j = 0;
                    }
                    ++i;
                }
                check = 0;
                painter.end();
        }
            i = 0;
            j = 0;
            return check; //return ERROR
        }

signals:
    void purple(QString); //sending a signal in PINK

public slots:
    //void line_3();

    void blue(QString, QString, int); //slot that takes a value
    void black(QString, QString, int); // slot that takes a value

private slots:
    void on_pushButton_clicked();
    void on_GetValue_clicked();
    void on_AddFile_clicked();


    void on_radioButton_clicked(bool checked);

    void on_radioButton_2_clicked(bool checked);

    void on_Instruction_clicked();

private:
    double x = 0,y = 0,width = 0,heigth = 0; //value for printer
    QString text_first, text_end = "\nS|"; //value for printer and text_end this command for text wrapping
    QString M_StyleFont; //value for text font
    int M_SizeFont; //value for text font
    int check, i = 0, j = 0; //"i" and "j" increment

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_
