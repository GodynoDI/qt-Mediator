#include "windowc.h"
#include "ui_windowc.h"

WindowC::WindowC(Mediator* mediator) : Window(mediator), ui(new Ui::WindowC)
{
    ui->setupUi(this);
    ui->clearButton->setDisabled(true);
}

WindowC::~WindowC()
{
    delete ui;
}

void WindowC::on_clearButton_clicked()
{
    mediator->notify(this, "clearButtonClicked");
}

void WindowC::setClearButtonEnabled(bool state){
    ui->clearButton->setEnabled(state);
}
