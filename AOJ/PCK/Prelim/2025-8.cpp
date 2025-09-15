#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main() {
    int h,w;
    cin >> h >> w;
    vector <vector<int>> a(h,vector<int>(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            int x;
            cin >> x;
            a[i][j]=x&1;
        }
    }
    vector <vector<int>> s(h+1,vector<int>(w+1,0));
    long long ans=0;
    for(int i=h-1;i>=0;i--){
        for(int j=w-1;j>=0;j--){
            int masu=s[i+1][j]^s[i][j+1]^s[i+1][j+1];
            int temp=a[i][j]^masu;
            if(temp==0){
                ans++;
                s[i][j]=masu^1;
            }else{
                s[i][j]=masu;
            }
        }
    }
    cout << ans << endl;
    return 0;
}