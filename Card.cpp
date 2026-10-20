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

ostream& operator<<(ostream& os, const Card& aCard) {
    const string RANKS[] = {
        "0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"
    };

    const string SUITS[] = {
        "C", "D", "H", "S"
    };

    if (aCard.isFaceUp) {
        os << RANKS[aCard.rank] << SUITS[aCard.suit];
    } else {
        os << "XX";
    }
    
    return os;
}