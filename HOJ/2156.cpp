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

int main(){
    int h,w,q;
    cin >> h >> w >> q;
    vector <vector<int>> grid (h,vector<int>(w,0));
    vector <vector<bool>> mask (h,vector<bool>(w,false));
    for(int k=0;k<q;k++){
        int type;
        cin >> type;
        if(type==1){
            int x, y, c;
            cin >> x >> y >> c;
            x--,y--;
            for (int i=0;i<2;i++){
                for (int j=0;j<2;j++){
                    int nx=x+i;
                    int ny=y+j;
                    if(!mask[nx][ny]){
                        grid[nx][ny]=c;
                    }
                }
            }
        }else{
            int x,y;
            cin >> x >> y;
            x--,y--;
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    int nx=x+i;
                    int ny=y+j;
                    mask[nx][ny]=true;
                }
            }
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout << grid[i][j] << (j==w-1?"":" ");
        }
        cout << endl;
    }
    return 0;
}