#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPrinter"

#include "QDebug"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("HandyTool"); //set name window

    mwindow = new Dialog;
    iwindow = new Instruction;
    ewindow = new EditFile;

    connect(mwindow, &Dialog::red, this, &MainWindow::blue); //chanel for get text

    connect(ui->AddFile,SIGNAL(clicked()), this, SLOT(line_3())); //sending value in chanel when button pressed
    connect(this,&MainWindow::purple,ewindow,&EditFile::pink); //sending value

    connect(ewindow, &EditFile::green, this, &MainWindow::black); //get style font

    ui->pushButton->setEnabled(false); //diactivate button
    ui->AddFile->setEnabled(false); //diactivate button

    ui->Instruction->setToolTip("Инструкция"); //set prompt for button
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*void MainWindow::line_3() {}*/

void MainWindow::blue(QString txt, QString StyleFont, int SizeFont) //get signal with edited text
{
    set(StyleFont,SizeFont); //call function for set value
    text = txt; //equate signal to global value declared in mainwindow.h
}

void MainWindow::black(QString file, QString StyleFont, int SizeFont) //get signal with edited text (file)
{
    set(StyleFont,SizeFont); //call function for set value
    text = file; //equate signal to global value declared in mainwindow.h
}

void MainWindow::on_pushButton_clicked() //call in window write
{
    ui->label_5->setText("..."); //name substiturion
    ui->label_5->setAlignment(Qt::AlignCenter); //text aligment
    mwindow->setModal(true); //call window edit text from file
    mwindow->exec(); //exit window
}



void MainWindow::on_GetValue_clicked() //Check value for errors
{
    QString x = ui->X->text(),y = ui->Y->text(), w = ui->Width->text(), h = ui->Heigth->text(); //Take values from fields

    QString a = x; a.append(y); a.append(w); a.append(h);

    if (check_value(a)) { //checking for forbidden symbols
        Convert_to_int(x,y,w,h); //call function convert digital value in centimeter

        int num_error = Print(text); //call fucntion for printer

        if(num_error == 1) //"Error", "Width and height don't be less than one"
            QMessageBox::warning(this,"Ошибка", "Ширина и высота не могут быть меньше единицы!"); //call window error
        else if (num_error == 2) //"Error", "One of the coordinates is out of bounds"
            QMessageBox::warning(this,"Ошибка", "Одна из координат выходит за границу!");
        else if (num_error == 3) //"Error", "Width begin coordinate and ultimate can't be the same"
            QMessageBox::warning(this,"Ошибка", "Ширина начальной координаты и конечной не могут быть одинаковыми!");
        else if (num_error == 4) //"Error" , "Write text for print"
            QMessageBox::warning(this,"Ошибка", "Введите текст для печати!"); //call window error
    } else { //"Error", "Fields must contain only numbers"
        QMessageBox::warning(this,"Ошибка", "Поля должны содержать только числа!");
    }
}

void MainWindow::on_AddFile_clicked() //"add file for edit or print" button "Добавить файл"
{
    file = QFileDialog::getOpenFileName(this, "Выбрать файл", "C:/Users/Black king/Desktop"); //Default url
    ui->label_5->setText(file); //set in label_5 url where is the file
    emit purple(file); //sending url the file
    ewindow->setModal(true); //call window write
    ewindow->exec(); //close window write
}

void MainWindow::on_radioButton_clicked(bool checked) //"choise window write" radioButton "Текст"
{
    if (checked) {
        ui->pushButton->setEnabled(checked); //activate button choise create text
        ui->AddFile->setEnabled(!checked); //disable button choise create text
        ui->label_5->setStyleSheet("QLabel { background-color: rgb(204, 204, 204) }"); //choise color for buttons
    }
}

void MainWindow::on_radioButton_2_clicked(bool checked) //"choise window file" radioButton "Файл"
{
    if (checked) {
        ui->AddFile->setEnabled(checked); //activate button choise file
        ui->pushButton->setEnabled(!checked); //disable button choise file
        ui->label_5->setStyleSheet("QLabel { background-color : rgb(225, 225, 225) }"); //choise color for buttons
    }
}

void MainWindow::on_Instruction_clicked() //"window instruction" button "Инструкция"
{
    iwindow->setModal(true); //call window instruction
    iwindow->exec(); //exit window
}
