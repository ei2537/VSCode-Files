#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define Imax INT_MAX
#define Imin INT_MIN
#define LLmax LLONG_MAX
#define LLmin LLONG_MIN
using namespace std;

auto Yn = [](bool b) { cout << (b ? "Yes" : "No") << '\n'; };

int main () {
    int n,m;
    cin >> n >> m;
    vector <string> s(n);
    for(int i=0;i<n;i++) cin >> s[i];
    vector <int> score(n,0);
    for(int i=0;i<m;i++){
        int count0=0,count1=0;
        for(int j=0;j<n;j++){
            if(s[j][i]=='0') count0++;
            else count1++;
        }
        if(count0==0||count1==0){
            for(int j=0;j<n;j++) score[j]++;
        }else if(count0<count1){
            for(int j=0;j<n;j++){
                if(s[j][i]=='0') score[j]++;
            }
        }else{
            for(int j=0;j<n;j++){
                if(s[j][i]=='1') score[j]++;
            }
        }
    }
    int s_max=*max_element(score.begin(),score.end());
    vector <int> ans;
    for(int i=0;i<n;i++){
        if(score[i]==s_max) ans.push_back(i+1);
    }
    for(int i=0;i<ans.size();i++){
        if(i>0) cout << " ";
        cout << ans[i];
    }
    cout << endl;
    return 0;
}