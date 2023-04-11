#include "GameMaster.h"

#include <iostream>

GameMaster::GameMaster(int anzahlCards)
: computer(anzahlCards), user(anzahlCards)
{}

void GameMaster::mainLoop() {
    using std::cout;
    using std::endl;
    bool userWinner = true;
    while(user.countCards()){
    }
}

CardAttributes::Attributes GameMaster::getAttributeFromUser() {
    using std::cout;
    using std::endl;
    using std::cin;

    using namespace std;

    //jedes Element vom Enum Attributes ausgeben
    for(int i = 0; i < CardAttributes::ALWASYLAST; i++){
        cout << i + 1 << " :";
        std::cout << static_cast<CardAttributes::Attributes > (i % CardAttributes::ALWASYLAST) << std::endl;
    }
    int userChoice = getNumberFromUser(1, CardAttributes::ALWASYLAST);

    return static_cast<CardAttributes::Attributes > (userChoice % CardAttributes::ALWASYLAST);
}

int GameMaster::getCommandFromUser() {
    using namespace std;
    string input;
    cout << "bitte einen Command auswählen" << endl;
    cout << "1: play"<< endl;
    cout << "2: show"<< endl;
    cout << "3: stats"<< endl;

    return getNumberFromUser(1,3);
}

int GameMaster::getNumberFromUser(int min, int max) {
    using namespace std;
    int userChoice = 0;
    while (true){
        string input;
        cout << "Bitte gib eine Nummer zwischen "<< min << " und " << max << " ein: ";
        getline(cin, input);
        try{
            userChoice = stoi(input);
        } catch (invalid_argument){
            cout << "nur Zahlen eingeben" << endl;
            continue;
        }
        if(userChoice < min){
            cout << "eine groessere Zahl eingeben" << endl;
            continue;
        }
        if(userChoice > max){
            cout << "eine kleinere Zahl eingeben" << endl;
            continue;
        }
        break;
    }
    return userChoice;
}
