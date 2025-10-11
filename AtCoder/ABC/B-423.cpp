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

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    ain(a);
    int r=0;
    while(r<n&&a[r]==0) r++;
    int l=n;
    while(l>0&&a[l-1]==0) l--;
    cout << max(0,l-r-1) << endl;
    return 0;
}