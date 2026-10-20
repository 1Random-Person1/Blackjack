#ifndef BLACKJACK_GENERICPLAYER_H
#define BLACKJACK_GENERICPLAYER_H

#include <iostream>;
#include <string>;
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

private:

    string name;

};


#endif //BLACKJACK_GENERICPLAYER_H
