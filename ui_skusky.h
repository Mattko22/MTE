/********************************************************************************
** Form generated from reading UI file 'skusky.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKUSKY_H
#define UI_SKUSKY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Skusky
{
public:
    QAction *actionStandardna_kalkulacka;
    QAction *actionPrevod_Dec_Bin_Hex;
    QAction *actionKurz_listok;
    QAction *actionZnamky;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *txt_predmet;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_rocnik;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *combo_znamka;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *combo_semes;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btn_add;
    QPushButton *btn_delete;
    QPushButton *btn_load;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menuMoznosti;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Skusky)
    {
        if (Skusky->objectName().isEmpty())
            Skusky->setObjectName(QString::fromUtf8("Skusky"));
        Skusky->resize(480, 640);
        actionStandardna_kalkulacka = new QAction(Skusky);
        actionStandardna_kalkulacka->setObjectName(QString::fromUtf8("actionStandardna_kalkulacka"));
        actionPrevod_Dec_Bin_Hex = new QAction(Skusky);
        actionPrevod_Dec_Bin_Hex->setObjectName(QString::fromUtf8("actionPrevod_Dec_Bin_Hex"));
        actionKurz_listok = new QAction(Skusky);
        actionKurz_listok->setObjectName(QString::fromUtf8("actionKurz_listok"));
        actionZnamky = new QAction(Skusky);
        actionZnamky->setObjectName(QString::fromUtf8("actionZnamky"));
        actionZnamky->setEnabled(false);
        centralwidget = new QWidget(Skusky);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        txt_predmet = new QLineEdit(centralwidget);
        txt_predmet->setObjectName(QString::fromUtf8("txt_predmet"));

        horizontalLayout_3->addWidget(txt_predmet);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(50);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_rocnik = new QComboBox(centralwidget);
        comboBox_rocnik->addItem(QString());
        comboBox_rocnik->addItem(QString());
        comboBox_rocnik->addItem(QString());
        comboBox_rocnik->addItem(QString());
        comboBox_rocnik->addItem(QString());
        comboBox_rocnik->setObjectName(QString::fromUtf8("comboBox_rocnik"));

        horizontalLayout_2->addWidget(comboBox_rocnik);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        combo_znamka = new QComboBox(centralwidget);
        combo_znamka->addItem(QString());
        combo_znamka->addItem(QString());
        combo_znamka->addItem(QString());
        combo_znamka->addItem(QString());
        combo_znamka->addItem(QString());
        combo_znamka->addItem(QString());
        combo_znamka->addItem(QString());
        combo_znamka->setObjectName(QString::fromUtf8("combo_znamka"));

        horizontalLayout_4->addWidget(combo_znamka);


        horizontalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        combo_semes = new QComboBox(centralwidget);
        combo_semes->addItem(QString());
        combo_semes->addItem(QString());
        combo_semes->setObjectName(QString::fromUtf8("combo_semes"));

        horizontalLayout->addWidget(combo_semes);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));

        horizontalLayout_5->addWidget(btn_add);

        btn_delete = new QPushButton(centralwidget);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));

        horizontalLayout_5->addWidget(btn_delete);

        btn_load = new QPushButton(centralwidget);
        btn_load->setObjectName(QString::fromUtf8("btn_load"));

        horizontalLayout_5->addWidget(btn_load);


        verticalLayout->addLayout(horizontalLayout_5);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(tableView);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        Skusky->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Skusky);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 480, 21));
        menuMoznosti = new QMenu(menubar);
        menuMoznosti->setObjectName(QString::fromUtf8("menuMoznosti"));
        Skusky->setMenuBar(menubar);
        statusbar = new QStatusBar(Skusky);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Skusky->setStatusBar(statusbar);

        menubar->addAction(menuMoznosti->menuAction());
        menuMoznosti->addAction(actionStandardna_kalkulacka);
        menuMoznosti->addSeparator();
        menuMoznosti->addAction(actionPrevod_Dec_Bin_Hex);
        menuMoznosti->addAction(actionKurz_listok);
        menuMoznosti->addAction(actionZnamky);

        retranslateUi(Skusky);

        QMetaObject::connectSlotsByName(Skusky);
    } // setupUi

    void retranslateUi(QMainWindow *Skusky)
    {
        Skusky->setWindowTitle(QApplication::translate("Skusky", "MainWindow", nullptr));
        actionStandardna_kalkulacka->setText(QApplication::translate("Skusky", "Standardna kalkulacka", nullptr));
        actionPrevod_Dec_Bin_Hex->setText(QApplication::translate("Skusky", "Prevod Dec-Bin-Hex", nullptr));
        actionKurz_listok->setText(QApplication::translate("Skusky", "Kurz. listok", nullptr));
        actionZnamky->setText(QApplication::translate("Skusky", "Znamky", nullptr));
        label->setText(QApplication::translate("Skusky", "predmet:", nullptr));
        label_2->setText(QApplication::translate("Skusky", "ro\304\215n\303\255k:", nullptr));
        comboBox_rocnik->setItemText(0, QApplication::translate("Skusky", "1.", nullptr));
        comboBox_rocnik->setItemText(1, QApplication::translate("Skusky", "2.", nullptr));
        comboBox_rocnik->setItemText(2, QApplication::translate("Skusky", "3.", nullptr));
        comboBox_rocnik->setItemText(3, QApplication::translate("Skusky", "4.", nullptr));
        comboBox_rocnik->setItemText(4, QApplication::translate("Skusky", "5.", nullptr));

        label_4->setText(QApplication::translate("Skusky", "zn\303\241mka:", nullptr));
        combo_znamka->setItemText(0, QApplication::translate("Skusky", "A", nullptr));
        combo_znamka->setItemText(1, QApplication::translate("Skusky", "B", nullptr));
        combo_znamka->setItemText(2, QApplication::translate("Skusky", "C", nullptr));
        combo_znamka->setItemText(3, QApplication::translate("Skusky", "D", nullptr));
        combo_znamka->setItemText(4, QApplication::translate("Skusky", "E", nullptr));
        combo_znamka->setItemText(5, QApplication::translate("Skusky", "F", nullptr));
        combo_znamka->setItemText(6, QApplication::translate("Skusky", "Fx", nullptr));

        label_3->setText(QApplication::translate("Skusky", "semester:", nullptr));
        combo_semes->setItemText(0, QApplication::translate("Skusky", "zimn\303\275", nullptr));
        combo_semes->setItemText(1, QApplication::translate("Skusky", "letn\303\275", nullptr));

        btn_add->setText(QApplication::translate("Skusky", "Pridaj", nullptr));
        btn_delete->setText(QApplication::translate("Skusky", "Zmaz", nullptr));
        btn_load->setText(QApplication::translate("Skusky", "Nacitaj", nullptr));
        menuMoznosti->setTitle(QApplication::translate("Skusky", "Moznosti", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Skusky: public Ui_Skusky {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKUSKY_H
