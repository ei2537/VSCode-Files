#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
using namespace std;
void Yn(bool b,const std::string& yes="Yes",const std::string& no="No"){
    std::cout << (b?yes:no) << '\n';
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector <string> S(H);
    for(int i=0;i<H;i++) cin >> S[i];
    int dx[]={-1,1,0,0};
    int dy[]={0,0,-1,1};
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(S[i][j]=='#'){
                int cnt=0;
                for (int d=0;d<4;d++){
                    int ni=i+dx[d],nj=j+dy[d];
                    if(0<=ni&&ni<H&&0<=nj&&nj<W){
                        if(S[ni][nj]=='#')cnt++;
                    }
                }
                if (cnt!=2&&cnt!=4){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}