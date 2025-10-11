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
    cin >> n;
    vector<vector<int>> ko(n+1);
    vector<char> skil(n+1,0);
    queue<int> q;
    for(int i=1;i<=n;i++){
        int a,b;
        cin >> a >> b;
        if(a==0&&b==0){
            skil[i] = 1;
            q.push(i);
        } else {
            ko[a].push_back(i);
            ko[b].push_back(i);
        }
    }
    while(!q.empty()){
        int s=q.front();
        q.pop();
        for(int nxt:ko[s]){
            if(!skil[nxt]){
                skil[nxt]=1;
                q.push(nxt);
            }
        }
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        if(skil[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}