#include "Player.h"

Player::Player(const string& name) : GenericPlayer(name) {

}

Player::~Player() {

}

bool Player::isHitting() const {

    char response;

    while (response != 'Y' && response != 'y' && response != 'n' && response != 'N') {

        cout << getName() << " do you want to hit? Y or N" << endl;
        cin >> response;

    }

    return (response == 'Y' || response == 'y');

}

void Player::win() const {
    cout << getName() << " has won" << endl;
}

void Player::lose() const {
    cout << getName() << " has lost" << endl;
}

void Player::push() const {
    cout << getName() << " has pushes" << endl;
}