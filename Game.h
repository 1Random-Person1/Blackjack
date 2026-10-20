#ifndef BLACKJACK_GAME_H
#define BLACKJACK_GAME_H

#include <iostream>;
#include <string>;
#include "Deck.h"
#include "House.h"
#include "Player.h"

using namespace std;

class Game {

public:

    Game(const string& name);

    ~Game();

    void play();
    
private:

    Deck deck;

    House house;

    Player player;

};


#endif //BLACKJACK_GAME_H
