#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "earth.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    rootLayout = new QVBoxLayout;
    iconFieldLayout = new QVBoxLayout;
    buttonFieldLayout = new QHBoxLayout;

    setButton();

    rootLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    iconFieldLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    rootLayout->addLayout(buttonFieldLayout);
    rootLayout->addLayout(iconFieldLayout);
    setFixedSize(800, 500);

    ui->setupUi(this);
    ui->centralwidget->setLayout(rootLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buttonClicked()
{
    // static関数だから、こういう呼び方ができる
    // シングルトンなので、アドレスを返却する関数
    Earth &earth = Earth::getInstance();

    // コンストラクタがprivateなので生成できない
    // コピーも無理
    // Earth earth2 = earth;

    // ポインタ変数はアドレスを格納する変数なので、単体でアドレスを出力する
    // 0x1088a03c8
    std::cout << &earth << std::endl;

    // *間接演算子をつけることで、ポインタを間接参照する＝値にアクセスできるようになる
    setLabel(earth);
}

void MainWindow::setButton()
{
    QPushButton *button = new QPushButton("&Press me", this);
    connect(button, SIGNAL(clicked()), this, SLOT(buttonClicked()));
    buttonFieldLayout->addWidget(button);
}

void MainWindow::setLabel(Space const &space)
{
    QLabel *label = new QLabel();
    QPixmap *image = new QPixmap(":/assets/assets/" + space.getImage() + ".png");

    label->setPixmap(*image);
    label->setFixedSize(80, 80);
    label->setScaledContents(true);

    QString memoryAddress = QString::number((uintptr_t)&space, 16);
    // 0x1088a03c8
    QLabel *labelName = new QLabel("Memory address: 0x" + memoryAddress);

    iconFieldLayout->addWidget(label, 0, Qt::Alignment(Qt::AlignCenter));
    iconFieldLayout->addWidget(labelName);
}
