#include "Player.h"

#include <iostream>

using namespace std;

int Player::chooseAction()
{
    int choice;

    do
    {
        cout << "1: UŒ‚" << endl;
        cout << "2: ‰ñ•œ" << endl;
        cout << "s“®‚ð‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢: ";

        cin >> choice;

    } while (choice != ATTACK && choice != HEAL);

    return choice;
}

