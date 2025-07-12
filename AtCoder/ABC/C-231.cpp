#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    int N,Q;
    cin >> N >> Q;
    vector<int> A(N);
    for(auto& i:A) cin >> i;
    sort(A.begin(),A.end());
    for(int j=0;j<Q;j++){
        int x;
        cin >> x;
        auto ans=lower_bound(A.begin(),A.end(),x);
        cout << A.end()-ans << endl;
    }
    return 0;
}