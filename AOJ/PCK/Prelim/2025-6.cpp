#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

ll OK(const vector<ll>& a,const vector<ll>& b){
    int n=(int)a.size();
    int i=0,j=0;
    ll cnt=0;
    while(i<n&&j<n){
        if(b[j]>=a[i]){
            cnt++;
            i++;
            j++;
        }else{
            j++;
        }
    }
    return cnt;
}

ll NO(const vector<ll>&a,const vector<ll>&b){
    int n=(int)a.size();
    int i=0,j=0;
    ll cnt=0;
    while(i<n&&j<n){
        if(a[i]>b[j]){
            cnt++;
            i++;
            j++;
        }else{
            i++;
        }
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll r=OK(a,b);
    ll l=n-NO(a,b);
    cout << (r-l+1) << endl;
    for (ll i=l;i<=r;i++){
        if(i>l) cout << ' ';
        cout << i;
    }
    cout << endl;
    return 0;
}