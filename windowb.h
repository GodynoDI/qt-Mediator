#ifndef WINDOWB_H
#define WINDOWB_H

#include <QWidget>
#include "window.h"
namespace Ui {
class WindowB;
}

class WindowB : public Window
{
    Q_OBJECT

public:
    WindowB(Mediator* mediator);
    ~WindowB();
    void setPasteButtonEnabled(bool state);
private slots:
    void on_copyButton_clicked();

    void on_pasteButton_clicked();

private:
    Ui::WindowB *ui;
};

#endif // WINDOWB_H
