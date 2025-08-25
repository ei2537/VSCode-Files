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
    int n,ans=0;
    string s;
    cin >> n >> s;
    for(int i=0;i<n;i++){
        if(i%2==0&&s[i]!='I') ans++;
        else if(i%2==1&&s[i]!='O') ans++;
    }
    cout << ans << endl;
    return 0;
}
