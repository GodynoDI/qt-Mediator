#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <QString>
#include <QClipboard>
class Window;
class Mediator {
public:
    virtual void notify(Window* sender, QString event) = 0;
};

#endif // MEDIATOR_H
