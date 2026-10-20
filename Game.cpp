#include "Game.h"

Game::Game(const string& name) {

    player.setName(name);
    deck.populate();
    deck.shuffle();

}

Game::~Game() {

}

void Game::play() {

    deck.populate();
    deck.shuffle();

    for (int i = 0; i < 2; i++) {
        deck.deal(player);
        deck.deal(house);
    }

    house.flipFirstCard();

    cout << endl << player << endl;
    cout << house << endl;

    deck.additionalCards(player);

    house.flipFirstCard();

    cout << endl << house << endl;

    deck.additionalCards(house);

    if (house.isBusted()) {
        if (!player.isBusted()) {
            player.win();
        }
    } else {
        if (!player.isBusted()) {
            if (player.getTotal() > house.getTotal()) {
                player.win();
            } else if (player.getTotal() < house.getTotal()) {
                player.lose();
            } else {
                player.push();
            }
        }
    }

    player.clearHand();
    house.clearHand();

}