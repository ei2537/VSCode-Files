#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define Imax INT_MAX
#define Imin INT_MIN
#define LLmax LLONG_MAX
#define LLmin LLONG_MIN
using namespace std;

auto Yn = [](bool b) { cout << (b ? "Yes" : "No") << '\n'; };

int main () {
    int x,y;
    cin >> x >> y;
    if(x+y>12) cout << (x+y)-12 << endl;
    else cout << x+y << endl;
    return 0;
}