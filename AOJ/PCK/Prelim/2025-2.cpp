#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main(){
    int h,c,r;
    cin >> h >> c >> r;
    if(h>=c-r&&c+r>=h) cout << "side" << endl;
    else if(c-r>h) cout << "up" << endl;
    else if(c+r<h) cout << "down" << endl;
    return 0;
}