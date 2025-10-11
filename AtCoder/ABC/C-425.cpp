#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
#define ain(a) for(auto& i:a) cin >> i;
using namespace std;
void Yn(bool b,const string& yes="Yes",const string& no="No"){
    cout << (b?yes:no) << endl;
}

int main() {
    int n,q;
    cin >> n >> q;
    vector <ll> a(n);
    ain(a);
    vector <ll> ps(n+1,0);
    for (int i=0;i<n;i++) ps[i+1]=ps[i]+a[i];
    int count=0;
    while(q--){
        int type;
        cin >> type;
        if(type==1){
            int c;
            cin >> c;
            if(n){
                count+=c;
                if(count>=n) count-= n;
            }
        }else{
            int l,r;
            cin >> l >> r;
            int len=r-l+1;
            int s=(count+l-1)%n;
            ll ans;
            if(s+len<=n) ans=ps[s+len]-ps[s];
            else ans=(ps[n]-ps[s])+ps[(s+len)%n];
            cout << ans << endl;
        }
    }
    return 0;
}