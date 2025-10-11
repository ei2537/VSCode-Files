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
    vector <int> a(n);
    ain(a);
    int m;
    cin >> m;
    vector <int> b(m);
    ain(b);
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=a[i];
        for(int j=0;j<m;j++){
            if(b[j]==ans){
                ans=0;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
