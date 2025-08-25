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
    int n,j=0,o=0,i=0;
    string s;
    cin >> n >> s;
    for(int k=0;k<n;k++){
        if(s[k]=='J') j++;
        else if(s[k]=='O') o++;
        else if(s[k]=='I') i++;
    }
    efor(k,k<j) cout << 'J';
    efor(k,k<o) cout << 'O';
    efor(k,k<i) cout << 'I';
    cout << endl;
    return 0;
}
