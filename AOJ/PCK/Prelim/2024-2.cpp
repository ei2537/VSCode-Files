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

int main() {
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
