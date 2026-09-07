#pragma once
class ScoreManager
{
private:
	int currentScore;
	int highScore;
public:
	//
	ScoreManager();

	//
	void addPoint(int points);
	void resetScore();
	void updateHighScore();
	void displayScore();
};

