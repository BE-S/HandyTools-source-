#include "instruction.h"
#include "ui_instruction.h"

Instruction::Instruction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Instruction)
{
    ui->setupUi(this);
    setWindowTitle("HandyTool"); //set name window
}

Instruction::~Instruction()
{
    delete ui;
}
