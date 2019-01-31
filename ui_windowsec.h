/********************************************************************************
** Form generated from reading UI file 'windowsec.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWSEC_H
#define UI_WINDOWSEC_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Windowsec
{
public:
    QAction *action_tandart;
    QAction *actionPrevod_Dec_Bin_Hex;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Dec;
    QLineEdit *lineEdit_dec;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_hex;
    QLineEdit *lineEdit_hex;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_bin;
    QLineEdit *lineEdit_bin;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_vymaz_2;
    QPushButton *pushButton_backspace_2;
    QPushButton *pushButton_A;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_B;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_C;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_D;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_0;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_E;
    QPushButton *pushButton_F;
    QMenuBar *menubar;
    QMenu *menuMoznosti;

    void setupUi(QMainWindow *Windowsec)
    {
        if (Windowsec->objectName().isEmpty())
            Windowsec->setObjectName(QString::fromUtf8("Windowsec"));
        Windowsec->resize(276, 661);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/change.png"), QSize(), QIcon::Normal, QIcon::Off);
        Windowsec->setWindowIcon(icon);
        action_tandart = new QAction(Windowsec);
        action_tandart->setObjectName(QString::fromUtf8("action_tandart"));
        actionPrevod_Dec_Bin_Hex = new QAction(Windowsec);
        actionPrevod_Dec_Bin_Hex->setObjectName(QString::fromUtf8("actionPrevod_Dec_Bin_Hex"));
        actionPrevod_Dec_Bin_Hex->setEnabled(false);
        centralwidget = new QWidget(Windowsec);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_Dec = new QPushButton(centralwidget);
        pushButton_Dec->setObjectName(QString::fromUtf8("pushButton_Dec"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Dec->sizePolicy().hasHeightForWidth());
        pushButton_Dec->setSizePolicy(sizePolicy);
        pushButton_Dec->setMinimumSize(QSize(60, 40));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_Dec->setFont(font);
        pushButton_Dec->setStyleSheet(QString::fromUtf8("QPushButton{background: transparent;\n"
"border: 1px solid gray;\n"
" color: black;}\n"
"QPushButton:disabled {\n"
"background-color: #e0e0d1;\n"
" color: black;\n"
"}"));

        horizontalLayout->addWidget(pushButton_Dec);

        lineEdit_dec = new QLineEdit(centralwidget);
        lineEdit_dec->setObjectName(QString::fromUtf8("lineEdit_dec"));
        lineEdit_dec->setMinimumSize(QSize(0, 80));
        QFont font1;
        font1.setPointSize(18);
        lineEdit_dec->setFont(font1);
        lineEdit_dec->setLayoutDirection(Qt::RightToLeft);
        lineEdit_dec->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_dec->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_dec);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_hex = new QPushButton(centralwidget);
        pushButton_hex->setObjectName(QString::fromUtf8("pushButton_hex"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_hex->sizePolicy().hasHeightForWidth());
        pushButton_hex->setSizePolicy(sizePolicy1);
        pushButton_hex->setMinimumSize(QSize(60, 40));
        pushButton_hex->setFont(font);
        pushButton_hex->setStyleSheet(QString::fromUtf8("QPushButton{background: transparent;\n"
"border: 1px solid gray;\n"
" color: black;}\n"
"QPushButton:disabled {\n"
"background-color: #e0e0d1;\n"
" color: black;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_hex);

        lineEdit_hex = new QLineEdit(centralwidget);
        lineEdit_hex->setObjectName(QString::fromUtf8("lineEdit_hex"));
        lineEdit_hex->setMinimumSize(QSize(0, 80));
        lineEdit_hex->setFont(font1);
        lineEdit_hex->setLayoutDirection(Qt::RightToLeft);
        lineEdit_hex->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_hex->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_hex);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_bin = new QPushButton(centralwidget);
        pushButton_bin->setObjectName(QString::fromUtf8("pushButton_bin"));
        sizePolicy1.setHeightForWidth(pushButton_bin->sizePolicy().hasHeightForWidth());
        pushButton_bin->setSizePolicy(sizePolicy1);
        pushButton_bin->setMinimumSize(QSize(60, 40));
        pushButton_bin->setFont(font);
        pushButton_bin->setStyleSheet(QString::fromUtf8("QPushButton{background: transparent;\n"
"border: 1px solid gray;\n"
" color: black;}\n"
"QPushButton:disabled {\n"
"background-color: #e0e0d1;\n"
" color: black;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_bin);

        lineEdit_bin = new QLineEdit(centralwidget);
        lineEdit_bin->setObjectName(QString::fromUtf8("lineEdit_bin"));
        lineEdit_bin->setMinimumSize(QSize(0, 80));
        lineEdit_bin->setFont(font1);
        lineEdit_bin->setLayoutDirection(Qt::RightToLeft);
        lineEdit_bin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_bin->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_bin);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        pushButton_vymaz_2 = new QPushButton(centralwidget);
        pushButton_vymaz_2->setObjectName(QString::fromUtf8("pushButton_vymaz_2"));
        pushButton_vymaz_2->setMinimumSize(QSize(60, 60));
        pushButton_vymaz_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_vymaz_2);

        pushButton_backspace_2 = new QPushButton(centralwidget);
        pushButton_backspace_2->setObjectName(QString::fromUtf8("pushButton_backspace_2"));
        pushButton_backspace_2->setEnabled(true);
        pushButton_backspace_2->setMinimumSize(QSize(128, 60));
        pushButton_backspace_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/bckps.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_backspace_2->setIcon(icon1);
        pushButton_backspace_2->setIconSize(QSize(30, 30));

        horizontalLayout_4->addWidget(pushButton_backspace_2);

        pushButton_A = new QPushButton(centralwidget);
        pushButton_A->setObjectName(QString::fromUtf8("pushButton_A"));
        pushButton_A->setEnabled(true);
        pushButton_A->setMinimumSize(QSize(60, 60));
        pushButton_A->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:#A0A0A0;\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_A);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(60, 60));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:#A0A0A0;\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(60, 60));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:#A0A0A0;\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(60, 60));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:#A0A0A0;\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_9);

        pushButton_B = new QPushButton(centralwidget);
        pushButton_B->setObjectName(QString::fromUtf8("pushButton_B"));
        pushButton_B->setMinimumSize(QSize(60, 60));
        pushButton_B->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:#A0A0A0;\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_B);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 60));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:#A0A0A0;\n"
"}"));

        horizontalLayout_6->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 60));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:#A0A0A0;\n"
"}"));

        horizontalLayout_6->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(0, 60));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:#A0A0A0;\n"
"}"));

        horizontalLayout_6->addWidget(pushButton_6);

        pushButton_C = new QPushButton(centralwidget);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        pushButton_C->setMinimumSize(QSize(0, 60));
        pushButton_C->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:#A0A0A0;\n"
"}"));

        horizontalLayout_6->addWidget(pushButton_C);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setMinimumSize(QSize(0, 60));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        horizontalLayout_7->addWidget(pushButton_1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 60));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:#A0A0A0;\n"
"}"));

        horizontalLayout_7->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 60));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:#A0A0A0;\n"
"}"));

        horizontalLayout_7->addWidget(pushButton_3);

        pushButton_D = new QPushButton(centralwidget);
        pushButton_D->setObjectName(QString::fromUtf8("pushButton_D"));
        pushButton_D->setMinimumSize(QSize(0, 60));
        pushButton_D->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:#A0A0A0;\n"
"}"));

        horizontalLayout_7->addWidget(pushButton_D);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setMinimumSize(QSize(192, 120));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        horizontalLayout_8->addWidget(pushButton_0);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_E = new QPushButton(centralwidget);
        pushButton_E->setObjectName(QString::fromUtf8("pushButton_E"));
        pushButton_E->setMinimumSize(QSize(60, 60));
        pushButton_E->setBaseSize(QSize(0, 0));
        pushButton_E->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:#A0A0A0;\n"
"}"));

        verticalLayout->addWidget(pushButton_E);

        pushButton_F = new QPushButton(centralwidget);
        pushButton_F->setObjectName(QString::fromUtf8("pushButton_F"));
        pushButton_F->setMinimumSize(QSize(60, 60));
        pushButton_F->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:#A0A0A0;\n"
"}"));

        verticalLayout->addWidget(pushButton_F);


        horizontalLayout_8->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_8);


        verticalLayout_4->addLayout(verticalLayout_3);

        Windowsec->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Windowsec);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 276, 21));
        menuMoznosti = new QMenu(menubar);
        menuMoznosti->setObjectName(QString::fromUtf8("menuMoznosti"));
        Windowsec->setMenuBar(menubar);

        menubar->addAction(menuMoznosti->menuAction());
        menuMoznosti->addAction(action_tandart);
        menuMoznosti->addSeparator();
        menuMoznosti->addSeparator();
        menuMoznosti->addAction(actionPrevod_Dec_Bin_Hex);

        retranslateUi(Windowsec);

        QMetaObject::connectSlotsByName(Windowsec);
    } // setupUi

    void retranslateUi(QMainWindow *Windowsec)
    {
        Windowsec->setWindowTitle(QApplication::translate("Windowsec", "Prevod Dec-Bin-Hex ", nullptr));
        action_tandart->setText(QApplication::translate("Windowsec", "Standardna kalkulacka", nullptr));
        actionPrevod_Dec_Bin_Hex->setText(QApplication::translate("Windowsec", "Prevod Dec-Bin-Hex", nullptr));
        pushButton_Dec->setText(QApplication::translate("Windowsec", "Dec", nullptr));
        lineEdit_dec->setText(QApplication::translate("Windowsec", "0", nullptr));
        pushButton_hex->setText(QApplication::translate("Windowsec", "Hex", nullptr));
        lineEdit_hex->setText(QApplication::translate("Windowsec", "0", nullptr));
        pushButton_bin->setText(QApplication::translate("Windowsec", "Bin", nullptr));
        lineEdit_bin->setText(QApplication::translate("Windowsec", "0", nullptr));
        pushButton_vymaz_2->setText(QApplication::translate("Windowsec", "C", nullptr));
        pushButton_backspace_2->setText(QString());
        pushButton_A->setText(QApplication::translate("Windowsec", "A", nullptr));
        pushButton_7->setText(QApplication::translate("Windowsec", "7", nullptr));
        pushButton_8->setText(QApplication::translate("Windowsec", "8", nullptr));
        pushButton_9->setText(QApplication::translate("Windowsec", "9", nullptr));
        pushButton_B->setText(QApplication::translate("Windowsec", "B", nullptr));
        pushButton_4->setText(QApplication::translate("Windowsec", "4", nullptr));
        pushButton_5->setText(QApplication::translate("Windowsec", "5", nullptr));
        pushButton_6->setText(QApplication::translate("Windowsec", "6", nullptr));
        pushButton_C->setText(QApplication::translate("Windowsec", "C", nullptr));
        pushButton_1->setText(QApplication::translate("Windowsec", "1", nullptr));
        pushButton_2->setText(QApplication::translate("Windowsec", "2", nullptr));
        pushButton_3->setText(QApplication::translate("Windowsec", "3", nullptr));
        pushButton_D->setText(QApplication::translate("Windowsec", "D", nullptr));
        pushButton_0->setText(QApplication::translate("Windowsec", "0", nullptr));
        pushButton_E->setText(QApplication::translate("Windowsec", "E", nullptr));
        pushButton_F->setText(QApplication::translate("Windowsec", "F", nullptr));
        menuMoznosti->setTitle(QApplication::translate("Windowsec", "Moznosti", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Windowsec: public Ui_Windowsec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWSEC_H
