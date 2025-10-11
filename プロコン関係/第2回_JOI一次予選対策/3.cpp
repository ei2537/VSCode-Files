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
    int n,m;
    cin >> m >> n;
    int t=0;
    bool ans=true;
    string s;
    cin >> s;
    for(int i=0;i<n;i++){
        if(s[i]=='I') t++;
        else t--;
        if(m<t) ans=false;
    }
    Yn(!ans);
    return 0;
}
