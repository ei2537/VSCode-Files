#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
using namespace std;
void Yn(bool b,const std::string& yes="Yes",const std::string& no="No"){
    std::cout << (b?yes:no) << '\n';
}

int main() {
    ll n, k;
    cin >> n >> k;
    const ll m=1LL << n;
    ll U=(k%m==0?0:1);
    vector <ll> b(m);
    ll prev=0;
    for(ll i=0;i<m;i++){
        ll cur=(k*(i+1))/m;
        b[i]=cur-prev;
        prev=cur;
    }
    cout << U << endl;
    for(ll i=0;i<m;i++){
        if(i)cout << ' ';
        cout << b[i];
    }
    cout << endl;
    return 0;
}