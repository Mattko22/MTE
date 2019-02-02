/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QAction *actionStandardna_kalkulacka;
    QAction *actionPrevod_Dec_Bin_Hex;
    QAction *actionKurz_listok;
    QAction *actionZnamky;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_13;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *label_66;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLabel *label_33;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLabel *label_44;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLabel *label_55;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLabel *label_77;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuMoznosti;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QString::fromUtf8("Window"));
        Window->resize(300, 708);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Window->sizePolicy().hasHeightForWidth());
        Window->setSizePolicy(sizePolicy);
        Window->setMinimumSize(QSize(250, 708));
        Window->setMaximumSize(QSize(300, 708));
        QFont font;
        font.setPointSize(11);
        Window->setFont(font);
        Window->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));
        actionStandardna_kalkulacka = new QAction(Window);
        actionStandardna_kalkulacka->setObjectName(QString::fromUtf8("actionStandardna_kalkulacka"));
        actionPrevod_Dec_Bin_Hex = new QAction(Window);
        actionPrevod_Dec_Bin_Hex->setObjectName(QString::fromUtf8("actionPrevod_Dec_Bin_Hex"));
        actionKurz_listok = new QAction(Window);
        actionKurz_listok->setObjectName(QString::fromUtf8("actionKurz_listok"));
        actionKurz_listok->setEnabled(false);
        actionZnamky = new QAction(Window);
        actionZnamky->setObjectName(QString::fromUtf8("actionZnamky"));
        centralWidget = new QWidget(Window);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(200, 650));
        centralWidget->setMaximumSize(QSize(1500, 1500));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(214, 70));
        label_8->setMaximumSize(QSize(16777215, 80));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Script MT Bold"));
        font1.setPointSize(17);
        font1.setBold(true);
        font1.setWeight(75);
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_8);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_5->addWidget(label_9);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(130, 60));
        QFont font2;
        font2.setPointSize(13);
        label_13->setFont(font2);
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 123, 75);"));
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_13);

        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(130, 60));
        label_14->setFont(font2);
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 123, 75);"));
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_14);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(130, 60));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_6);

        label_66 = new QLabel(centralWidget);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setMinimumSize(QSize(130, 60));
        label_66->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(196, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_66->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_66);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(130, 60));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(130, 60));
        QFont font3;
        font3.setPointSize(15);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(196, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(130, 60));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_3);

        label_33 = new QLabel(centralWidget);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setMinimumSize(QSize(130, 60));
        QFont font4;
        font4.setPointSize(8);
        label_33->setFont(font4);
        label_33->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(196, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_33->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_33);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(130, 60));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_4);

        label_44 = new QLabel(centralWidget);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setMinimumSize(QSize(130, 60));
        label_44->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(196, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_44->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_44);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(130, 60));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_5);

        label_55 = new QLabel(centralWidget);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setMinimumSize(QSize(130, 60));
        label_55->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(196, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_55->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_55);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(130, 60));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_7);

        label_77 = new QLabel(centralWidget);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setMinimumSize(QSize(130, 60));
        label_77->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(196, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_77->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_77);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(260, 53));

        verticalLayout->addWidget(pushButton);


        verticalLayout_5->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);

        Window->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Window);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 300, 21));
        menuMoznosti = new QMenu(menuBar);
        menuMoznosti->setObjectName(QString::fromUtf8("menuMoznosti"));
        Window->setMenuBar(menuBar);
        toolBar = new QToolBar(Window);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Window->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuMoznosti->menuAction());
        menuMoznosti->addAction(actionStandardna_kalkulacka);
        menuMoznosti->addSeparator();
        menuMoznosti->addAction(actionPrevod_Dec_Bin_Hex);
        menuMoznosti->addAction(actionKurz_listok);
        menuMoznosti->addAction(actionZnamky);

        retranslateUi(Window);

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QMainWindow *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "MainWindow", nullptr));
        actionStandardna_kalkulacka->setText(QApplication::translate("Window", "Standardna kalkulacka", nullptr));
        actionPrevod_Dec_Bin_Hex->setText(QApplication::translate("Window", "Prevod Dec-Bin-Hex", nullptr));
        actionKurz_listok->setText(QApplication::translate("Window", "Kurz. listok", nullptr));
        actionZnamky->setText(QApplication::translate("Window", "Znamky", nullptr));
        label_8->setText(QApplication::translate("Window", "Kurz 1\342\202\254", nullptr));
        label_9->setText(QString());
        label_13->setText(QApplication::translate("Window", "Mena", nullptr));
        label_14->setText(QApplication::translate("Window", "Hodnota", nullptr));
        label_6->setText(QString());
        label_66->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_33->setText(QString());
        label_4->setText(QString());
        label_44->setText(QString());
        label_5->setText(QString());
        label_55->setText(QString());
        label_7->setText(QString());
        label_77->setText(QString());
        pushButton->setText(QApplication::translate("Window", "Stiahni kurz listok", nullptr));
        menuMoznosti->setTitle(QApplication::translate("Window", "Moznosti", nullptr));
        toolBar->setWindowTitle(QApplication::translate("Window", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
