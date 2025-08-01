#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define Imax INT_MAX
#define Imin INT_MIN
#define LLmax LLONG_MAX
#define LLmin LLONG_MIN
using namespace std;

auto Yn = [](bool b) { cout << (b ? "Yes" : "No") << '\n'; };

int main(){
    int n,k,ans=0;
    cin >> n >> k;
    for(int a=1;a<=n;a++){
        for(int b=1;b<=n;b++){
            int c=k-a-b;
            if(1<=c&&c<=n) ans++;
        }
    }
    cout << ans << endl;
}
