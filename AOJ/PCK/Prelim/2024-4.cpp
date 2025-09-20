#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
using namespace std;
void Yn(bool b,const std::string& yes="Yes",const std::string& no="No"){
    cout << (b?yes:no) << '\n';
}

int main() {
    ll A, B, C, D, T;
    cin >> A >> B >> C >> D >> T;
    unordered_map <ll,int> lc;
    ll a=A;
    for(int i=0;a<=T;i++){
        lc[a]=i;
        if(C==1) break;
        a*=C;
    }
    ll b=B;
    int ans=-1;
    for(int i=0;b<=T;i++){
        ll temp=T-b;
        if(lc.count(temp)){
            int sum=i+lc[temp];
            if (ans==-1||sum<ans) ans=sum;
        }
        if(D==1) break;
        b*=D;
    }
    if(ans==-1) cout << "No" << endl;
    else cout << "Yes" << endl << ans << endl;
    return 0;
}
