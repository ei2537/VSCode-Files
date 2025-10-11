#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
#define ain(j) for(auto& i:j) cin >> i;
using namespace std;
void Yn(bool k,const string& yes="Yes",const string& no="No"){
    cout << (k?yes:no) << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int h,w;
        cin >> h >> w;
        vector <int> row(h);
        int ans=0;
        for(int i=0;i<h;i++){
            string s;
            cin >> s;
            int m=0;
            for(int j=0;j<w;j++){
                if(s[j]=='1'||s[j]=='#'){
                    m|=1<<j;
                    ans++;
                }
                row[i]=m;
            }
        }
        int m=1<<w,Min=-1e9;
        vector <int> pc(m,0);
        for(int i=1;i<m;i++) pc[i]=pc[i&(i-1)]+1;
        vector <int> dp(m,Min),ndp(m,Min);
        for(int k=row[0];true;k=(k-1)&row[0]){
            dp[k]=pc[k];
            if(!k) break;
        }
        for(int i=1;i<h;i++){
            fill(ndp.begin(),ndp.end(),Min);
            for(int j=0;j<m;j++){
                if(dp[j]>Min){
                    for(int k=row[i];true;k=(k-1)&row[i]){
                        int x=j&k;
                        if((x&(x<<1))==0) ndp[k]=max(ndp[k],dp[j]+pc[k]);
                        if(!k) break;
                    }
                }
            }
            dp.swap(ndp);
        }
        cout << ans-*max_element(dp.begin(),dp.end()) << endl;
    }
    return 0;
}