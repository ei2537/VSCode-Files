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

int main(){
    int n;
    cin >> n;
    vector <string> s(n);
    for(int i=0;i<n;i++) cin >> s[i];
    int x;
    string y;
    cin >> x >> y;
    Yn(s[x-1]==y);
    return 0;
}