#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define Imax INT_MAX
#define Imin INT_MIN
#define LLmax LLONG_MAX
#define LLmin LLONG_MIN
using namespace std;

auto Yn = [](bool b) { cout << (b ? "Yes" : "No") << '\n'; };

int main () {
    int n;
    cin >> n;
    vector <int> h(n);
    for(auto &i:h) cin >> i;
    vector <int> dp(n,0);
    dp[0] = 0;
    for(int i=1;i<n;i++) {
        int cost1=dp[i-1]+abs(h[i]-h[i-1]);
        int cost2;
    if(i>1) cost2=dp[i-2]+abs(h[i]-h[i-2]);
    else cost2=INT_MAX;
    dp[i] = min(cost1, cost2);
    }
    cout << dp[n-1] << endl;
    return 0;
}