#include "Player.h"
#include<iostream>
using namespace std;

void Player::PLAYER_Hand()
{
	cout << "じゃんけん0:グー1:チョキ2:パー\n";
	while (true)
	{
		cin >> player;
		if (player < 0 || player>2)
		{
			cout << "もう一度入力\n";
		}
		else break;
	}
}