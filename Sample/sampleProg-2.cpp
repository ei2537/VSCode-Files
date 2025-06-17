// 数学関数や定数

/*
Select Mode

1 : 三角関数
2 : 2の累乗
3 : 平方根
4 : 実数型の丸め処理
5 : 円周率の出力
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int sel;
    cout << "Select Mode ( 1 - 5 )" << endl;
    cin >> sel;

    double angle, powed, beta, alpha;

    switch ( sel ) {
        case 1:
            // 三角関数の出力
            // 三角関数の角度はラジアンで指定します。
            // 入力は度数法でお願いします。
            cout << "Input angle = ";
            cin >> angle;

            // 弧度法⇒ラジアン
            angle = angle * ( M_PI / 180 );
            
            cout << "sin ";
            cout << sin ( angle ) << endl;

            cout << "cos ";
            cout << cos ( angle ) << endl;
            
            cout << "tan";
            cout << tan ( angle ) << endl;
            break;

        case 2:
            // 2の累乗
            cout << "Input powed = ";
            cin >> powed;

            powed = pow ( 2, powed );

            cout << "pow ( powed ) = ";
            cout << powed  << endl;
            break;

        case 3:
            // 平方根
            cout << "Input beta = ";
            cin >> beta;

            beta = sqrt ( beta );

            cout << "sqrt ( beta ) = "<< beta;
            break;

        case 4:
            // 実数値の丸め処理
            cout << "Input alpha = ";
            cin >> alpha;

            cout << "ceil ( alpha ) = ";
            cout << ceil ( alpha ) << endl;

            cout << "floor ( alpha ) = ";
            cout << floor ( alpha ) << endl;

            cout << "round ( alpha ) = ";
            cout << round ( alpha ) << endl;
            break;

        case 5:
            // 円周率

            cout << M_PI << endl;
            break;

        default:
            // 存在しない

            cout << "Error" << endl;
            break;
    }

    return 0;
}