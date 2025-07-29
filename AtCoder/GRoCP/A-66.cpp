#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define Imax INT_MAX
#define Imin INT_MIN
#define LLmax LLONG_MAX
#define LLmin LLONG_MIN
using namespace std;

auto Yn = [](bool a) { cout << (a ? "Yes" : "No") << '\n'; };

// UnionFindTree
struct UnionFind
{
    vector< ll > data;
    UnionFind(ll sz)
    {
        data.assign(sz, -1);
    }
    void unite(ll x, ll y)
    {
        x = find(x), y = find(y);
        if(x != y) {
        if(data[x] > data[y]) swap(x, y);
        data[x] += data[y];
        data[y] = x;
        }
    }
    ll find(ll k)
    {
        if(data[k] < 0) return(k);
        return(data[k] = find(data[k]));
    }
    ll size(ll k)
    {
        return(-data[find(k)]);
    }
};

int main () {
    int N,Q;
    cin >> N >> Q;
    UnionFind g(N+1);
    for(int i=0;i<Q;i++){
        int a,b,c;
        cin >> a >> b >> c;
        if(a==1){
            g.unite(b,c);
        }else{
            Yn(g.find(b)==g.find(c));
        }
    }
    return 0;
}