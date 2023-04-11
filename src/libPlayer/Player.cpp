#include "Player.h"

bool Player::compareCard(Player &other) {
    auto randromAttribute = static_cast<CardAttributes::Attributes>(rand() % CardAttributes::ALWASYLAST);

    return playCard().compare(other.playCard(), randromAttribute);
}

bool Player::compareCard(Player &other, CardAttributes::Attributes type) {
    return playCard().compare(other.playCard(), type);
}
