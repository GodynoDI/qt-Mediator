#ifndef WINDOWA_H
#define WINDOWA_H

#include <QWidget>
#include "window.h"
namespace Ui {
class WindowA;
}

class WindowA : public Window
{
    Q_OBJECT

public:
    WindowA(Mediator *mediator);
    ~WindowA();
    void copy();
    void paste();
    void clear();
    QString getSelectedText();
    void replaceSelectedText();

private slots:
    void on_textEdit_textChanged();

    void on_textEdit_selectionChanged();

private:
    Ui::WindowA *ui;
};

#endif // WINDOWA_H
