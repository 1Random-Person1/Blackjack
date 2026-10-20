#ifndef BLACKJACK_DECK_H
#define BLACKJACK_DECK_H

#include <iostream>;
#include "Hand.h"
using namespace std;

class GenericPLayer;

class Deck : public Hand {

public:

    Deck();

    virtual ~Deck();

    void populate();

    void shuffle();

    void deal(Hand& aHand);

    void additionalCards(GenericPLayer& aGenericPLayer);

};


#endif //BLACKJACK_DECK_H
