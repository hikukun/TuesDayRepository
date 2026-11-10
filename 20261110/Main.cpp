#include<iostream>
#include"Enemy.h"
#include"Config.h"
using namespace std;

int main(void)
{
	int player = 0;

	/*Enemy enemy1;
	Enemy enemy2;
	Enemy enemy3;

	Enemy* target = &enemy1;*/
	unique_ptr<Enemy>enemy1 = make_unique<Enemy>();
	unique_ptr<Enemy>enemy2 = make_unique<Enemy>();
	unique_ptr<Enemy>enemy3 = make_unique<Enemy>();

	cin >> player;
	if (player == 1)
	{
		enemy1->TakeDamage(DAMAGE);
	}
	else if (player == 2)
	{
		enemy2 = move(enemy1);
		enemy2->TakeDamage(DAMAGE);
	}
	else if (player == 3)
	{
		enemy3 = move(enemy1);
		enemy3->TakeDamage(DAMAGE);
	}
	else
	{
		return 0;
	}
	
	enemy1->ShowStatus();
	enemy2->ShowStatus();
	enemy3->ShowStatus();

	return 0;
}