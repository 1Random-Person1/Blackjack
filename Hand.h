#ifndef BLACKJACK_HAND_H
#define BLACKJACK_HAND_H

#include <iostream>;
#include <vector>;
#include "Card.h"
using namespace std;

class Hand {

public:

    Hand();

    virtual ~Hand();

    void add(Card* cardPtr);

    void clearHand();

    int getTotal() const;

protected:

    vector<Card*> cardVector;

};


#endif //BLACKJACK_HAND_H
