//#include "mainwindow.h"

#include <QApplication>
#include "windowa.h"
#include "windowb.h"
#include "windowc.h"
#include "windowd.h"
#include "concretemediator.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowA wa(nullptr);
    WindowB wb(nullptr);
    WindowC wc(nullptr);
    WindowD wd(nullptr);
    ConcreteMediator mediator(&wa, &wb, &wc, &wd);
    wa.changeMediator(&mediator);
    wb.changeMediator(&mediator);
    wc.changeMediator(&mediator);
    wd.changeMediator(&mediator);
    wa.setGeometry(wa.geometry().x()+500,wa.geometry().y()+100,wa.geometry().width(),wa.geometry().height());
    wa.show();
    wb.setGeometry(wa.geometry().x()+405,wa.geometry().y(),wb.geometry().width(),wb.geometry().height());
    wb.show();
    wc.setGeometry(wb.geometry().x(),wb.geometry().y()+135,wc.geometry().width(),wc.geometry().height());
    wc.show();
    wd.setGeometry(wa.geometry().x(),wa.geometry().y()+335,wd.geometry().width(),wd.geometry().height());
    wd.show();
    //MainWindow w;
    //w.show();
    return a.exec();
}
