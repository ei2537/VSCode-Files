#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main(){
    int ans=0;
    char d;
    string n;
    cin >> d >> n;
    for(int i=0;i<n.size();i++){
        if(n[i]==d) ans++;
    }
    cout << ans << endl;
    return 0;
}
