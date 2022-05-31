#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "chooselevelscene.h"
#include <QSound>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent *);
    chooselevelscene *chooseScene = NULL;
    QSound * startSound;

private:
    Ui::MainWindow *ui;
public slots:
    void startState();
    void toNewPlot();//进入选关界面
    void choiceLevel();//从选关界面退回

};

#endif // MAINWINDOW_H
