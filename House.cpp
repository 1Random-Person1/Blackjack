#include "House.h"

House::House(const string& name) : GenericPlayer(name) {

}

House::~House() {

}

bool House::isHitting() const {

    return getTotal() <= 16;

}

void House::flipFirstCard() const{

    if (!cardVector.empty()) {
        cardVector[0]->flip();
    } else {
        cout << "There are no cards to flip" << endl;
    }

}