#include "GenericPlayer.h"

GenericPlayer::GenericPlayer(const string& name) : name(name)  {

}

GenericPlayer::~GenericPlayer() {

}

bool GenericPlayer::isBusted() const {

    return getTotal() > 21;

}

void GenericPlayer::bust() const {

    cout << getName() << " busted" << endl;

}

string GenericPlayer::getName() const {
    return name;
}

void GenericPlayer::setName(const string& name)  {
    this->name = name;
}