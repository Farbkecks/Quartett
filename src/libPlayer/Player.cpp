#include "Player.h"

bool Player::playCardStatic(Player &user, Player &computer) {
//    auto randromAttribute = static_cast<Attributes>(rand() % ALWASYLAST);


    Attributes h = HEIGHT;
    return user.playCard().compare<h>(computer.playCard());
    return user.playCard().compare<HEIGHT>(computer.playCard());
}
