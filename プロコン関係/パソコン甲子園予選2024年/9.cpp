#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> h(n),d(n),a(n);
    for(int i=0;i<n;i++) cin >> h[i];
    for(int i=0;i<n;i++) cin >> d[i];
    for(int i=0;i<n;i++) a[i]=h[i]-d[i];
    sort(a.begin(), a.end());
    ll m=a[n/2],ans=0;
    for (ll x:a) ans+=abs(x-m);
    cout << ans << '\n';
    return 0;
}
