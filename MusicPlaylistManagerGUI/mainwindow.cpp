#include "mainwindow.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)

{

    setWindowTitle("پلی لیست موسیقی");

    resize(300, 200);

}

MainWindow::~MainWindow()
{

}
