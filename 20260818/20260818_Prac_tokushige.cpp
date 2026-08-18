#include<iostream>
using namespace std;
//ダメージ関数
void Damage(int* p)
{
	cout << "20ダメージ\n";
	*p -= 20;
}
//ヒール関数
void Heal(int* p)
{
	cout << "30回復\n";
	*p += 30;
}

int main(void)
{
	//変数
	int hp = 100;
	cout << "体力　" << hp << endl;
	//20ダメージ食らう
	Damage(&hp);
	cout << "体力　" << hp << endl;
	//30回復する
	Heal(&hp);
	cout << "体力　" << hp << endl;
	return 0;
}