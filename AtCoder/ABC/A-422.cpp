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

int main() {
    string s;
    cin >> s;
    int i, j;
    char dash;
    stringstream ss(s);
    ss >> i >> dash >> j;
    if(j<8) cout << i << "-" << j+1 << endl;
    else cout << i+1 << "-1" << endl;
    return 0;
}