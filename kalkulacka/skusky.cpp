#include "skusky.h"
#include "ui_skusky.h"
#include "window.h"
#include "ui_window.h"
#include "mainwindow.h"
#include "windowsec.h"
#include <QDir>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QtDebug>


Skusky::Skusky(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Skusky)
{
    ui->setupUi(this);
    QString path ;
        path="/./StudentDatabase/";
        QDir file;
        //QString filepath=QDir::path();
        QString filename = file.path() + QDir::separator() + "znamky.db";

        if(!createDB(filename))
        {
            QMessageBox::critical(this,
                                  tr("Database not found"),
                                  tr("Database not found. The application will be closed."),
                                  QMessageBox::Ok);
            qApp->exit();
        }

}

Skusky::~Skusky()
{
    delete ui;
}

void Skusky::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
bool Skusky::createDB(QString dbname)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(dbname);

        if(db.open())
        {

            bool found = false;
            foreach (QString table, db.tables())
            {
                if(table == "znamky")
                {
                    found = true;
                    break;
                }
            }
            if(!found)
            {
                QSqlQuery query(db);
                query.exec("CREATE TABLE znamky (nazov VARCHAR(32), rocnik VARCHAR(16),semester VARCHAR(16),znamka VARCHAR(16))");
            }

            model = new QSqlTableModel(this,db);
            model->setTable("znamky");

            model->setEditStrategy(QSqlTableModel::OnFieldChange);
            model->select();


        }
        else
            return false;

        return true;



}


void Skusky::AddNewStudent(QString nazov, QString rocnik,QString semester,QString znamka)
{
    QSqlRecord rec = model->record();
        rec.setValue("nazov",nazov);
        rec.setValue("rocnik",rocnik);
        rec.setValue("semester",semester);
        rec.setValue("znamka",znamka);


        // insert a new record (-1)
        model->insertRecord(-1,rec);
        model->submitAll();
        ui->txt_predmet->setText("");
        ui->combo_semes->setCurrentIndex(0);
        ui->combo_znamka->setCurrentIndex(6);
}



void Skusky::ViewDetails()
{
    QTableView *view=ui->tableView;
        model->clear();
        model->setTable("znamky");
        model->setEditStrategy(QSqlTableModel::OnFieldChange);
        model->select();
       view->setModel(model);
       view->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


}

void Skusky::on_btn_add_released()
{
    QString nazov=ui->txt_predmet->text();
    qDebug()<<nazov;
    QString rocnik=ui->comboBox_rocnik->currentText();
    qDebug()<<rocnik;
    QString znamka=ui->combo_znamka->currentText();
    qDebug()<<znamka;
    QString semester=ui->combo_semes->currentText();
    qDebug()<<semester;
        AddNewStudent(nazov,rocnik,semester,znamka);
}

void Skusky::on_btn_delete_released()
{
    QModelIndex sample = ui->tableView->currentIndex();
        if( sample.row() >= 0 )
        {
            QMessageBox::StandardButton dlg;
            dlg = QMessageBox::question(this, tr("Zmazanie zaznamu?"),
                                        QString(tr("Vymazat zaznam?")),
                                        QMessageBox::Yes | QMessageBox::No);

            if(dlg == QMessageBox::Yes)
            {
                // remove the current index
                model->removeRow(sample.row());
                ViewDetails();

            }
        }
}

void Skusky::on_btn_load_released()
{
    QTableView  *view;
        view=ui->tableView;
         ViewDetails();
}

void Skusky::on_actionStandardna_kalkulacka_triggered()
{
    MainWindow *MWindow = new MainWindow;
    MWindow->show();
    setVisible(false);
}

void Skusky::on_actionPrevod_Dec_Bin_Hex_triggered()
{
    Windowsec *SWindow = new Windowsec;
    SWindow->show();
    setVisible(false);
}

void Skusky::on_actionKurz_listok_triggered()
{
    Window *CWindow = new Window;
    CWindow->show();
    setVisible(false);
}
