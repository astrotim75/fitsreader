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

    ui->btnOpenFolder->setIcon(QIcon(":/Assets/open_folder.png"));
    ui->btnOpenFolder->setIconSize(QSize(25,25));
    ui->btnOpenFolder->setToolTip(tr("Open fits file folder"));

    ui->btnFitsData->setIcon(QIcon(":/Assets/fits_data.png"));
    ui->btnFitsData->setIconSize(QSize(25,25));
    ui->btnFitsData->setToolTip(tr("Shows fits file meta-data"));

    ui->btnFitsBatchData->setIcon(QIcon(":/Assets/fits_batch_data.png"));
    ui->btnFitsBatchData->setIconSize(QSize(25,25));
    ui->btnFitsBatchData->setToolTip(tr("Shows fits batch file meta-data"));

}

MainWindow::~MainWindow()
{
    delete ui;
}
