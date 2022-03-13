#include "dialog.h"
#include "ui_dialog.h"
#include "QFontDialog"
#include "QDebug"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowTitle("HandyTool"); //Set name window

    connect(ui->pushButton,SIGNAL(clicked()), this, SLOT(line())); //sending value in channel when button pressed
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::line() //sending text and style font
{
    QString txt = ui->textEdit->toPlainText().trimmed(); //convert textEdit in QString
    emit red(txt, StyleFont, SizeFont);  //Sending txt on signal
    this->close(); //close window
}

void Dialog::on_Font_clicked() //button for choise style font
{
    bool ok;

    QFont font = QFontDialog::getFont(&ok,QFont(StyleFont,SizeFont)); //set style font

    StyleFont = font.family(); //set font for text
    SizeFont = font.pointSize(); // set size font for text

    if (ok) //if button press
        ui->textEdit->setFont(font); //sinding style font
}

