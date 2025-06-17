#include <iostream>
#include <numeric>
using namespace std;

int main () {
    int x, y;
    cout << "Input x = ";
    cin >> x;

    cout << endl;

    cout << "Input y = ";
    cin >> y;

    cout << endl;

    // 最大公約数
    cout << "gcd ( x, y ) = " << gcd ( x, y ) << endl;
    // 最小公倍数
    cout << "lcm ( x, y ) = " << lcm ( x, y ) << endl;
    
    return 0;
}