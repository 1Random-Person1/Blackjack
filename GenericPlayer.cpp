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

ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer) {

    cout << aGenericPlayer.getName() << "\t";

    vector<Card*>::const_iterator iter;

    if (!aGenericPlayer.cardVector.empty()) {

        for (iter = aGenericPlayer.cardVector.begin(); iter != aGenericPlayer.cardVector.end(); ++iter) {

            os << *(*iter) << "\t";
        }

        if (aGenericPlayer.getTotal() != 0) {
            os << "(" << aGenericPlayer.getTotal() << ")";
        }
    } else {

        os << "<empty>";

    }

    return os;

}