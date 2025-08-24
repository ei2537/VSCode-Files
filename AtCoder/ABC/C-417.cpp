#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define Imax INT_MAX
#define Imin INT_MIN
#define LLmax LLONG_MAX
#define LLmin LLONG_MIN
using namespace std;

auto Yn = [](bool b) { cout << (b ? "Yes" : "No") << '\n'; };

int main () {
    int n;
    cin >> n;
    vector <int> a(n);
    for(auto& i:a) cin >> i;
    map <int,long long> mp;
    for(int i=0;i<n;i++) mp[i+1+a[i]]++;
    long long ans=0;
    for(int i=0;i<n;i++){
        int key=(i+1)-a[i];
        if(mp.count(key)) ans+=mp[key];
    }
    cout << ans << endl;
    return 0;
}