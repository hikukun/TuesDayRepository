#include<iostream>
#include"Enemy.h"
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(void)
{
	srand((unsigned int)time(NULL));
	vector<Enemy>enemies;

	for (int i = 0; i < 3; i++)
	{
		int hp = rand() % 71 + 30;
		enemies.push_back(Enemy(hp));
	}
	

}