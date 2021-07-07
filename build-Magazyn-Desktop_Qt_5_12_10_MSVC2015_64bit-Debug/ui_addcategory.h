/********************************************************************************
** Form generated from reading UI file 'addcategory.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCATEGORY_H
#define UI_ADDCATEGORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddCategory
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *AddCategory)
    {
        if (AddCategory->objectName().isEmpty())
            AddCategory->setObjectName(QString::fromUtf8("AddCategory"));
        AddCategory->resize(400, 300);
        buttonBox = new QDialogButtonBox(AddCategory);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        verticalLayoutWidget = new QWidget(AddCategory);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 371, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddCategory);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddCategory, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddCategory, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddCategory);
    } // setupUi

    void retranslateUi(QDialog *AddCategory)
    {
        AddCategory->setWindowTitle(QApplication::translate("AddCategory", "Dialog", nullptr));
        label->setText(QApplication::translate("AddCategory", "Nazwa kategorii:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCategory: public Ui_AddCategory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCATEGORY_H
