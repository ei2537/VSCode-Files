#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    set<pair<int, int>> seen; 
    int ans=0; 
    for (int i=0;i<M;i++){
        int u,v;
        cin >> u >> v;
        if(u==v){
            ans++;
        }else{
            int a=min(u,v),b=max(u,v);
            if(seen.count({a,b})){
                ans++;
            }else{
                seen.insert({a,b});
            }
        }
    }
    cout << ans << endl;
    return 0;
}
