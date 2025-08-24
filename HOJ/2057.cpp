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
    int N,S;
    cin >> N >> S;
    vector <int> A(N);
    for (int i=0;i<N;i++) cin >> A[i];
    vector <vector<bool>> dp(N+1,vector<bool>(S+1,false));
    dp[0][0]=true;
    for (int i=0;i<N;i++) {
        for (int j=0;j<=S;j++){
            if(dp[i][j]) {
                dp[i+1][j]=true;
                if(j+A[i]<=S) dp[i+1][j+A[i]]=true;
            }
        }
    }
    if(dp[N][S]) cout << "Win" << endl;
    else cout << "Lose" << endl;
    return 0;
}
