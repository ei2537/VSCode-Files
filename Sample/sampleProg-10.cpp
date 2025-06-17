#include <iostream>
using namespace std;

int main () {
    for ( int i = 0; i < 10; i++ ) {    // このfor文のブロック内ならば、どこでも使えます。
        cout << i << " ";
    }

    // 改行する
    cout << endl;

    for ( i = 0; i < 10; i++ ) {        // ここのfor文はブロック外なので、i は使えません。
        cout << i << " ";
    }

    return 0;
}

// このコードは7行目終わり以降で使用されている変数 i が未定義なので、コンパイルエラーとなります。

/* Errorメッセージの例（だいたい似ていると思います。）

.\sampleProg-10.cpp: In function 'int main()':
.\sampleProg-10.cpp:12:11: error: 'i' was not declared in this scope
   12 |     for ( i = 0; i < 10; i++ ) {        // ここ・・
                  ^

簡単に日本語訳すると...
「このスコープ内で 'i' は宣言されていません。12行11列目に原因があります。」
みたいな感じです。

*/