#pragma once

#include "Stack.h"

class Player: public Stack {
public:
    Player(int anzahl):m_points(0), Stack(anzahl){};
    void addPoint(){m_points++;}
    int getPoints() const{return m_points;}

    bool static playCardStatic(Player & user, Player & computer);
private:
    int m_points;
};
