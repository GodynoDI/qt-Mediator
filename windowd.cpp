#include "windowd.h"
#include "ui_windowd.h"

WindowD::WindowD(Mediator* mediator) : Window(mediator), ui(new Ui::WindowD)
{
    ui->setupUi(this);
    ui->textEdit->setText("черт блин капец");
}

WindowD::~WindowD()
{
    delete ui;
}

QString WindowD::getBannedWords(){
    return ui->textEdit->toPlainText();
};
