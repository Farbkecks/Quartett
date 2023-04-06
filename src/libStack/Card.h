#pragma once
#include <ostream>
#include <string>
#include <vector>

enum Attributes{
    HEIGHT,
    INTELLIGENCE,
    STRENGTH,
    JEDIPOWER
};


class Card {
public:
    Card(std::string name, std::string belonging, double height, int intelligence, int strength, int jediPower)
    : m_name(name), m_belonging(belonging), m_height(height), m_intelligence(intelligence), m_strength(strength), m_jediPower(jediPower)
    {};
    Card();

    std::string getName() const {return m_name;}
    std::string getBelonging() const {return  m_belonging;}
    double getHeight() const {return m_height;}
    double getIntelligence() const {return m_intelligence;}
    double getStrength() const { return m_strength;}
    double getJediPower() const { return m_jediPower;}
    double getAttributes(Attributes type) const;


private:
    double m_height;
    double m_intelligence;
    double m_strength;
    double m_jediPower;
    std::string m_name;
    std::string m_belonging;
    static const std::vector<std::string> NAMES;
};

std::ostream &operator<<(std::ostream &strm, const Card &a);
