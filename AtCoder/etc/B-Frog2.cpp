#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMX INT_MAX
#define IMN INT_MIN
#define LLMX LLONG_MAX
#define LLMN LLONG_MIN
using namespace std;

auto Yn = [](bool b) { cout << (b ? "Yes" : "No") << '\n'; };

int main () {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for(auto& i:h) cin >> i;
    vector<int> dp(n,IMX);
    dp[0] = 0;
    for (int i=1;i<n;i++) {
        for (int j=1;j<=k;j++) {
            if (i-j>=0) dp[i]=min(dp[i],dp[i-j]+abs(h[i]-h[i-j]));
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}
