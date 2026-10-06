#include "Character.h"

#include <iostream>
#include <random>
#include <algorithm>

using namespace std;

Character::Character()
{
    hp = MAX_HP;
    attackPower = getRandomValue(MIN_STATUS, MAX_STATUS);
    defense = getRandomValue(MIN_STATUS, MAX_STATUS);
    evasion = getRandomValue(MIN_STATUS, MAX_STATUS);
}

int Character::getRandomValue(int min, int max)
{
    static random_device rd;
    static mt19937 gen(rd());

    uniform_int_distribution<int> dist(min, max);

    return dist(gen);
}

void Character::attackCharacter(Character& target)
{
    int randomValue =
        getRandomValue(MIN_RANDOM_VALUE, MAX_RANDOM_VALUE);

    cout << "UŒ‚Žž‚Ìƒ‰ƒ“ƒ_ƒ€’l: "
        << randomValue << endl;

    // ‰ñ”ð”»’è
    if (randomValue > target.evasion)
    {
        int damage =
            attackPower + randomValue - target.defense;

        damage = max(0, damage);

        target.hp -= damage;

        cout << "UŒ‚¬Œ÷I" << endl;
        cout << "ƒ_ƒ[ƒW: "
            << damage << endl;
    }
    else
    {
        cout << "UŒ‚Ž¸”sI" << endl;
        cout << "ƒ_ƒ[ƒW: 0" << endl;
    }
}

void Character::heal()
{
    int healValue =
        getRandomValue(MIN_RANDOM_VALUE, MAX_RANDOM_VALUE);

    int oldHp = hp;

    hp = min(MAX_HP, hp + healValue);

    cout << "‰ñ•œ—Ê: "
        << hp - oldHp << endl;
}

int Character::getHp() const
{
    return hp;
}

bool Character::isAlive() const
{
    return hp > 0;
}

void Character::showStatus() const
{
    cout << "HP: " << hp << endl;
    cout << "UŒ‚—Í: " << attackPower << endl;
    cout << "–hŒä—Í: " << defense << endl;
    cout << "‰ñ”ð—Í: " << evasion << endl;
}
