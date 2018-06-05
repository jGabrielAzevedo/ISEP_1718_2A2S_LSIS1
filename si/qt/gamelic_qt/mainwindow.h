#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_inserirEquipaAction_triggered();

    void on_inserirProvaAction_triggered();

    void on_inserirRobotAction_triggered();

    void on_listarEquipaAction_triggered();

    void on_listarProvaAction_triggered();

    void on_listarRobotAction_triggered();

    void on_modificarEquipaAction_triggered();

    void on_modificarProvaAction_triggered();

    void on_modificarRobotAction_triggered();

    void on_eliminarEquipaAction_triggered();

    void on_eliminarProvaAction_triggered();

    void on_eliminarRobotAction_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
