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
    vector <int> a(n);
    ain(a);
    int min_age=*min_element(a.begin(),a.end());
    int max_age=*max_element(a.begin(),a.end());
    for(int i=0;i<n;i++) cout << max(a[i]-min_age,max_age-a[i]) << endl;
    return 0;
}
