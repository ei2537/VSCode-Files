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
    cin >> n >> m;
    int csum=0,asum=0;
    vector <int> c(n),a(n);
    for(int i=0;i<n;i++){
        cin >> c[i] >> a[i];
        csum+=c[i];
        asum+=a[i];
    }
    sort(c.begin(),c.end());
    sort(a.begin(),a.end());
    int Max=0;
    for(int i=0;i<m;i++) Max+=c[i];
    Yn(csum-asum>=Max);
    return 0;
}
