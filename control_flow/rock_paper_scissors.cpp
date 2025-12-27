#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int computer = rand() % 3 + 1;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";

    std::cout << "shoot! ";

    int user;
    cin >> user;

    switch (user) {
        case 1:
            if (computer == 1) cout << "It's a DRAW!" << endl;
            if (computer == 2) cout << "Computer Won!" << endl;
            else cout << "You WON!" << endl;
            break;
        case 2:
            if (computer == 1) cout << "You WON!" << endl;
            if (computer == 2) cout << "It's a DRAW!" << endl;
            else cout << "Computer Won!" << endl;
            break;
        case 3:
            if (computer == 2) cout << "You WON!" << endl;
            if (computer == 3) cout << "It's a DRAW!" << endl;
            else cout << "Computer Won!" << endl;
            break;
        default:
            cout << "Invalid Input..." << endl;
            break;
    } 
}