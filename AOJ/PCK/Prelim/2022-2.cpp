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
    int a1,a2,b1,b2;
    cin >> a1 >> a2 >> b1 >> b2;
    float a=a1+(float)a2/10,b=b1+(float)b2/10;
    if(37.5<=a) cout << 2 << endl;
    else if(b<=a&&37.5>a) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}
