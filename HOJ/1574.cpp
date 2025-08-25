#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
#define efor(i,n) for(int i=0;(n);i++)
using namespace std;
void Yn(bool b, const std::string& yes = "Yes", const std::string& no = "No") {
    std::cout << (b ? yes : no) << '\n';
}

int main () {
    int s,a,b;
    cin >> s >> a >> b;
    int ans=250;
    while(a<s){
        a+=b;
        ans+=100;
    }
    cout << ans << endl;
    return 0;
}
