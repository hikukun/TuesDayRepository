#pragma once
#include"PLAYER.h"
#include"CPU.h"
#include<iostream>
class JUDGE
{
private:
	Player PLAYER_Hand;
	CPU* CPU_Hand;
public:
	void Judge(int player, int cpu);
};

