/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStandart;
    QAction *actionPrevod_Dec_Bin_Hex;
    QAction *actionKurz_listok;
    QAction *actionZnamky;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *Displej;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_vymaz;
    QPushButton *pushButton_backspace;
    QPushButton *pushButton_deleno;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_krat;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_minus;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_plus;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_0;
    QPushButton *pushButton_deci;
    QPushButton *pushButton_rovnasa;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_lava;
    QPushButton *pushButton_prava;
    QMenuBar *menuBar;
    QMenu *menuMo_nosti;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(261, 495);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/calcu.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionStandart = new QAction(MainWindow);
        actionStandart->setObjectName(QString::fromUtf8("actionStandart"));
        actionStandart->setEnabled(false);
        actionPrevod_Dec_Bin_Hex = new QAction(MainWindow);
        actionPrevod_Dec_Bin_Hex->setObjectName(QString::fromUtf8("actionPrevod_Dec_Bin_Hex"));
        actionKurz_listok = new QAction(MainWindow);
        actionKurz_listok->setObjectName(QString::fromUtf8("actionKurz_listok"));
        actionZnamky = new QAction(MainWindow);
        actionZnamky->setObjectName(QString::fromUtf8("actionZnamky"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_7 = new QHBoxLayout(centralWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        Displej = new QLabel(centralWidget);
        Displej->setObjectName(QString::fromUtf8("Displej"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Displej->sizePolicy().hasHeightForWidth());
        Displej->setSizePolicy(sizePolicy);
        Displej->setMinimumSize(QSize(0, 80));
        Displej->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(18);
        Displej->setFont(font);
        Displej->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));

        verticalLayout->addWidget(Displej);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        pushButton_vymaz = new QPushButton(centralWidget);
        pushButton_vymaz->setObjectName(QString::fromUtf8("pushButton_vymaz"));
        sizePolicy.setHeightForWidth(pushButton_vymaz->sizePolicy().hasHeightForWidth());
        pushButton_vymaz->setSizePolicy(sizePolicy);
        pushButton_vymaz->setMinimumSize(QSize(0, 60));
        pushButton_vymaz->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        horizontalLayout_6->addWidget(pushButton_vymaz);

        pushButton_backspace = new QPushButton(centralWidget);
        pushButton_backspace->setObjectName(QString::fromUtf8("pushButton_backspace"));
        pushButton_backspace->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_backspace->sizePolicy().hasHeightForWidth());
        pushButton_backspace->setSizePolicy(sizePolicy);
        pushButton_backspace->setMinimumSize(QSize(119, 60));
        pushButton_backspace->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/bckps.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_backspace->setIcon(icon1);
        pushButton_backspace->setIconSize(QSize(30, 30));

        horizontalLayout_6->addWidget(pushButton_backspace);

        pushButton_deleno = new QPushButton(centralWidget);
        pushButton_deleno->setObjectName(QString::fromUtf8("pushButton_deleno"));
        sizePolicy.setHeightForWidth(pushButton_deleno->sizePolicy().hasHeightForWidth());
        pushButton_deleno->setSizePolicy(sizePolicy);
        pushButton_deleno->setMinimumSize(QSize(50, 60));
        pushButton_deleno->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        horizontalLayout_6->addWidget(pushButton_deleno);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetMinimumSize);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(0, 60));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(0, 60));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(0, 60));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_9);

        pushButton_krat = new QPushButton(centralWidget);
        pushButton_krat->setObjectName(QString::fromUtf8("pushButton_krat"));
        sizePolicy.setHeightForWidth(pushButton_krat->sizePolicy().hasHeightForWidth());
        pushButton_krat->setSizePolicy(sizePolicy);
        pushButton_krat->setMinimumSize(QSize(0, 60));
        pushButton_krat->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_krat);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(0, 60));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(0, 60));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(0, 60));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_6);

        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        sizePolicy.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
        pushButton_minus->setSizePolicy(sizePolicy);
        pushButton_minus->setMinimumSize(QSize(0, 60));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_minus);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setMinimumSize(QSize(0, 60));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(0, 60));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(0, 60));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_plus = new QPushButton(centralWidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        sizePolicy.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy);
        pushButton_plus->setMinimumSize(QSize(0, 60));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_plus);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setMinimumSize(QSize(120, 60));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_0);

        pushButton_deci = new QPushButton(centralWidget);
        pushButton_deci->setObjectName(QString::fromUtf8("pushButton_deci"));
        sizePolicy.setHeightForWidth(pushButton_deci->sizePolicy().hasHeightForWidth());
        pushButton_deci->setSizePolicy(sizePolicy);
        pushButton_deci->setMinimumSize(QSize(0, 60));
        pushButton_deci->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_deci);

        pushButton_rovnasa = new QPushButton(centralWidget);
        pushButton_rovnasa->setObjectName(QString::fromUtf8("pushButton_rovnasa"));
        sizePolicy.setHeightForWidth(pushButton_rovnasa->sizePolicy().hasHeightForWidth());
        pushButton_rovnasa->setSizePolicy(sizePolicy);
        pushButton_rovnasa->setMinimumSize(QSize(60, 60));
        pushButton_rovnasa->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_rovnasa);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(-1, 0, 0, 0);
        pushButton_lava = new QPushButton(centralWidget);
        pushButton_lava->setObjectName(QString::fromUtf8("pushButton_lava"));
        sizePolicy.setHeightForWidth(pushButton_lava->sizePolicy().hasHeightForWidth());
        pushButton_lava->setSizePolicy(sizePolicy);
        pushButton_lava->setMinimumSize(QSize(50, 60));
        pushButton_lava->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        horizontalLayout->addWidget(pushButton_lava);

        pushButton_prava = new QPushButton(centralWidget);
        pushButton_prava->setObjectName(QString::fromUtf8("pushButton_prava"));
        sizePolicy.setHeightForWidth(pushButton_prava->sizePolicy().hasHeightForWidth());
        pushButton_prava->setSizePolicy(sizePolicy);
        pushButton_prava->setMinimumSize(QSize(50, 60));
        pushButton_prava->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        horizontalLayout->addWidget(pushButton_prava);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_7->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 261, 21));
        menuMo_nosti = new QMenu(menuBar);
        menuMo_nosti->setObjectName(QString::fromUtf8("menuMo_nosti"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMo_nosti->menuAction());
        menuMo_nosti->addAction(actionStandart);
        menuMo_nosti->addSeparator();
        menuMo_nosti->addAction(actionPrevod_Dec_Bin_Hex);
        menuMo_nosti->addAction(actionKurz_listok);
        menuMo_nosti->addAction(actionZnamky);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Kalkula\304\215ka", nullptr));
        actionStandart->setText(QApplication::translate("MainWindow", "Standardna kalkulacka", nullptr));
        actionPrevod_Dec_Bin_Hex->setText(QApplication::translate("MainWindow", "Prevod Dec-Bin-Hex", nullptr));
        actionKurz_listok->setText(QApplication::translate("MainWindow", "Kurz. listok", nullptr));
        actionZnamky->setText(QApplication::translate("MainWindow", "Znamky", nullptr));
        Displej->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_vymaz->setText(QApplication::translate("MainWindow", "C", nullptr));
        pushButton_backspace->setText(QString());
        pushButton_deleno->setText(QApplication::translate("MainWindow", "/", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_krat->setText(QApplication::translate("MainWindow", "X", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_deci->setText(QApplication::translate("MainWindow", ".", nullptr));
        pushButton_rovnasa->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButton_lava->setText(QApplication::translate("MainWindow", "(", nullptr));
        pushButton_prava->setText(QApplication::translate("MainWindow", ")", nullptr));
        menuMo_nosti->setTitle(QApplication::translate("MainWindow", "Moznosti", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
