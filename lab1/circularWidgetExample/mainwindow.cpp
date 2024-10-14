#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "circularwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CircularWidget* circ = new CircularWidget(this);
    circ->show();

    int btnSize = 50;
    QPushButton* btn = new QPushButton("PRESS", this);
    btn->setGeometry((width()-btnSize) / 2, (height() - btnSize) / 2, btnSize, btnSize);
    btn->setStyleSheet(QString("background-color:orange"));

    anim = new QPropertyAnimation(circ, "geometry");
    anim->setDuration(10000);
    anim->setStartValue(circ->rect());
    anim->setKeyValueAt(0.2, QRect(geometry().width()-circ->width(), 0, circ->width(), circ->height()));
    anim->setKeyValueAt(0.4, QRect(geometry().width()-circ->width(),geometry().height()-circ->width(),circ->width(),circ->height()));
    anim->setKeyValueAt(0.6, QRect(0, geometry().height()- circ->height(), circ->width(), circ->height()));
    anim->setEndValue(circ->rect());

    connect(btn, &QPushButton::clicked,this,[this]()
    {
        anim->start(QPropertyAnimation::DeleteWhenStopped);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
