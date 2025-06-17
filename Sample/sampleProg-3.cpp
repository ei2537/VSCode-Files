//#define と endl の動作確認プログラム

/*****************************************/
/****動作を予想してから実行してください!!****/
/*****************************************/

#include <iostream>
using namespace std;

#define A1 2 + 1
#define A2 3
#define A3 A1 * A2

#define B1 ( 2 + 1 )
#define B2 3
#define B3 B1 * B2

#define ll long long

#define OUTPUT "Ans = "

int main () {
    // 変数宣言
    ll ansA;
    ll ansB;

    // define のチェック！
    ansA = A3;

    // endl が働いていることもチェック！
    cout << OUTPUT << ansA << endl;

    // define のチェック！
    ansB = B3;

    // endl が働いていることもチェック！
    cout << OUTPUT << ansB << endl;

    return 0;
}

/*
ヒント！

#define はあくまでコンパイル前に文字列の置き換えしかしません。
そうすれば、ansA と ansB がどうして実行結果のようになるか分かるはずです...
（#defineの内容を脳死で文字列に書き表してみると分かるかも？）
*/