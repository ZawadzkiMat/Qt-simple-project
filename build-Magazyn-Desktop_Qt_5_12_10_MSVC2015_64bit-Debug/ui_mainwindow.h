/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDodaj_Katrgorie;
    QAction *actionDodaj_Subkategori;
    QAction *actionDodaj_Produkt;
    QAction *actionEdytuj_Kategori;
    QAction *actionEdytuj_Subkategori;
    QAction *actionUsu_Kategori;
    QAction *actionUsu_Subkategori;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *comboBoxCategory;
    QComboBox *comboBoxSubCategory;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menuDodaj;
    QMenu *menuEdytuj;
    QMenu *menuUsu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(736, 503);
        actionDodaj_Katrgorie = new QAction(MainWindow);
        actionDodaj_Katrgorie->setObjectName(QString::fromUtf8("actionDodaj_Katrgorie"));
        actionDodaj_Subkategori = new QAction(MainWindow);
        actionDodaj_Subkategori->setObjectName(QString::fromUtf8("actionDodaj_Subkategori"));
        actionDodaj_Produkt = new QAction(MainWindow);
        actionDodaj_Produkt->setObjectName(QString::fromUtf8("actionDodaj_Produkt"));
        actionEdytuj_Kategori = new QAction(MainWindow);
        actionEdytuj_Kategori->setObjectName(QString::fromUtf8("actionEdytuj_Kategori"));
        actionEdytuj_Subkategori = new QAction(MainWindow);
        actionEdytuj_Subkategori->setObjectName(QString::fromUtf8("actionEdytuj_Subkategori"));
        actionUsu_Kategori = new QAction(MainWindow);
        actionUsu_Kategori->setObjectName(QString::fromUtf8("actionUsu_Kategori"));
        actionUsu_Subkategori = new QAction(MainWindow);
        actionUsu_Subkategori->setObjectName(QString::fromUtf8("actionUsu_Subkategori"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 701, 431));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        comboBoxCategory = new QComboBox(verticalLayoutWidget);
        comboBoxCategory->setObjectName(QString::fromUtf8("comboBoxCategory"));

        horizontalLayout_7->addWidget(comboBoxCategory);

        comboBoxSubCategory = new QComboBox(verticalLayoutWidget);
        comboBoxSubCategory->setObjectName(QString::fromUtf8("comboBoxSubCategory"));

        horizontalLayout_7->addWidget(comboBoxSubCategory);


        verticalLayout->addLayout(horizontalLayout_7);

        tableView = new QTableView(verticalLayoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 736, 26));
        menuDodaj = new QMenu(menubar);
        menuDodaj->setObjectName(QString::fromUtf8("menuDodaj"));
        menuEdytuj = new QMenu(menubar);
        menuEdytuj->setObjectName(QString::fromUtf8("menuEdytuj"));
        menuUsu = new QMenu(menubar);
        menuUsu->setObjectName(QString::fromUtf8("menuUsu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuDodaj->menuAction());
        menubar->addAction(menuEdytuj->menuAction());
        menubar->addAction(menuUsu->menuAction());
        menuDodaj->addAction(actionDodaj_Katrgorie);
        menuDodaj->addSeparator();
        menuDodaj->addAction(actionDodaj_Subkategori);
        menuDodaj->addAction(actionDodaj_Produkt);
        menuEdytuj->addAction(actionEdytuj_Kategori);
        menuEdytuj->addAction(actionEdytuj_Subkategori);
        menuUsu->addAction(actionUsu_Kategori);
        menuUsu->addAction(actionUsu_Subkategori);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionDodaj_Katrgorie->setText(QApplication::translate("MainWindow", "Dodaj Katrgorie", nullptr));
        actionDodaj_Subkategori->setText(QApplication::translate("MainWindow", "Dodaj Subkategori\304\231", nullptr));
        actionDodaj_Produkt->setText(QApplication::translate("MainWindow", "Dodaj Produkt", nullptr));
        actionEdytuj_Kategori->setText(QApplication::translate("MainWindow", "Edytuj Kategori\304\231", nullptr));
        actionEdytuj_Subkategori->setText(QApplication::translate("MainWindow", "Edytuj Subkategori\304\231", nullptr));
        actionUsu_Kategori->setText(QApplication::translate("MainWindow", "Usu\305\204 Kategori\304\231", nullptr));
        actionUsu_Subkategori->setText(QApplication::translate("MainWindow", "Usu\305\204 Subkategori\304\231", nullptr));
        menuDodaj->setTitle(QApplication::translate("MainWindow", "Dodaj", nullptr));
        menuEdytuj->setTitle(QApplication::translate("MainWindow", "Edytuj", nullptr));
        menuUsu->setTitle(QApplication::translate("MainWindow", "Usu\305\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
