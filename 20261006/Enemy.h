#pragma once

#include "Character.h"

class Enemy : public Character
{
public:
    static const int ATTACK = 1;

    int chooseAction();
};

