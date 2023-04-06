#pragma once
#include <ostream>
#include <string>
#include <vector>
#include <map>

enum Attributes{
    HEIGHT,
    INTELLIGENCE,
    STRENGTH,
    JEDIPOWER
};

class BaseCard{
protected:
    BaseCard();
public:
    template<Attributes T>
    void setAttribute(double input){
        attributes[T] = input;
    }

    template<Attributes T>
    double getAttribute() const{
        if(attributes.count(T) == 0 ) return 0.0;
        return attributes.at(T);
    }

    template<Attributes T>
    bool compare(BaseCard other) const{
        return getAttribute<T>() > other.getAttribute<T>();
    }

    std::string getName()const{ return m_name;}
    std::string getBelonging()const{ return m_belonging;}

private:
    std::map<Attributes, double> attributes;
    std::string m_name;
    std::string m_belonging;
    static const std::vector<std::string> NAMES;
};


class Card : public BaseCard{
public:
    Card();
};

std::ostream &operator<<(std::ostream &strm, const Card &a);
