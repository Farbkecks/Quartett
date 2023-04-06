#include "Card.h"
#include <cmath>

std::ostream &operator<<(std::ostream &strm, const Card &a) {
    strm << "# # # # # # #" << "\n";
    strm << a.getName() << "\n";
    strm << a.getBelonging() << "\n";
    strm << "height: " << a.getAttribute<HEIGHT>() << "\n";
    strm << "intelligence: " << a.getAttribute<INTELLIGENCE>() << "\n";
    strm << "strength: " << a.getAttribute<STRENGTH>() << "\n";
    strm << "jedi power: " << a.getAttribute<JEDIPOWER>() << "\n";
    return strm << "# # # # # # #";
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

    setAttribute<HEIGHT>(towDecimal(randomDouble(2.0)));
    setAttribute<INTELLIGENCE>(randomInt(10));
    setAttribute<STRENGTH>(randomInt(10));
    setAttribute<JEDIPOWER>(randomInt(10));

}

BaseCard::BaseCard()
:m_name(NAMES[rand() % NAMES.size()]),
m_belonging((rand() % 2) ? "gut":"boese")
{

}
