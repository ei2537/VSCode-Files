#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define IMX INT_MAX
#define IMN INT_MIN
#define LLMX LLONG_MAX
#define LLMN LLONG_MIN
using namespace std;

auto Yn = [](bool b) { cout << (b ? "Yes" : "No") << '\n'; };

int main () {
    int n,m;
    cin >> n >> m;
    vector <int> a(n),b(m);
    for(auto& i:a) cin >> i;
    for(auto& i:b) cin >> i;
    for(int i=0;i<m;i++){
        for(int j=0;j<a.size();j++){
            if(a[j]==b[i]){
                a.erase(a.begin()+j);
                break;
            }
        }
    }
    for(int i=0;i<a.size();i++){
        if(i>0) cout << " ";
        cout << a[i];
    }
    cout << endl;
    return 0;
}
