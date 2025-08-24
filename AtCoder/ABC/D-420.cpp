#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
using namespace std;
auto Yn = [](bool b) { cout << (b ? "Yes" : "No") << '\n'; };

struct state{
    int x=0,y=0,door=0;
};

const int dx[4]={1,-1,0,0};
    const int dy[4]={0,0,1,-1};

int main () {
    int h,w;
    cin >> h >> w;
    vector <string> a(h);
    pair<int,int> s,g;
    for(int i=0;i<h;i++){
        cin >> a[i];
        for(int j=0;j<w;j++){
            if(a[i][j]=='S') s={i,j};
            if(a[i][j]=='G') g={i,j};
        }
    }
    vector<vector<vector<int>>> dist(h,vector<vector<int>>(w,vector<int>(2,IMAX)));
    dist[s.first][s.second][0]=0;
    queue<state> q;
    q.push({s.first,s.second,0});
    while(!q.empty()){
        state now=q.front();
        q.pop();
        auto [x,y,door]=now;
        int d=dist[x][y][door];
        for(int i=0;i<4;i++){
            int nx=x+dx[i],ny=y+dy[i];
            if(nx<0||nx>=h||ny<0||ny>=w) continue;
            char c=a[nx][ny];
            if(c=='#') continue;
            if(c=='o'&&door==1) continue;
            if(c=='x'&&door==0) continue;
            int ndoor=door;
            if(c=='?') ndoor^=1;
            if(dist[nx][ny][ndoor]>d+1){
                dist[nx][ny][ndoor]=d+1;
                q.push({nx,ny,ndoor});
            }
        }
    }
    int ans=min(dist[g.first][g.second][0],dist[g.first][g.second][1]);
    if(ans==IMAX) ans=-1;
    cout << ans << endl;
    return 0;
}