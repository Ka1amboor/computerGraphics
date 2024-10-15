#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include "circularwidget.h"
#include <QMainWindow>
#include <QPropertyAnimation>
#include <QPushButton>
#include <QTimer>

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

private:
    Ui::MainWindow *ui;
    CircularWidget* circ;
    QPropertyAnimation* anim;

    QTimer *timer;
    double angle; // Переменная угла
    private slots:
    void updatePosition(); // Слот для обновления позиции круга



};
#endif  //MAINWINDOW_H
