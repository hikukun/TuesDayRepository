#include "EnemyTask.h"
#include "ConfigTask.h"

EnemyTask::EnemyTask() :hp(ConfigTask::ENEMY_HP) {}
EnemyTask::~EnemyTask() {}

//ダメージ関数
void EnemyTask::Damage(int damage)
{
	hp -= damage;
	if (hp < 0)
	{
		hp = 0;
	}
}
//hpゲット関数
int EnemyTask::GetHp() const
{
	return hp;
}
//生存判定
bool EnemyTask::IsAlive() const
{
	return hp > 0;
}