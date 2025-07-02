#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    string S;
    cin >> S;
    if(S.find("Hello,World!")==0&&S.size()==string("Hello,World!").size()) cout << "AC" << endl;
    else cout << "WA" << endl;
    return 0;
}