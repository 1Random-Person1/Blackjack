#include "Hand.h"

Hand :: Hand() {
    cardVector.reserve(7);
}

Hand :: ~Hand() {
    clearHand();
}

void Hand :: add(Card* cardPtr) {
    cardVector.push_back(cardPtr);
}

void Hand :: clearHand() {
    vector<Card*> :: iterator it;
    for (it = cardVector.begin(); it != cardVector.end(); ++it) {
        delete *it;
        *it = nullptr;
    }

    cardVector.clear();

}

int Hand :: getTotal() const {

    if (cardVector.empty()) {
        return 0;
    }

    if (cardVector[0]->getValue() == 0) {
        return 0;
    }

    vector<Card*> :: const_iterator iter;
    int total = 0;
    for (iter = cardVector.begin(); iter != cardVector.end(); ++iter) {
        total += (*iter)->getValue();
    }

    for (iter = cardVector.begin(); iter != cardVector.end(); ++iter) {
        if ((*iter)->getValue() == 1) {
            if (total <= 11) {
                total += 10;
            }

        }

    }

    return total;

}