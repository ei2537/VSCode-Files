#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> x(n),y(n);
    for(int i=0;i<n;i++) cin >> x[i] >> y[i];
    int ans=0;
    vector <int> kou;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(i!=j){
                if(x[i]-x[j]>=y[i]-y[j]) count++;
            }
        }
        if(count==n-1){
            ans++;
            kou.push_back(i+1);
        }
    }
    cout << ans << endl;
    for(auto i:kou) cout << i << endl;
    return 0;
}