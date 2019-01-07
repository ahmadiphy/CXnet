#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void plot1(QCustomPlot * myplot);
private slots:
    void on_mbt1_clicked();

private:
    Ui::MainWindow *ui;
    Ui::MainWindow *ui1;
     QString mName;
};

#endif // MAINWINDOW_H
