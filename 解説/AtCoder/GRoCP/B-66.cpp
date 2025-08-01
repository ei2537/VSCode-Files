#include <bits/stdc++.h>

#define ll long long
#define inmin INT64_MIN
#define inmax INT64_MAX
#define rep(i,n) for(ll i=0;i<n;i++)
#define pq priority_queue
#define rf(T, body) function<T(T, T)>([](T a, T b) { return (body); })

#define MOD 1000000007

using namespace std;

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

int main() {
    ll n,m;
    cin >> n >> m;

    UnionFind g( n + 1 );

    vector< pair< ll , ll > > adj( m );
    vector< bool > f( m );
    for( int i = 0;i < m;i++ ){
        cin >> adj[i].first >> adj[i].second;
    }

    ll q;
    cin >> q;
    vector<pair< ll , pair< ll , ll >>> qu( q );

    for(ll i = 0;i < q;i++ ) {
        cin >> qu[i].first;

        if(qu[i].first == 1) {
            cin >> qu[i].second.first;

            qu[i].second.first--;
            f[ qu[i].second.first ] = true;
        } else {
            cin >> qu[i].second.first >> qu[i].second.second;
        }
    }

    for(ll i = 0;i < m;i++) {
        if( !f[i] ) {
            g.unite( adj[i].first , adj[i].second );
        }
    }

    stack<bool> s;

    for(ll i = q-1;i >= 0;i-- ) {
        if(qu[i].first == 1) {
            ll pos = qu[i].second.first;
            g.unite( adj[pos].first , adj[pos].second );
        } else {
            if( g.find(qu[i].second.first) == g.find(qu[i].second.second) ) {
                s.push( true );
            } else {
                s.push( false );
            }
        }
    }

    while( !s.empty() ) {
        bool ans = s.top();
        s.pop();

        if( ans ) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}
