#include<iostream>
#include"scoremanager.h"
using namespace std;

int main(void)
{
	//
	ScoreManager score;

	cout << "ゲームスタート" << endl;

	score.displayScore();

	//
	cout << "100ポイント獲得しました" << endl;

	score.addPoint(100);
	score.displayScore();
	//
	cout << "50ポイント獲得しました" << endl;

	score.addPoint(50);
	score.displayScore();

	//
	cout << endl;
	cout << "ハイスコア更新" << endl;

	score.updateHighScore();
	score.displayScore();

	cout << endl;
	cout << "ゲーム終了" << endl;

	score.resetScore();
	score.displayScore();
	return 0;
}