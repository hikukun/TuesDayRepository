#include<iostream>
#include"Enemy.h"
#include<ctime>
#include<cstdlib>
#include<vector>
using namespace std;

int main(void)
{	
	srand((unsigned int)time(NULL));
	vector<Enemy> enemise;

	for (int i = 0; i < 3; i++)
	{
		int hp = rand() % 71 + 30;
		enemise.push_back(Enemy(hp));
	}
	
	for (const Enemy& enemy : enemise)
	{
		enemy.ShowStatus();
	}

	cout << "“G‚Ì”‚Í" << enemise << "‘Ì" << endl;

	return 0;
}