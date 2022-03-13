#include "editfile.h"
#include "ui_editfile.h"
#include "QFile"
#include <QTextStream>
#include "QDebug"

#include "QPrinter"

EditFile::EditFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditFile)
{
    ui->setupUi(this);
    setWindowTitle("HandyTool"); //Set name window

    connect(ui->OK,SIGNAL(clicked()), this, SLOT(line_edit())); //sending value in channel when button pressed
}

EditFile::~EditFile()
{
    delete ui;
}

void EditFile::pink(QString txt) //Get value
{
    QFile file(txt); //this value get the path to the file

    text = txt; //equate signal to global value declared in editfile.h

    if ((file.exists())&&(file.open(QIODevice::ReadOnly))) //reading file by url
    {
        ui->textEdit->setText(file.readAll()); //set text in field

        file.close(); //close file
    }
}

void EditFile::line_edit()
{
    text = ui->textEdit->toPlainText().trimmed(); //reading text from field
    emit green(text, StyleFont, SizeFont); //sending value in mainwindow
    this->close(); //close window
}

void EditFile::on_Font_edit_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok,QFont(StyleFont,SizeFont)); //

    StyleFont = font.family();
    SizeFont = font.pointSize();

     if (ok)
        ui->textEdit->setFont(font);
}

