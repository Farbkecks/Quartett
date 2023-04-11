#pragma once

#include "Stack.h"

class Player: public Stack {
public:
    Player(int anzahl):m_points(0), Stack(anzahl){};
    void addPoint(){m_points++;}
    int getPoints() const{return m_points;}

    bool compareCard(Player & other);
    bool compareCard(Player & other, CardAttributes::Attributes type);


private:
    int m_points;
};
