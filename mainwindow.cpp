#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStackedWidget>

/*
 *  Default view for screen. Will show an image of a battery
 *  filled with green to it's % charge. At the top of the screen,
 *  there are 4 buttons. This will have icons:
 *  "Home": mainwindow, "Advanced": advancedwindow, "Settings/Help": settingswindow
 *  The fourth button will be left blank, Muhammed wants to add more features later.
 *  The currently selected button will be highlighted a color.
 */

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_homeBtn_clicked()
{
    ui->stack->setCurrentIndex(0);
}


void MainWindow::on_advancedBtn_clicked()
{
    ui->stack->setCurrentIndex(1);
}


void MainWindow::on_settingsBtn_clicked()
{
    ui->stack->setCurrentIndex(2);
}


void MainWindow::on_extraBtn_clicked()
{
    ui->stack->setCurrentIndex(0);
}

