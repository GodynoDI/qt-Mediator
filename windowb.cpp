#include "windowb.h"
#include "ui_windowb.h"

WindowB::WindowB(Mediator* mediator) : Window(mediator), ui(new Ui::WindowB)
{
    ui->setupUi(this);
    ui->pasteButton->setDisabled(QApplication::clipboard()->text().isEmpty());
}

WindowB::~WindowB()
{
    delete ui;
}

void WindowB::on_copyButton_clicked()
{
    mediator->notify(this, "copyButtonClicked");
    ui->pasteButton->setDisabled(QApplication::clipboard()->text().isEmpty());
}

void WindowB::on_pasteButton_clicked()
{
    mediator->notify(this, "pasteButtonClicked");
}

void WindowB::setPasteButtonEnabled(bool state){
    ui->pasteButton->setEnabled(state);
}
