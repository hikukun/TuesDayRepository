#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_Header_tokushige.h"
using namespace std;
using namespace ConstName;

int InputCheck(int max, int min)
{
	int num = 0;
	while (true)
	{
		cin >> num;
		if (num<min || num>max)
		{
			cout << "もう一度入力してください\n";
		}
		else
		{
			break;
		}
	}
	return num;
}

int CardInput(int card[])
{
	int i;
	card[CARD_MAX];
	for (i = 0; i < CARD_MAX; i++)
	{
		card[i] = rand() % CARD_NUM_MAX;
		
	}
	return card[i-1];
}

void Game()
{
	//変数宣言
	int player[CARD_MAX];
	int cpu[CARD_MAX];
	int playerchoise=0;
	int playercount[WEVE];
	int cpuchoise=0;
	int playerpoint = 0;
	int cpupoint = 0;
	int playerwin = 0;
	int playerlose = 0;
	int i = 0;
	int weve = 0;

	//乱数初期化
	srand((unsigned int)time(NULL));
	//カードを10個配る
	//プレイヤーに10枚カードを配る
	player[i] = CardInput(player);
	//CPUに10枚カードを配る
	cpu[i] = CardInput(cpu);
	//ループ
	while(true)
	{
		//プレイヤーとCPUがカードを一枚選ぶ
		//プレイヤー
		for (i = 0; i < CARD_MAX; i++)
		{
			cout << player[i] << " " << i << "番" << endl;
		}
		cout << "使いたい数字の番号を入力 ※一度使用した数字は使えません\n";
		playerchoise = InputCheck(CARD_MAX, CARD_MIN);
		//CPU
		cpuchoise = rand() % CARD_MAX;
		cout << "プレイヤー " << player[playerchoise] << " CPU " << cpu[cpuchoise] << endl;
		if (player[playerchoise] == cpu[cpuchoise])
		{
			cout << "同点\n";
			playerpoint++;
			cpupoint++;
		}
		else if (player[playerchoise] > cpu[cpuchoise])
		{
			cout << "プレイヤーの勝ち\n";
			playerpoint += POINT;
		}
		else
		{
			cout << "CPUの勝ち\n";
			cpupoint += POINT;
		}
		cout << "選択した数字" << player[playerchoise] 
			<< "勝敗" << playerwin << "勝" << playerlose << "負　"
			<<"得点" << playerpoint << "点\n";
		weve++;
		
		if (weve == WEVE)
		{
			break;
		}
	}
	if (playerpoint > cpupoint)
	{
		cout << "プレイヤーの勝ち\n";
	}
	else if (playerpoint < cpupoint)
	{
		cout << "CPUの勝ち\n";
	}
	else
	{
		cout << "引き分け\n";
	}
}