#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    vector<vector<pair<int,int>>> G(N);
    for(int i=0;i<M;i++){
        int a,b,c;
        cin >> a >> b >> c;
        --a;--b;
        G[a].push_back(make_pair(b,c));
        G[b].push_back(make_pair(a,c));
    }
    int maxL=0;
    for(int start=0;start<N;start++){
        stack<pair<int,pair<int,vector<bool>>>> stk;
        vector<bool> visited(N,false);
        stk.push(make_pair(start,make_pair(0,visited)));
        while (!stk.empty()) {
            int now=stk.top().first;
            int dist=stk.top().second.first;
            vector<bool> vis=stk.top().second.second;
            stk.pop();
            vis[now]=true;
            maxL=max(maxL,dist);
            for(int i=0;i<G[now].size();i++){
                int next=G[now][i].first;
                int cost=G[now][i].second;
                if(!vis[next]){
                    vector<bool> newVis=vis;
                    stk.push(make_pair(next,make_pair(dist+cost,newVis)));
                }
            }
        }
    }
    cout << maxL << endl;
    return 0;
}