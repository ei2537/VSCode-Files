#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int csum=0,asum=0;
    vector <int> c(n),a(n);
    for(int i=0;i<n;i++){
        cin >> c[i] >> a[i];
        csum+=c[i];
        asum+=a[i];
    }
    sort(c.begin(),c.end());
    sort(a.begin(),a.end());
    int Max=0;
    for(int i=0;i<m;i++) Max+=c[i];
    if(csum-asum>=Max) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
