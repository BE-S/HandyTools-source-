/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFormLayout *formLayout;
    QPushButton *Font;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        formLayout = new QFormLayout(Dialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        Font = new QPushButton(Dialog);
        Font->setObjectName(QString::fromUtf8("Font"));

        formLayout->setWidget(0, QFormLayout::LabelRole, Font);

        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setMouseTracking(false);
        textEdit->setLineWidth(1);
        textEdit->setMidLineWidth(1);
        textEdit->setTabStopWidth(80);

        formLayout->setWidget(1, QFormLayout::SpanningRole, textEdit);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        Font->setText(QCoreApplication::translate("Dialog", "\320\250\321\200\320\270\321\204\321\202\321\213", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
