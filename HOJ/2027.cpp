#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int N,M,g,ans=0;
    cin >> N;
    set <int> G;
    for(int i=0;i<N;i++){
        cin >> M;
        for(int j=0;j<M;j++){
            cin >> g;
            G.insert(g);
        }
    }
    for(int i=0;i<G.size();i++) ans++;
    cout << ans << endl;
    return 0;
}