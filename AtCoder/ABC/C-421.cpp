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
    int n;
    string s;
    cin >> n >> s;
    vector<int> posA;
    for(int i=0;i<2*n;i++){
        if(s[i]=='A') posA.push_back(i);
    }
    ll cost1=0;
    for(int i=0;i<n;i++) cost1+=abs(posA[i]-2*i);
    ll cost2=0;
    for(int i=0;i<n;i++) cost2+=abs(posA[i]-(2*i+1));
    cout << min(cost1,cost2) << "\n";
    return 0;
}
