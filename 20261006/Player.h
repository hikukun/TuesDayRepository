#pragma once

#include "Character.h"

class Player : public Character
{
public:
    static const int ATTACK = 1;
    static const int HEAL = 2;

    int chooseAction();
};

