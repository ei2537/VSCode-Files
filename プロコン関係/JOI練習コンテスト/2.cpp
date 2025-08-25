#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
using namespace std;
auto Yn=[](bool b){cout << (b?"Yes":"No") << '\n';};

int main () {
    vector <int> a(3);
    for(auto& i:a) cin >> i;
    sort(a.rbegin(),a.rend());
    cout << a[0]+a[1] << endl;
    return 0;
}