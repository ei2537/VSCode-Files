//１：並び替え(sort,reverse)
//２：2分探索(binary_search)
//３：指定した値以上の値が初めて出てくる位置を返す(lower_bound)
//４：指定した値より大きい値が初めて出てくる位置を返す(upper_bound)
//５：比較(最大値:max,最小値:min)
//６：累乗(pow)
//７：平方根(sqrt)
//８：絶対値(整数型:abs,実数型:fabs)
//９：丸め処理(切り上げ:ceil,切り捨て:floor,四捨五入:round,小数点以下切り捨て:trunc)
//１０：入れ替え(swap)
//１１：変数最大値取得(変数型_MAX)
//１２：変数最小値取得(unsigned long long以外 変数型_MIN)
//１３：最大公約数(gct)
//１４：最小公倍数(lcm)
//１５：#defineについて
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>
#include <climits>
#include <numeric>

#define endl "\n"
using namespace std;

int main() {
    int a,b,c,most,i,x,y;
    float aa;
    int mode = 100;
    vector <int> A (5);     //ソート、入れ替え用
    vector <int> B (10);    //2分探索、位置返し用
    vector <int> C (5);     //入れ替え用

    cout << "0を入力すると実行終了" << endl;
    while (mode > 0) {
        cout << "chose mode ";
        cin >> mode;
        switch (mode) {
            //並び替え
            case 1:

            cout << "要素を5個入力" << endl;
            for (i = 0; i < 5; i++) {
                cin >> A[i];
            }

            cout << "逆順化" << endl;
            reverse ( A.begin() , A.end () );
            for (i = 0; i < 5; i++) {
                cout << A[i] << " ";
            }

            cout << "\n";

            cout << "昇順ソート" << endl;
            sort ( A.begin() , A.end () );
            for (i = 0; i < 5; i++) {
            cout << A[i] << " ";
            }

            cout << "\n";

            cout << "降順ソート" << endl;
            sort ( A.rbegin() , A.rend () );
            for (i = 0; i < 5; i++) {
                cout << A[i] << " ";
            }

            cout << "\n";
            break;
            //ここまで

            //2分探索(見つけたら1、見つからなかったら0)
            case 2:

            cout << "要素を10個入力" << endl;
            for (i = 0; i < 10; i++) {
                cin >> B[i];
            }

            cout << "探索の対象となる数字を入力" << endl;
            cin >> a;

            cout << "探索結果(1=ある,0=ない)" << endl;
            cout << binary_search ( B.begin() , B.end() , a ) << endl;
            break;
            //ここまで

            //指定した値以上の値が初めて出てくる位置を返す
            case 3:

            cout << "要素を10個入力" << endl;
            for (i = 0; i < 10; i++) {
                cin >> B[i];
            }

            cout << "基準となる数字を入力" << endl;
            cin >> a;

            cout << "指定した値「以上」の値が初めて出てきた位置(0スタート)" << endl;
            cout << lower_bound ( B.begin(), B.end(), a ) - B.begin() << endl;
            break;
            //ここまで

            //指定した値より大きい値が初めて出てくる位置を返す
            case 4:

            cout << "要素を10個入力" << endl;
            for (i = 0; i < 10; i++) {
                cin >> B[i];
            }

            cout << "基準となる数字を入力" << endl;
            cin >> a;

            cout << "指定した値「より大きい」値が初めて出てきた位置(0スタート)" << endl;
            cout << upper_bound ( B.begin(), B.end(), a ) - B.begin() << endl;
            break;
            //ここまで

            //比較
            case 5:

            cout << "3つの数字を入力" << endl;
            cin >> a >> b >> c;

            most = max ( { a,b,c } );
            cout << "3つの数字の最大値" << endl << most << endl;

            most = min ( { a,b,c } );
            cout << "3つの数字の最小値" << endl << most << endl;
            break;
            //ここまで

            //累乗
            case 6:

            cout << "乗算する元の数を入力" << endl;
            cin >> a;
            cout << "何乗か入力" << endl;
            cin >> b;
            cout << pow (a,b) << endl;
            break;
            //ここまで

            //平方根
            case 7:

            cout << "平方根を求めたい数を入力" << endl;
            cin >> a;
            cout << sqrt ( a ) << endl;
            break;
            //ここまで

            //絶対値
            case 8:

            cout << "絶対値を求めたい数を入力(整数型)" << endl;
            cin >> a;
            cout << abs ( a ) << endl;

            cout << "絶対値を求めたい数を入力(実数型)" << endl;
            cin >> aa;
            cout << fabs (aa) << endl;
            break;
            //ここまで

            //丸め処理
            case 9:

            cout << "丸め処理したい数を入力" << endl;
            cin >> aa;
            cout << "切り上げ\n" << ceil ( aa ) << endl;
            cout << "切り捨て\n" << floor ( aa ) << endl;
            cout << "四捨五入\n" << round ( aa ) << endl;
            cout << "小数点以下切り捨て\n" << trunc ( aa ) << endl;
            break;
            //ここまで

            //入れ替え
            case 10:

            cout << "要素を5つ入力" << endl;
            for (i = 1; i <= 5; i++) {
                cin >> A[i];
            }

            cout << "何番目と何番目を入れ替えるかを入力" << endl;
            cin >> x >> y;
            swap (A[x] , A[y]);
            
            cout << "入れ替え結果" << endl;
            for (i = 1; i <= 5; i++) {
                cout << A[i] << " ";
            }
            
            cout << "\n";
            break;
            //ここまで

            //変数最大値取得
            case 11:
            cout << "int最大値\n" << INT_MAX << endl;
            cout << "long long最大値\n" << LLONG_MAX << endl;
            cout << "unsigned long long最大値\n" << ULLONG_MAX << endl;
            cout << "char最大値\n" << CHAR_MAX << endl;
            break;
            //ここまで

            //変数最小値取得
            case 12:

            cout << "int最小値\n" << INT_MIN << endl;
            cout << "long long最小値\n" << LLONG_MIN << endl;
            cout << "unsigned long long最小値\n" << "最小値が0のため定数無し" <<endl;
            cout << "char最小値\n" << CHAR_MIN << endl;
            break;
            //ここまで

            //最大公約数
            case 13:

            cout << "最大公約数を求めたい2つの数を入力" << endl;
            cin >> a >> b;
            cout << gcd ( a , b ) << endl;
            break;
            //ここまで

            //最小公倍数
            case 14:

            cout << "最小公倍数を求めたい2つの数を入力" << endl;
            cin >> a >> b;
            cout << lcm ( a, b ) << endl;
            break;
            //ここまで

            //defineについて
            case 15:

            cout << "#defineを使用するとコード内のテキストを置き換え可能。" << endl;
            cout << "書き方：#define 置き換え前 置き換え後" << endl;
            cout << "例：#difine ll long long" << endl;
            cout << "ll Aと書くとlong long型の変数Aが入る。" << endl;
            cout << "#defineは数字や式を入れることも可能。" << endl;
            cout << "例：#define A1 ( 1 + 2 )" << endl;
            cout << "　　#define A2 3" << endl;
            cout << "　　#define ans A1 * A2" << endl;
            cout << "こうすると cout >> ans で5が出力される" << endl;

            //実行終了用
            default:
            break;
        }
    }

return 0;
}