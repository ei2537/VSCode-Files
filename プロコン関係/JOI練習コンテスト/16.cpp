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
    int n;
    string s;
    cin >> n >> s;
    for(int i=0;i<n;i++){
        if(s[i]=='j'&&s[i+1]=='o'&&s[i+2]=='i'){
            cout << "JOI";
            i+=2;
        }
        else cout << s[i];
    }
    cout << endl;
    return 0;
}
