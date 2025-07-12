#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    int ans=0,N,M;
    cin >> N >> M;
    vector<int> A(N);
    for(auto& i:A){
        cin >> i;
        ans+=i;
    }
    if(M>=ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}