#pragma once

class Character
{
protected:
    static const int MAX_HP = 100;
    static const int MIN_STATUS = 1;
    static const int MAX_STATUS = 20;
    static const int MIN_RANDOM_VALUE = 1;
    static const int MAX_RANDOM_VALUE = 12;

    int hp;
    int attackPower;
    int defense;
    int evasion;

public:
    Character();

    static int getRandomValue(int min, int max);

    void attackCharacter(Character& target);
    void heal();

    int getHp() const;
    bool isAlive() const;

    void showStatus() const;
};

