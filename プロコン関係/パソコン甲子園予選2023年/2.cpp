#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main(){
    int d,x,y;
    cin >> d >> x >> y;
    if(abs(x)+abs(y)<=d) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
