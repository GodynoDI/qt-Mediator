#ifndef WINDOWC_H
#define WINDOWC_H

#include <QWidget>
#include "window.h"
namespace Ui {
class WindowC;
}

class WindowC : public Window
{
    Q_OBJECT

public:
    WindowC(Mediator* mediator);
    ~WindowC();
    void setClearButtonEnabled(bool state);

private slots:
    void on_clearButton_clicked();

private:
    Ui::WindowC *ui;
};

#endif // WINDOWC_H
