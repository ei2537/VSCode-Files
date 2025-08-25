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
    int x,l,r;
    cin >> x >> l >> r;
    if(l<=x&&x<=r) cout << x << endl;
    else{
        if(l>=x) cout << l << endl;
        else cout << r << endl;
    }
    return 0;
}
