#pragma once
class EnemyTask
{
private:
	int hp;
public:
	EnemyTask();//コンストラクタ
	~EnemyTask();//デストラクタ
	// ダメージ関数
	void Damage(int damage);
	//体力を受け取る関数
	int GetHp()const;
	//生存判定
	bool IsAlive() const;
};

