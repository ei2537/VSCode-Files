#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector <int> a(n),b(n);
    for(auto& i:a) cin >> i;
    for(auto& i:b) cin >> i;
    vector <ll> ab(n);
    ll ans=0;
    for(int i=0;i<n;i++){
        ab[i]=a[i]-b[i];
        ans+=ab[i];
    }
    sort(ab.begin(),ab.end());
    for(int i=0;i<k;i++) ans-=ab[i];
    cout << ans << endl;
    return 0;
}