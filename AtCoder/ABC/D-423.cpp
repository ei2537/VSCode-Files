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
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n+1),b(n+1),c(n+1),ans(n+1,-1);
    for(int i=1;i<=n;i++) cin >> a[i] >> b[i] >> c[i];
    queue<int> q;
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> leave;
    ll t=0,in=0;
    ll INF=(1LL<<62);
    int ar=1,done=0;
    while (done < n) {
        if(q.empty()&&ar<=n) t=a[ar];
        while(!leave.empty()&&leave.top().first<=t){
            in-=c[leave.top().second];
            leave.pop();
        }
        while(ar<=n&&a[ar]==t) q.push(ar++);
        int entered=0;
        while(!q.empty()&&in+c[q.front()]<=k){
            int i=q.front();
            q.pop();
            ans[i]=t;
            in+=c[i];
            leave.push({t+b[i],i});
            done++;
            entered++;
        }
        if(done==n) break;
        if (!entered) {
            ll nextA=INF;
            if(ar<=n) nextA=a[ar];
            ll nextD=INF;
            if(!leave.empty()) nextD=leave.top().first;
            if(nextA<nextD) t=nextA;
            else t=nextD;
        }
    }
    for(int i=1;i<=n;i++) cout << ans[i] << endl;
    return 0;
}