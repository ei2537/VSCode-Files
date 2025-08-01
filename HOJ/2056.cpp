#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define Imax INT_MAX
#define Imin INT_MIN
#define LLmax LLONG_MAX
#define LLmin LLONG_MIN
using namespace std;

int main(){
    int n,m;
    ll x;
    cin >> n >> m >> x;
    int s,g;
    cin >> s >> g;
    vector<vector<pair<int,int>>> graph(n+1);
    for(int i=0;i<m;i++){
        int u,v,t;
        cin >> u >> v >> t;
        graph[u].push_back(make_pair(v,t));
        graph[v].push_back(make_pair(u,t));
    }
    vector<ll> dist(n+1, LLmax);
    vector<int> prev(n+1, -1);
    dist[s]=0;
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
    pq.push(make_pair(0,s));
    while(!pq.empty()){
        pair<ll,int> p = pq.top(); pq.pop();
        ll cd=p.first;
        int u=p.second;
        if(dist[u]<cd) continue;
        for(auto& i:graph[u]){
            int nv=i.first;
            int nt=i.second;
            ll nd=cd+nt;
            if(nd<dist[nv]){
                dist[nv]=nd;
                prev[nv]=u;
                pq.push(make_pair(nd,nv));
            }
        }
    }
    if(dist[g]>x) cout << -1 << endl;
    else {
        vector <int> path;
        for(int cur=g;cur!=-1;cur=prev[cur]) path.push_back(cur);
        reverse(path.begin(),path.end());
        for(auto& i:path) cout << i << endl;
    }
    return 0;
}
