#ifndef CONCRETEMEDIATOR_H
#define CONCRETEMEDIATOR_H

#include <QApplication>
#include <QVector>

#include "mediator.h"
#include "windowa.h"
#include "windowb.h"
#include "windowc.h"
#include "windowd.h"

class ConcreteMediator : public Mediator {
public:
    ConcreteMediator(WindowA* windowA, WindowB* windowB, WindowC* windowC, WindowD* windowD);

    void notify(Window* sender, QString event) override;

private:
    WindowA* windowA;
    WindowB* windowB;
    WindowC* windowC;
    WindowD* windowD;
};

#endif // CONCRETEMEDIATOR_H
