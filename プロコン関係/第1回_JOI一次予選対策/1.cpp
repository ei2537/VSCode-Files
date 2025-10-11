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
    int a,b;
    cin >> a >> b;
    int ans=a;
    for(int i=0;i<b-1;i++){
        ans*=a;
    }
    cout << ans << endl;
    return 0;
}
