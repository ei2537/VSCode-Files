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
    int n,i=0;
    string s;
    int step=0;
    cin >> n >> s;
    for(i=0;i<n;i++){
        if(step==0&&s[i]=='I') step++;
        else if(step==1&&s[i]=='O') step++;
        else if(step==2&&s[i]=='I') step++;
    }
    Yn(step==3);
    return 0;
}
