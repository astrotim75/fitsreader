#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->btnOpenFile->setIcon(QIcon(":/Assets/open_file.png"));
    ui->btnOpenFile->setIconSize(QSize(25,25));
    ui->btnOpenFile->setToolTip(tr("Open fits file"));

}

MainWindow::~MainWindow()
{
    delete ui;
}
