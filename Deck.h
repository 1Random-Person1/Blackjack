#ifndef BLACKJACK_DECK_H
#define BLACKJACK_DECK_H

#include <iostream>;
#include "Hand.h"
#include "GenericPlayer.h"
using namespace std;

class GenericPlayer;

class Deck : public Hand {

public:

    Deck();

    virtual ~Deck();

    void populate();

    void shuffle();

    void deal(Hand& aHand);

    void additionalCards(GenericPlayer& aGenericPlayer);

};


#endif //BLACKJACK_DECK_H
