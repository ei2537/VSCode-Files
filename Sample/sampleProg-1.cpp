// swap関数の確認

#include <iostream>
#include <utility>
using namespace std;

int main() {
    int x, y;

    // 入力を受け取る。
    cout << "Input x, y" << endl;
    cin >> x >> y;

    // まずはそのまま出力する。
    cout << "Before" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl << endl;

    swap ( x, y );

    // 入れ替えた結果を出力する。
    cout << "After" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl << endl;

    return 0;
}
