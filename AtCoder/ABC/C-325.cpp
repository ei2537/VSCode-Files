#include<bits/stdc++.h>
using namespace std;

int h,w,ans;
vector<string>s;
int dx[8]={-1,-1,-1,0,0,1,1,1},dy[8]={-1,0,1,-1,1,-1,0,1};
void dfs(int x,int y){
    s[x][y]='.';
    for(int d=0;d<8;d++){
        int nx=x+dx[d],ny=y+dy[d];
        if(nx>=0&&nx<h&&ny>=0&&ny<w&&s[nx][ny]=='#') dfs(nx,ny);
    }
}
int main(){
    cin >> h >> w;
    s.resize(h);
    for(int i=0;i<h;i++) cin >> s[i];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(s[i][j]=='#') dfs(i,j),ans++;
        }
    }
    cout << ans << endl;
}
