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
    string s;
    cin >> s;
    int b=0;
    for(int i=0;i<n;i++){
        if(s[i]=='B') b++;
    }
    cout << b << endl;
    return 0;
}
