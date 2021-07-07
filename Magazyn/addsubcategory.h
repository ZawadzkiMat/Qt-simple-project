#ifndef ADDSUBCATEGORY_H
#define ADDSUBCATEGORY_H

#include <QDialog>

namespace Ui {
class AddSubcategory;
}

class AddSubcategory : public QDialog
{
    Q_OBJECT

public:
    explicit AddSubcategory(QWidget *parent = nullptr);
    ~AddSubcategory();

private:
    Ui::AddSubcategory *ui;
};

#endif // ADDSUBCATEGORY_H
