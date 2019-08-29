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
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:  

    void forAllMovieSlot(); // это созданный нами слот для всех операций
    void forResultSlot(); // это созданный нами слот для получения результата
    void forTextEditResultSlot(); // это созданный нами слот для получения промежуточного результата
    void forTextReset(); // это созданный нами слот для обнуления данных
    void forSymbolEnter(); // это созданный нами слот для ввода цифр в текстовое поле
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
