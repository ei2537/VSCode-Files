#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main(){
    int n,c,w;
    cin >> n >> c >> w;
    if(c*n>=w){
        cout << "Yes" << endl;
        int temp=0,ans=0;
        while(temp<w){
            temp+=c;
            ans++;
        }
        cout << ans << endl;
    }else cout << "No" << endl;
    return 0;
}
