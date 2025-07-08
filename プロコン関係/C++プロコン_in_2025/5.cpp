#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    int ans=0,N,X;
    cin >> N >> X;
    vector<int> V(N);
    for(int i=0;i<N;i++) cin >> V[i];
    sort(V.begin(),V.end());
    for(int i=0;i<N;i++){
        if(X>=V[i]){
            ans++;
            X-=V[i];
        }
    }
    cout << ans << endl;
    return 0;
}
