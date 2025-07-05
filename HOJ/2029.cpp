#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int N,Q,g;
    cin >> N;
    map <int,int> G;
    for(int i=0;i<N;i++){
            cin >> g;
            if(!(G.count (g)))  G.insert ( {g,1} );
            else if(G.count (g)) G[g]++;
        }
    cin >> Q;
        for(int i=0;i<Q;i++){
            int q;
            cin >> q;
            cout << G[q] << endl;
        }
    return 0;
}
