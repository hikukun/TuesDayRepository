#include "judge.h"
#include"PLAYER.h"
#include"CPU.h"
#include<iostream>
using namespace std;

void JUDGE::Judge()
{
	Player Player;
	Player.PLAYER_Hand();
	CPU CPU;
	CPU.CPU_Hand();
	
	if (player - cpu == 0)
	{
		cout << "引き分け\n";
	}
	else if (player - cpu == -1 || player - cpu == 2)
	{
		cout << "勝ち\n";
	}
	else
	{
		cout << "負け\n";
	}
}
