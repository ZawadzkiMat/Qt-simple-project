#ifndef ADDCATEGORY_H
#define ADDCATEGORY_H

#include <QDialog>
#include <QSql>

namespace Ui {
class AddCategory;
}

class AddCategory : public QDialog
{
    Q_OBJECT

public:
    explicit AddCategory(QWidget *parent = 0);
    ~AddCategory();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::AddCategory *ui;
};

#endif // ADDCATEGORY_H
