#pragma once

#include <vector>
#include "Card.h"

class Stack {
public:
    explicit Stack(int anzahl);
    Card playCard();
    void showCard() const;
    int countCards() const;

protected:
    std::vector<Card> stack;
};
