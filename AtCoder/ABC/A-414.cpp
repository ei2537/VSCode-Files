#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int ans=0,N,L,R,x,y;
    cin >> N >> L >> R;
    for(int i=0;i<N;i++){
        cin >> x >>y;
        if(L>=x&&R<=y) ans++;
    }
    cout << ans << endl;
    return 0;
}