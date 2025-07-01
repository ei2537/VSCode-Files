#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    string S;
    cin >> S;
    string ans = "Hello,World!";
    if(S.find("Hello,World!")==0&&S.size()==ans.size()) cout << "AC" << endl;
    else cout << "WA" << endl;
    return 0;
}