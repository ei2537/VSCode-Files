// x座標 y座標 z座標を保存する変数を pair型 で作る
#include <iostream>
#include <utility>
using namespace std;

int main () {
    
    /*
    pair型の中にpair型を突っ込みます。
    pair < もう一つのpair, int > のようなイメージ。
    これを繰り返せば何連pairでも作れますが、3 ~ 4 連くらいまでにしましょう...
    */
    
    pair < pair < int, int >, int > pos;
    cout << "Input ( x, y, z ) = ";
    
    cin >> pos.first.first >> pos.first.second >> pos.second;
    
    cout << "x pos = " << pos.first.first << endl;
    cout << "y pos = " << pos.first.second << endl;
    cout << "z pos = " << pos.second << endl;

    return 0;
}