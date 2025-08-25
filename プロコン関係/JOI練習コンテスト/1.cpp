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
    int a=0,b=0;
    for(int i=0;i<3;i++){
        int x;
        cin >> x;
        if(x==1) a++;
        else b++;
    }
    if(a>b) cout << 1 << endl;
    else cout << 2 << endl;
    return 0;
}