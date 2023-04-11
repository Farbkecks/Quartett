#pragma once
#include <ostream>
#include <string>
#include <vector>
#include <map>

namespace CardAttributes{
    enum Attributes{
        HEIGHT,
        INTELLIGENCE,
        STRENGTH,
        JEDIPOWER,
        ALWASYLAST
    };

}
std::ostream &operator<<(std::ostream &strm, const CardAttributes::Attributes &a);


class BaseCard{
protected:
    BaseCard();
public:
    void setAttribute(double input, CardAttributes::Attributes type);

    double getAttribute(CardAttributes::Attributes type) const;

    bool compare(BaseCard other, CardAttributes::Attributes type) const;

    std::string getName()const{ return m_name;}
    std::string getBelonging()const{ return m_belonging;}

private:
    std::map<CardAttributes::Attributes, double> attributes;
    std::string m_name;
    std::string m_belonging;
    static const std::vector<std::string> NAMES;
};


class Card : public BaseCard{
public:
    Card();
};

std::ostream &operator<<(std::ostream &strm, const Card &a);