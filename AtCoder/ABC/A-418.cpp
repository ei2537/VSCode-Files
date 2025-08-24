#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#define Imax INT_MAX
#define Imin INT_MIN
#define LLmax LLONG_MAX
#define LLmin LLONG_MIN
using namespace std;

auto Yn=[](bool b){cout << (b?"Yes":"No") << '\n';};

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s[s.size()-3]=='t'&&s[s.size()-2]=='e'&&s[s.size()-1]=='a') cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}