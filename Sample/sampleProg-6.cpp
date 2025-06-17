// bool型, 二分探索

#include <iostream>     //入出力
#include <algorithm>    //二分探索
#include <vector>       //vector型
// bool型は C++ の標準です。そのため、ヘッダーファイルはありません。

using namespace std;

int main () {
    // 5個の整数から成る配列を二分探索する。
    vector <int> x (5);
    int i;
    for ( i = 0; i < 5; i++ ) {
        cout << "Input x[" << i << "] = ";
        cin >> x[i]; 
    }

    int a;
    cout << "Search ? = ";
    cin >> a;

    // 二分探索の結果をbool型で受け取ってみます。
    bool ans = binary_search ( x.begin(), x.end(), a );

    // bool の中に 1 (true) が入っているなら、Yesを出力し、逆に 0 が入っているなら No を出力します。
    if ( ans ) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}