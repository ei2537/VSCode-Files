#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
    // 5個の整数を入力してください。
    int i;
    vector <int> x (5);
    for ( i = 0; i < 5; i++ ) {
        cout << "Input x[" << i << "] = "; 
        cin >> x[i];
        cout << endl;
    }

    // 元の配列を出力する。
    for ( int i = 0; i < 5; i++ ) {
        cout << "x[" << i << "] = " << x[i] << " ";
    }
    cout << endl;

    // 逆順化する。
    reverse ( x.begin(), x.end() );

    // 逆順後の配列を出力する。
    for ( int i = 0; i < 5; i++ ) {
        cout << "x[" << i << "] = " << x[i] << " ";
    }
    cout << endl;
    
    return 0;
}