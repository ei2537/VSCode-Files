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
    int a,b;
    cin >> a >> b;
    if(a+b<=12) cout << a+b << endl;
    else{
        int ans=a+b;
        while(ans>12){
            ans-=12;
        }
        cout << ans << endl;
    }
    return 0;
}
