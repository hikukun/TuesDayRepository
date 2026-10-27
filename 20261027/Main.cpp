#include<iostream>
#include"Enemy.h"
#include<vector>
using namespace std;

int main(void)
{
	/*Enemy enemy(100);
	Enemy enemy2(200);

	enemy.ShowStatus();
	enemy2.ShowStatus();*/

	vector<Enemy> enemise;
	enemise.push_back(Enemy(100));
	enemise.push_back(Enemy(200));
	enemise.push_back(Enemy(300));
	enemise.push_back(Enemy(80));
	enemise.push_back(Enemy(250));

	for (const Enemy& enemy : enemise)
	{
		enemy.ShowStatus();
	}

	cout << "“G‚Í" << enemise.size() << "‘Ì\n";

	return 0;
}