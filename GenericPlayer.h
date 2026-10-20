#ifndef BLACKJACK_GENERICPLAYER_H
#define BLACKJACK_GENERICPLAYER_H

#include <iostream>;
#include <string>;
#include "Hand.h"
using namespace std;

class GenericPlayer : public Hand {

public:

    GenericPlayer(const string& name = "");

    virtual ~GenericPlayer();

    virtual bool isHitting() const = 0;

    bool isBusted() const;

    void bust() const;

    string getName() const;

    void setName(const string& name);

    friend ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);

private:

    string name;

};


#endif //BLACKJACK_GENERICPLAYER_H
