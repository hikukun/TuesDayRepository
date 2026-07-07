#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260707_Header2_tokushige.h"
using namespace std;
using namespace ConstNum;

void Game()
{
	int  playercard[CARD_MAX];
	int cpucard[CARD_MAX];
	int playercheck[CARD_MAX];
	int correct = 0;
	int pcn = 0;
	int ccn = 0;
	srand((unsigned int)time(NULL));
	cout << "数字あてゲーム\nCPUが持っている数字を当てよう\n";
	//数字配布
	cout << "プレイヤーカード\n";
	while(true)
	{
		playercard[pcn] = rand() % CARD_NUM_MAX;
		if (pcn > 0 && playercard[pcn] == playercard[pcn - 1] ||  pcn > 1 && playercard[pcn] == playercard[pcn - 2])
		{
			continue;
		}
		//プレイヤーカード表示
		cout << playercard[pcn];
		pcn++;
		
		if (pcn == CARD_MAX)
		{
			break;
		}
	}
	while (true)
	{
		cpucard[ccn] = rand() % CARD_NUM_MAX;
		if (ccn > 0 && cpucard[ccn] == cpucard[ccn - 1] || ccn > 1 && cpucard[ccn] == cpucard[ccn - 2])
		{
			continue;
		}
		ccn++;
		if (ccn == CARD_MAX)
		{
			break;
		}
	}
	cout << endl;
	while (true)
	{
		cout << "数字を入力しよう0～9 ※ 同じ数字は入りません\n";
		for (int i = 0; i < 3; i++)
		{
			playercheck[i] = InputCheck(MAX, MIN);
			if (playercheck[i] == cpucard[i])
			{
				cout << "Hit\n";
				correct++;
			}
			else
			{
				cout << "Miss\n";
			}
		}
		if (correct == CORRECT_MAX)
		{
			cout << "成功\n";
			break;
		}
		cout << "失敗\n";
		correct = 0;
	}
}

int InputCheck(int max, int min)
{
	int choice;
	while (true)
	{
		cin >> choice;
		if (choice<min || choice>max)
		{
			cout << "もう一度入力してください\n";
		}
		else
		{
			break;
		}
	}
	return choice;
}