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
    int q;
    cin >> q;
    multiset <int> ans;
    for(int i=0;i<q;i++){
        int a;
        cin >> a;
        if(a==1){
            int x;
            cin >> x;
            ans.insert(x);
        }else if(a==2){
            cout << *ans.begin() << endl;
            ans.erase(ans.begin());
        }
    }
    return 0;
}