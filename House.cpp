#include "House.h"

House::House(const string& name) : GenericPlayer(name) {

}

House::~House() {

}

bool House::isHitting() const {

    if (getTotal() <= 16) {
        return true;
    } else {
        return false;
    }

}

void House::flipFirstCard() const{

    if (!cardVector.empty()) {
        cardVector[0]->flip();
    } else {
        cout << "There are no cards to flip" << endl;
    }

}