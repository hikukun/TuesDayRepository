#include "scoremanager.h"
#include<iostream>
using namespace std;

//
ScoreManager::ScoreManager()
{
	currentScore = 0;
	highScore = 0;
}

//
void ScoreManager::addPoint(int points)
{
	currentScore += points;
}

//
void ScoreManager::resetScore()
{
	currentScore = 0;
}

//
void ScoreManager::updateHighScore()
{
	if (currentScore > highScore)
	{
		highScore = currentScore;
	}
}

void ScoreManager::displayScore()
{
	cout << "現在のスコア:" << currentScore << endl;
	cout << "ハイスコア:" << highScore << endl;
}
