/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLineEdit *X;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label_11;
    QLineEdit *Y;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *Width;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *Heigth;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QLabel *label_5;
    QPushButton *AddFile;
    QPushButton *GetValue;
    QToolButton *Instruction;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(548, 325);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 2, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font1;
        font1.setPointSize(20);
        label_10->setFont(font1);

        horizontalLayout_2->addWidget(label_10);

        X = new QLineEdit(centralwidget);
        X->setObjectName(QString::fromUtf8("X"));

        horizontalLayout_2->addWidget(X);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font2;
        font2.setPointSize(14);
        label_7->setFont(font2);

        horizontalLayout_2->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);

        horizontalLayout->addWidget(label_11);

        Y = new QLineEdit(centralwidget);
        Y->setObjectName(QString::fromUtf8("Y"));

        horizontalLayout->addWidget(Y);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        horizontalLayout->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        horizontalLayout_3->addWidget(label_3);

        Width = new QLineEdit(centralwidget);
        Width->setObjectName(QString::fromUtf8("Width"));

        horizontalLayout_3->addWidget(Width);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font2);

        horizontalLayout_3->addWidget(label_8);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        horizontalLayout_4->addWidget(label_4);

        Heigth = new QLineEdit(centralwidget);
        Heigth->setObjectName(QString::fromUtf8("Heigth"));

        horizontalLayout_4->addWidget(Heigth);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);

        horizontalLayout_4->addWidget(label_9);


        verticalLayout_3->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_3, 1, 2, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(radioButton_2);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 2, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton, 2, 1, 1, 3);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(true);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        label_5->setFrameShadow(QFrame::Plain);
        label_5->setLineWidth(1);

        gridLayout->addWidget(label_5, 3, 1, 1, 2);

        AddFile = new QPushButton(centralwidget);
        AddFile->setObjectName(QString::fromUtf8("AddFile"));
        AddFile->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(AddFile, 3, 3, 1, 1);

        GetValue = new QPushButton(centralwidget);
        GetValue->setObjectName(QString::fromUtf8("GetValue"));
        GetValue->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(GetValue, 4, 0, 1, 4);

        Instruction = new QToolButton(centralwidget);
        Instruction->setObjectName(QString::fromUtf8("Instruction"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        Instruction->setFont(font3);
        Instruction->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";\n"
"\n"
"font: 8pt \"MS Shell Dlg 2\";"));
        Instruction->setCheckable(false);

        gridLayout->addWidget(Instruction, 5, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 548, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\261\320\273\320\276\320\272\320\260 \321\201 \321\202\320\265\320\272\321\201\321\202\320\276\320\274", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\261\320\273\320\276\320\272\320\260 \320\275\320\260 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\320\265", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        X->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274.", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        Y->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274.", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\200\320\270\320\275\320\260", nullptr));
        Width->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274.", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\201\320\276\321\202\320\260", nullptr));
        Heigth->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274.", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\201\321\202", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\320\265\320\272\321\201\321\202", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">...</p></body></html>", nullptr));
        AddFile->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        GetValue->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\207\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        Instruction->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">\320\230\320\275\321\201\321\202\321\200\321\203\320\272\321\206\320\270\321\217</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Instruction->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\201\321\202\321\200\321\203\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
