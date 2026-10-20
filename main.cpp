#include <iostream>
#include "Game.h"
#include <string>
using namespace std;

int main() {

    cout << "Welcome to this Blackjack program." << endl;

    char again = 'y';

    string name;

    cout << "Enter your name: " << endl;

    cin >> name;

    Game game(name);

    while (again == 'y' || again == 'Y') {
        game.play();
        cout << "Keep playing? y or n" << endl;
        cin >> again;
    }

    return 0;

}
