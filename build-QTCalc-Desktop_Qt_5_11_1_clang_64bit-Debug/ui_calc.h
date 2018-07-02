/********************************************************************************
** Form generated from reading UI file 'calc.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALC_H
#define UI_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calc
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *Button7;
    QPushButton *MemAdd;
    QPushButton *Button8;
    QPushButton *Button1;
    QPushButton *Divide;
    QPushButton *Button9;
    QPushButton *Button4;
    QPushButton *Clear;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Button3;
    QPushButton *Button2;
    QPushButton *Button0;
    QPushButton *Multiply;
    QPushButton *MemClear;
    QPushButton *Subtract;
    QPushButton *ChangeSign;
    QPushButton *Equals;
    QPushButton *Add;
    QPushButton *MemGet;
    QLineEdit *Display;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calc)
    {
        if (Calc->objectName().isEmpty())
            Calc->setObjectName(QStringLiteral("Calc"));
        Calc->resize(400, 300);
        centralWidget = new QWidget(Calc);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Button7 = new QPushButton(centralWidget);
        Button7->setObjectName(QStringLiteral("Button7"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 1, 0, 1, 1);

        MemAdd = new QPushButton(centralWidget);
        MemAdd->setObjectName(QStringLiteral("MemAdd"));
        sizePolicy.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy);
        MemAdd->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemAdd, 1, 4, 1, 1);

        Button8 = new QPushButton(centralWidget);
        Button8->setObjectName(QStringLiteral("Button8"));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 1, 1, 1, 1);

        Button1 = new QPushButton(centralWidget);
        Button1->setObjectName(QStringLiteral("Button1"));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 3, 0, 1, 1);

        Divide = new QPushButton(centralWidget);
        Divide->setObjectName(QStringLiteral("Divide"));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        Button9 = new QPushButton(centralWidget);
        Button9->setObjectName(QStringLiteral("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 1, 2, 1, 1);

        Button4 = new QPushButton(centralWidget);
        Button4->setObjectName(QStringLiteral("Button4"));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 2, 0, 1, 1);

        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QStringLiteral("Clear"));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Clear, 4, 0, 1, 1);

        Button5 = new QPushButton(centralWidget);
        Button5->setObjectName(QStringLiteral("Button5"));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 2, 1, 1, 1);

        Button6 = new QPushButton(centralWidget);
        Button6->setObjectName(QStringLiteral("Button6"));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 2, 2, 1, 1);

        Button3 = new QPushButton(centralWidget);
        Button3->setObjectName(QStringLiteral("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 3, 2, 1, 1);

        Button2 = new QPushButton(centralWidget);
        Button2->setObjectName(QStringLiteral("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 3, 1, 1, 1);

        Button0 = new QPushButton(centralWidget);
        Button0->setObjectName(QStringLiteral("Button0"));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 4, 1, 1, 1);

        Multiply = new QPushButton(centralWidget);
        Multiply->setObjectName(QStringLiteral("Multiply"));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 2, 3, 1, 1);

        MemClear = new QPushButton(centralWidget);
        MemClear->setObjectName(QStringLiteral("MemClear"));
        sizePolicy.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy);
        MemClear->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemClear, 2, 4, 1, 1);

        Subtract = new QPushButton(centralWidget);
        Subtract->setObjectName(QStringLiteral("Subtract"));
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 4, 3, 1, 1);

        ChangeSign = new QPushButton(centralWidget);
        ChangeSign->setObjectName(QStringLiteral("ChangeSign"));
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 4, 2, 1, 1);

        Equals = new QPushButton(centralWidget);
        Equals->setObjectName(QStringLiteral("Equals"));
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equals, 4, 4, 1, 1);

        Add = new QPushButton(centralWidget);
        Add->setObjectName(QStringLiteral("Add"));
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 3, 3, 1, 1);

        MemGet = new QPushButton(centralWidget);
        MemGet->setObjectName(QStringLiteral("MemGet"));
        sizePolicy.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy);
        MemGet->setStyleSheet(QLatin1String("QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemGet, 3, 4, 1, 1);

        Display = new QLineEdit(centralWidget);
        Display->setObjectName(QStringLiteral("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        Display->setStyleSheet(QLatin1String("QLineEdit {\n"
"     background-color: gray; border: 1px solid gray;\n"
"	color: #ffffff;}"));

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Calc->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calc);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        Calc->setMenuBar(menuBar);
        statusBar = new QStatusBar(Calc);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Calc->setStatusBar(statusBar);

        retranslateUi(Calc);

        QMetaObject::connectSlotsByName(Calc);
    } // setupUi

    void retranslateUi(QMainWindow *Calc)
    {
        Calc->setWindowTitle(QApplication::translate("Calc", "Calc", nullptr));
        Button7->setText(QApplication::translate("Calc", "7", nullptr));
        MemAdd->setText(QApplication::translate("Calc", "M+", nullptr));
        Button8->setText(QApplication::translate("Calc", "8", nullptr));
        Button1->setText(QApplication::translate("Calc", "1", nullptr));
        Divide->setText(QApplication::translate("Calc", "/", nullptr));
        Button9->setText(QApplication::translate("Calc", "9", nullptr));
        Button4->setText(QApplication::translate("Calc", "4", nullptr));
        Clear->setText(QApplication::translate("Calc", "AC", nullptr));
        Button5->setText(QApplication::translate("Calc", "5", nullptr));
        Button6->setText(QApplication::translate("Calc", "6", nullptr));
        Button3->setText(QApplication::translate("Calc", "3", nullptr));
        Button2->setText(QApplication::translate("Calc", "2", nullptr));
        Button0->setText(QApplication::translate("Calc", "0", nullptr));
        Multiply->setText(QApplication::translate("Calc", "*", nullptr));
        MemClear->setText(QApplication::translate("Calc", "M-", nullptr));
        Subtract->setText(QApplication::translate("Calc", "-", nullptr));
        ChangeSign->setText(QApplication::translate("Calc", "+/-", nullptr));
        Equals->setText(QApplication::translate("Calc", "=", nullptr));
        Add->setText(QApplication::translate("Calc", "+", nullptr));
        MemGet->setText(QApplication::translate("Calc", "M", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calc: public Ui_Calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_H
