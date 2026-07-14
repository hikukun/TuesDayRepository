#pragma once
namespace ConstName
{
	const int CARD_MAX = 10;
	const int CARD_MIN = 0;
	const int CARD_NUM_MIN = 0;
	const int CARD_NUM_MAX = 51;
	const int WEVE = 7;
	const int POINT = 3;
}

//プロトタイプ宣言
void Game();
int InputCheck(int max, int min);
int CardInput(int card[]);