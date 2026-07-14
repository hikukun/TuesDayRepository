#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260714_QuesionHeader_tokushige.h"
using namespace std;


//====================================
// メイン
//====================================
int main()
{
    //変数宣言
    int player;
    int cpu;
    int probability;

    int strike = 0;
    int ball = 0;
    int out = 0;
    int hit = 0;
    //乱数初期化
    srand((unsigned int)time(nullptr));

    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;
    //ループ
    do
    {
        cout << endl;
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート" << endl;
        cout << "1:カーブ" << endl;
        cout << "2:スライダー" << endl;
        cout << "3:シンカー" << endl;
        //入力チェック
        player = InputCheck(PITCHING_MIN, PITCHING_MAX);
        //球種の表示
        PitchingType(player);
        
        cpu = rand() % PROBABILITY;
        
        probability = rand() % PROBABILITY;

        //判定
        //CPUが打てなかったとき
        if (player != cpu)
        {
            //25％でボール
            if (probability == 0)
            {
                //ボールを増やす
                cout << "ボール！" << endl;
                ball++;
            }
            else
            {
                //ストライクを増やす
                cout << "ストライク！！" << endl;
                strike++;
            }
        }
        //CPUが打てたとき
        else
        {
            //ボールとストライクを初期化
            strike = 0;
            ball = 0;
            //25％でアウト
            if (probability == 1)
            {
                //アウトを増やす
                cout << "OUT!!" << endl;
                out++;
            }
            else
            {
                //ヒットを増やす
                cout << "HIT!!" << endl;
                hit++;
            }
        }

        //ストライクかボールが一定の数字になったら
        if (strike >= STRIKE_COUNT || ball >= BALL_COUNT)
        {
            //ストライクが3になったら
            if (strike >= STRIKE_COUNT)
            {
                //アウトを増やす
                cout << "三振アウト！" << endl;
                out++;
            }
            //ボールが4になったら
            else
            {
                //ヒットを増やす
                cout << "フォアボール！" << endl;
                hit++;
            }
            //ストライクとボールの初期化
            strike = 0;
            ball = 0;
        }
        //結果の出力
        cout << endl;
        cout << "B : " << ball << endl;
        cout << "S : " << strike << endl;
        cout << "O : " << out << endl;
        cout << "Runner : " << hit << endl;

    } while (out < OUT_COUNT && hit < HIT_COUNT);
    //リザルトの表示
    Result(out);

    return 0;
}