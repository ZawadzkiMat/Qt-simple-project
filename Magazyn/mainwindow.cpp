#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Comboboxy
    //Kategorie
    categoriesModel = new QSqlQueryModel(ui ->comboBoxCategory);
    categoriesModel -> setQuery("SELECT name, category_id FROM categories WHERE parent_id is NULL");
    ui -> comboBoxCategory -> setModel(categoriesModel);

    //Podkategorie
    subCategoriesModel = new QSqlQueryModel(ui -> comboBoxSubCategory);
    QSqlQuery categoryId;
    categoryId.prepare("SELECT category_id FROM categories WHERE name = ?");
    categoryId.exec();
    categoryId.first();
    categoryID = categoryId.value("category_id").toInt();
    //objectsModel ->setQuery("SELECT ") // dokończyć po zrobieniu tabel na bazie


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionDodaj_Katrgorie_triggered()
{
    addCategoryDialog = new AddCategory(this);
    addCategoryDialog ->exec();
}

void MainWindow::on_actionDodaj_Subkategori_triggered()
{

}

void MainWindow::on_actionDodaj_Produkt_triggered()
{

}

void MainWindow::on_actionEdytuj_Kategori_triggered()
{

}

void MainWindow::on_actionEdytuj_Subkategori_triggered()
{

}

void MainWindow::on_actionUsu_Kategori_triggered()
{

}

void MainWindow::on_actionUsu_Subkategori_triggered()
{

}

void MainWindow::on_comboBoxCategory_currentIndexChanged(int index)
{

}

void MainWindow::on_comboBoxSubCategory_currentIndexChanged(int index)
{

}

void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{

}
