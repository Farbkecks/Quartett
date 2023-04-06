#pragma once

#include "Stack.h"

class Player: public Stack {
public:
    Player(int anzahl): Stack(anzahl){};
    void addPoint(){m_points++;}
    int getPoints() const{return m_points;}
private:
    int m_points;
};
