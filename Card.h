#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H

#include <iostream>;
using namespace std;

class Card {

public:

    enum RANK {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};

    enum SUIT {CLUBS, DIAMONDS, HEARTS, SPADES};

    Card(RANK rank = ACE, SUIT suit = SPADES, bool isFaceUp = true);

    int getValue() const;

    void flip();

protected:

    RANK rank;

    SUIT suit;

private:

    bool isFaceUp;
};


#endif //BLACKJACK_CARD_H
