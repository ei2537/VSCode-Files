#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int ans=0;
    for(int i=0;i<n;i++){
        vector <int> h(m);
        for(auto& i:h) cin >> i;
        sort(h.begin(),h.end());
        ans+=h[m-1];
    }
    cout << ans << endl;
    return 0;
}