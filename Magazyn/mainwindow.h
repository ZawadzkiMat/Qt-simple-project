#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionDodaj_Katrgorie_triggered();

    void on_actionDodaj_Subkategori_triggered();

    void on_actionDodaj_Produkt_triggered();

    void on_actionEdytuj_Kategori_triggered();

    void on_actionEdytuj_Subkategori_triggered();

    void on_actionUsu_Kategori_triggered();

    void on_actionUsu_Subkategori_triggered();

    void on_comboBoxCategory_currentIndexChanged(int index);

    void on_comboBoxSubCategory_currentIndexChanged(int index);

    void on_tableView_doubleClicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    int categoryID;
    int subCategoryID;

    QDialog *addCategoryDialog;
    QDialog *addSubCategoryDialog;
    QDialog *addProductDialog;
    QDialog *editCategoryDialog;
    QDialog *editSubCategoryDialog;
    QDialog *editProductDialog;
    QDialog *productDetailsDialog;
    QDialog *deleteCategoryDialog;
    QDialog *deleteSubCategoryDialog;

    QSqlQueryModel *categoriesModel;
    QSqlQueryModel *subCategoriesModel;
    QSqlQueryModel *objectsModel;
    QSqlRecord getCategoryIdRecord;
    QSqlRecord getSubCategoryIdRecord;
};
#endif // MAINWINDOW_H
