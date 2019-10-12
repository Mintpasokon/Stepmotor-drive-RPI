#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QPushButton* up1;
    QPushButton* down1;
    QPushButton* left1;
    QPushButton* right1;
    QPushButton* up2;
    QPushButton* down2;
    QPushButton* left2;
    QPushButton* right2;
};

#endif // MAINWINDOW_H
