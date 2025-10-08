#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QListWidget>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void onAddSongClicked();

    void onShowSongClicked();

    void onSaveAndExitClicked();

private:
    Ui::MainWindow *ui;

    QLineEdit *titleEdit;

    QLineEdit *artistEdit;

    QLineEdit *durationEdit;

    QListWidget *songList;

    QPushButton *addButton;

    QPushButton *showButton;

    QPushButton *saveExitButton;

};
#endif // MAINWINDOW_H
