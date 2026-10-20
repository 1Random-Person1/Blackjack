#ifndef BLACKJACK_HOUSE_H
#define BLACKJACK_HOUSE_H

#include <iostream>;
#include <string>;
#include "GenericPlayer.h";
using namespace std;

class House : public GenericPlayer{

public:

    House(const string& name = "Dealer");

    virtual ~House();

    virtual bool isHitting() const;

    void bool flipFirstCard() const;

};


#endif //BLACKJACK_HOUSE_H
