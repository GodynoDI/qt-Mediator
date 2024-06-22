#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include "mediator.h"

class Window : public QWidget {
    Q_OBJECT
public:
    Window(Mediator* mediator);
    void changeMediator(Mediator* mediator);

protected:
    Mediator* mediator;
};

#endif // WINDOW_H
