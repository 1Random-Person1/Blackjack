#include "Card.h"

Card :: Card(RANK rank, SUIT suit, bool isFaceUp) {

    this->rank = rank;
    this->suit = suit;
    this->isFaceUp = isFaceUp;

};

int Card :: getValue() const {

    int value = 0;

    if (isFaceUp) {
        value = rank;
        if (value > 10) {
            value = 10;
        }
    }

    return value;

}

void Card::flip() {

    isFaceUp = !isFaceUp;

}