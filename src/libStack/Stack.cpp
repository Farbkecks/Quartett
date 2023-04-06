#include "Stack.h"
#include <iostream>
#include <string>

Card Stack::playCard() {
    auto temp = stack.back();
    stack.pop_back();
    return temp;
}

void Stack::showCard() const {
    std::cout << stack.back() << std::endl;
}

int Stack::countCards() const {
    return (int) stack.size();
}


Stack::Stack(int anzahl) {
    for(int i=0;i<anzahl;i++){
        auto x = Card();
        stack.push_back(x);
    }
}
