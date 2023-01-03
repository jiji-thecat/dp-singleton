#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPixmap>
#include <QPushButton>

#include "space.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QVBoxLayout *rootLayout;
    QVBoxLayout *iconFieldLayout;
    QHBoxLayout *buttonFieldLayout;

    void setLabel(Space const &space);
    void setButton();
    QString spaceList[3] = {"moon", "chikyuu", "sun"};

private slots:
    void buttonClicked();

};
#endif // MAINWINDOW_H
