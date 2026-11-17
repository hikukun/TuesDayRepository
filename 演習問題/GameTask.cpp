#include "GameTask.h"
#include<iostream>
#include<limits>
#include"ConfigTask.h"
//enemise‚Ìƒ|ƒCƒ“ƒ^ì¬
void GameTask::Init()
{
	for (int i = 0; i < ConfigTask::ENEMY_COUNT; i++)
	{
		enemies.push_back(std::make_shared<EnemyTask>());
	}
}
//“G‚ÌƒXƒe[ƒ^ƒX•\¦
void GameTask::Draw() const
{
	std::cout << "“G:\n";
	for (int i = 0; i < enemies.size(); i++)
	{
		if (enemies[i]->IsAlive())
		{
			std::cout << "“G" << i + 1 << "HP:"
				<< enemies[i]->GetHp() << "\n";
		}
		else
		{
			std::cout << "Œ‚”jÏ‚İ\n";
		}
	}
}
//UŒ‚
void GameTask::Attack()
{
	int target;
	std::cout << "UŒ‚‚·‚é“G‚ğ‘I‘ğ‚µ‚Ä‚­‚¾‚³‚¢B(1`3)\n";

	if (!(std::cin >> target))
	{
		//‘_‚¤“G‚Ì‘I‘ğ
		std::cout << "”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		return;

	}
	//“ü—Í‚â‚è’¼‚µ
	if (target < 1 || target > ConfigTask::ENEMY_COUNT)
	{
		std::cout << "“ü—Í‚µ‚½”š‚Í‘I‘ğo—ˆ‚Ü‚¹‚ñBÄ“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n";
		return;
	}

	std::shared_ptr<EnemyTask> targetEnemy = enemies[target - 1];
	//€‚ñ‚Å‚¢‚é“G‚ğ‘I‘ğ‚µ‚½ê‡
	if (!targetEnemy->IsAlive())
	{
		std::cout << "‚±‚Ì“G‚Í‚·‚Å‚É“|‚³‚ê‚Ä‚¢‚Ü‚·B\n";
		return;
	}

	std::cout << "UŒ‚‚·‚é“G‚ÍA" << target << "\n";

	targetEnemy->Damage(ConfigTask::DAMEGE);
	std::cout << "“G" << target << "‚Éí“¬ƒ_ƒ[ƒW"
		<< ConfigTask::DAMEGE << "‚ğ—^‚¦‚Ü‚µ‚½B\n";

}
//ƒQ[ƒ€ƒNƒŠƒA”»’è
bool GameTask::IsGameClear() const
{
	for (const auto& enemy : enemies)
	{
		if (enemy->IsAlive())
		{
			return false;
		}
	}

	return true;
}
//ƒQ[ƒ€ƒ‹[ƒv
void GameTask::Run()
{
	Init();

	while (true)
	{
		Draw();
		Attack();
		if (IsGameClear())
		{
			std::cout << "GamerClear\n";
			break;
		}
	}
}