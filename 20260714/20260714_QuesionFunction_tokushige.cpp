#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_QuesionHeader_tokushige.h"
using namespace std;
//球種を表示する関数
void PitchingType(int pitching)
{
    switch (pitching)
    {
    case Straight:
        cout << "ストレート" << endl;
        break;

    case Curve:
        cout << "カーブ" << endl;
        break;

    case Slider:
        cout << "スライダー" << endl;
        break;

    case Sinker:
        cout << "シンカー" << endl;
        break;
    }
}
//リザルトの表示をする関数
void Result(int out)
{
    //ループが終わったときアウトが3だったらプレイヤーの勝利
    if (out >= OUT_COUNT)
    {
        cout << "PLAYER WINNER!!" << endl;
    }
    else
    {
        cout << "CPU WINNER!!" << endl;
    }
}
//入力チェック関数
int InputCheck(int min, int max)
{
    int player;
    //入力ミスをやり直す
    while (true)
    {
        //プレイヤーの入力
        cin >> player;
        //指定範囲外の入力があったらやり直し
        if (player < PITCHING_MIN || player > PITCHING_MAX)
        {
            cout << "入力に誤りがあります。再入力してください。" << endl;
        }
        else
        {
            break;
        }
    }

    return player;
}