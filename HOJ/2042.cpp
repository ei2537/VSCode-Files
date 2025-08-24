#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int N,Q;
    cin >> N >> Q;
    vector<int> diff(N+2,0);
    for(int i=0;i<Q;i++){
        int L,R;
        cin >> L >> R;
        diff[L]++;
        diff[R+1]--;
    }
    for(int i=1;i<=N;i++){
        diff[i] += diff[i-1];
        cout << diff[i] << endl;
    }
    return 0;
}
