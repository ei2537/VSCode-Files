#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define Imax INT_MAX
#define Imin INT_MIN
#define LLmax LLONG_MAX
#define LLmin LLONG_MIN
using namespace std;

auto Yn=[](bool b){cout << (b?"Yes":"No") << '\n';};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;
    cin >> N >> Q;
    vector<ll> A(N);
    for(int i=0;i<N;i++) cin >> A[i];
    sort(A.begin(),A.end());
    vector<ll> acc(N+1,0);
    for(int i=0;i<N;i++) acc[i+1]=acc[i]+A[i];
    ll S=acc[N];
    for(int qi=0;qi<Q;qi++) {
        ll B;
        cin >> B;
        ll left=B,right=S+1;
        while(left<right){
            ll mid=(left+right)/2;
            ll border=B-1;
            auto it=lower_bound(A.begin(),A.end(),border);
            ll idx=it-A.begin();
            ll sum=acc[idx]+(N-idx)*border;
            if(mid-sum>0) right=mid;
            else left=mid+1;
        }
        if(left>S) cout<< -1 << "\n";
        else cout << left << "\n";
    }
    return 0;
}