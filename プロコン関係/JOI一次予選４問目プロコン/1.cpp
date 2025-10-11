#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMAX INT_MAX
#define IMIN INT_MIN
#define LLMAX LLONG_MAX
#define LLMIN LLONG_MIN
#define ain(a) for(auto& i:a) cin >> i;
using namespace std;
void Yn(bool b,const string& yes="Yes",const string& no="No"){
    cout << (b?yes:no) << endl;
}

int main() {
    int n;
    string s;
    cin >> n >> s;
    bool a=0;
    for(int i=1;i<=n/2;i++){
        if(n%i!=0) continue;
        string t=s.substr(0,i);
        string temp = "";
        for(int j=0;j<n/i;j++) temp+=t;
        if(temp==s){
            a=true;
            break;
        }
    }
    Yn(a);
    return 0;
}
