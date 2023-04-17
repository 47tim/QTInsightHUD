#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int CURRENT_VIEW = 0;

private slots:

    void on_homeBtn_clicked();

    void on_advancedBtn_clicked();

    void on_settingsBtn_clicked();

    void on_extraBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
