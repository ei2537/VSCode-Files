#include <bits/stdc++.h>
#define endl "\n"
#define ll long long 
using namespace std;

int main() {
    int R,C;
    cin >> R >> C;
    int sy,sx,gy,gx;
    cin >> sy >> sx >> gy >> gx;
    sy--;
    sx--;
    gy--;
    gx--;
    vector<string> maze(R);
    for(int i=0;i<R;i++) cin >> maze[i];
    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};
    vector<vector<int>> dist(R,vector<int>(C,-1));
    dist[sy][sx]=0;
    queue<pair<int,int>> q;
    q.push(make_pair(sy,sx));
    while(!q.empty()){
        pair<int,int> p=q.front();
        q.pop();
        int y=p.first;
        int x=p.second;
        for(int i=0;i<4;i++){
            int ny=y+dy[i];
            int nx=x+dx[i];
            if (ny>=0&&ny<R&&nx>=0&&nx<C&&maze[ny][nx]=='.'&& dist[ny][nx]==-1){
                dist[ny][nx]=dist[y][x]+1;
                q.push(make_pair(ny,nx));
            }
        }
    }
    cout << dist[gy][gx] << endl;
    return 0;
}