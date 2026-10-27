#include "Enemy.h"
#include<iostream>
using namespace std;

Enemy::Enemy(int hp)
{
	this->hp = hp;
}

Enemy::~Enemy() {}

void Enemy::ShowStatus()const
{
	cout << "‘Ì—Í" << hp << endl;
}

void Enemy::Damage(int damage)const
{
	this->hp - damage;
}

int Enemy::GetHp()const
{
	return hp;
}