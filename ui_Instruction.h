/********************************************************************************
** Form generated from reading UI file 'Instruction.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTION_H
#define UI_INSTRUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Instruction
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *Instruction)
    {
        if (Instruction->objectName().isEmpty())
            Instruction->setObjectName(QString::fromUtf8("Instruction"));
        Instruction->resize(751, 100);
        gridLayout = new QGridLayout(Instruction);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(Instruction);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(11);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(Instruction);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);


        retranslateUi(Instruction);

        QMetaObject::connectSlotsByName(Instruction);
    } // setupUi

    void retranslateUi(QDialog *Instruction)
    {
        Instruction->setWindowTitle(QCoreApplication::translate("Instruction", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("Instruction", "\320\224\320\273\321\217 \320\277\320\265\321\200\320\265\320\275\320\276\321\201\320\260 \320\267\320\260\320\277\320\270\321\201\320\270 \320\262 \321\201\321\202\321\200\320\276\320\272\320\265 \320\275\320\260 \321\201\320\273\320\265\320\264\321\203\321\216\321\211\321\203\321\216 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\321\203 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\200\320\260\320\267\320\264\320\265\320\273\320\270\321\202\320\265\320\273\321\214  \"S$\", ", nullptr));
        label_5->setText(QCoreApplication::translate("Instruction", "\320\273\320\270\320\261\320\276 \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\262\321\203\321\216 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Instruction: public Ui_Instruction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTION_H
