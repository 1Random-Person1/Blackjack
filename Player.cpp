#include "Player.h"

Player::Player(const string& name) : GenericPlayer(name) {

}

Player::~Player() {

}

bool Player::isHitting() const {

    cout << getName() << " do you want to hit? Y or N" << endl;

    char response;
    cin >> response;

    if (response == 'Y') {
        return true;
    } else {
        return false;
    }

}

void Player::win() const {
    cout << getName() << " has won" << endl;
}

void Player::lose() const {
    cout << getName() << " has lost" << endl;
}

void Player::push() const {
    cout << getName() << " has pushed" << endl;
}