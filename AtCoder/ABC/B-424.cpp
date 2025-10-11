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
    int n,m,k;
    cin >> n >> m >> k;
    vector <set<int>> toita(n+1);
    vector<int> done_at(n+1,-1);
    for(int i=1;i<=k;i++){
        int a,b;
        cin >> a >> b;
        if(!toita[a].count(b)){
            toita[a].insert(b);
            if((int)toita[a].size()==m&&done_at[a]==-1){
                done_at[a]=i;
            }
        }
    }
    vector<pair<int,int>> ans;
    for(int i=1;i<=n;i++) if(done_at[i]!=-1) ans.emplace_back(done_at[i],i);
    sort(ans.begin(), ans.end());
    if(!ans.empty()){
        for(size_t i=0;i<ans.size();i++){
            if (i) cout << ' ';
            cout << ans[i].second;
        }
        cout << endl;
    }
    return 0;
}