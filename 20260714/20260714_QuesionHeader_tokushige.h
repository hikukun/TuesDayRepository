#pragma once
//定数宣言
const int PITCHING_MIN = 0;
const int PITCHING_MAX = 3;
const int PROBABILITY = 4;

const int STRIKE_COUNT = 3;
const int BALL_COUNT = 4;
const int OUT_COUNT = 3;
const int HIT_COUNT = 4;
//列挙体
enum PitchType
{
	Straight,
	Curve,
	Slider,
	Sinker
};
//球種を表示する関数
void PitchingType(int pitching);
//リザルトを表示する関数
void Result(int out);
//入力チェック関数
int InputCheck(int min, int max);

