#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int A,B,N,ans=0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> A >> B;
        if(A-B<0) ans++;
    }
    cout << ans << endl;
    return 0;
}