#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int N,M,A,ans=0;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        cin >> A;
        ans+=A;
    }
    if(ans<=M) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}