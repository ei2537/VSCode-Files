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
    int n,q;
    cin >> n >> q;
    vector <int> a(n),b(n);
    for(auto& i:a) cin >> i;
    for(auto& i:b) cin >> i;
    ll ans=0;
    for(int i=0;i<n;i++) ans+=min(a[i],b[i]);
    for(int i=0;i<q;i++){
        int x,v;
        char c;
        cin >> c >> x >> v;
        ans-=min(a[x-1],b[x-1]);
        if(c=='A') a[x-1]=v;
        else b[x-1]=v;
        ans+=min(a[x-1],b[x-1]);
        cout << ans << endl;
    }
    return 0;
}