#include "addsubcategory.h"
#include "ui_addsubcategory.h"

AddSubcategory::AddSubcategory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddSubcategory)
{
    ui->setupUi(this);
}

AddSubcategory::~AddSubcategory()
{
    delete ui;
}
