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
    string s;
    cin >> n >> s;
    for(int i=1;i*2<=n;i++){
        if(n%i!=0) continue;
        int m=n/i;
        bool ok=true;
        for(int j=0;j<n;++j){
            if(s[j]!=s[j%i]){
                ok=false;
                break;
            }
        }
        if(ok){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}
