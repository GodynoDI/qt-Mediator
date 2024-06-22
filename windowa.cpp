#include "windowa.h"
#include "ui_windowa.h"

#include <QMessageBox>
WindowA::WindowA(Mediator* mediator) : Window(mediator), ui(new Ui::WindowA)
{
    ui->setupUi(this);
}

WindowA::~WindowA()
{
    delete ui;
}

void WindowA::copy(){
    QApplication::clipboard()->clear();
    ui->textEdit->copy();
}

void WindowA::paste(){
    ui->textEdit->insertPlainText(QApplication::clipboard()->text());
}

void WindowA::clear(){
    QApplication::clipboard()->clear();
    ui->textEdit->setText("");
}

void WindowA::replaceSelectedText(){
    ui->textEdit->textCursor().insertText("***");
};

QString WindowA::getSelectedText(){
    return ui->textEdit->textCursor().selectedText();
}

void WindowA::on_textEdit_textChanged()
{
    if(!ui->textEdit->document()->isEmpty()){
        mediator->notify(this, "textEditIsNotEmpty");
    }
    else
        mediator->notify(this, "textEditIsEmpty");
}

void WindowA::on_textEdit_selectionChanged()
{
    mediator->notify(this, "textHighlighted");
}

