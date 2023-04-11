#pragma once

#include "Player.h"

enum Commands{
    PLAY,
    SHOW,
    STATS,

};

class GameMaster {
public:
    //functions
    GameMaster(int anzahlCards);
    void mainLoop();

private:
    //functions
    static CardAttributes::Attributes getAttributeFromUser();
    static int getCommandFromUser();
    static int getNumberFromUser(int min=INT_MIN, int max=INT_MAX);

private:
    //variables
    Player computer;
    Player user;
};
