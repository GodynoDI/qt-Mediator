#include "window.h"

Window::Window(Mediator* mediator){
    this->mediator = mediator;
};

void Window::changeMediator(Mediator* mediator){
    this->mediator = mediator;
};
