#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

auto Yn = [](bool b) { cout << (b ? "Yes" : "No") << '\n'; };

int main () {
    int n=5;
    vector <int> a(n),b(n),ans(n);
    for(int i=1;i<n;i++) cin >> a[i];
    for(int i=2;i<n;i++) cin >> b[i];
    ans[0]=0; ans[1]=a[1];
    for(int i=2;i<n;i++){
        ans[i]=min((ans[i-1]+a[i]),(ans[i-2]+b[i]));
    }
    cout << ans[4] << endl;
    return 0;
}