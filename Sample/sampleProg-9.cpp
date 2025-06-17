#include <iostream>
using namespace std;

int main () {
    int i;  // main関数のブロック内でこれ以降使えます。
    for ( i = 0; i < 10; i++ ) {
        cout << i << " ";
    }

    // 改行する
    cout << endl;

    for ( i = 0; i < 10; i++ ) {
        cout << i << " ";
    }

    return 0;
}