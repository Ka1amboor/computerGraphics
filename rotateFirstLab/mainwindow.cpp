#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "circularwidget.h"
#include <QPushButton>
#include <QPropertyAnimation>
#include <QTimer>
#include <cmath>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,angle(0.0)
{
    // ui->setupUi(this);
    // CircularWidget* circ = new CircularWidget(this);
    // circ->show();

    // int btnSize = 50;
    // QPushButton* btn = new QPushButton("PRESS", this);
    // btn->setGeometry((width()-btnSize) / 2, (height() - btnSize) / 2, btnSize, btnSize);
    // btn->setStyleSheet(QString("background-color:orange"));

    // anim = new QPropertyAnimation(circ, "geometry");
    // anim->setDuration(10000);
    // anim->setStartValue(circ->rect());
    // anim->setKeyValueAt(0.2, QRect(geometry().width()-circ->width(), 0, circ->width(), circ->height()));
    // anim->setKeyValueAt(0.4, QRect(geometry().width()-circ->width(),geometry().height()-circ->width(),circ->width(),circ->height()));
    // anim->setKeyValueAt(0.6, QRect(0, geometry().height()- circ->height(), circ->width(), circ->height()));
    // anim->setEndValue(circ->rect());



    // connect(btn, &QPushButton::clicked,this,[this]()
    // {
    //     anim->start(QPropertyAnimation::DeleteWhenStopped);
    // });


    ui->setupUi(this);
    circ = new CircularWidget(this);
    circ->show();

    int btnSize = 50;
    QPushButton* btn = new QPushButton("BUMPING THAT", this);
    btn->setGeometry((width()-btnSize) / 2, (height() - btnSize) / 2, btnSize, btnSize);
    btn->setStyleSheet(QString("background-color:green"));

    // Таймер для обновления положения
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updatePosition);

    connect(btn, &QPushButton::clicked, this, [this]()
            {
                if (timer->isActive())
                    timer->stop();
                else
                    timer->start(30); // 30 мс для плавного обновления
            });



}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updatePosition()
{
    // Центр вращения
    int centerX = width() / 2;
    int centerY = height() / 2;
    int radius = 100; // Радиус вращения

    // Обновление угла
    angle += 0.05; //  угол для скорости вращения

    // Новые координаты круга
    int x = centerX + radius * std::cos(angle) - circ->width() / 2;
    int y = centerY + radius * std::sin(angle) - circ->height() / 2;

    // Перемещаем круг
    circ->move(x, y);
}




