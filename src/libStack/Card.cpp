#include "Card.h"
#include <cmath>

std::ostream &operator<<(std::ostream &strm, const Card &a) {
    strm << "# # # # # # #" << "\n";
    strm << a.getName() << "\n";
    strm << a.getBelonging() << "\n";
    strm << "height: " << a.getHeight() << "\n";
    strm << "intelligence: " << a.getIntelligence() << "\n";
    strm << "strength: " << a.getStrength() << "\n";
    strm << "jedi power: " << a.getJediPower() << "\n";
    return strm << "# # # # # # #";
}


std::vector<std::string> const Card::NAMES = {
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
:m_name(NAMES[rand() % NAMES.size()]),
m_belonging((rand() % 2) ? "gut":"boese")
{
    auto randomDouble = [](double max){return ((double)rand() / RAND_MAX) * max;};

    auto randomInt = [](int max){return rand() % max;};
    auto towDecimal = [](double in){return std::round(in * 100.0)/100.0;};

    m_height = towDecimal(randomDouble(2.0));
    m_intelligence = randomInt(10);
    m_strength = randomInt(10);
    m_jediPower = randomInt(10);

}

double Card::getAttributes(Attributes type) const {
    switch(type){
        case HEIGHT: return getHeight();
        case INTELLIGENCE: return getIntelligence();
        case STRENGTH: return getStrength();
        case JEDIPOWER: return getJediPower();
    }
}
