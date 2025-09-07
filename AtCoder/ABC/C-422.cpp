#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
using namespace std;
void Yn(bool b,const std::string& yes="Yes",const std::string& no="No"){
    std::cout << (b?yes:no) << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;
        ll ans=min({a,c,(a+b+c)/3});
        cout << ans << endl;
    }
    return 0;
}