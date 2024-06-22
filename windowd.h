#ifndef WINDOWD_H
#define WINDOWD_H

#include <QWidget>

#include "window.h"
namespace Ui {
class WindowD;
}

class WindowD : public Window
{
    Q_OBJECT

public:
    WindowD(Mediator* mediator);
    ~WindowD();
    QString getBannedWords();
private:
    Ui::WindowD *ui;
};

#endif // WINDOWD_H
