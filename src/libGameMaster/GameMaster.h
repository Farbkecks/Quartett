#pragma once

#include "Player.h"

class GameMaster {
public:
    //functions
    GameMaster(int anzahlCards);
    void mainLoop();

private:
    //functions

private:
    //variables
    Player computer;
    Player user;
};
