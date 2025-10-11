#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main(){
    ll a,b,c,d,t;
    cin >> a >> b >> c >> d >> t;
    unordered_map <ll,int> x;
    ll tempa=a,tempb=b;
    for(int i=0;tempa<=t;i++){
        x[tempa]=i;
        if(c==1) break;
        tempa*=c;
    }
    int ans=-1;
    for(int i=0;i<tempb;i++){
        ll temp=t-tempb;
        if(x.count(temp)){
            int sum=i+x[temp];
            if (ans==-1||sum<ans) ans=sum;
        }
        if(d==1) break;
        tempb*=d;
    }
    if(ans==-1) cout << "No" << endl;
    else cout << "Yes" << endl << ans << endl;
    return 0;
}
