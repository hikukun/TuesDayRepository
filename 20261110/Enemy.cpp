#include "Enemy.h"
#include<iostream>
using namespace std;
Enemy::Enemy():hp(100){}

void Enemy::TakeDamage(int damage)
{
	hp -= damage;
	if (hp < 0) cout << "UŒ‚‚Å‚«‚Ü‚¹‚ñ" << endl;
}

void Enemy::ShowStatus()const
{
	cout << "Enemy HP:" << hp << endl;
}