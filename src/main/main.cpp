#include <iostream>
#include "GameMaster.h"

int main() {
    using namespace std;

    srand(time(nullptr));

    GameMaster game(8);
    game.mainLoop();

    return 0;
}
