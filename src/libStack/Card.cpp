#include "Card.h"
#include <cmath>

std::ostream &operator<<(std::ostream &strm, const Card &a) {
    strm << "# # # # # # #" << "\n";
    strm << a.getName() << "\n";
    strm << a.getBelonging() << "\n";
    strm << "height: " << a.getAttribute(CardAttributes::HEIGHT) << "\n";
    strm << "intelligence: " << a.getAttribute(CardAttributes::INTELLIGENCE) << "\n";
    strm << "strength: " << a.getAttribute(CardAttributes::STRENGTH) << "\n";
    strm << "jedi power: " << a.getAttribute(CardAttributes::JEDIPOWER) << "\n";
    return strm << "# # # # # # #";
}

std::ostream &operator<<(std::ostream &strm, const CardAttributes::Attributes &a) {
    switch (a) {
        case CardAttributes::HEIGHT:
            return strm << "Height";
        case CardAttributes::INTELLIGENCE:
            return strm << "Intelligence";
        case CardAttributes::STRENGTH:
            return strm << "Strength";
        case CardAttributes::JEDIPOWER:
            return strm << "JediPower";
        default:
            return strm << (int) a;
    }
}


std::vector<std::string> const BaseCard::NAMES = {
        "Anakin	Skywalker",
        "Bail Organa",
        "Baze",
        "Ben",
        "Boba",
        "Bodhi 	Rook",
        "Cassian Andor",
        "Chewie",
        "Chief Chirpa",
        "Darth",
        "Finn",
        "Han Solo",
        "Jabba the Hutt",
        "Jango Fett"
};

Card::Card()
{
    auto randomDouble = [](double max){return ((double)rand() / RAND_MAX) * max;};

    auto randomInt = [](int max){return rand() % max;};
    auto towDecimal = [](double in){return std::round(in * 100.0)/100.0;};

    setAttribute(towDecimal(randomDouble(2.0)), CardAttributes::HEIGHT);
    setAttribute(randomInt(10), CardAttributes::INTELLIGENCE);
    setAttribute(randomInt(10), CardAttributes::STRENGTH);
    setAttribute(randomInt(10),CardAttributes::JEDIPOWER);

}

BaseCard::BaseCard()
:m_name(NAMES[rand() % NAMES.size()]),
m_belonging((rand() % 2) ? "gut":"boese")
{

}

bool BaseCard::compare(BaseCard other, CardAttributes::Attributes type) const {
    return getAttribute(type) > other.getAttribute(type);
}

void BaseCard::setAttribute(double input, CardAttributes::Attributes type) {
    attributes[type] = input;
}

double BaseCard::getAttribute(CardAttributes::Attributes type) const {
    if(attributes.count(type) == 0 ) return 0.0;
    return attributes.at(type);
}
