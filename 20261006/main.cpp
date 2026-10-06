#include <iostream>

#include "Player.h"
#include "Enemy.h"

using namespace std;

int main()
{
    Player player;
    Enemy enemy;

    cout << "==============================" << endl;
    cout << "       バトルゲーム開始       " << endl;
    cout << "==============================" << endl;

    cout << endl;
    cout << "【プレイヤーの能力値】" << endl;
    player.showStatus();

    cout << endl;
    cout << "【敵の能力値】" << endl;
    enemy.showStatus();

    // ゲーム開始
    while (player.isAlive() && enemy.isAlive())
    {
        // ==========================
        // プレイヤーのターン
        // ==========================
        cout << endl;
        cout << "==============================" << endl;
        cout << "      プレイヤーのターン      " << endl;
        cout << "==============================" << endl;

        cout << "プレイヤーHP: "
            << player.getHp() << endl;

        cout << "敵HP: "
            << enemy.getHp() << endl;

        int playerAction = player.chooseAction();

        if (playerAction == Player::ATTACK)
        {
            cout << endl;
            cout << "【プレイヤーの攻撃】" << endl;

            player.attackCharacter(enemy);
        }
        else if (playerAction == Player::HEAL)
        {
            cout << endl;
            cout << "【プレイヤーの回復】" << endl;

            player.heal();
        }

        // 敵が倒れたか確認
        if (!enemy.isAlive())
        {
            cout << endl;
            cout << "敵を倒しました！" << endl;
            break;
        }

        // ==========================
        // 敵のターン
        // ==========================
        cout << endl;
        cout << "==============================" << endl;
        cout << "          敵のターン          " << endl;
        cout << "==============================" << endl;

        cout << "プレイヤーHP: "
            << player.getHp() << endl;

        cout << "敵HP: "
            << enemy.getHp() << endl;

        cout << endl;
        cout << "【敵の攻撃】" << endl;

        enemy.attackCharacter(player);

        // プレイヤーが倒れたか確認
        if (!player.isAlive())
        {
            cout << endl;
            cout << "プレイヤーは倒れました..." << endl;
            break;
        }
    }

    // ==========================
    // バトル結果
    // ==========================
    cout << endl;
    cout << "==============================" << endl;
    cout << "          バトル終了          " << endl;
    cout << "==============================" << endl;

    cout << "プレイヤーHP: "
        << player.getHp() << endl;

    cout << "敵HP: "
        << enemy.getHp() << endl;

    if (player.isAlive())
    {
        cout << "プレイヤーの勝利！" << endl;
    }
    else
    {
        cout << "敵の勝利！" << endl;
    }

    return 0;
}
