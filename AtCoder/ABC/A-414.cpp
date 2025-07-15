#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int ABC(char a,int b){
    bool ans=0;
    if(a=='a'&&b==9) ans=1;
    return (ans);
}
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