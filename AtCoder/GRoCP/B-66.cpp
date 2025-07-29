#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define Imax INT_MAX
#define Imin INT_MIN
#define LLmax LLONG_MAX
#define LLmin LLONG_MIN
using namespace std;

auto Yn=[](bool a){cout<<(a?"Yes":"No")<<'\n';};

struct UnionFind{
    vector<ll>data;
    UnionFind(ll sz){
        data.assign(sz,-1);
    }
    void unite(ll x,ll y){
        x=find(x),y=find(y);
        if(x!=y){
            if(data[x]>data[y])swap(x,y);
            data[x]+=data[y];
            data[y]=x;
        }
    }
    ll find(ll k){
        if(data[k]<0)return(k);
        return(data[k]=find(data[k]));
    }
    ll size(ll k){
        return(-data[find(k)]);
    }
};

int main(){
    int n,m;
    cin >> n >> m;
    vector <pair<int,int>> edges(m+1);
    for(int i=1;i<=m;i++) cin >> edges[i].first >> edges[i].second;
    int q;
    cin >> q;
    vector <int> query_type(q);
    vector <int> query_a(q);
    vector <int> query_b(q);
    vector <bool> is_deleted(m+1,false);
    for(int i=0;i<q;i++){
        int t,a,b=-1;
        cin >> t >> a;
        if(t==2) cin >> b;
        query_type[i]=t;
        query_a[i]=a;
        query_b[i]=b;
        if(t==1)is_deleted[a]=true;
    }
    UnionFind uf(n+1);
    for(int i=1;i<=m;i++){
        if(!is_deleted[i]) uf.unite(edges[i].first,edges[i].second);
    }
    vector <string> ans;
    for(int i=q-1;i>=0;i--){
        int t=query_type[i];
        int a=query_a[i];
        int b=query_b[i];
        if(t==1){
            uf.unite(edges[a].first,edges[a].second);
        }else{
            if(uf.find(a)==uf.find(b)){
                ans.push_back("Yes");
            }else{
                ans.push_back("No");
            }
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++) cout << ans[i] << endl;
    return 0;
}
