#include "concretemediator.h"
#include <QMessageBox>

ConcreteMediator::ConcreteMediator(WindowA* windowA, WindowB* windowB, WindowC* windowC, WindowD* windowD)
    : windowA(windowA), windowB(windowB), windowC(windowC), windowD(windowD) {}

void ConcreteMediator::notify(Window* sender, QString event) {
    if (sender == windowA) {
        if (event == "textHighlighted") {
            QString bw = windowD->getBannedWords();
            QVector<QString> bannedWords = bw.split(' ');
            if(bannedWords.contains(windowA->getSelectedText())){
                windowA->replaceSelectedText();
            }
        }else if (event == "textEditIsNotEmpty" || !QApplication::clipboard()->text().isEmpty()){
            windowC->setClearButtonEnabled(true);
        }else if (event == "textEditIsEmpty"){
            windowC->setClearButtonEnabled(false);
        }
    } else if (sender == windowB) {
        if (event == "copyButtonClicked") {
            windowA->copy();
            windowC->setClearButtonEnabled(true);
        } else if (event == "pasteButtonClicked") {
            windowA->paste();
        }
    } else if (sender == windowC) {
        if (event == "clearButtonClicked") {
            windowA->clear();
            windowB->setPasteButtonEnabled(false);
            windowC->setClearButtonEnabled(false);
        }
    }
}
