#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "ui_form.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setGeometry(0, 0, 1000, 550);
    setFixedSize(1000,550);
    statusBar()->clearMessage();
    setWindowTitle("CXnet");
    plot1(ui->myplot);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::plot1(QCustomPlot * myplot)
{
    myplot->xAxis2->setVisible(1);
    myplot->yAxis2->setVisible(1);
    mName="log log Plot";
    // generate some data:
    QVector<double> x(201), y(201); // initialize with entries 0..100
    for (int i=0; i<201; ++i)
    {
        x[i] = i/50.0; // x goes from -1 to 1
        y[i] = x[i]*x[i]*x[i];  // let's plot a quadratic function
    }
    // create graph and assign data to it:
    myplot->addGraph();
    myplot->graph(0)->setData(x, y);
    // give the axes some labels:
    myplot->xAxis->setLabel("k");
    myplot->yAxis->setLabel("P(k)");
    // set axes ranges, so we see all data:
    double minX=0,minY=0,maxX=100,maxY=100;
    myplot->xAxis->setRange(minX, maxX);
    myplot->yAxis->setRange(minY, maxY);
    myplot->xAxis2->setRange(minX, maxX);
    myplot->yAxis2->setRange(minY, maxY);
    myplot->xAxis2->setTickLabels(0);
    myplot->yAxis2->setTickLabels(0);
    myplot->xAxis->setScaleType(QCPAxis::stLogarithmic);
    myplot->xAxis->setTicker(QSharedPointer<QCPAxisTickerLog>(new QCPAxisTickerLog));
    myplot->yAxis->setScaleType(QCPAxis::stLogarithmic);
    myplot->yAxis->setTicker(QSharedPointer<QCPAxisTickerLog>(new QCPAxisTickerLog));
    myplot->replot();
}

void MainWindow::on_mbt1_clicked()
{

}

void MainWindow::on_exit_clicked()
{
    close();
}
