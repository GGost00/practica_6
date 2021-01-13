#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_actionsol_triggered()
{

}

void MainWindow::on_actionplaneta_1_triggered()
{

}

void MainWindow::on_actionplaneta_2_triggered()
{

}

void MainWindow::on_actionplaneta_3_triggered()
{

}

void MainWindow::on_actionplaneta_4_triggered()
{

}

void MainWindow::on_actionplaneta_5_triggered()
{

}
