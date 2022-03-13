/********************************************************************************
** Form generated from reading UI file 'editfile.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITFILE_H
#define UI_EDITFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_EditFile
{
public:
    QFormLayout *formLayout;
    QPushButton *Font_edit;
    QTextEdit *textEdit;
    QPushButton *OK;

    void setupUi(QDialog *EditFile)
    {
        if (EditFile->objectName().isEmpty())
            EditFile->setObjectName(QString::fromUtf8("EditFile"));
        EditFile->resize(400, 300);
        formLayout = new QFormLayout(EditFile);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        Font_edit = new QPushButton(EditFile);
        Font_edit->setObjectName(QString::fromUtf8("Font_edit"));

        formLayout->setWidget(0, QFormLayout::LabelRole, Font_edit);

        textEdit = new QTextEdit(EditFile);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, textEdit);

        OK = new QPushButton(EditFile);
        OK->setObjectName(QString::fromUtf8("OK"));

        formLayout->setWidget(2, QFormLayout::FieldRole, OK);


        retranslateUi(EditFile);

        QMetaObject::connectSlotsByName(EditFile);
    } // setupUi

    void retranslateUi(QDialog *EditFile)
    {
        EditFile->setWindowTitle(QCoreApplication::translate("EditFile", "Dialog", nullptr));
        Font_edit->setText(QCoreApplication::translate("EditFile", "\320\250\321\200\320\270\321\204\321\202\321\213", nullptr));
        OK->setText(QCoreApplication::translate("EditFile", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditFile: public Ui_EditFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITFILE_H
