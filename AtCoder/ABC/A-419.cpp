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
    string s;
    cin >> s;
    if(s=="red") cout << "SSS" << endl;
    else if(s=="blue") cout << "FFF" << endl;
    else if(s=="green") cout << "MMM" << endl;
    else cout << "Unknown" << endl;
    return 0;
}