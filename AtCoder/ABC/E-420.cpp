#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
using namespace std;
auto Yn=[](bool b){cout << (b?"Yes":"No") << '\n';};

struct UnionFind
{
    vector<ll> data;
    UnionFind(ll sz)
    {
        data.assign(sz,-1);
    }
    void unite(ll x,ll y)
    {
        x=find(x),y=find(y);
        if(x!=y){
        if(data[x]>data[y]) swap(x,y);
        data[x]+=data[y];
        data[y]=x;
        }
    }
    ll find(ll k)
    {
        if(data[k]<0) return(k);
        return(data[k]=find(data[k]));
    }
    ll size(ll k)
    {
        return(-data[find(k)]);
    }
};

int main(){
    int N,Q;
    cin >> N >> Q;
    UnionFind uf(N);
    vector <int> b_count(N,0);
    vector <bool> b_place(N,false);
    for(int i=0;i<Q;i++){
        int t;
        cin >> t;
        if(t==1){
            int u,v;
            cin >> u >> v;
            u--;
            v--;
            int ru=uf.find(u),rv=uf.find(v);
            if(ru!=rv){
                uf.unite(u,v);
                int rnew=uf.find(u);
                b_count[rnew]=b_count[ru]+b_count[rv];
            }
        }else if(t==2){
            int v;
            cin >> v;
            v--;
            int r=uf.find(v);
            if(!b_place[v]){
                b_place[v]=true;
                b_count[r]++;
            }else{
                b_place[v]=false;
                b_count[r]--;
            }
        }else if(t==3){
            int v;
            cin >> v;
            v--;
            int r=uf.find(v);
            if(b_count[r]>0) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}