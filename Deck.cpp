#include "Deck.h"

#include <algorithm>

Deck::Deck() {
    cardVector.reserve(52);
    populate();
}

Deck::~Deck() {

}

void Deck::populate() {

    clearHand();

    for (int r = Card::ACE; r <= Card::KING; ++r ) {
        for (int s = Card::CLUBS; s <= Card::SPADES; ++s) {
            add(new Card(static_cast<Card::RANK>(r), static_cast<Card::SUIT>(s)));
        }
    }
}

void Deck::shuffle() {
    random_shuffle(cardVector.begin(), cardVector.end());
}

void Deck::deal(Hand& aHand) {

    if (!cardVector.empty()) {
        aHand.add(cardVector.back());
        cardVector.pop_back();
    } else {
        cout << "No more cards in the deck to deal" << endl;
    }

}

void Deck::additionalCards(GenericPlayer& aGenericPlayer) {

    while (!aGenericPlayer.isBusted() && aGenericPlayer.isHitting()) {

        deal(aGenericPlayer);

        cout << aGenericPlayer << endl;

        if (aGenericPlayer.isBusted()) {
            aGenericPlayer.bust();
        }

    }

}