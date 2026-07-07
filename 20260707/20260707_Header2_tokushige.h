#pragma once

namespace ConstNum
{
	const int CARD_MAX = 3;
	const int CARD_NUM_MAX = 10;
	const int MAX = 9;
	const int MIN = 0;
	const int CORRECT_MAX = 3;
}

//プロトタイプ宣言
void Game();
int InputCheck(int max,int min);
int HitJudge();