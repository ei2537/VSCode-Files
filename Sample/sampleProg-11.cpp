// 通常配列とvector型の可変長配列
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 長さを指定する n を入力します。
    int n;
    cout << "Input n = ";
    cin >> n;

    int normal[ n ];            //変数で長さを指定します。（こっちは通常配列）
    vector <int> vec( n, -1 );  //変数で長さを指定します。（こっちは vector 型）
    
    // 配列の各要素には、添え字と同じ値を入れていきます。
    for ( int i = 0; i < n; i++ ) {
        normal[i] = i;
        vec[i] = i;
    }

    // 通常配列
    cout << "normal" << endl;
    for ( int i = 0; i < n; i++ ) {
        cout << normal[i] << " ";
    }

    // ベクター型
    cout << endl << "vector" << endl;
    for ( int i = 0; i < n; i++ ) {
        cout << vec[i] << " ";
    }

    cout << endl;

    return 0;
}