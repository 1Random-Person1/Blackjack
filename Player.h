#ifndef BLACKJACK_PLAYER_H
#define BLACKJACK_PLAYER_H

#include <iostream>;
#include <string>;
#include "GenericPlayer.h";
using namespace std;

class Player : public GenericPlayer {

public:

    Player(const string& name = " ");

    virtual ~Player();

    virtual bool isHitting() const;

    void win() const;

    void lose() const;

    void push() const;

};


#endif //BLACKJACK_PLAYER_H
