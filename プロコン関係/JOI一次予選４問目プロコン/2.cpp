#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
#define ain(a) for(auto& i:a) cin >> i;
using namespace std;
void Yn(bool b,const string& yes="Yes",const string& no="No"){
    cout << (b?yes:no) << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    ain(a);
    for (int i=0;i<n;i++){
        int ans=1;
        for (int j=0;j<n;j++){
            if(a[j]<a[i]) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
