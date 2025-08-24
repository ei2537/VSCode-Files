#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <ll> a(n+1),s(n+1,0);
    for(int i=1;i<=n;i++){
        cin >> a[i];
        s[i]=s[i-1]+a[i];
    }
    int q;
    cin >> q;
    while(q--){
        int x,y;
        cin >> x >> y;
        ll ans=s[y]-s[x-1];
        cout << ans << endl;
    }
    return 0;
}
